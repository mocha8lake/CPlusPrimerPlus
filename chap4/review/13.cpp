#include <iostream>
#include <vector>
using namespace std;

void bynew(void);
void byvector(void);

int main()
{
	bynew();
	byvector();

	return 0;
}

void bynew()
{
	unsigned int size;
	cout << "Please enter a positive integer: " << endl;
	cin >> size;
	int *p = new int [size];
	cout << "p at " << p << endl;
}

void byvector()
{
	unsigned int size;
	cout << "Please enter a positive integer: " << endl;
	cin >> size;
	vector<int> v(size);
	cout << "v at " << &v << ", v[0] at " << &v[0] << endl;
}
