#include <iostream>
using namespace std;

int main() {
    int month;
    cin >> month;

    string months[] = {
       
        "January", "February", "March", "April",
        "May", "June","July", "August", "September",
        "Octomber", "November", "December"
    };

    if (month >= 1 && month <= 12) {
        cout << months[month - 1] << endl; 
    }
    else {
        cout << "Error!" << endl;
    }

    return 0;
}
