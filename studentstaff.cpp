// Project, last week
// Souleymane Camara, 40183807
// Program that reads input files and create the arrays of students and staff.

#include "studentstaff.h"

Student_Staff::Student_Staff()
{ //constructor
    s = new Student[5];
    sf = new Staff[5];
    ReadStudent(s);
    ReadStaff(sf);
}
void Student_Staff::ReadStudent(class Student StudentDetails[])
{
    ifstream in;
    int totalLines, num;
    float f;
    string temp;

    in.open("students.txt");
    in >> totalLines;
    int i = 0;
    for (i = 0; i < totalLines; i++)
    {
        in >> temp;
        StudentDetails[i].SetFirstName(temp);
        in >> temp;
        StudentDetails[i].SetLastName(temp);
        in >> num;
        StudentDetails[i].SetId(num);
        in >> temp;
        StudentDetails[i].SetDateOfBirth(temp);
        in >> f;
        StudentDetails[i].SetGPA(f);
        in >> temp;
        StudentDetails[i].SetStartYear(temp);
        in >> num;
        StudentDetails[i].SetCompletedCredit(num);
        in >> temp;
        StudentDetails[i].SetProgram(temp);
    }
    cout << "\nRead student.txt Sucessfully..." << endl;
    in.close();
}
void Student_Staff::ReadStaff(class Staff StaffData[])
{
    fstream in;
    string temp, date;
    int tempID, totalLines;
    long tempNo;
    char bonus;
    in.open("staff.txt");
    in >> totalLines;
    for (int i = 0; i < totalLines; i++)
    {
        in >> temp;
        StaffData[i].SetFirstName(temp);
        in >> temp;
        StaffData[i].SetLastName(temp);
        in >> tempID;
        StaffData[i].SetID(tempID);
        in >> tempID;
        StaffData[i].SetPhoneNo(tempNo);
        in >> date;
        StaffData[i].SetHiringDate(date);
        in >> bonus;
        StaffData[i].SetBonusCode(bonus);
        in >> tempNo;
        StaffData[i].SetCurrentSalary(tempNo);
    }
    cout << "Read staff.txt Sucessfully..." << endl;
}
void Student_Staff::Highest_GPA(class Student s[], int size)
{ //function Highest_GPA
    double max = s[0].GetGPA();
    int index = 0;
    for (int i = 1; i < size; i++)
    {
        if (s[i].GetGPA() > max)
        {
            max = s[i].GetGPA();
            index = i;
        }
    }
    cout << s[index].GetFirstName() << " " << s[index].GetLastName() << " Has the highest Gpa" << endl;
}
int Student_Staff::N_of_UnderGrad(class Student s[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (s[i].CompleteProgram() == true)
            count++;
    }
    return count;
}
void Student_Staff::Same_Hire_Year(class Staff sf[], int size, string year)
{

    for (int i = 0; i < size; i++)
    {
        string date = sf[i].GetHiringDate();

        if (date.substr(5, 7) == year)
        {
            cout << endl
                 << "Name: " << sf[i].GetFirstName() << " "
                 << sf[i].GetLastName() << ", Year: " << date.substr(5, 7) << endl;
        }
    }
}
