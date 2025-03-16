#include "Student.h"

Student::Student(const std::string& fullName, const std::string& birthDate, Contact* contact, College* college)
    : fullName(fullName), birthDate(birthDate), contact(contact), college(college) {}

void Student::Show() const {
    std::cout << "Student: " << fullName << ", Birth Date: " << birthDate << std::endl;
    contact->Show();
    college->Show();
}

Student::~Student() {
    delete contact;
    delete college;
}
