// Take a 3×3 matrix and print the sum of each row.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3], n; 
    int r,c;
    int sum1=0, sum2=0, sum3=0;
    cout << "Enter elements of the matrix: ";
    for (r=0; r<3; r++)
    {
        for (c=0; c<3; c++)
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

    for (r = 0; r < 3; r++)
{
    int sum = 0;   // reset for every row
    for (c = 0; c < 3; c++)
    {
        sum = sum + arr[r][c];
    }
    cout << "Sum of row " << r+1 << " = " << sum << endl;
}

    return 0;
}

