#include <iostream>

using namespace std;

const int SIZE = 6;

int main()
{
	double sales[SIZE];

	cout << "Enter the sales volume for each of the six days " << endl;

	for (size_t i = 0; i < SIZE; i++)
	{
		cin >> sales[i];
	}

	double total = 0;

	for (size_t i = 0; i < SIZE; i++)
	{
		total += sales[i];
	}

	double average = total / SIZE;

	cout << "Average volume: " << average << endl;

	system("pause");
	return 0;
}