

#include <iostream>
using namespace std;
struct Student
{
	string NIM;
	string Name;
	string Address;
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
}

