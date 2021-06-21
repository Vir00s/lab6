#include <iostream>

using namespace std;

void zmiana(int * wsk)
{

}

int main()
{
	int** tabb = new int* [5];

	for (int i = 0; i < 5; i++)
		int* tab[i] = new int[i];



	for (int i = 0; i < 5; i++)
		delete[] tab[i];
	delete[] tabb;

	return 0;
}