#include <iostream>
using namespace std;

int& arr_reference(int* arr,int arrSize)
{
	cout << "Enter number (by index) which you want to increment by 1:" << endl;
	int a = 0;
	cin >> a;
	if (a <= arrSize)
		return arr[a];
	else
	{
		return arr[0];
	}
}

int main()
{
	int arrSize = 0;
	cout << "Enter array size: " << endl;
	cin >> arrSize;

	int* arr = new int[arrSize];
	cout << "\nEnter array elements." << endl;
	for (int i = 0; i < arrSize; i++)
	{
		cin >> arr[i];
	}
	cout << endl;

	int& indx = arr_reference(arr, arrSize);
	cout << "The number which is incremented is: " << indx << endl;
	indx++;
	for (int i = 0; i < arrSize; i++)
	{
		cout << arr[i] << "|";
	}
}
