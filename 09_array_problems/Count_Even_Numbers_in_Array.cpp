// Take an array as input and count how many elements are even.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[1000], n;
    cout << "Enter size of the array smaller than 1000: ";
    cin >> n;
    if(n>1000|| n<0)
    {
        cout << "Enter valid size.";
        return 0;
    }
    cout<<"\n"<<"Enter Elements of the array: ";
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout << "Number of even elements= ";
    int even = 0;
    for (int i=0; i<n; i++)
    {
        if(arr[i]% 2 == 0)
        {
            even = even+1;
        }
    }
    cout << even;
    return 0;
}