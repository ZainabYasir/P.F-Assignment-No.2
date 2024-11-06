#include<iostream>
using namespace std;
int main(){
//Initializing the prices of products
int price1=65;
int price2=75;
int price3=90;
//initializing quantity for each product
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
double total=(price1*quantity1)+(price1*quantity2)+(price3*quantity3);
//Applying discount to final total if total is greater than $200
double f_total=(total>200)?total*0.9:total;
cout<<"Total after discount:$"<<f_total;
return 0;
}