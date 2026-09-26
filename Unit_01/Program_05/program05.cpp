#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    // Data members of the class
    string name;
    int age;

    // Function to display student details
    void show()
    {
        cout << name << " " << age << endl;
    }
};

int main()
{
    // Create an object of Student class
    Student s1;

    // Give values to the object
    s1.name = "Amit";
    s1.age = 20;

    // Display the details
    s1.show();

    return 0;
}
