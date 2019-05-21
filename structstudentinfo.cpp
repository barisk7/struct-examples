#include <iostream>
using namespace std;

struct student
{
    char name[100];
    char surname[100];
    int roll;
    float marks;
};

int main() 
{
    student a;
    cout << "Enter name: ";
    cin >> a.name;
    cout << "Enter surname: ";
    cin >> a.surname;
    cout << "Enter roll number: ";
    cin >> a.roll;
    cout << "Enter marks: ";
    cin >> a.marks;

    cout << "\nDisplaying Information," << endl;
    cout << "Name: " << a.name  << endl;
    cout << "Surname:" <<a.surname << endl;
    cout << "Roll: " << a.roll << endl;
    cout << "Marks: " << a.marks << endl;
    return 0;
}
