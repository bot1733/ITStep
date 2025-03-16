#include "College.h"

College::College(const std::string& name, Contact* contacts) : name(name), contacts(contacts) {}

void College::Show() const {
    std::cout << "College: " << name << std::endl;
    contacts->Show();
}
College::~College() {
    delete contacts;
}

