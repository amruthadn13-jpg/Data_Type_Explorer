#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    float cgpa;
    char grade;
    bool placed;

    cout << "========== Data Types Explorer ==========" << endl;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your CGPA: ";
    cin >> cgpa;

    cout << "Enter your grade: ";
    cin >> grade;

    cout << "Are you placed? (1 for Yes, 0 for No): ";
    cin >> placed;

    cout << "\n========== Student Profile ==========" << endl;
    cout << "Name        : " << name << endl;
    cout << "Age         : " << age << endl;
    cout << "CGPA        : " << cgpa << endl;
    cout << "Grade       : " << grade << endl;
    cout << "Placed      : " << placed << endl;

    cout << "\n========== Memory Usage ==========" << endl;
    cout << "int         : " << sizeof(int) << " bytes" << endl;
    cout << "float       : " << sizeof(float) << " bytes" << endl;
    cout << "double      : " << sizeof(double) << " bytes" << endl;
    cout << "char        : " << sizeof(char) << " bytes" << endl;
    cout << "bool        : " << sizeof(bool) << " bytes" << endl;

    return 0;
}
