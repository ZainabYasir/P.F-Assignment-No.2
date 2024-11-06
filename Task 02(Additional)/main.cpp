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
//Applying discount using a ternary operator
double f_total=(total>200)?total*0.9:total;
//Adding shipping fee if finaltotal is less than $150 using a ternary operator
double totalwithshipping=(f_total<150)?f_total+15.0:f_total;
cout<<"Total after discount and shipping:$"<<totalwithshipping<<endl;
int customertype=0;
cout<<"Enter customer type(1 for Regular,2 for VIP):";
cin>>customertype;
//For applying discounts for VIP customers
double f_amount=(customertype==2)?totalwithshipping*0.95:totalwithshipping;
cout<<"Total afterb customer discount:$"<<f_amount<<endl;
return 0;

}