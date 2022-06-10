#include <iostream>
#include <array>
#include <ctime>
using namespace std;

void create(array<int, 100>& arr, int n)
{
	for (int i = 0; i < n; i++)
		arr[i] = rand() % 100;
}

void print(array<int, 100> arr, int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

double sum(array<int, 100> arr, int n)
{
	double summ = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] % 2 != 0)
		{
			summ += i;
		}
	return summ;
}

int main()
{
	srand((unsigned int)time(NULL));
	int n;
	cout << "n = ? "; cin >> n;
	array<int, 100> arr = { 0 };
	create(arr, n);
	print(arr, n);
	cout << "Sum = " << sum(arr, n) << endl;
	return 0;
}