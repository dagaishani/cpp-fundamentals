/*Take an array as input and print the largest element.*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[1000]; 
    int n,i;
    cout<< "Enter size of the array smaller than 1000: ";
    cin >> n;
    if (n>1000 || n<0)
    {
        cout << "Enter valid size of the array.";
        return 0;
    }
    cout << "Enter the elements of the array: ";
    for (i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int x=0;
    for (i=0; i<n; i++)
    {
        if(arr[i]>x)
        {
            x=arr[i];
        }
    }
    cout << "Largest Element= " << x;
    return 0;
}