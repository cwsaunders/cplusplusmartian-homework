#include <iostream>
#include "Martian.h"
#include <string>
using namespace std;

string Martian::lines[6];
//create a 'get'function -- get number of martians (mimick after draw)
//call 'get' function in case 4 right after martian::draw()
Martian::Martian(string name)
{
	this->name = name;
	
}

void Martian::add()
{
	lines[0] = lines[0] + "     " + "  o  o  ";
	lines[1] = lines[1] + "     " + "  |__|  ";
	lines[2] = lines[2] + "     " + " [ @@ ] ";
	lines[3] = lines[3] + "     " + "/|____|\\";
	lines[4] = lines[4] + "     " + "  d  b  ";
	lines[5] = lines[5] + "       " + name;
}
void Martian::draw()
{
	for (string line : lines)
		cout << line << endl;
}

const int Martian::getMartians()
{
	return numberOfMartians;
}