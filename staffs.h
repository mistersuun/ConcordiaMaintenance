// Project, last week
// Souleymane Camara, 40183807
// header file for staff

#ifndef TIME_H
#define TIME_H

#include <iostream>
using namespace std;

class Staff
{
private:
    string FirstName;
    string LastName;
    string HiringDate;
    int ID;
    int CurrentSalary;
    long PhoneNo;
    char BonusCode;

public:
    string GetFirstName();
    void SetFirstName(string firstName);
    string GetLastName();

    void SetLastName(string lastName);

    string GetHiringDate();

    void SetHiringDate(string hiringDate);

    int GetID();

    void SetID(int id);

    int GetCurrentSalary();

    void SetCurrentSalary(int currentSalary);

    long GetPhoneNo();

    void SetPhoneNo(long phoneNo);

    char GetBonusCode();

    void SetBonusCode(char bonusCode);

    void Print_Stf_Info();
    void Calculate_Salary();
};

#endif

