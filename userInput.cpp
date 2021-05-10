#include <iostream>

using namespace std;

int main() {
    string name;
    int age;
    string message;

    getline(cin, name);
    cin >> age;

    cout << name << " is " << age << " years old.\n" << endl;
    cout << message << endl;
    cout << "Thank You!" << endl;
    cout << "Welcome!" << endl;
    
    return 0;
}
