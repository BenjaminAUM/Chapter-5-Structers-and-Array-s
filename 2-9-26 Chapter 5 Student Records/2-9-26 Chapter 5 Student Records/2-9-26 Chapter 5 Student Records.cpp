// 2-9-26 Chapter 5 Student Records
#include <iostream>
using namespace std;

struct records
{
	int roll_number;
	char name[50];
	float marks;
};

int main()
{
	records student[3];

	cout << "Enter roll number, name and marks for each student" << endl;
	for (int index = 0; index < 3; index++)
	{
		cout << "Enter roll number: ";
		cin >> student[index].roll_number;

		cin.ignore();

		cout << "Enter student name: ";
		cin.getline(student[index].name, 50);

		cout << "Enter student marks: ";
		cin >> student[index].marks;
	}

	for (int index = 0; index < 3; index++)
	{
		cout << "Student " << index + 1 << " roll number: " << student[index].roll_number << endl;
		cout << "Student " << index + 1 << " name: " << student[index].name << endl;
		cout << "Student " << index + 1 << " marks: " << student[index].marks << endl;
	}

	return 0;
}