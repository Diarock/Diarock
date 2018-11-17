#include "stdafx.h"

#include "Location.h"
#include "World.h"

Location::Location(World* world, double x, double y, double z)
	:world{world}, x{x}, y{y}, z{z}
{}

double Location::get_x() const
{
	return x;
}

double Location::get_y() const
{
	return y;
}

double Location::get_z() const
{
	return z;
}

int Location::get_block_x() const
{
	return floor(x);
}

int Location::get_block_y() const
{
	return floor(y);
}

int Location::get_block_z() const
{
	return floor(z);
}

World* Location::get_world()
{
	return world;
}

Location& Location::operator*=(Location other)
{
	x *= other.x;
	y *= other.y;
	z *= other.y;

	return *this;
}

Location& Location::operator+=(Location other)
{
	x += other.x;
	y += other.y;
	z += other.y;

	return *this;
}

Location::~Location()
{
}
