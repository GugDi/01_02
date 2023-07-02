#include <iostream>
class Road {
public:
	double length;
	int width;
};

int main() {
	using namespace std;
	Road road;
	cout << "\nBefore access: \n";
	road.length = 0;
	road.width = 0;
	cout << "Length: " << road.length << endl;
	cout << "Width: " << road.width << endl;

	cout << "Enter Length: " << endl;
	cin >> road.length;
	cout << "Enter Width: " << endl;
	cin >> road.width;

	cout << "\nAfter access: \n";
	cout << "Length: " << road.length << endl;
	cout << "Width: " << road.width << endl;
	return 0;
}
