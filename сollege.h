#ifndef COLLEGE_H
#define COLLEGE_H

#include <string>
#include <iostream>
#include "Contact.h"

class College {
private:
    Contact* contacts;  
    std::string name;

public:
    College(const std::string& name, Contact* contacts);
    void Show() const;
    ~College();
};

#endif
