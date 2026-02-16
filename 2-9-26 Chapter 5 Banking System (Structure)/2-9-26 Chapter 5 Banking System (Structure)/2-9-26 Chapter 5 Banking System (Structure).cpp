// 2-9-26 Chapter 5 Banking System (Structure)
#include <iostream>
using namespace std;

struct bank
{
	int account_number;
	char account_holder_name[50];
	float account_balance;
};

int main()
{
	bank user_account_1;

	cout << "Enter account number: ";
	cin >> user_account_1.account_number;

	cin.ignore();

	cout << "Enter account holder name: ";
	cin.getline(user_account_1.account_holder_name, 50);

	cout << "Enter current balance: ";
	cin >> user_account_1.account_balance;

	cout << "Account number: " << user_account_1.account_number << endl;
	cout << "Account holder name: " << user_account_1.account_holder_name << endl;
	cout << "Account balance: " << user_account_1.account_balance << endl;

	return 0;
}