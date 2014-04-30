#ifndef CSV_H
#define CSV_H
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <stdlib.h>
using namespace std;
class csv
{
public:
	csv(void);
	string file;
	vector<string> split(string text, string delimiter);
	vector< vector<string> > read(string filename);
	bool fexists(const char *filename);
};
#endif // CSV_H