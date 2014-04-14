// Filename:
// Author:
// ID:
// Version:
// Date: 
// Description:




#include "dataCon.cpp"
#include "SSK.h"
#include "SSB.h"
#include "vessel.h"

int main(int argc, char **argv)

{	
	
	DataCon<Vessel> sub1;
	
	
	sub1.addSSB("katak",2,3,4,5,6,7,8,9,10,11,12);
	sub1.addSSK("hello",2,3,4,5,6,7,8,9,10,11,12);
	sub1.addSSK("jeng",2,3,4,5,6,7,8,9,10,11,12);
	sub1.addSSK("apo",2,3,4,5,6,7,8,9,10,11,12);
	sub1.addTanker("tangki",2,3,4,5,7,8,9,0,12,13);
	sub1.addLanding("landing",2,3,4,5,6,7,8,9,10,11,12);

	sub1.showVessel();
	//sub1.bubbleSort();
	sub1.save();
	

	

		
	
	
	return 0;
} 