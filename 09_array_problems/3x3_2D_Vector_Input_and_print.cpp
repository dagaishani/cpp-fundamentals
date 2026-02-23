/*Take 9 elements from the user for a 3×3 matrix and print it in matrix format.*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c;
    int arr[3][3];
    cout << "Enter the 3x3 matrix: ";
    for(r=0; r<3; r++)
    {
        for(c=0; c<3; c++)
        {
            cin >> arr[r][c];
        }
    }
    cout<< "\n" << "Matrix: " << "\n";
    for(r=0; r<3; r++)
    {
        for(c=0; c<3; c++)
        {
            cout << arr[r][c]<< "\t";
        }
        cout << "\n";
    }
    return 0;
}