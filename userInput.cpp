#include <iostream>

using namespace std;

int main() {
    string name;
    int age;

    getline(cin, name);
    cin >> age;

    cout << name << " is " << age << " years old.\n" << endl;

    return 0;
}
