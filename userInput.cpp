#include <iostream>

using namespace std;

int main() {
    string first_n, last_n;
    int age;

    getline(cin, first_n);
    getline(cin, last_n);
    cin >> age;

    cout << first_n << " "<< last_n << " is " << age << " years old.\n" << endl;

    return 0;
}
