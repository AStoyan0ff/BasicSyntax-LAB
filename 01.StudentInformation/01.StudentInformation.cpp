#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

	string name;
	int age;
	float grade;

	getline(cin, name);
	cin >> age;
	cin >> grade;

	cout << "Name: " << name << ", Age: " << age  << ", Grade: " 
		 << fixed << setprecision(2) << grade << endl;

	return 0;
}
