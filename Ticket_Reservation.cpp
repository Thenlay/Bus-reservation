#include<iostream>
using namespace std;
 
int r=0,p=0,k=20;
float TotalSale=0;
 
class bus{
char PessengerName[99];
char deprt[9];
char from[9];
char to[9];
char arriva[9];
int  Total_Seats, TotalFare;
int BusNo, DepartureTime, s;
public:
	void BusRegistration();
	void show();
	void book();
	void Exit();
 
 
}b[8];
 
void bus::BusRegistration(void)
{
	cout.setf(ios::right,ios::adjustfield);
	cout.width(5);
cout<<"\nEnter Bus No:";
cin>>BusNo;
	cout.setf(ios::right,ios::adjustfield);
	cout.width(5);
cout<<"\nFrom: ";
cin>>from;
	cout.setf(ios::right,ios::adjustfield);
	cout.width(5);
cout<<"\nTo: ";
cin>>to;
	cout.setf(ios::right,ios::adjustfield);
	cout.width(5);
cout<<"\nDeparture: ";
cin>>DepartureTime;
	cout.setf(ios::right,ios::adjustfield);
	cout.width(5);
cout<<"\nTotal seats: ";
cin>>Total_Seats;
 
p++;
cout<<"\n";
cout<<"Bus Information Added!!\n";
system("PAUSE");
system("CLS");
 
}
 
void bus::show(void)
{
	cout<<"\nTotal bus available:"<<endl;
	for(int i=0;i<p;i++)
		{	cout.setf(ios::right,ios::adjustfield);
			cout.width(5);
			cout<<"Bus No: ";
			cout<<b[i].BusNo<<endl;
			cout.setf(ios::right,ios::adjustfield);
			cout.width(5);
			cout<<"From: ";
			cout<<b[i].from<<endl;
			cout.setf(ios::right,ios::adjustfield);
			cout.width(5);
			cout<<"To: ";
			cout<<b[i].to<<endl;
			cout.setf(ios::right,ios::adjustfield);
			cout.width(5);
			cout<<"Departure: ";
			cout<<b[i].DepartureTime<<" O'clock"<<endl;
			cout.setf(ios::right,ios::adjustfield);
			cout.width(5);
			cout<<"Seats: ";
			cout<<b[i].Total_Seats<<endl<<endl<<endl;
 
		}
		system("PAUSE");
		system("CLS");
}
 
 
void bus::book(void)
{
int number;
float TotalFare;
	cout<<"\nEnter Bus No: ";
	cin>>number;
	int n;
 for(n=0;n<p;n++)
 {
	 if(b[n].BusNo==number)
	 {
		if(b[n].Total_Seats<=0)
		{
		cout<<"\tSORRY!"<<endl<<"\tNo  Seat Available\t";
		}
		else
		{
		 cout<<endl<<"Total seat available: "<<b[n].Total_Seats;
		 cout<<endl<<"Enter Passenger's Name: ";
		 cin>>PessengerName;
		 cout<<endl<<"Number of seats: ";
		 cin>>s;
		 while((b[n].Total_Seats=b[n].Total_Seats-s)<0)
			 {cout<<endl<<"Limit Exceed...Please re-enter ";
			 b[n].Total_Seats=b[n].Total_Seats+s;
				cin>>s;
 
 
		 }
 
 
cout<<endl<<"Your purchase is completed"<<endl;
cout.setf(ios::right,ios::adjustfield);
	cout.width(30);
cout<<"Bus No: ";
cout<<b[n].BusNo<<endl;
cout.setf(ios::right,ios::adjustfield);
	cout.width(30);
cout<<"From: ";
cout<<b[n].from<<" to "<<b[n].to<<endl;
cout.setf(ios::right,ios::adjustfield);
	cout.width(30);
cout<<"Departure: ";
cout<<b[n].DepartureTime<<" O'clock"<<endl;
cout.setf(ios::right,ios::adjustfield);
	cout.width(30);
cout<<"Total seat: ";
cout<<s<<endl;
TotalFare=50*s;
TotalFare=TotalFare+(TotalFare*.9);
TotalSale=TotalSale+TotalFare;
cout.setf(ios::right,ios::adjustfield);
	cout.width(30);
cout<<"Total TotalFare(with 9% gst): ";
 
cout.setf(ios::showpoint);
cout.precision(3);
cout.setf(ios::fixed,ios::floatfield);
cout.width(8);
cout<<TotalFare<<endl;
 
cout.setf(ios::right,ios::adjustfield);
	cout.width(30);
cout<<"Thank You!!!"<<endl<<endl;
 
			}
	 }
 }
system("PAUSE");
system("CLS");
 
}
 
int main()
 {
	int w,g=1;
 while(g){

 cout<<"\tBUS TICKETING SYSTEM\n";
 
 
 cout<<"\t\t 1 : BusRegistration\n\t\t 2 : List Available Bus\n\t\t 3 => Book Tickets\n\t\t 4 => Exit";
 cout<<"\n\n\t Enter your choice: ";
 cin>>w;
 switch(w){
 case 1:
	b[p].BusRegistration();
 
 break;
 case 2:
	 b[0].show();
 break;
 case 3:
	b[p].book();
 
 break;
 case 4:
	 {
g=0;
 
cout<<endl<<"Total Sales:"<<TotalSale<<endl;
break;
	 }
 }
}
return 0;
}