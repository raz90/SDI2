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
	void addSSK();

	void addSSB();
	
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