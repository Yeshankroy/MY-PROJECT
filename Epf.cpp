#include<iostream>
#include<fstream>
#include<cctype> 
#include<iomanip>
#include<ctime>
#include<string>
 #include<cstring>
using namespace std;

class employee
{
long int adno; char name[50];
 int deposit;
char mobile [10]; 
int salary;
int joiningdate,joiningmonth,joiningyear; 
int pf=0;
long int total; 
int timeperiod ;
char company[50]; 
char address[70];
int currentyear,currentmonth,currentdate;
 int totalyear,mon,pfd,totalpf;
int pff;
 int f;
public: employee()
{
f=0;
}
void create_account();
void create_pff();
void show_account() const;
void modify();
void dep(int); 
void draw(int);
void report() const; 
int retacno() const; int retdeposit() const;
void providentfund(int) ; 
void write_account(); 
void display_sp(int);
void modify_account(int); 
void delete_account(int); 
void display_all();
void deposit_withdraw(int, int); 
void tp(int,int);
void add_account(); 
void reportpff() const; 
void display_pff(int n); 
void show_pff( ) const ;
};


void employee::create_account()
{
cout<<"\nEnter The adhar No. :"; 
cin>>adno;
do
{
cout<<"\n\nEnter The Name : "; 
cin.ignore();
cin.getline(name,50); f=0;
for(int i=0;name[i]!=NULL;i++)
{
if(!isalpha(name[i]))
{
f=1;
break;
}
else f=0;
}
}
while(f==1); do
{
cout<<"\nEnter The mobile No. :"; 
cin>>mobile; if(strlen(mobile)==10)
{
cout<<"verified"<<endl; f=1;
}
else
{cout<<"not verified"<<endl; f=0;
}
}while(f==0);
cout<<"\nEnter The salary No. :"; cin>>salary;
do{
cout<<"\nEnter The joining date No. :"; 
cin>>joiningdate ;
if(joiningdate>0 && joiningdate<=31)
{cout<<" verified"; f=1;
}
else
{
cout<<" not verified"; f=0;
}
}while(f==0); do
{
cout<<"\nEnter The joining mon No. :"; 
cin>>joiningmonth ;
if (joiningmonth>0  && joiningmonth <= 12)
{ 
      cout <<" verified"; f=1;
}
else
{ 
      cout<<" not verified"; f=0;
}
}while(f==0);
 do{
      cout<<"\nEnter The joining year No. :"; cin>>joiningyear ;

if(joiningyear>1600 && joiningyear <= 2025)
{ 
      cout<<"verified"; f=1;
} 
else{ cout<< "not valid"; f=0;}
}
while(f==0);
do
{
cout<<"\nEnter The company No. :";
cin.ignore(); 
cin.getline(company,50); 
f=0;
for(int i=0;company[i]!=NULL;i++)
{
if(!isalpha(company[i]))
{
f=1;
break;
}
else f=0;
}
}
while(f==1); do
{
cout<<"\nEnter The address :"; 
cin.getline(address,70);
f=0;
for(int i=0;address[i]!=NULL;i++)
{
if(!isalpha(address[i]))
{
f=1;
break;
}
else f=0;
}
}
while(f==1);


cout<<"\nEnter The Initial amount : "; 
cin>>deposit;

providentfund(salary); tp(pf,joiningyear); 
cout<<"\n\n\nAccount Created..";
}
void employee::show_account( ) const
{
static int pff=500; 
cout<<"\nAdhar No. : "<<adno; cout<<"\n Name : "; 
cout<<name;
cout<<"\nmobile No. : "<<mobile; cout<<"\ncompany. : "<<company; cout<<"\njoining date : "<<joiningdate; cout<<"\nAddress. : "<<address; cout<<"\nsalary. : "<<salary; cout<<"\nBalance amount : "<<deposit; cout<<"\npf :"<<pf;
pff++; cout<<"pff"<<pff;
}
void employee::modify()
{
cout<<"\nAdhar No. : "<<adno; cout<<"\nModify Name : "; 
cin.ignore(); cin.getline(name,50);
cout<<"\nModify Balance amount : "; 
cin>>deposit;
cout<<"\nModify mobile : ";
 cin>>mobile;
cout<<"\nModify joining date : ";
 cin>>joiningdate;
cout<<"\nEnter The joining mon No. :"; 
cin>>joiningmonth ;
cout<<"\nEnter The joining year No. :"; 
cin>>joiningyear ;
cout<<"\nModify salary : "; 
cin>>salary;
cout<<"\nModify company : "; 
cin.getline(company,60); cout<<"\nModify address : "; 
cin.getline(address,70);

}
void employee::dep(int x)
{
deposit+=x;
}


void employee::draw(int x)
{
deposit-=x;
}
void employee::report() const
{
cout<<adno<<setw(10)<<" "<<name<<setw(10)<<" "<<deposit<<endl;
}


void employee::reportpff() const
{
cout<<adno<<""<<setw(10)<<" "<<name<<setw(10)<<" "<<deposit<<endl;
}
int employee::retacno() const
{
return adno;
}
int employee::retdeposit() const
{
return deposit;
}
void employee::providentfund(int s)
{
pf = (salary/100)*25;
cout<<"\n\npf= "<<pf<<endl;


}
void employee::tp(int b ,int c)
{
cout<<"\nAdhar No. : "<<adno; cout<<"\n Name : "; 
cout<<name;
cout<<"\njoining date : "<<joiningdate; cout<<"\nsalary. : "<<salary; 
cout<<"\npf :"<<pf;
time_t ttime = time(0);
tm *local_time = localtime(&ttime); currentyear = 1900 + local_time->tm_year ; 
currentmonth= 1 + local_time->tm_mon; currentdate= local_time->tm_mday ; 
joiningyear=c;
totalyear=currentyear-joiningyear; 
mon=totalyear*12+currentmonth; 
cout<<"\n\n\ntotal month = "<<mon; pfd=b;
totalpf=mon*pfd;
cout<<"\n\n total providentfund = "<<totalpf; 
cout<<"\n\ncurrentdate = "<<currentdate;
cout<<"\n\ncurrentyear = "<<currentyear; 
cout<<"\n\ncurrentmonth = "<<currentmonth; 
cout<<"\n\ntotalyear = "<<totalyear;
}
void employee::show_pff( ) const
{ 
cout<<"\nAdhar No. : "<<adno; 
cout<<"\n Name : "; 
cout<<name;
cout<<"\nmobile No. : "<<mobile; 
cout<<"\ncompany. : "<<company; 
cout<<"\njoining date : "<<joiningdate;
cout<<"\nAddress. : "<<address; 
cout<<"\nsalary. : "<<salary; 
cout<<"\nBalance amount : "<<deposit; 
cout<<"\npf :"<<pf;
cout<<"\n\n total providentfund = "<<totalpf; 
cout<<"\n\ncurrentdate = "<<currentdate; 
cout<<"\n\ncurrentyear = "<<currentyear;
cout<<"\n\ncurrentmonth = "<<currentmonth; 
cout<<"\n\ntotalyear = "<<totalyear;
}
void employee::create_pff()
{
static int pff=500;
cout<<"\nEnter The adhar No. :"; 
cin>>adno;
do
{
cout<<"\n\nEnter The Name : "; 
cin.ignore();
cin.getline(name,50); f=0;
for(int i=0;name[i]!=NULL;i++)
{
if(!isalpha(name[i]))
{
f=1;
break;
}
else f=0;
}
}
while(f==1);
cout<<"\nEnter The salary No. :"; 
cin>>salary;
cout<<"\nEnter The joining date No. :"; 
cin>>joiningdate ;
cout<<"\nEnter The joining year. :"; 
cin>>joiningyear ;
cout<<"pff no "<<pff; pff++;
cout<<"\n\n\nAccount Created.."; providentfund(salary); 
tp(pf,joiningyear);
}



void employee::write_account()
{
employee ad; ofstream outFile;
outFile.open("employee.txt",ios::binary|ios::app); 
ad.create_account();
outFile.write(reinterpret_cast<char *> (&ad), sizeof(employee));
 outFile.close();
}


void employee::add_account()
{
employee ad; ofstream outFile;
outFile.open("pff.txt",ios::binary|ios::app);
 ad.create_pff() ;
outFile.write(reinterpret_cast<char *> (&ad), sizeof(employee));
 outFile.close();
}
void employee:: display_pff(int n)
{
employee ad; bool flag=false; ifstream inFile;
inFile.open("pff.txt",ios::binary); if(!inFile) {
cout<<"File could not be open !! Press any Key..."; return;
}
cout<<"\nBALANCE DETAILS\n";
while(inFile.read(reinterpret_cast<char *> (&ad), sizeof(employee))) { if(ad.retacno()==n) {
ad.show_pff( ) ; 
flag=true;
}
}
inFile.close(); if(flag==false)
cout<<"\n\nAdhar number does not exist";
}
void employee:: display_sp(int n)
{
employee ad; bool flag=false; ifstream inFile;
inFile.open("employee.txt",ios::binary); if(!inFile) {
cout<<"File could not be open !! Press any Key..."; 
return;
}
cout<<"\nBALANCE DETAILS\n";


while(inFile.read(reinterpret_cast<char *> (&ad), sizeof(employee))) { 
      if(ad.retacno()==n) {
ad.show_account( ); flag=true;
}
}
inFile.close(); if(flag==false)
cout<<"\n\nAdhar number does not exist";
}
void employee::modify_account(int n)
{
bool found=false; employee ad; fstream File;
File.open("employee.txt",ios::binary|ios::in|ios::out); 
if(!File) {
cout<<"File could not be open !! Press any Key...";
 return;
}
while(!File.eof() && found==false) { File.read(reinterpret_cast<char *> (&ad), sizeof(employee)); 
if(ad.retacno()==n) {
ad.show_account();
cout<<"\n\nEnter The New Details of account"<<endl; ad.modify();
int pos=(-1)*static_cast<int>(sizeof(employee)); File.seekp(pos,ios::cur);
File.write(reinterpret_cast<char *> (&ad), sizeof(employee)); cout<<"\n\n\t Record Updated";
found=true;
}
}
File.close(); 
if(found==false)
cout<<"\n\n Record Not Found ";
}
void employee:: delete_account(int n)
{
employee ad; ifstream inFile; ofstream outFile;
inFile.open("employee.txt",ios::binary); 
if(!inFile) {
cout<<"File could not be open !! Press any Key..."; return;
}
outFile.open("Temp.dat",ios::binary); inFile.seekg(0,ios::beg);
while(inFile.read(reinterpret_cast<char *> (&ad), sizeof(employee))) { 
      if(ad.retacno()!=n) {
outFile.write(reinterpret_cast<char *> (&ad), sizeof(employee));
}
}
inFile.close(); outFile.close(); remove("employee.dat");
rename("Temp.txt","employee.txt"); cout<<"\n\n\tRecord Deleted ..";
}
void employee::display_all()
{
employee ad; ifstream inFile;
inFile.open("employee.txt",ios::binary); 
if(!inFile) {
cout<<"File could not be open !! Press any Key..."; 
return;
}
cout<<"\n\n\t\tACCOUNT HOLDER LIST\n\n"; cout<<"====================================================\n";
cout<<"A/c no.	NAME	deposit	\n"; cout<<"====================================================\n";
while(inFile.read(reinterpret_cast<char *> (&ad), sizeof(employee))) {
ad.report();
}
inFile.close();
}
void employee:: deposit_withdraw(int n, int option)
{
int amt;
bool found=false; employee ad; fstream File;
File.open("employee.txt", ios::binary|ios::in|ios::out); if(!File)
{
cout<<"File could not be open !! Press any Key..."; 
return;
}
while(!File.eof() && found==false)
{
File.read(reinterpret_cast<char *> (&ad), sizeof(employee)); if(ad.retacno()==n)
{
ad.show_account(); if(option==1)
{
cout<<"\n\n\tTO DEPOSITE AMOUNT "; cout<<"\n\nEnter The amount to be deposited";
 cin>>amt;
ad.dep(amt);
}
if(option==2)
{
cout<<"\n\n\tTO WITHDRAW AMOUNT "; cout<<"\n\nEnter The amount to be withdraw"; 
cin>>amt;
int bal=ad.retdeposit()-amt;










}
}
File.close();
ad.draw(amt);
}
int pos=(-1)*static_cast<int>(sizeof(ad)); File.seekp(pos,ios::cur);
File.write(reinterpret_cast<char *> (&ad), sizeof(employee)); cout<<"\n\n\t Record Updated";
found=true;
if(found==false)
cout<<"\n\n Record Not Found ";
}
int main()
{
employee e; char ch;
int num, jo,cu ; char pd[8]; char c,i;


do {
    cout << "\n\t\t\t -------------------------------------------";
    cout << "\n\t\t\t||  WELCOME TO EMPLOYEE PROVISION FUNDS  ||";
    cout << "\n\t\t\t -------------------------------------------";
     cout << "\n\t\t\t -------------------------------------------";
    cout << "\n\t\t\t             ||  ADMIN LOGIN ||";
    cout << "\n\t\t\t -------------------------------------------"<<endl<<endl;
     cout<<"\n\t\t\t\tpassword  :- ";
cin>>pd; if(strcmp(pd,"*****")==0)
{cout<<" Admin verified"; break;
}
else
{
      cout<<"admin not verified "<<endl;

cout<<" wish to login again "<<endl; cout<<"y/ n "<<endl;
cin>>c;
}
}while(c=='y'); 
do
{
cout<<"\n\n\n\tMAIN MENU"; 
cout<<"\n\n\t01. NEW ACCOUNT"; 
cout<<"\n\n\t02. DEPOSIT AMOUNT"; 
cout<<"\n\n\t03. WITHDRAW AMOUNT"; 
cout<<"\n\n\t04. BALANCE ENQUIRY";
cout<<"\n\n\t05. ALL ACCOUNT HOLDER LIST";
cout<<"\n\n\t06. CLOSE AN ACCOUNT"; 
cout<<"\n\n\t07. MODIFY AN ACCOUNT"; 
cout<<"\n\n\t08. WRITE IN PFF "; 
cout<<"\n\n\t09.DISPLAY PFF "; 
cout<<"\n\n\tSelect Your Option (1-9) "; 
cin>>ch;
switch(ch) { case '1':
e.write_account(); break;
case '2':
cout<<"\n\n\tEnter The adhar No. : "; 
cin>>num;
e.deposit_withdraw(num, 1);


break; case '3':
cout<<"\n\n\tEnter The adhar No. : ";
 cin>>num;
e.deposit_withdraw(num, 2);


break; case '4':
cout<<"\n\n\tEnter The adhar No. : ";
cin>>num; e.display_sp(num);

break; case '5':
e.display_all();


break; case '6':
cout<<"\n\n\tEnter The adhar No. : "; 
cin>>num;
e.delete_account(num);


break; case '7':
cout<<"\n\n\tEnter The adhar No. : "; 
cin>>num;
e.modify_account(num);


break; case '8':

e.add_account(); break;
case'9':


cout<<"\n\n\tEnter The adhar No. : "; 
cin>>num;
e.display_pff(num); break;

default :cout<<"\a";
}
cin.ignore();
cin.get();


}while(ch!='9');




return 0;
}