// Q4->Sort the array in descending order using Bubble Sort.
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    bool flag = false;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = true; // swaping is done
            }
        }
        if (flag == false)
            break; // false means swaping didn't happened
        // cheaking swaping is done or not
    }
    cout << endl;
    cout<<"array is sorted in desending order is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}