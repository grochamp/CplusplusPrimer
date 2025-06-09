#include "Student.h"
#include "Teacher.h"

int main()
{
    Student std("LeBron James", 50);
    Teacher prof("Allen Iverson");

    cout << std.getIntel() << endl;
    cout << prof.getName() << endl;

    return 0;
}