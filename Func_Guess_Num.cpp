#include<iostream>
#include<time.h>
using namespace std;
int Guess(int);
int num, ans_num;
int Round = 0;
int main()
{
	cout << "===> Welcome to guessing number game <===\nSecret number has been chosen" << endl;
	srand(time(NULL));
	num = 1+rand()%10;
	Round = Guess(num);
	return(0);
}
int Guess(int num)
{
	do
	{
		cout << "Guess the number (1 to 10) : ";
		cin >> ans_num;
		if (ans_num > num) cout << "The secret number is lower" << endl;
		else if (ans_num < num)cout << "The secret number is higher" << endl;
		else cout << "Congratulations!" << endl;
		Round++;
	}while (ans_num != num);
	cout << "The secret number is " << num << endl;
	cout << "You made " << Round << " guesses" << endl;
	return (Round);
}