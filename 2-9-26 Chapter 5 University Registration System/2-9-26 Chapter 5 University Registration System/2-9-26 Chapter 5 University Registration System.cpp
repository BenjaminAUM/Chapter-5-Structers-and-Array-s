// 2-9-26 Chapter 5 University Registration System
#include <iostream>
using namespace std;

struct university
{
	int student_id;
	char student_name[50];
	int course_code;
	int credits;
};

int main()
{
	university student[4];
	int total_credits = 0;


	cout << "Enter information for each student: " << endl;
	for (int index = 0; index < 4; index++)
	{
		cout << "Student ID: ";
		cin >> student[index].student_id;

		cin.ignore();

		cout << "Student Name: ";
		cin.getline(student[index].student_name, 50);

		cout << "Course code: ";
		cin >> student[index].course_code;

		cout << "Student credits: ";
		cin >> student[index].credits;
		total_credits += student[index].credits;
	}

	for (int index = 0; index < 4; index++)
	{
		cout << "Student " << index + 1 << " ID: " << student[index].student_id << endl;
		cout << "Student " << index + 1 << " Name: " << student[index].student_name << endl;
		cout << "Student " << index + 1 << " Course Code: " << student[index].course_code << endl;
		cout << "Student " << index + 1 << " Credits: " << student[index].credits << endl;
	}
	cout << "Total credits: " << total_credits << endl;

	return 0;
}
