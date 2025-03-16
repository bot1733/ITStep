#ifndef COLLAGE_H
#define COLLAGE_H
#include "Contact.h"

class Collage {
private:
    Contact contact;
    std::string name;
public:
    Collage(const std::string& name, const Contact& contact);
    Collage();
    void Show() const;
};

#endif // COLLAGE_H
