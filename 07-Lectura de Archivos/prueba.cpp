#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream infile("entrada.txt");

	string line;

	while(getline(infile, line))
	{
		cout << line << endl;
	}

	return 0;
}