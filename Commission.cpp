#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main()
{
    string name;
    string lastname;
    float salary,sale,commission,revenue;

    /*input*/
    cout << "Enter your name : ";
    cin >> name;
    cout << "Enter your lastname : ";
    cin >> lastname;
    cout << "Enter Salary : ";
    cin >> salary;
    cout << "Enter Sale : ";
    cin >> sale;
    cout << "Enter Commission persen : ";
    cin >> commission;
    cout << endl;
    
    /*output*/
    cout << "Your Name+lastnme = " << name << " " << lastname << endl;
    revenue = (sale * (commission/100)+salary);
    cout << "Total Revenue = " << revenue << endl;

    return 0;
}