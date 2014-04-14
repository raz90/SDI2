// Filename:
// Author:
// ID:
// Version:
// Date: 
// Description:

#include "dataCon.h"
#include "SSK.h"
#include "SSB.h"
#include "vessel.h"
#include "tanker.h"
#include "landingPlatformDock.h"
#include <iostream>
#include "list.h"
#include <string>



template <class anyType>
DataCon<anyType>::DataCon()
{
_count=0;

}
template <class anyType>
DataCon<anyType>::~DataCon()
{

}



template <class anyType>
void DataCon<anyType>::addSSK(std::string pVesselName,
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
		unsigned int pNoTorpedo)
{
	std::cout<<"adding Submarine SSK"<<std::endl;
	SSK *data=new SSK( pVesselName,
						 pSignature,
						 pLength, 
						 pMaxRange, 
						 pMaxSpeed, 
						 pMaxDisp, 
						 pCrew,
						 pVessType,
						 pMaxDive,
						 pMaxSpeedSubmerge,
						 pDispSubmerge,
						 pNoTorpedo);
	_dataList.addToList(data);
	_count++;
	std::cout<<"input succesful"<<std::endl;
	std::cout<<getCount()<<std::endl;


	
	

}


template <class anyType>
void DataCon<anyType>::addSSB(std::string pVesselName,
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
		unsigned int pTotalSLBM)
{
	


	std::cout<<"adding Submarine SSB"<<std::endl;
	SSB *data=new SSB(pVesselName,
						 pSignature,
						 pLength, 
						 pMaxRange, 
						 pMaxSpeed, 
						 pMaxDisp, 
						 pCrew,
						 pVessType,
						 pMaxDive,
						 pMaxSpeedSubmerge,
						 pDispSubmerge,
						 pTotalSLBM);
	
	_dataList.addToList(data);
	_count++;
	std::cout<<"input succesful"<<std::endl;
	std::cout<<getCount()<<std::endl;

	

}

template <class anyType>
void DataCon<anyType>::addTanker(std::string pVesselName,
		unsigned int pSignature,
		unsigned int pLength, 
		unsigned int pMaxRange, 
		unsigned int pMaxSpeed, 
		unsigned int pMaxDisp, 
		unsigned int pCrew,
		unsigned int pType,
		unsigned int pNoOfHelicopter,
		unsigned int pDeckSpace,
		unsigned int pStorageCapacity)
{
	std::cout<<"adding Tanker"<<std::endl;
	Tanker *data=new Tanker( pVesselName,
							 pSignature,
							 pLength, 
							 pMaxRange, 
							 pMaxSpeed, 
							 pMaxDisp, 
							 pCrew,
							 pType,
							 pNoOfHelicopter,
							 pDeckSpace,
							 pStorageCapacity);
	
	_dataList.addToList(data);
	_count++;
	std::cout<<"input succesful"<<std::endl;
	std::cout<<getCount()<<std::endl;




}

template <class anyType>
void DataCon<anyType>::addLanding(std::string pVesselName,
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
								unsigned int pNoOfAircraft)
{
	std::cout<<"adding Landing Platform Dock"<<std::endl;
	LandingPlatformDock *data=new LandingPlatformDock( pVesselName,
							 pSignature,
							 pLength, 
							 pMaxRange, 
							 pMaxSpeed, 
							 pMaxDisp, 
							 pCrew,
							 pType,
							 pNoOfHelicopter,
							 pDeckSpace,
							 pStorageCapacity,
							 pNoOfAircraft);
	
	_dataList.addToList(data);
	_count++;
	std::cout<<"input succesful"<<std::endl;
	std::cout<<getCount()<<std::endl;

}




template <class anyType>
void DataCon<anyType>::showVessel()
{
	LnNode<anyType> *current = NULL;
	current =_dataList.getBegin();	// Set current to head of list
	anyType *data;
	
	while (current != NULL)
	{
		data = current->getData();
		data->display();
		current = current->getNextNode();		//Get next node
	}	

}


template<class anyType>
void DataCon<anyType>::deleteVessel(std::string pID)
{
	
	_dataList.find(pID);
	_dataList.deleteCurrent();
	std::cout<<"delete Succesfull"<<std::endl;
	


}



template <class anyType>
void DataCon<anyType>::findVessel(std::string pID)
{
	anyType *data;
	_dataList.find(pID);
	data=_dataList.getCurrent();
	data->display();

}







template <class anyType> 
void DataCon<anyType>::save()
{
	LnNode<anyType> *current = NULL;
	current =_dataList.getBegin();	// Set current to head of list
	anyType *data;
	
	while (current != NULL)
	{
		data = current->getData();
		data->save();
		current = current->getNextNode();		//Get next node
	}	



}

template <class anyType> 
int DataCon<anyType>::getCount()
{

	return _count;
}

/*
template <class anyType> 
void DataCon<anyType>::bubbleSort()
{
     bool swapped = true;
      int j = 0;
      anyType tmp;

      while (swapped) 
	  {
            swapped = false;
            j++;
            for (int i = 0; i < _count - j; i++) 
			{
				if (_dataList.getVesselName() > _dataList[i + 1].getVesselName()) 
				  {
                        tmp = _dataStore[i];
						_dataList[i] = _dataList[i + 1];
                        _dataList[i + 1] = tmp;
						
                        swapped = true;
                  }
            }
      }
}
*/