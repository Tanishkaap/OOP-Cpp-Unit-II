#include <iostream>
#include <string>
#include <utility>

using namespace std;

// Abstract base class for employees
class Employee
{
protected:
    int employeeId;
    string name;

public:
    Employee(int id, string employeeName)
        : employeeId(id), name(move(employeeName)) {}

    // Every employee type must calculate its own salary
    virtual double calculateSalary() const = 0;

    // Displays common employee details
    void displayBasicDetails() const
    {
        cout << "Employee ID: " << employeeId << '\n';
        cout << "Name: " << name << '\n';
    }

    virtual ~Employee() = default;
};

// Permanent employees have a basic salary and allowance
class PermanentEmployee : public Employee
{
private:
    double basicSalary;
    double allowance;

public:
    PermanentEmployee(
        int id,
        string employeeName,
        double basic,
        double extra
    )
        : Employee(id, move(employeeName)),
          basicSalary(basic),
          allowance(extra) {}

    double calculateSalary() const override
    {
        return basicSalary + allowance;
    }
};

// Contract employees are paid according to hours worked
class ContractEmployee : public Employee
{
private:
    double hourlyRate;
    int hoursWorked;

public:
    ContractEmployee(
        int id,
        string employeeName,
        double rate,
        int hours
    )
        : Employee(id, move(employeeName)),
          hourlyRate(rate),
          hoursWorked(hours) {}

    double calculateSalary() const override
    {
        return hourlyRate * hoursWorked;
    }
};

// Displays the salary details of any employee
void displayPaySlip(const Employee& employee)
{
    employee.displayBasicDetails();

    cout << "Salary: "
         << employee.calculateSalary()
         << "\n\n";
}

int main()
{
    PermanentEmployee permanentEmployee(
        101, "Asha", 40000.0, 8000.0
    );

    ContractEmployee contractEmployee(
        102, "Vikas", 500.0, 80
    );

    displayPaySlip(permanentEmployee);
    displayPaySlip(contractEmployee);

    return 0;
}

Output : 
Employee ID: 101
Name: Asha
Salary: 48000

Employee ID: 102
Name: Vikas
Salary: 40000
