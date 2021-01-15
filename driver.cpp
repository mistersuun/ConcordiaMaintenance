// Project, last week
// Souleymane Camara, 40183807
// Execution

#include <iostream>
#include <fstream>
#include "students.h"
#include "staffs.h"
#include "studentstaff.h"

using namespace std;

int main()
{

    Student_Staff obj;
    cout << "\n checking the Student for Higest GPA ..." << endl;
    obj.Highest_GPA(obj.s, 5);
    cout << endl
         << "\n Calculating the Total no of graduates ..." << endl;
    cout << "Total number of graduates: " << obj.N_of_UnderGrad(obj.s, 5) << endl;
    cout << "\n Staff with Same hire year ";
    obj.Same_Hire_Year(obj.sf, 5, "2007");
}
