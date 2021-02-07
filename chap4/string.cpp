#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	const int Size = 15;
	char name1[Size];
	char name2[Size] = "C++owboy";
	cout << name2 << endl;
	cin >> name1;
	cout << name1 << endl;
	cout << strlen(name1) << endl;
	cout << sizeof(name1) << endl;
	name2[3] = '\0';
	cout << name2 << endl;	
	
	return 0;
}
