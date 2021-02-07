#include <iostream>
using namespace std;

int main()
{
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];
	
	cout << "enter your name:\n";
	cin >> name;
	cout << "enter your favorite dessert:\n";
	cin >> dessert;
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";

	return 0;
}
