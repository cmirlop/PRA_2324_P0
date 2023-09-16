#include "BrazoRobotico.h"

BrazoRobotico::BrazoRobotico(){
	x = 0;
	y = 0;
	z = 0;
	objeto = false;
	

}

double BrazoRobotico::coordenadaX(){
	return x;

}



double BrazoRobotico::coordenadaY(){
	return y;
}

double BrazoRobotico::coordenadaz(){
	return z;
}

bool BrazoRobotico::tieneobjeto(){
	return objeto;
}

void BrazoRobotico::coger(){
	objeto = true;
}
void BrazoRobotico::soltar(){
	objeto = false;
}
void BrazoRobotico::mover(double x, double y, double z){
	this -> x = x;
	this -> y = y;
	this -> z = z;
}
