// Project, last week
// Souleymane Camara, 40183807
// Main file containing all the data for students

#include "students.h"

string Student::GetFirstName()
{
    return FirstName;
}

void Student ::SetFirstName(string firstName)
{
    FirstName = firstName;
}

string Student ::GetLastName()
{
    return LastName;
}

void Student::SetLastName(string lastName)
{
    LastName = lastName;
}

int Student::GetId()
{
    return id;
}

void Student::SetId(int Id)
{
    id = Id;
}

string Student::GetDateOfBirth()
{
    return DateOfBirth;
}

void Student::SetDateOfBirth(string dateOfBirth)
{
    DateOfBirth = dateOfBirth;
}

float Student::GetGPA()
{
    return GPA;
}

void Student::SetGPA(float gpa)
{
    GPA = gpa;
}

string Student::GetStartYear()
{
    return StartYear;
}

void Student::SetStartYear(string startYear)
{
    StartYear = startYear;
}

float Student::GetCompletedCredit()
{
    return CompletedCredit;
}

void Student::SetCompletedCredit(float completedCredit)
{
    CompletedCredit = completedCredit;
}

string Student::GetProgram()
{
    return Program;
}

void Student::SetProgram(string program)
{
    Program = program;
}

bool Student::CompleteProgram()
{
    if (Program == "bachelor" && CompletedCredit >= 140)
    {
        return true;
    }
    else
    {
        return false;
    }
    if (Program == "Master" && CompletedCredit >= 16)
    {
        return true;
    }
    else
    {
        return false;
    }
    if (Program == "Ph.D" && CompletedCredit >= 12)
    {
        return true;
    }
    else
    {
        return false;
    }
    cout << "record not found" << endl;
}
string Student::StudentStatus(float gpa)
{
    if (gpa >= 3.5)
    {
        return "A+";
    }
    else if (gpa >= 3.0 && gpa <= 3.5)
    {
        return "A";
    }
    else if (gpa >= 2.5 && gpa <= 3)
    {
        return "B";
    }
    else if (gpa >= 2 && gpa <= 2.5)
    {
        return "C";
    }
    else if (gpa < 2)
    {
        return "D";
    }
}
void Student::Print_Std_Info()
{
    cout << "First Name: " << FirstName << " Last Name: " << LastName << " id: "
         << id << " Date of birth: " << DateOfBirth << " GPA: " << GPA
         << " Start year: " << StartYear << " Completed credit: "
         << CompletedCredit << " Program:" << Program << endl;
}
int Student::Compare_GPA(Student student1, Student student2)
{
    if (student1.GPA > student2.GPA)
    {
        return student1.GPA;
    }
    else
    {
        return student2.GPA;
    }
}
