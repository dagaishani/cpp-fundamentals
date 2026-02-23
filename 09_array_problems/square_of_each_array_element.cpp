/*Take the size and elements of an array from the user.
Print the square of each element.*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array= ";
    cin >> n;
    if (n>1000 || n<=0)
    {
        cout << "Please enter the size smaller between 1 to 1000";
        return 0;
    }
    cout << "\n";
    int arr[1000];
    int i;
    cout << "Enter the elements of the array: ";
    for (i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout << "Square of the array: ";
    for (i=0; i<n; i++)
    {
        cout << arr[i]*arr[i] << "  ";
    }
    return 0;

}