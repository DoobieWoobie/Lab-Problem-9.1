#include <iostream>
using namespace std;
//stdhg
int main()
{

	srand(time(0));
	int randInt[10];
	for (int i = 0; i < 10; i++)
	{
		randInt[i] = (rand() % 9000) + 1000;
		cout << randInt[i] << "	  ";
	} 
	cout << " " << endl;
	for (int i = 0; i < 10; i = i + 2)
	{
		cout << randInt[i] << "	  ";
	}
	cout << " " << endl;
	for (int i = 0; i < 10; i++)
	{
		int p = randInt[i];
		if (randInt[i] % 2 == 0)
		{
			cout << randInt[i] << "	  ";
		}
	}
	cout << " " << endl;
	for (int i = 9; i >= 0; i--)
	{
		cout << randInt[i] << "	  ";
	}
	cout << " " << endl;
	for (int i = 0; i <10; i = i + 9)
	{
		cout << randInt[i] << "	  ";
	}
}
