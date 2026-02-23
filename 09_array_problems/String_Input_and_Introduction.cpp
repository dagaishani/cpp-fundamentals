/*Take input from the user:

Name
Year of study
Print a sentence in this format:
“My name is ___ and I am currently a ___ year student.”*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name, year;
    cout<<"Enter Name: ";
    getline (cin, name);
    cout<< "Enter year: ";
    getline (cin, year);
    cout << "\n" << "My name is " << name << " and I am currently a "<< year << " year student.";
    return 0;
}