#include <iostream>
using namespace std;

int main()
{

	int a = 0;
	int c = 1;
	const int &b = a;

	cout << "b: " << b;
	cout << "a: " << a;
	a = 2;

	cout << "b: " << b;

	return 0;
}