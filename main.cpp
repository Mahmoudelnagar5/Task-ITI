#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    if (n > 5) {
        cout << "Greater than 5" << endl;
    } else if (n < 5) {
        cout << "Less than 5" << endl;
    } else {
        cout << "Equal to 5" << endl;
    }

    return 0;
}