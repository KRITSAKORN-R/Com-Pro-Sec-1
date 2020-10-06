#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void display(string name[5], float price[3][5])
{
	for (int i = 0; i<5; i++)
	{
		cout << i+1 <<setw(10)<< name[i] <<setw(20)<< price[0][i];
		cout <<setw(20)<< price[1][i] <<setw(24)<< price[2][i] << endl;
	}
}
float calprice(float price[3][5])
{
	for(int i=0;i<5;i++)
	{
		price[1][i] = price[0][i]*(0.07);
		price[2][i] = price[0][i] + price[1][i];
	}
	return (price[3][5]);
}
string name[5];
float price[3][5];
int main()
{
	 for (int i = 0; i < 5; i++)
	 {
		cout << "Enter Product Name : ";
		cin >> name[i];
		cout << "\t price : ";
		cin >> price[0][i];
	 }
	//Calculate
	cout << setfill(' ') <<"No."<<setw(10)<<"Product"<<setw(20) <<"price"<<setw(20)<< "vat7%" << setw(24) <<"Net" << endl;
	calprice(price);
	display(name,price);

	system("pause");
	return 0;
}