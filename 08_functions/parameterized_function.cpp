// USING A PARAMETERISED VOID FUNCTION 
#include <bits/stdc++.h>
using namespace std;
void printname(string str)
{
    cout << "your name is " << str <<".";
}
int main()
{
    string str;
    cout<< "Enter Name: ";
    cin >> str;
    printname(str);
    return 0;
}