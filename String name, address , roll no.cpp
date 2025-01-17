//Ibad Ali
//2412177
//BSCS 1 A
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, address;
    int age, rollNo;
    cout << "Enter your name: ";
    getline(cin, name);  
    cout << "Enter your age: ";
    cin >> age;
    cin.ignore(); 
    cout << "Enter your address: ";
    getline(cin, address);  
    cout << "Enter your roll number: ";
    cin >> rollNo;
    cout << "\n--- User Information ---\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Address: " << address << endl;
    cout << "Roll Number: " << rollNo << endl;
    return 0;
}

