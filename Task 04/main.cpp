#include<iostream>
using namespace std;
int main(){
//Initializing prices for each product
int price1=56;
int price2=68;
int price3=24;
//Initializing quantity for each product
double quantity1=0;
double quantity2=0;
double quantity3=0;
cout<<"Enter the quantity for ProductA:";
cin>>quantity1;
cout<<"Enter the quantity for ProductB:";
cin>>quantity2;
cout<<"Enter the quantity for ProductC:";
cin>>quantity3;
//For finding total price
double total=(price1*quantity1)+(price2*quantity2)+(price3*quantity3);
//Applying discount if total is greater than $200
double f_total=(total>200)?total*0.9:total;
//Adding shipping fee if finaltotal is less than $150
double totalwithshipping=(f_total<150)?f_total+15.0:f_total;
//Loyalty points based on totalwithshipping
int loyaltypoints=(totalwithshipping>300)?50:20;
cout<<"Loyalty points earned:"<<loyaltypoints<<endl;
return 0;
}