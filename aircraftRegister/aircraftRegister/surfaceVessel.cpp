// Filename:
// Author:
// ID:
// Version:
// Date: 
// Description:
#include "surfaceVessel.h"
#include <iostream>
using namespace std;

unsigned int _noOfHelicopter;

unsigned int getNoOfHelicopter;

//constructor
SurfaceVessel::SurfaceVessel()
{

}
SurfaceVessel::SurfaceVessel(std::string pVesselName,
						unsigned int pSignature,
						unsigned int pLength, 
						unsigned int pMaxRange, 
						unsigned int pMaxSpeed, 
						unsigned int pMaxDisp, 
						unsigned int pCrew,
						unsigned int pType,
						unsigned int pNoOfHelicopter)

{
	SetVessel( pVesselName,
		  pSignature,
		  pLength,
		  pMaxRange,
		  pMaxSpeed,
		  pMaxDisp,
		  pCrew,
		  pType);

	_noOfHelicopter;

}

//destructor
SurfaceVessel::~SurfaceVessel()
{

}


//setter
void SurfaceVessel::setSurfaceVessel(std::string pVesselName,
						unsigned int pSignature,
						unsigned int pLength, 
						unsigned int pMaxRange, 
						unsigned int pMaxSpeed, 
						unsigned int pMaxDisp, 
						unsigned int pCrew,
						unsigned int pType,
						unsigned int pNoOfHelicopter)
{
SetVessel( pVesselName,  
		  pSignature,
		  pLength,  
		  pMaxRange,  
		  pMaxSpeed,  
		  pMaxDisp, 
		  pCrew,
		  pType);

		_noOfHelicopter=pNoOfHelicopter;

}



//getter
unsigned int SurfaceVessel::getNoHelicopter()
{
		return _noOfHelicopter;

}

void SurfaceVessel::display()
{
	Vessel::display();
	cout<<"Number of Helicopters :"<< SurfaceVessel::getNoHelicopter() <<endl;

}