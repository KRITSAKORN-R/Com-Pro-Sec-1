#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
//Define prototype function
void DisplayMenu();
float Area(const float Radius);
float Area(const float Length , const float Widht);
double Area(const double based , double high);

int main()
{
	char choice;
	bool Flag = true;
	do
	{
		DisplayMenu();
		cin >> choice;
		if (choice == '1')
		{
			float Radius;
			cout << "\nEnter radius : ";
			cin >> Radius;
			cout << "Area of circle = " << fixed;
			cout << setprecision(2) << Area(Radius) << endl;
		}
		else if (choice == '2')
		{
			float Length , Widht;
			cout << "\nEnter Length and Widht : ";
			cin >> Length >> Widht;
			cout << "Area of Rectangle = " << fixed;
			cout << setprecision(2) << Area(Length , Widht);
			cout << endl;
		}
		else if (choice == '3')
		{
			double based , high;
			cout << "\nEnter Based and High : ";
			cin >> based >> high;
			cout << "Area of triangle = " << fixed;
			cout << setprecision(2) << Area(based , high);
			cout << endl;
		}
		else if (choice == '4') Flag = false;
		else
		{
			cout << "\nYou choose out of rane is ";
			cout << "not process.\n";
		}
	}while (Flag);
	cout << "\n. . .Exit Program . . .\n";
	return 0;
}

float Area(const float Radius)
{
	return(3.14159 * Radius * Radius);
}

float Area(const float Length , const float Widht)
{
	return(Length * Widht);
}

double Area(const double based , double high)
{
	return(0.5 * (based * high));
}

void DisplayMenu()
{
	cout << endl;
	cout << "Program Calculate Area " << endl;
	cout << " 1. Circle" << endl;
	cout << " 2. Rectangle" << endl;
	cout << " 3. Triangle" << endl;
	cout << " 4. Exit" << endl;
	cout << "Enter your choose number : " << endl;
}