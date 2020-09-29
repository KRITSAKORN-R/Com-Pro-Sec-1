#include<iostream>
#include<iomanip>
using namespace std;
void display(int salary[] , int num);
int cal_bonus(int salary);
int main()
{
	int num , bonus;
	cout << "Enter Number of Person : ";
	cin >> num;

	int *salary = new int[num];
	for(int i = 0 ; i < num ; i++)
	{
		cout << "Enter the salary "<< i+1 << " : ";
		cin >> salary[i];
	}
	bonus = cal_bonus(*salary);
	display(salary , num);
}

int cal_bonus(int salary)
{
	int total;
	total = salary * 2;
	return (total);
}

void display(int salary[] , int num)
{
	cout << fixed << setw(80) << setfill('-') << "\n";
	cout << "There are " << num << " person" << endl;
	for(int i = 0 ; i < num ; i++)
	{
		cout << "The salary for person " << i+1 << " =" << salary[i] << " and Bonus = " <<cal_bonus(salary[i])<< endl;
	}

}