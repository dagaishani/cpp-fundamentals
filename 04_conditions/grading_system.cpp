// take input of marks and display grades
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int marks;
    cout << "Enter Marks: ";
    cin >> marks;
    if (marks>=80)
    {
        cout << "Grade A";
    }
    else if (marks>=60 && marks<=79)
    {
        cout << "Grade B";
    }
    else if (marks>=50 && marks<=59)
    {
        cout << "Grade C";
    }
    else if (marks>=25 && marks<= 49)
    {
        cout << "Grade D";
    }
    else 
    {
        cout << "Grade E";
    }
    return 0;
}