#include <iostream>
#include <ctime>
/*
Personal Organizer - Solution requirements:
An interactive program to accept the name, year of birth (YYYY), address
and telephone
Calculate the age of the user by subtracting year of birth from current
date. NB the current year must not be hard coded
Display the full name, address, contact, and the age of the user
*/
using namespace std;

int main()
{
    string firstName, lastName, address;
    int yearOfBirth, currentYear, telephone, userAge;
    time_t t = time(NULL);
	tm* timePtr = localtime(&t);
	currentYear = timePtr->tm_year + 1900;

    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;
    cout << "Enter your year of birth: ";
    cin >> yearOfBirth;
    cout << "Enter your address(city/town): ";
    cin >> address;
    cout << "Enter your telephone number: ";
    cin >> telephone;

    userAge = currentYear - yearOfBirth;

    cout << "\n\n================================\n";
    cout << "Name: " <<firstName <<" " <<lastName <<endl;
    cout << "Address: " <<address <<endl;
    cout << "Contact: " <<telephone <<endl;
    cout << "Age: " <<userAge <<endl;

    return 0;
}
