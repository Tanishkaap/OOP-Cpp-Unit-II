#include <iostream>
#include <string>
#include <utility>

using namespace std;

// Outer class
class University
{
public:

    // Department is a class inside University
    class Department
    {
    private:
        string name;

    public:
        explicit Department(string departmentName)
            : name(move(departmentName)) {}

        void display() const
        {
            cout << "Department: " << name << '\n';
        }
    };
};

int main()
{
    // Creating an object of the nested Department class
    University::Department department(
        "Artificial Intelligence and Data Science"
    );

    department.display();

    return 0;
}

Output:
Department: Artificial Intelligence and Data Science
