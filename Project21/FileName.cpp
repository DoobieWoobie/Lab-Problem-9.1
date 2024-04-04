#include <iostream>
using namespace std;

int main()
{

	srand(time(0));
	int randInt[10];
	for (int i = 0; i < 10; i++)
	{
		randInt[i] = rand() % 9999;
		cout << randInt[i] << "	  ";
	}
}
