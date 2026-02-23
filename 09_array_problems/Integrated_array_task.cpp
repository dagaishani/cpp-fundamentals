/*In one program:

Take array input
Print the original array
Print the squared array.*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter size of the array: ";
    cin >> n;
    if (n>1000 || n<=0)
    {
        cout << "Please enter smaller size between 1 to 1000";
        return 0;
    }
    int arr[1000];
    cout << "Enter the array: ";
    for (i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout << "Entered Array: ";
    for (i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n" << "Square of Array: ";
    for (i=0; i<n; i++)
    {
        cout <<  arr[i]*arr[i] << " ";
    }
    return 0;
}