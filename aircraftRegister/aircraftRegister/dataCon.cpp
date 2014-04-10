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
#include "submarine.h"
#include <iostream>
#include "list.h"



template <class anyType>
DataCon<anyType>::DataCon()
{
_count=0;

}
template <class anyType>
DataCon<anyType>::~DataCon()
{

}


/*
template <class anyType>
void DataCon<anyType>::addSSK()
{
	std::cout<<"adding Submarine"<<std::endl;
	SSK *data=new SSK("hello",2,3,4,5,6,7,8,9,10,11);
	
	_dataList.addToList(data);
	_count++;
	std::cout<<"input succesful"<<std::endl;
	std::cout<<getCount()<<std::endl;
	

}
*/
template <class anyType>
void DataCon<anyType>::addSSK()
{
	std::cout<<"adding Submarine SSK"<<std::endl;
	SSK *data=new SSK("1",2,3,4,5,6,7,1,8,9,10,11);
	_dataList.addToList(data);
	_count++;
	std::cout<<"input succesful"<<std::endl;
	std::cout<<getCount()<<std::endl;


	
	

}


template <class anyType>
void DataCon<anyType>::addSSB()
{
	


	std::cout<<"adding Submarine SSB"<<std::endl;
	SSB *data2=new SSB("katak",2,3,4,5,6,7,2,8,9,10,11);
	
	_dataList.addToList(data2);
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