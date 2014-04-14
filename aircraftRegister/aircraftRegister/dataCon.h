#ifndef DATACON_H
#define DATACON_H
#include <string>
#include "list.cpp"


template <class anyType>
class LnLinkedList;

template <class anyType>
class DataCon
{


public:
	//constructor
	DataCon();

	//destrucotr
	~DataCon();
	
	//insert data
	void addSSK(std::string pVesselName,
		unsigned int pSignature,
		unsigned int pLength, 
		unsigned int pMaxRange, 
		unsigned int pMaxSpeed, 
		unsigned int pMaxDisp, 
		unsigned int pCrew,
		unsigned int pVessType,
		unsigned int pMaxDive,
		unsigned int pMaxSpeedSubmerge,
		unsigned int pDispSubmerge,
		unsigned int pNoTorpedo);

	void addSSB(std::string pVesselName,
		unsigned int pSignature,
		unsigned int pLength, 
		unsigned int pMaxRange, 
		unsigned int pMaxSpeed, 
		unsigned int pMaxDisp, 
		unsigned int pCrew,
		unsigned int pVessType,
		unsigned int pMaxDive,
		unsigned int pMaxSpeedSubmerge,
		unsigned int pDispSubmerge,
		unsigned int pTotalSLBM);

	void addTanker(std::string pVesselName,
		unsigned int pSignature,
		unsigned int pLength, 
		unsigned int pMaxRange, 
		unsigned int pMaxSpeed, 
		unsigned int pMaxDisp, 
		unsigned int pCrew,
		unsigned int pType,
		unsigned int pNoOfHelicopter,
		unsigned int pDeckSpace,
		unsigned int pStorageCapacity);

	void addLanding(std::string pVesselName,
								unsigned int pSignature,
								unsigned int pLength, 
								unsigned int pMaxRange, 
								unsigned int pMaxSpeed, 
								unsigned int pMaxDisp, 
								unsigned int pCrew,
								unsigned int pType,
								unsigned int pNoOfHelicopter,
								unsigned int pDeckSpace,
								unsigned int pStorageCapacity,
								unsigned int pNoOfAircraft);

	void addDestroyer();

	void addAirCarrier();
	
	//browsing

	void showVessel();

	//to delete data using id
	void deleteVessel(std::string pID);

	//to find data 
	void findVessel(std::string pID);

	void save();

	int getCount();

	//void bubbleSort();

	



private:
	int _count;
	
	LnLinkedList<anyType> _dataList;

};

#endif