//USING PARAMETERISED RETURN FUNCTION
#include <bits/stdc++.h>
using namespace std;
int add(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    int num1, num2;
    cout << "Enter Num1 and Num2= ";

    cin >> num1 >> num2;
    cout << "Sum = " << add(num1, num2);
    return 0;
}