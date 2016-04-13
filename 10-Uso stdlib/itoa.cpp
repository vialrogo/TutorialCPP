#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	int num = 65;
	char cha = 'a';

	string s;
	s+="Hola";
	s+=cha;
	s+=num;

	cout<<s<<endl<<endl;

	string s2;
        s2+="Hola";
        s2+=cha;
	
	ostringstream oss;
    	oss << num;
    	s2 += oss.str();

	cout<<s2<<endl;
}
