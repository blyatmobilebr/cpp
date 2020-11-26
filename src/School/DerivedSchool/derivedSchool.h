#include <iostream>
#include <string>
#include "../school.h"
#ifndef DERIVEDSCHOOL
#define DERIVEDSCHOOL

class DerivedSchool : public School
{
    public:
        // Constructor gets called everytime we create new class' instances
        DerivedSchool(std::string name);
};

#endif // !DERIVEDSCHOOL