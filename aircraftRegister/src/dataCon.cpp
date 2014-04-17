// Filename:
// Author:
// ID:
// Version:
// Date: 
// Description:

#include "../header/dataCon.h"
#include "../header/SSK.h"
#include "../header/SSB.h"
#include "../header/vessel.h"
#include "../header/tanker.h"
#include "../header/landingPlatformDock.h"
#include "../header/destroyer.h"
#include "../header/aircraftCarrier.h"
#include <iostream>
#include "../header/list.h"
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <cstdlib>





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
void DataCon<anyType>::addDestroyer(std::string pVesselName,
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
	std::cout<<"adding Destroyer"<<std::endl;
	Destroyer *data=new Destroyer( pVesselName,
							 pSignature,
							 pLength, 
							 pMaxRange, 
							 pMaxSpeed, 
							 pMaxDisp, 
							 pCrew,
							 pType,
							 pNoOfHelicopter,
							 pPrimaryWeapon);
	
	_dataList.addToList(data);
	_count++;
	std::cout<<"input succesful"<<std::endl;
	std::cout<<getCount()<<std::endl;

}


template <class anyType>
void DataCon<anyType>::addAirCarrier(std::string pVesselName,
								unsigned int pSignature,
								unsigned int pLength, 
								unsigned int pMaxRange, 
								unsigned int pMaxSpeed, 
								unsigned int pMaxDisp, 
								unsigned int pCrew,
								unsigned int pType,
								unsigned int pNoOfHelicopter,
								unsigned int pNoOfAircraft)

{
	std::cout<<"adding Destroyer"<<std::endl;
	AircraftCarrier *data=new AircraftCarrier( pVesselName,
							 pSignature,
							 pLength, 
							 pMaxRange, 
							 pMaxSpeed, 
							 pMaxDisp, 
							 pCrew,
							 pType,
							 pNoOfHelicopter,
							 pNoOfAircraft);
	
	_dataList.addToList(data);
	_count++;
	std::cout<<"input succesful"<<std::endl;
	std::cout<<getCount()<<std::endl;

}




template <class anyType>
void DataCon<anyType>::showVessel()
{
	if (getCount()>0)
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
	else
	{
	std::cout<<"no data inside "<<std::endl;
	}

}


template<class anyType>
void DataCon<anyType>::deleteVessel(std::string pID)
{
	if (getCount()>0)
	{
		_dataList.find(pID);
		_dataList.deleteCurrent();
		std::cout<<"delete Succesfull"<<std::endl;
		_count--;
	}
	else
	{
	std::cout<<"no data inside"<<std::endl;
	}


	

}



template <class anyType>
void DataCon<anyType>::findVessel(std::string pID)
{
	if (getCount()>0)
	{
			anyType *data;
			_dataList.find(pID);
			data=_dataList.getCurrent();
			if (data!=NULL)
			{
			data->display();
			}
			else
			{
			std::cout<<"data not found"<<std::endl;
			}
	}
	else
	{
	std::cout<<"no data inside"<<std::endl;
	}

}







template <class anyType> 
void DataCon<anyType>::save()
{
	if (getCount()>0)
	{
			LnNode<anyType> *current = NULL;
			current =_dataList.getBegin();	// Set current to head of list
			anyType *data;

			

			std::ofstream file;
			file.open("savefile.txt",std::ios::trunc);
			file<<"";
			file.close();
	
			while (current != NULL)
			{
				data = current->getData();
				data->save();
				current = current->getNextNode();		//Get next node
			}

			
			
	}
	else
	{
	std::cout<<"no data inside"<<std::endl;
	}


}

template <class anyType> 
int DataCon<anyType>::getCount()
{

	return _count;
}


template <class anyType> 
 void DataCon<anyType>::load(std::string filename)
{
	  
	std::vector <std::string> vectline;
	std::string line;
	std::ifstream myfile (filename.c_str());
	
			if(myfile.is_open())
			{ 
			
				while (!myfile.eof())
				{
				myfile>>line;
				
				
				vectline.push_back(line);
				
				
				}
				myfile.close();
			}

	for (int start=0;start<vectline.size()-1;start++)
	{
	std::string sentence;
	sentence=vectline[start];

	std::string gpmcheck=sentence;	
	std::size_t found=gpmcheck.find_first_of(',');
	std::string check;
	if (found!=std::string::npos)
	for (unsigned int i=0; i<found;++i)
					{
						
						check=check+gpmcheck[i];
						
					}
		
		
					
		if (check=="$1")
		{
					std::string pVesselName;
					std::string pSignature,pLength,pMaxRange,
					pMaxSpeed,pMaxDisp,pCrew,pVessType,pMaxDive,pMaxSpeedSubmerge,
					pDispSubmerge,pTotalSLBM;
					
					std::string line=sentence;
					
					for (unsigned int i=0; i<line.size();++i)
							{
								if (line[i]==','||line[i]=='$')
								{
								line[i]=' ';
								}
								std::istringstream in(line);
								
								in>>pVessType>>pSignature>>pVesselName>>pLength
								>>pMaxRange>>pMaxSpeed>>pMaxDisp>>pCrew>>pMaxDive
							    >>pMaxSpeedSubmerge>>pDispSubmerge>>pTotalSLBM;
					
								
							}

					
					
			unsigned int	Signature=std::stoul(pSignature);
			unsigned int	Length=std::stoul(pLength);
			unsigned int	MaxRange=std::stoul(pMaxRange);
			unsigned int	MaxSpeed=std::stoul(pMaxSpeed);
			unsigned int	MaxDisp=std::stoul(pMaxDisp);
			unsigned int	Crew=std::stoul(pCrew);
			unsigned int	VessType=std::stoul(pVessType);
			unsigned int	MaxDive=std::stoul(pMaxDive);
			unsigned int	MaxSpeedSubmerge=std::stoul(pMaxSpeedSubmerge);
			unsigned int	DispSubmerge=std::stoul(pDispSubmerge);
			unsigned int	TotalSLBM=std::stoul(pTotalSLBM);

			DataCon::addSSB(pVesselName,
						 Signature,
						 Length, 
						 MaxRange, 
						 MaxSpeed, 
						 MaxDisp, 
						 Crew,
						 VessType,
						 MaxDive,
						 MaxSpeedSubmerge,
						 DispSubmerge,
						 TotalSLBM);	
			
		}
		else if (check=="$2")
		{
					std::string pVesselName;
					std::string pSignature,pLength,pMaxRange,
					pMaxSpeed,pMaxDisp,pCrew,pVessType,pMaxDive,pMaxSpeedSubmerge,
					pDispSubmerge,pTorpedo;
					
					std::string line=sentence;
					
					for (unsigned int i=0; i<line.size();++i)
							{
								if (line[i]==','||line[i]=='$')
								{
								line[i]=' ';
								}
								std::istringstream in(line);
								
								in>>pVessType>>pSignature>>pVesselName>>pLength
								>>pMaxRange>>pMaxSpeed>>pMaxDisp>>pCrew>>pMaxDive
							    >>pMaxSpeedSubmerge>>pDispSubmerge>>pTorpedo;
					
								
							}

					
					
			unsigned int	Signature=std::stoul(pSignature);
			unsigned int	Length=std::stoul(pLength);
			unsigned int	MaxRange=std::stoul(pMaxRange);
			unsigned int	MaxSpeed=std::stoul(pMaxSpeed);
			unsigned int	MaxDisp=std::stoul(pMaxDisp);
			unsigned int	Crew=std::stoul(pCrew);
			unsigned int	VessType=std::stoul(pVessType);
			unsigned int	MaxDive=std::stoul(pMaxDive);
			unsigned int	MaxSpeedSubmerge=std::stoul(pMaxSpeedSubmerge);
			unsigned int	DispSubmerge=std::stoul(pDispSubmerge);
			unsigned int	NoOfTorpedo=std::stoul(pTorpedo);

			DataCon::addSSK(pVesselName,
						 Signature,
						 Length, 
						 MaxRange, 
						 MaxSpeed, 
						 MaxDisp, 
						 Crew,
						 VessType,
						 MaxDive,
						 MaxSpeedSubmerge,
						 DispSubmerge,
						 NoOfTorpedo);	
			
		}	
	}

		std::cout<<"loaded"<<std::endl;
	
}


/*
template <class anyType> 
void DataCon<anyType>::bubbleSort()
{
      
if (getCount()>0)
{
	LnNode<anyType> *current = NULL;
	LnNode<anyType> *Next = NULL;
	current =_dataList.getBegin();	// Set current to head of list
	anyType *firstData;
	anyType *secondData;
	bool swapped = true;
	int j = 0;
	anyType *tmp;




      while (swapped) 
	  {
            swapped = false;
            j++;
            for (int i = 0; i < getCount() - j; i++) 
			{

				   
				
					firstData = current->getData();
					Next = current->getNextNode();
					if (Next!=NULL)
					{
					secondData = Next->getData();

				
						if (firstData->getSignature() > secondData->getSignature()) 
						{
							tmp = firstData;
							firstData =secondData;
							secondData = tmp;
						
							swapped = true;
							std::cout<<"swapped"<<std::endl;
						}
						current = current->getNextNode();
					}
					else
					{
					std::cout<<"sorted"<<std::endl;
					}
				}
					
				
			
	  
	   }
}
else
	{
	std::cout<<"no data inside"<<std::endl;
	}
}
*/