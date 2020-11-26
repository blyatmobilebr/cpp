#include "school.h"

// Getters
std::string School::GetName() { return name; }
int School::GetAmountOfPeople() { return amountOfPeople; }

// Setter
void School::SetName(std::string name) { this-> name = name; }

// Constructor
School::School(std::string name) { this-> name = name; }

// Destructor
School::~School() { std::cout << "Yeetus deletus." << std::endl; }