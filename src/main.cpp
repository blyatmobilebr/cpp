#include "School/school.h"
#include "School/DerivedSchool/derivedSchool.h"

int main() 
{
    School Example("Example");
    std::cout << Example.GetName() << std::endl;

    DerivedSchool Derived("Derived School");
    std::cout << Derived.GetName() << std::endl;
    
}