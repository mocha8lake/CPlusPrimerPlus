#include <iostream>
using namespace std;

class Box
{
	public:
		Box() {
			cout << "Box()" << endl;
		}
		~Box() {
			cout << "~Box()" << endl;
		}
};

int main()
{
	Box *myBoxArray = new Box [4];
	
	delete [] myBoxArray;
	return 0;
}
