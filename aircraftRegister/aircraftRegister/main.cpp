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
	
	
	sub1.addSSB();
	sub1.addSSK();
	
	sub1.showVessel();
	//sub1.bubbleSort();
	

	

		
	
	
	return 0;
} 