#include<iostream>


using namespace std;

int main()
{
	int input;
	
	int amount=0, count=0;
	int Public_Transport = 0,Car = 0,Bus = 0;
	
	//menu
	while(true){
	
	cout<<"Press 1 for Public Transport"<<endl;
	cout<<"Press 2 for Car"<<endl;
	cout<<"Press 3 for Bus"<<endl;
	cout<<"Press 4 to show the record"<<endl;
	cout<<"Press 5 to delete the record"<<endl;
	
	cin>>input;

	
	if(input ==1)
	{
		amount = amount + 100;
		count = count + 1;
		Public_Transport = Public_Transport + 1;
		cout<<"A Public Transport entered in Parking"<<endl;
	}
	else if(input==2)
	{
		amount = amount + 200;
		count = count + 1;
		Car = Car +1;
		cout<<"A Car entered in the parking"<<endl;
	}
	else if(input ==3)
	{
		amount = amount + 300;
		count = count + 1;
		Bus = Bus + 1;
		cout<<"A Bus entered in parking"<<endl;
	}
	else if(input == 4)
	{
		cout<<"The amount is = "<<amount<<endl;
		cout<<"The total number of vehicles parked = "<<count<<endl;
		cout<<"The total number of Public Transport : "<<Public_Transport<<endl;
		cout<<"The total number of Cars : "<<Car<<endl;
		cout<<"The total number of Buses : "<<Bus<<endl;
		
	}
	else if(input ==5)
	{
		amount = 0;
		count = 0;
		Public_Transport = 0;
		Car =0;
		Bus = 0;
	}
	else {
		cout<<"Invalid Number"<<endl;
	}
	
}

}
