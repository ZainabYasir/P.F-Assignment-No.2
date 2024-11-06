#include<iostream>
using namespace std;
int main(){
//Initializing the prices of products   
int price1=33;
int price2=52;
int price3=76;
//Initializing quantities for each products
double quantity1=0;
double quantity2=0;
double quantity3=0;
cout<<"Enter the quantity for ProductA:";
cin>>quantity1;
cout<<"Enter the quantity for ProductB:";
cin>>quantity2;
cout<<"Enter the quantity for ProductC:";
cin>>quantity3;
//for finding total price
double total=(price1*quantity1)+(price2*quantity2)+(price3*quantity3);
cout<<"Total:$"<<total;
return 0;
}
