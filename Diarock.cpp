// Diarock.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"

#include <string>
#include <iostream>
#include "Location.h"

int main()
{
	std::cout << "Starting Diarock server. Developed by Scott Hiett & Chase Henderson." << std::endl;

	Location location(new World(new std::vector<Chunk>()), 52, 1, 1);

	std::cout << location.get_x();

    return 0;
}

