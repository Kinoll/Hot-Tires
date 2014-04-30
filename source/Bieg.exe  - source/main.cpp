#include <SFML/Graphics.hpp>
#include <cmath>
#include <Windows.h>
#include <iostream>
#include <csv.h>
using namespace std;


int main()
{
	ShowWindow(GetConsoleWindow(), SW_HIDE);
	double currentTime, lastTime, timePassed;
	unsigned int i = 0;
	lastTime = 0; 
	unsigned int itemsNum;
	csv csv;
	vector< vector <string> > records1, records2, records3, records4, settings;
	vector< vector< vector <string> > > positions;
	if (csv.fexists("heat/pos1.csv")) {records1 = csv.read("heat/pos1.csv"); positions.push_back(records1);}
	if (csv.fexists("heat/pos2.csv")) {records2 = csv.read("heat/pos2.csv"); positions.push_back(records2);}
	if (csv.fexists("heat/pos3.csv")) {records3 = csv.read("heat/pos3.csv"); positions.push_back(records3);}
	if (csv.fexists("heat/pos4.csv")) {records4 = csv.read("heat/pos4.csv"); positions.push_back(records4);}
	settings = csv.read("heat/settings.csv");
	
	unsigned int a = positions[0].size();
	unsigned int b = positions.size();
	for (int i = 0; i < b; i++)
	{
		if (positions[i].size() > a) {a = positions[0].size();}
	}

    sf::RenderWindow oknoAplikacji( sf::VideoMode( 800, 600, 32 ), "Bieg" );
	
	sf::Texture bgi;

	bgi.loadFromFile("tracks/"+settings[1][0]+"/track.png");

	sf::Sprite bg;

	bg.setTexture(bgi);
	bg.setPosition(0, 0);
   
    vector <sf::Texture> textures(4);
	if (0<b) textures[0].loadFromFile( "heat/"+settings[0][0]+".png" );
	if (1<b) textures[1].loadFromFile( "heat/"+settings[0][1]+".png" );
	if (2<b) textures[2].loadFromFile( "heat/"+settings[0][2]+".png" );
	if (3<b) textures[3].loadFromFile( "heat/"+settings[0][3]+".png" );

	sf::Sprite * riders = new sf::Sprite[b];
	//vector <sf::Sprite> riders(b);

	for (int y = 0; y<b; y++)
	{
		riders[y].setTexture( textures[y] );
	}
	oknoAplikacji.clear( sf::Color::Black );

    while( oknoAplikacji.isOpen() )
    {
		currentTime = timeGetTime();
		timePassed = currentTime - lastTime;
		if ((timePassed >= 30) & (a>i))
		{
			for (int x=0; x<b; x++)
			{
				cout << x;
				oknoAplikacji.clear( sf::Color::Black );
				riders[x].setPosition(atof(positions[x][i][0].c_str()), atof(positions[x][i][1].c_str()));
				oknoAplikacji.draw(riders[x]);
			}
			oknoAplikacji.draw( bg );
			if(b > 0) oknoAplikacji.draw( riders[0] );
			if(b > 1) oknoAplikacji.draw( riders[1] );
			if(b > 2) oknoAplikacji.draw( riders[2] );
			if(b > 3) oknoAplikacji.draw( riders[3] );
			oknoAplikacji.display();
			i++;
			lastTime = currentTime;
		}

		sf::Event zdarzenie;
        while( oknoAplikacji.pollEvent( zdarzenie ) )
        {

            if( zdarzenie.type == sf::Event::Closed )
                 oknoAplikacji.close();
           
            if( zdarzenie.type == sf::Event::KeyPressed && zdarzenie.key.code == sf::Keyboard::Escape )
                 oknoAplikacji.close();
           
            if( zdarzenie.type == sf::Event::MouseButtonPressed && zdarzenie.mouseButton.button == sf::Mouse::Middle )
                 oknoAplikacji.close();
           
        }

    }
    return 0;
}