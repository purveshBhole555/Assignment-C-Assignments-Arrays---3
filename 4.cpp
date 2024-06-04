#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 0, 2, 0, 2, 0, 4, 7};
    int n = 8, j = 0;
 


// {1, 0, 2, 0, 2, 0, 4, 7};
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            // swap(A[j], A[i]);
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            j++;
        }
    }

    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}