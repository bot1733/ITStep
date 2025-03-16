#ifndef COLLEGE_H
#define COLLEGE_H

#include <iostream>
#include <string>

class College {
private:
    std::string name;

public:
    // Конструктор за замовчуванням
    College();
    
    // Конструктор з параметрами
    College(const std::string& name);

    // Метод для виводу інформації
    void Show() const;
};

#endif
