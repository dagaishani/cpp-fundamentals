/*Take the size of an array from the user.
Then take the array elements and print the entire array.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int i;
    cout << "Enter the size of an array = ";
    cin >> n;
    if (n>1000 || n<=0){
    cout << "\n" << "Please Enter a smaller size between 1 to 1000";
    return 0;
    }
    
    cout << "\n";
    int arr[1000];
    cout << "Enter the elements of the array: ";
    for (i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array: ";
    for (i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}