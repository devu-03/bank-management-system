#include<iostream>
#include<conio.h>
#include<math.h>
#include<windows.h>
using namespace std;
class Bank{
public:
 int total;
 string id;
 struct person{
 string name,ID,address;
 int contact,cash;
 char type;
}person[100];
public:
Bank(){
total=0;
}
void title();
void choice();
void perData();
void show();
void update();
void Search();
void transactions();
void del();
};
int main(){
 system("Color 0E");
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t MINOR PROJECT SEM-2 JIIT ECE  BATCH-A3"<<endl;
 cout<<"\n\n\t\t\t\t\t -------------------"<<endl;
 cout<<"\t\t\t\t\t SUBMITTED BY"<<endl;
 cout<<"\t\t\t\t\t -------------------"<<endl;
 cout<<"\t\t\t\t\t DEV_20102071 "<<endl;
 cout<<"\t\t\t\t\t ADITYA VEER_20102075 "<<endl;
 cout<<"\t\t\t\t\t -------------------"<<endl;
 Sleep(5000);
 system("cls");
for(int i=1;i<=100;++i)
 {
 system("cls");
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWELCOME TO ONLINE BANKING  SYSTEM ";
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tLOADING "<<i<<"%";  if(i==100)
 Sleep(2000);
 }
 system("cls");
Bank b;
b.choice();
return 0;
}
void Bank::title()
{
 cout<<"--------------------------------------------------------------------------------------------------"<<endl;
 cout<<"\t\t\t\t ONLINE BANKING SYSTEM "<<endl;
 cout<<"--------------------------------------------------------------------------------------------------"<<endl;
}
void Bank::choice(){
char ch;
while(1){
 Bank::title();
cout<<"\n\nPRESS..!!"<<endl;
cout<<"1. Create new account"<<endl;
cout<<"2. View customers list"<<endl;
cout<<"3. Update information of existing account"<<endl;
cout<<"4. Check the details of an existing account"<<endl;
cout<<"5. For transactions"<<endl;
cout<<"6. Remove existing account"<<endl;
cout<<"7. Exit"<<endl;
ch=getch();
system("CLS");
switch(ch){
case '1':
 Bank::title();
 Bank::perData();
system("cls");
break;
case '2':
 if(total==0){
cout<<"No data is entered"<<endl;
}else{
Bank::show();
 }
break;
case '3':
if(total==0)
cout<<"No data is entered"<<endl;
else
Bank::update();
system("cls");
break;
case '4':
 if(total==0)
cout<<"No data is entered"<<endl;
else
Bank::Search();
system("cls");
break;
case '5':
 if(total==0)
cout<<"No data is entered"<<endl;
else
Bank::transactions();
system("cls");
break;
case '6':
 if(total==0)
cout<<"No data is entered"<<endl;
else
Bank::del();
break;
case '7':
exit(0);
break;
default:
cout<<"Invalid input"<<endl;
break;
}
 }
}
void Bank::perData(){
cout<<"Enter data of person "<<total+1<<endl;
cout<<"Enter name: ";
cin>>person[total].name;
cout<<"ID: ";
cin>>person[total].ID;
cout<<"Address: ";
cin>>person[total].address;
cout<<"Total Cash: ";
cin>>person[total].cash;
cout<<"Contact: ";
cin>>person[total].contact;
cout<<"enter types s for saving and c for current:";
cin>>person[total].type;
total++;
}
void Bank::show(){
for(int i=0;i<total;i++){
cout<<"Data of person "<<i+1<<endl;
cout<<"Name: "<<person[i].name<<endl;
cout<<"ID: "<<person[i].ID<<endl;
cout<<"Address: "<<person[i].address<<endl;
cout<<"Contact: "<<person[i].contact<<endl;
cout<<"Cash: "<<person[i].cash<<endl;
cout<<"Account Type: "<<person[i].type<<endl<<endl;
}
}
void Bank::update(){
cout<<"Enter id of Consumer those data you want to update"<<endl; cin>>id;
for(int i=0;i<total;i++){
if(id==person[i].ID){
cout<<"Previous data"<<endl;
cout<<"Data of person "<<i+1<<endl;
cout<<"Name: "<<person[i].name<<endl;
cout<<"ID: "<<person[i].ID<<endl;
cout<<"Address: "<<person[i].address<<endl;
cout<<"Contact: "<<person[i].contact<<endl;
cout<<"Cash: "<<person[i].cash<<endl;
cout<<"\nEnter new data"<<endl;
cout<<"Enter name: ";
cin>>person[i].name;
cout<<"ID: ";
cin>>person[i].ID;
cout<<"Address: ";
cin>>person[i].address;
cout<<"Contact: ";
cin>>person[i].contact;
cout<<"Total Cash: ";
cin>>person[i].cash;
cout<<"enter types s for saving and c for current:";
cin>>person[i].type;
break;
}
if(i==total-1){
cout<<"No such record found"<<endl;
}
}
}
void Bank::Search(){
cout<<"Enter id of Consumer those data you want to search"<<endl; cin>>id;
for(int i=0;i<total;i++){
if(id==person[i].ID){
cout<<"Name: "<<person[i].name<<endl;
cout<<"ID: "<<person[i].ID<<endl;
cout<<"Address: "<<person[i].address<<endl;
cout<<"Contact: "<<person[i].contact<<endl;
cout<<"Cash: "<<person[i].cash<<endl;
 Sleep(3000);
break;
}
if(i==total-1){
cout<<"No such record found"<<endl;
}
}
}
void Bank::transactions(){
int cash;
char ch;
cout<<"Enter id of Consumer those data you want to transaction"<<endl;  cin>>id;
 for(int i=0;i<total;i++){
 if(id==person[i].ID){
 cout<<"Name: "<<person[i].name<<endl;
 cout<<"Address: "<<person[i].address<<endl;
 cout<<"Contact: "<<person[i].contact<<endl;
 cout<<"\nExisting Cash "<<person[i].cash<<endl;
 cout<<"\nPress 1 to deposit"<<endl;
 cout<<"Press 2 to withdraw"<<endl;
 ch=getch();
switch(ch){
 case '1':
 cout<<"How much cash you want to deposit??"<<endl;  cin>>cash;
 person[i].cash+=cash;
 cout<<"Your new cash is "<<person[i].cash<<endl;  break;
 case '2':
 back:
 cout<<"How much cash you want to withdraw??"<<endl;  cin>>cash;
 if(cash>person[i].cash){
 cout<<"Your existing cash is just"<<person[i].cash<<endl;
 Sleep(3000);
 goto back;
}
person[i].cash-=cash;
cout<<"Your new cash is "<<person[i].cash<<endl;
Sleep(3000);
break;
default:
cout<<"Invalid input"<<endl;
Sleep(3000);
break;
}
break;
}
if(i==total-1){
cout<<"No such record found"<<endl;
}
}
}
void Bank::del(){
char ch;
cout<<"Press 1 to remove specific record"<<endl;
cout<<"Press 2 to remove full record"<<endl;
ch=getch();
switch(ch){
case '1':
cout<<"Enter id of Consumer those data you want to remove"<<endl;  cin>>id;
 for(int i=0;i<total;i++){
 if(id==person[i].ID){
 for(int j=i;j<total;j++){
person[j].name=person[j+1].name;
 person[j].ID=person[j+1].ID;
 person[j].address=person[j+1].address;  person[j].contact=person[j+1].contact;  person[j].cash=person[j+1].cash;
 total--;
 cout<<"Your required data is deleted"<<endl;  break;
}
}
if(i=total-1){
cout<<"No such record found"<<endl;
}
}
break;
case '2':
total=0;
cout<<"All record is deleted"<<endl;
break;
default:
cout<<"Invalid Input"<<endl;
break;
}
}
class Saving_acct:public Bank
{
 public:
 int intr;
 void comp_intrest()
 {
 for(int i=0;i<total;i++){
 int t1,r1=10;
 intr=person[i].cash*pow(1+r1/12,t1);
 cout<<intr;
 person[i].cash+=intr;
 }
 }
 void withdraw()
 {
 for(int i=0;i<total;i++){
 int amt;
 cout<<"\nenter the amount which do you want to withdraw:";  cin>>amt;
 if(person[i].cash>amt)

 person[i].cash-=amt;
 else
 cout<<"\namount can't be withdrawn due to insufficient balance";  }
 }
};
class Current_acct:public Bank
{
 public:
 void min_bal()
 {
 for(int i=0;i<total;i++){
 if(person[i].cash<500)
 {
 cout<<"\npenality imposed: \nnew balance is:"<<person[i].cash-50;  }
 else
 {
 cout<<"\nno penalty imposed";
 }
 }
 }
 void withdraw()
 {
 for(int i=0;i<total;i++){
 int amt;
 cout<<"\nenter amount to be withdrawn:";
 cin>>amt;
 if(amt>person[i].cash)
 {
 cout<<"amount can't be withdrawn due to insufficient balance";  }
 else
 {
 person[i].cash-=amt;
 }
 }
 }
};

