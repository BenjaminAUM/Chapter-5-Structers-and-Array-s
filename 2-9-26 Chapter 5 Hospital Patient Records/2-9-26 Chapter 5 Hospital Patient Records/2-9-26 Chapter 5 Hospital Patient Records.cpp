// 2-9-26 Chapter 5 Hospital Patient Records
#include <iostream>
using namespace std;

struct hospital
{
	int patient_id;
	char patient_name[50];
	float body_temperature;
};

int main()
{
	hospital patient[5];

	cout << "Please enter patient information: " << endl;
	for (int index = 0; index < 5; index++)
	{
		cout << "Enter patient ID: ";
		cin >> patient[index].patient_id;

		cin.ignore();
		
		cout << "Enter patient name: ";
		cin.getline(patient[index].patient_name, 50);

		cout << "Enter current body temp: ";
		cin >> patient[index].body_temperature;
	}

	for (int index = 0; index < 5; index++)
	{
		cout << "Patient " << index + 1 << " ID: " << patient[index].patient_id << endl;
		cout << "Patient " << index + 1 << " name: " << patient[index].patient_name << endl;
		cout << "Patient " << index + 1 << " body temp: " << patient[index].body_temperature << endl;
	}

	return 0;
}