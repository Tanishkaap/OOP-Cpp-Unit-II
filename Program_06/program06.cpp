#include <iostream>

using namespace std;

// Stores academic marks
class Academic
{
protected:
    int academicMarks;

public:
    explicit Academic(int marks) : academicMarks(marks) {}

    void showAcademic() const
    {
        cout << "Academic Marks: " << academicMarks << '\n';
    }
};

// Stores sports marks
class Sports
{
protected:
    int sportsMarks;

public:
    explicit Sports(int marks) : sportsMarks(marks) {}

    void showSports() const
    {
        cout << "Sports Marks: " << sportsMarks << '\n';
    }
};

// Student inherits from both Academic and Sports
class Student : public Academic, public Sports
{
public:
    Student(int academic, int sports)
        : Academic(academic), Sports(sports) {}

    void showTotal() const
    {
        cout << "Total Marks: "
             << academicMarks + sportsMarks << '\n';
    }
};

int main()
{
    Student student(80, 15);

    student.showAcademic();
    student.showSports();
    student.showTotal();

    return 0;
}
