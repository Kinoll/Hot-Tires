#include "csv.h"

csv::csv(void)
	{
	}
vector<string> csv::split( string text, string delimiter )
{
	unsigned int p = 0;
	vector<string> v;

    while( 1 )
	{
        p = text.find( delimiter );
        if( p != text.npos )
        {
			v.push_back(text.substr( 0, p ) );
            text.erase( 0, p + 1 );
        }
        else
        {
            v.push_back( text );
			break;
        }
    }
		return v;
}
vector< vector<string> > csv::read(string filename)
{
	vector< vector<string> > records;
	ifstream filebase(filename);
	if (filebase.is_open())
	{
		string record;

		while(getline(filebase, record))
		{
			vector<string> v;
			v = split(record, ",");
			records.push_back(v);
		}
		filebase.close();
	}
	return records;
}
bool csv::fexists(const char *filename)
{
  ifstream ifile(filename);
  return ifile;
}