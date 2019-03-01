#include <iostream>
#include <fstream>

#include "vertex.h"


using namespace std;



int main(){

	Vertex vertexArr[4];
	vertexArr[0].init(0, 0, 0, 1);
	vertexArr[1].init(30, 0, 0, 2);
	vertexArr[2].init(30, 0, 30, 3);
	vertexArr[3].init(0, 0, 30, 4);


	long long faceV[4];
	string face = "";

	ofstream myfile;
 	myfile.open ("surface.obj");
  	//myfile << "Writing this to a file.\n";
  	for(int i = 0; i < 4; i++){
  		myfile << "v ";
  		myfile << vertexArr[i].x;
  		myfile << " ";
  		myfile << vertexArr[i].y;
  		myfile << " ";
  		myfile << vertexArr[i].z;
  		myfile << "\n";
  		faceV[i] =vertexArr[i].id;
  	}
  	myfile << "\nf";
  	for(int i = 0; i < 4; i++){
  		myfile << " ";
  		myfile << faceV[i];
  	}
  	myfile << "\nf";
  	for(int i = 4; i > 0; i--){
  		myfile << " ";
  		myfile << faceV[i - 1];
  	}



  	myfile << "\n";

  	myfile.close();



	return 0;
}
