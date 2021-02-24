#include "FMI.h"
#include <cstring>
#include <iostream>

FMI::FMI()
{
	setId(0);
	setDekan("Unknown");
}

FMI::FMI(int id, const char* dekan)
{
	setId(id);
	setDekan(dekan);
}

FMI::FMI(int id)
{
	setId(id);
	setDekan("Unknown");
}

void FMI::setId(int id)
{
	this->id = id;
}

void FMI::setDekan(const char* dekan)
{
	strcpy_s(this->dekan, 32, dekan);
}

int FMI::getId() const
{
	return this->id;
}

const char* FMI::getDekan() const
{
	return this->dekan;
}

void FMI::input()
{
	std::cout << "ID: ";
	std::cin >> this->id;
	std::cout << "Dekan: ";
	std::cin.ignore();
	std::cin.getline(this->dekan, 32);
}

void FMI::print() const
{
	std::cout << "ID: " << this->id << std::endl;
	std::cout << "Dekan: " << this->dekan << std::endl;
}
