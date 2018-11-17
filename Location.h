#pragma once

#include "World.h"

class Location
{
public:
	Location(World* world_name, double x, double y, double z);
	~Location();
	World* get_world();
	double get_x() const;
	double get_y() const;
	double get_z() const;
	int get_block_x() const;
	int get_block_y() const;
	int get_block_z() const;
	Location& operator+(Location other);
	Location& operator-(Location other);
	Location& operator*=(Location other);
	Location& operator+=(Location other);
private:
	World* world;
	double x;
	double y;
	double z;
};

