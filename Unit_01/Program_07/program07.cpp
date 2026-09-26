#include <iostream>
using namespace std;

class Student
{
public:
    // Static member is shared by all objects
    static int count;

    Student()
    {
        // Increase count whenever a new object is created
        count++;
    }
};

// Initialize the static member
int Student::count = 0;

int main()
{
    // Creating three objects increases the shared count
    Student s1;
    Student s2;
    Student s3;

    cout << Student::count << endl;

    return 0;
}
