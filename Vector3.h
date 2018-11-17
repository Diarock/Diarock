#pragma once
class Vector3
{
public:
	Vector3(double x, double y, double z);
	~Vector3();
	double get_x() const;
	double get_y() const;
	double get_z() const;
private:
	double x;
	double y;
	double z;
};

