//Q-5> Check if the given array is almost sorted. (elements are at-most one position away)
#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {2,1,3,4,5,6};
    int n=6;
    bool flag=false;//unsorted
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] <= arr[j + 1])
            {
                flag=true;//sorted
            }
            else{
                flag=false;
                break;
            }
        }
    if(flag==true) cout<<"sorted";
    else cout<<"not sorted";
    
}