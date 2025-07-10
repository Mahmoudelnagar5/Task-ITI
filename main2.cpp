#include <iostream>
using namespace std;

int main() {
    int grade;
    
    cin >> grade;

    if (grade >= 85) {
        cout << "Excellent";
    } else if (grade >= 70) {
        cout << "Very Good";
    } else if (grade >= 50) {
        cout << "Good";
    } else {
        cout << "Fail" << endl;
    }
    return 0
}
