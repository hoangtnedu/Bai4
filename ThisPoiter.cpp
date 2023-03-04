#include <iostream>
using namespace std;

class Student
{
public:
    string Name;
    float ID;
    Student(string Name, float ID)
    {
        this->Name = Name;
        this->ID = ID;
    }
    void details()
    {
        cout << "Student Name : " << Name << endl;
        cout << "Student ID: " << ID << "\n\n";
    }
};
int main()
{
    Student s1 = Student("Khush", 1);
    Student s2 = Student("Raam", 2);
    s1.details();
    s2.details();
    return 0;
}