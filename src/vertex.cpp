#include "vertex.h"

Vertex::Vertex(){
	built = false;
}

Vertex::~Vertex(){

}


void
Vertex::init(double mX, double mY, double mZ, long long mId){
	built = true;
	x = mX;
	y = mY;
	z = mZ;
	id = mId;
}