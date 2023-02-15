	#include<iostream>
	using namespace std;
	class TravelPlan
	{
	long int nop,tc;
		public:
	        void disp()
			{
				cout<<"\t\t\t**** Welcome to TravelPlan ****\n\n\n";
				cout<<"Your Destiny are Jaipur"<<endl;
				
					}	
					void input()
					{
						cout<<"Enter Travel Code"<<endl;
						cin>>tc;
						cout<<"Enter No_of_Travellers"<<endl;
						cin>>nop;
						  if(tc==123456)
						     {
							      if(nop<20)
								  {
								  	cout<<" 1 Bus are Required";
								  }
					                  else if(nop<=39)
									  {
									  	cout<<" 2 Buses are required";
										  }	
										     else if(nop>=40)
										      {
										      	 cout<<" 3 Buses are Required";
											  }
							else
							{
								cout<<"Invalid Travel Code";
										}				
						}
				}
	};
	int main()
	{
		 TravelPlan ob;
		 ob.disp();
		 ob.input();
	}
