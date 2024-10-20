#include <iostream>
#include<conio.h>
using namespace std;
void header();
int checkoption( int option);
int checkoption1();
main()
{             
  system("color 02");
int option;
header();
  cout<<"                           WELL COME TO STEP IN SCHOOL SYSTEM.        "<<endl;
cout<<"1.ADMISSION PORTAL."<<endl;
cout<<"2.FEE STRUCTURE."<<endl;
cout<<"3.FACILITES OF STUDENTS."<<endl;
cout<<"4.FACULTY OF SCHOOL."<<endl;
cout<<"5.TIME TABLE ."<<endl;
cout<<"6.FOR MORE DETAIL."<<endl;
cout<<"Select one of the following options marks:";
cin>>option;
checkoption( option);
while(true){
checkoption1();
}
}
void header()
{
cout<<"  #######################################################################################  "<<endl;               
cout<<"  #      ******************     STEP IN SCHOOL SYSTEM    **********************         #  "<<endl;
cout<<"  #      ******************                              **********************         #  "<<endl;
cout<<"  #######################################################################################  "<<endl; 
}
int checkoption1()
{ 
  int option;
if(option==1)
{  
    string name,f_name,city,address;
 cout<<"             Enter the  sutudent detail:       ";
 cout<<"\nEnter your name:";
 cin>>name;
 cout<<"Enter your father name: "<<endl;
 cin>>f_name;
 cout<<"Enter your city:"<<endl;
 cin>>city;
 cout<<"Enter your address:"<<endl; 
  cin>>address;
  cout<<"wll come to our school .You are registedered in our students data. your addmission confirmatin will be inform to you. ";
}
}
int checkoption( int option)
{
if(option==2)
{ 
    cout<<"The fee structure is: "<<endl;
    cout<<"Nursury to primary=1000"<<endl;
    cout<<"Primary to middle=2000-30000"<<endl;
}
if(option==3)
{ cout<<"Free water"<<endl;
  cout<<"Free books"<<endl;
  cout<<"Air conditoned rooms"<<endl;
  cout<<"School bus and other services: "<<endl;
}
if(option==4)
{ cout<<"1.sir Abdul saboor shb"<<endl;
  cout<<"2.Sir Abdul Razaq shb"<<endl;
  cout<<"3.Sir Mudasir shb"<<endl;
  cout<<"4.sir Zubair shb"<<endl;
}
if(option==5)
{cout<<"8:00 - 12:00"<<endl;
}
if(option==6)
{cout<<"for more detail please contact us at our number:03186712533 and email: stepinschool@gmail.com";}
}
