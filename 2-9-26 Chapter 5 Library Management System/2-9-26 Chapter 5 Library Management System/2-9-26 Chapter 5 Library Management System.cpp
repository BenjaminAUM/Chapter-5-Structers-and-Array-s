// 2-9-26 Chapter 5 Library Management System
#include <iostream>
using namespace std;

struct book
{
	int book_id;
	char title[50];
	float price;
};

int main()
{
	book book_1;

	cout << "Enter Book ID: ";
	cin >> book_1.book_id;

	cin.ignore();

	cout << "Name of book: ";
	cin.getline(book_1.title, 50);
	
	cout << "Enter price of book: ";
	cin >> book_1.price;

	cout << "Book ID: " << book_1.book_id << endl;
	cout << "Book Title: " << book_1.title << endl;
	cout << "Book Price: " << book_1.price << endl;

	return 0;
}