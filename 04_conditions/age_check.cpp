// ask for age and display if an adult or no
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cout << "Enter Age: ";
    cin >> age;
    if (age >= 18)
    {
        cout << "You're an adult";
    }
    else 
    {
        cout << "You're not an adult";
    }
    return 0;
}