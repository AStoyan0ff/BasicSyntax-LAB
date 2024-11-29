#include <iostream>
#include <string>

using namespace std;

int main() {

	string country;
	getline(cin, country);

	if (country == "England" || country == "USA") {
		cout << "English" << endl;
	}
	else if (country == "Argentina" || country == "Mexico" || country == "Spain") {
		cout << "Spanish" << endl;
	}
	else {
		cout << "unknown" << endl;
	}


	return 0;
}
