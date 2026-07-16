#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    string gender;
    int age;
    int id;

    // Input
    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Student ID: ";
    cin >> id;

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Gender: ";
    cin >> gender;

    // Output
    cout << "\n----- Student Information -----" << endl;
    cout << "Name   : " << name << endl;
    cout << "ID     : " << id << endl;
    cout << "Age    : " << age << endl;
    cout << "Gender : " << gender << endl;

    return 0;
}