// Project, last week
// Souleymane Camara, 40183807
// Program that gets and sets information for staff members


#include "staffs.h";

string Staff ::GetFirstName()
{
    return FirstName;
}

void Staff ::SetFirstName(string firstName)
{
    FirstName = firstName;
}
string Staff ::GetLastName()
{
    return LastName;
}

void Staff ::SetLastName(string lastName)
{
    LastName = lastName;
}

string Staff ::GetHiringDate()
{
    return HiringDate;
}

void Staff ::SetHiringDate(string hiringDate)
{
    HiringDate = hiringDate;
}

int Staff ::GetID()
{
    return ID;
}

void Staff ::SetID(int id)
{
    ID = id;
}

int Staff ::GetCurrentSalary()
{
    return CurrentSalary;
}

void Staff ::SetCurrentSalary(int currentSalary)
{
    CurrentSalary = currentSalary;
}

long Staff ::GetPhoneNo()
{
    return PhoneNo;
}

void Staff ::SetPhoneNo(long phoneNo)
{
    PhoneNo = phoneNo;
}

char Staff ::GetBonusCode()
{
    return BonusCode;
}

void Staff ::SetBonusCode(char bonusCode)
{
    BonusCode = bonusCode;
}

void Staff ::Print_Stf_Info()
{
    cout << "First Name: " << FirstName << " Last Name: " << LastName << " id: "
         << ID << " Phone number " << PhoneNo << " Date of hiring: " << HiringDate
         << " Bonus code: " << BonusCode << " Current Salary: " << CurrentSalary << endl;
}
void Staff ::Calculate_Salary()
{
    if (BonusCode == 'A')
        cout << "New year salary for " << FirstName << " is: " << (CurrentSalary * 1.08);
    else if (BonusCode == 'B')
        cout << "New year salary for " << FirstName << " is: " << (CurrentSalary * 1.06);
    else if (BonusCode == 'C')
        cout << "New year salary for " << FirstName << " is: " << (CurrentSalary * 1.03);
    else if (BonusCode == 'D')
        cout << "New year salary for " << FirstName << " is: " << (CurrentSalary * 1.01);
    else if (BonusCode == 'B')
        cout << "New year salary for " << FirstName << " is: " << CurrentSalary;
    else
        cout << "Invalid bonus code for " << FirstName;
}
