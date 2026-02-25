// 2-11-26 Chapter 5 Online Shopping Cart System
#include <iostream>
using namespace std;

struct website
{
	int product_id;
	char product_name[50];
	float price;
	int quantity;
};

int main()
{
	website product[5];
	float total_amount = 0;
	float subtotal = 0;

	cout << "\n==============================\n" << endl;
	cout << "Welcome to our online shopping" << endl;
	cout << "Please enter the details of 5 products" << endl;
	cout << "\n==============================\n" << endl;
	for (int index = 0; index < 5; index++)
	{
		cout << "Enter product ID: ";
		cin >> product[index].product_id;

		cin.ignore();

		cout << "Enter product name: ";
		cin.getline(product[index].product_name, 50);

		cout << "Enter product price: ";
		cin >> product[index].price;

		cout << "Enter how many items: ";
		cin >> product[index].quantity;

		subtotal = product[index].price * product[index].quantity;
		total_amount += subtotal;
	}
	
	cout << "\n========================\n" << endl;
	cout << "Your Shopping Cart Details" << endl;

	for (int index = 0; index < 5; index++)
	{
		cout << "Product " << index + 1 << " ID: " << product[index].product_id << endl;
		cout << "Product " << index + 1 << " Name: " << product[index].product_name << endl;
		cout << "Product " << index + 1 << " Price: " << product[index].price << endl;
		cout << "Product " << index + 1 << " Quantity: " << product[index].quantity << endl;
	}

	cout << "Total Amount: " << total_amount << endl;
	cout << "\n========================\n" << endl;

	return 0;
}