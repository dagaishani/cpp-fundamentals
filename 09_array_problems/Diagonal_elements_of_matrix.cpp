/*Take a 3×3 matrix and print its main diagonal elements.*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    int arr[3][3];
    cout << "Enter Elements of a matrix: ";
    for(r=0; r<3; r++)
    {
        for(c=0; c<3; c++)
        {
            cin >> arr[r][c];
        }
    }
    cout <<"\n"<< "Matrix: " <<"\n";
    for(r=0; r<3; r++)
    {
        for(c=0; c<3; c++)
        {
            cout << arr[r][c]<< "\t";
        }
        cout << "\n";
    }
    cout << "\n" << "Left Diagonal ELements: ";
    for (r=0; r<3; r++)
    {
        for (c=0; c<3; c++)
        {
            if (r==c)
            {
                cout << arr[r][c];
            }
        }
    }

    cout << "\n" << "Right Diagonal Elements: ";
    for(r=0; r<3; r++)
    {
        for(c=0; c<3; c++)
        {
            if ( r + c == 3-1)
            cout << arr[r][c];
        }
    }
    return 0;
}