#include <iostream>
#include "BrazoRobotico.h"
using namespace std;




int main(){
	BrazoRobotico b1;
	b1.mover(10.5,4.5,2.4);
	cout<< "Me muevo a las coordenadas (" << b1.coordenadaX() << ","<< b1.coordenadaY() << "," << b1.coordenadaZ() << ")" << endl;
	b1.coger();
	if(b1.tieneobjeto()==true){
		cout<< "tengo objeto" << endl;
	}else{
		cout << "No tengo objeto"<< endl;
	}
	return 0;



}
