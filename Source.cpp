

#include <iostream>
using namespace std;

struct StAddress
{
	string village;
	string city;
};
struct Student
{
	string NIM;
	string Name;
	StAddress  Address;
	int Age;
};
int main()
{
	Student S1;
	cout << "Please Enter Your NIM ? : "; cin >> S1.NIM;
	cout << endl;

	cout << "Please Enter Your Name ? : "; cin >> S1.Name;
	cout << endl;

	cout << "Please Enter Your Adress ? : "; cin >> S1.Address;
	cout << endl;

	cout << "Please Enter Your Age ? : "; cin >> S1.Age;
	cout << endl;

	cout << "NIM : " << S1.NIM << endl;
	cout << "Name : " << S1.Name << endl;
	cout << "Address : " << S1.Address << endl;
	cout << "Age : " << S1.Age << endl;

}

