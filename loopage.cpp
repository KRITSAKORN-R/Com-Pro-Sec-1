#include<iostream>
using namespace std;
int calAge(int);
int main()
{
    //Loop for --- year
    int year;
    for (int n = 1 ; n <= 3 ; n++)
    {
        cout << "Enter Year " << n << " : ";
        cin >> year;
        int age = calAge(year);
        cout << "Age" << n << " : " << age << endl;
    }
    cout << "Thank you" << endl;
    return(0);
}
//calculate age
int calAge(int year)
{
    int age;
    age = 2563 - year;
    return(age);
}