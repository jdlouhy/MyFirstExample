#include <iostream>

using std::cin;
using std::cout;
using std::endl;
int main()
{
	cout<<      "Hi, please enter two numbers: "     <<        endl;
	int intone, inttwo;
	cin >> intone;
	cin >> inttwo;
	//should be error not checking to divide by 0.
	return intone/0;
}
