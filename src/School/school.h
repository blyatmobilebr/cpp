#include <iostream>
#include <string>
#ifndef SCHOOL
#define SCHOOL

class School
{
    private:
        std::string name;
        int amountOfPeople;
    
    public:
        // Getters
        std::string GetName();
        int GetAmountOfPeople();

        // Setter
        void SetName(std::string name);

        // Constructor
        School(std::string name);

        // Destructor
        // A destructor is a special member function of a class 
        // that is executed whenever an object of it's class goes
        // out of scope or whenever the delete expression is applied to a pointer to the object of that class.
        ~School();
};

#endif // !SCHOOL