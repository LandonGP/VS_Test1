
//Landon Petzoldt

#include <iostream>
#include <vector>
#include <conio.h>

using namespace std;

int main()
{
	vector<int> v1{ 1, 2, 3, 4 };

	for (int i : v1)
	{
		cout << i << " ";
	}

	vector<int> v2{ v1 };
	for (int i : v2)
		cout << i;

	doSomething();

	_getch();
	return 0;
}


void doSomething()
{
	cout << "Hello World!" << endl;
}
