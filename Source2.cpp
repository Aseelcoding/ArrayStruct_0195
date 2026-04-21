

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
	Student S1[3];

	for (int i = 0; i < 3; i++) {

		cout << " Student Number  :  " << i + 1 << endl;

		cout << "Please Enter Your NIM ? : "; getline(cin, S1[i].NIM);
		cout << endl;

		cout << "Please Enter Your Name ? : "; getline(cin, S1[i].Name);
		cout << endl;

		cout << "Please Enter Your City ? : "; getline(cin, S1[i].Address.city);
		cout << endl;
		cout << "Please Enter Your village ? : "; getline(cin, S1[i].Address.village);
		cout << endl;

		cout << "Please Enter Your Age ? : "; cin >> S1[i].Age;
		cout << endl;

	}



	cout << "NIM : " << S1[i].NIM << endl;
	cout << "Name : " << S1[i].Name << endl;
	cout << "City : " << S1[i].Address.city << endl;
	cout << "village : " << S1[i].Address.village << endl;
	cout << "Age : " << S1[i].Age << endl;
	return 0;
}

