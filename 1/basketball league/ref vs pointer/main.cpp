#include <iostream>
using namespace std;

void foo(int x, int* y, int& z)
{
	cout << x << " " << &x << endl;
	cout << y << " " << &y << " " << *y << endl;
	cout << z << " " << &z << endl;

	x = 15;
	z = 30;
}

int main()
{
	int a = 8;

	cout << a << " " << &a << endl;

	foo(a, &a, a);
	//foo(a, NULL, NULL);
	cout << a << " " << &a << endl;
}