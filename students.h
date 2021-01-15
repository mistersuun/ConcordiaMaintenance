// Project, last week
// Souleymane Camara, 40183807
// Header file for studentstaff

#ifndef STUDENTSTAFF_H
#define STUDENTSTAFF_H
#include "iostream"
#include "fstream"

#include "staffs.h"
#include "students.h"

using namespace std;

class Student_Staff
{
public:
    Student *s;
    Staff *sf;

    Student_Staff();
    void ReadStudent(class Student s[]);
    void ReadStaff(class Staff sf[]);
    void Highest_GPA(class Student s[], int size);
    int N_of_UnderGrad(class Student s[], int size);
    void Same_Hire_Year(class Staff sf[], int size, string year);
};

#endif
