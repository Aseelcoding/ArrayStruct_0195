

#include <iostream>
#include <string>
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
	cout << "Please Enter Your NIM ? : "; getline(cin, S1.NIM);
	cout << endl;

	cout << "Please Enter Your Name ? : "; getline(cin, S1.Name);
	cout << endl;

	cout << "Please Enter Your City ? : "; getline(cin, S1.Address.city);
	cout << endl;
	cout << "Please Enter Your village ? : "; getline(cin, S1.Address.village);
	cout << endl;

	cout << "Please Enter Your Age ? : "; cin >> S1.Age;
	cout << endl;

	cout << "NIM : " << S1.NIM << endl;
	cout << "Name : " << S1.Name << endl;
	cout << "City : " << S1.Address.city << endl;
	cout << "village : " << S1.Address.village << endl;
	cout << "Age : " << S1.Age << endl;

	return 0;
}

