#include <iostream>
using namespace std;
void minimal_maximal(int a[], int strSize, int &minimal, int &maximal)
{
    for (int i = 0; i < strSize; i++)
    {
        if(minimal > a[i])
        {
            maximal = minimal;
            minimal = a[i];
        }
    }
}

int main()
{
    int strSize;
    cout << "Enter the string size: ";
    cin >> strSize;

    int arr[strSize], i;
    int minimal = arr[0];
    int maximal = arr[0];

    cout << "\nEnter " << strSize << " elements:";
    for (i = 0; i < strSize; i++)
    {
        cin >> arr[i];
    }
    minimal_maximal(arr, strSize, minimal, maximal);
    cout << "\nThe smallest element in the array is: " << minimal ;
    cout << "\nThe biggest element in the array is: " << maximal ;

    return 0;
}
