#include <iostream>
using namespace std;

int main()
{
    // Store marks of five students/subjects in an array
    int marks[5] = {78, 82, 91, 67, 88};

    // Use a loop to display every array element
    for (int i = 0; i < 5; i++)
    {
        cout << marks[i] << " ";
    }

    return 0;
}
