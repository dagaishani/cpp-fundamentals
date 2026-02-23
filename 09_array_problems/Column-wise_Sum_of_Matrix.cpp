// Take a 3×3 matrix and print the sum of each column.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3],i,r,c;
    int sum=0;
    cout << "Enter the elements of the matrix: ";
    for (r=0; r<3; r++)
    {
        for(c=0; c<3; c++)
    {
        cin >> arr[r][c];
    }
    }
    cout << "\n" << "The matrix:" << "\n";
    for(r=0; r<3; r++)
    {
        for (c=0; c<3; c++)
        {
            cout << arr[r][c] << "\t";
        }
        cout << "\n";
    }

    for (c=0; c<3; c++)
    {
        sum=0;
        for (r=0; r<3; r++)
        {
            sum= sum + arr[r][c];
        }
        cout << "Sum of coloumn " << c+1 <<": " << sum << "\n";
        
    }
    return 0;
}