// Filename:
// Author:
// ID:
// Version:
// Date: 
// Description:
#include<iostream>
using namespace std;
#include "dataCon.cpp"
#include "../header/SSK.h"
#include "../header/SSB.h"
#include "../header/vessel.h"

void menu();
void addVessel();

int main(int argc, char **argv)
{	
	int choice;

	DataCon<Vessel> sub1;

	do
	{
		menu();
		cout<<"Option: ";
		cin>>choice;
		cout<<endl;
		

		if (choice==0)
		{
			cout<<"Good Bye Exiting.."<<endl;
		}
		if (choice==1)
		{
			addVessel();
		}
		if (choice==2)
		{
			sub1.deleteVessel("katak");
		}
		if (choice==3)
		{
			sub1.findVessel("katak");
		}
		if (choice==4)
		{
			sub1.load("savefile.txt");
		}
		if (choice==5)
		{
			sub1.save();
		}
		if (choice==6)
		{
			sub1.showVessel();
		}
		if (choice==7)
		{
			sub1.observe();
		}

	}while(choice!=0);


	
	
	//sub1.addSSB("katak",10,3,4,5,6,7,9,10,11,12);
	//sub1.addSSK("hello",40,3,4,5,6,7,9,10,11,12);
	//sub1.addSSK("10",1,3,4,5,6,7,9,10,11,12);
	//sub1.addSSK("apo",2,3,4,5,6,7,9,10,11,12);
	//sub1.addTanker("tangki",2,3,4,5,7,8,0,12,13);
	//sub1.addLanding("landing",2,3,4,5,6,5,9,10,11,12);
	//sub1.addAirCarrier("carry",2,3,4,5,6,7,9,0);
	//sub1.addDestroyer("destroy",2,3,4,5,6,7,9,10);
	
	//sub1.observe();
	//sub1.showVessel();
	//sub1.deleteVessel("katak");
	//sub1.findVessel("katak");
	//sub1.deleteVessel("katak");
	//sub1.bubbleSort();
	//sub1.showVessel();
	//sub1.save();
	//sub1.load("savefile.txt");
	//sub1.load("savefile.txt");
	//sub1.showVessel();
	
	return 0;
} 

void menu()
{
	cout<<"Welcome to the Military Vesels automated identification system"<<endl;
		cout<<"***************************************************************"<<endl;
		cout<<"MENU"<<endl;
		cout<<"1. Add Vessel"<<endl;
		cout<<"2. Delete Vessel"<<endl;
		cout<<"3. Search Vessel"<<endl;
		cout<<"4. Load"<<endl;
		cout<<"5. Save"<<endl;
		cout<<"6. Browse"<<endl;
		cout<<"7. Observe"<<endl;
		cout<<"0. Exit"<<endl;
}

void addVessel()
{
	cout<<"Chose Vessel type to add"<<endl;
	cout<<"_________________________"<<endl;
	cout<<"1. Add SSK"<<endl;
	cout<<"2. Add SSB"<<endl;
	cout<<"3. Add Tanker"<<endl;
	cout<<"4. Add Landing Platform Dock"<<endl;
	cout<<"5. Add Aircraft Carrier"<<endl;
	cout<<"6. Add Destroyer"<<endl;
	cout<<"Option: "<<endl;
}

