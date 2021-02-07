#include <iostream>
using namespace std;

int main()
{
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];
	
	cout << "enter your name:\n";
	cin.getline(name, ArSize);
	cout << "enter your favorite dessert:\n";
	cin.getline(dessert, ArSize);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";

	return 0;
}
