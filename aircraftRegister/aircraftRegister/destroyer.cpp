// Filename:
// Author:
// ID:
// Version:
// Date: 
// Description:
#include "destroyer.h"
#include <iostream>
using namespace std;

unsigned int _primaryWeapon;

unsigned int getPrimaryWeapon();

Destroyer::Destroyer()
{

}

Destroyer::Destroyer(std::string pVesselName,
								unsigned int pSignature,
								unsigned int pLength, 
								unsigned int pMaxRange, 
								unsigned int pMaxSpeed, 
								unsigned int pMaxDisp, 
								unsigned int pCrew,
								unsigned int pType,
								unsigned int pNoOfHelicopter,
								unsigned int pPrimaryWeapon)

{
	setSurfaceVessel(pVesselName,
					 pSignature,
					 pLength, 
					 pMaxRange, 
					 pMaxSpeed, 
					 pMaxDisp, 
					 pCrew,
					 pType,
					 pPrimaryWeapon);

	_primaryWeapon=pPrimaryWeapon;

}

//destructor
Destroyer::~Destroyer()
{

}

void Destroyer::setPrimaryWeapon(int pPrimaryWeapon)
{
	_primaryWeapon=pPrimaryWeapon;

}
unsigned int Destroyer::getPrimaryWeapon()
{
	return _primaryWeapon;

}

void Destroyer::display()
{
	SurfaceVessel::display();

	cout<<" Primary Weapon :"<< Destroyer::getPrimaryWeapon() <<endl;

}
