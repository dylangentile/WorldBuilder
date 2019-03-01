#pragma once

class Vertex{
public:
	Vertex();
	~Vertex();
	void init(double mX, double mY, double mZ, long long mId);
	long long id;
	double x, y, z;
	bool built;
};