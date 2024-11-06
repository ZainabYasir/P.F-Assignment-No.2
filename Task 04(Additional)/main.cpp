#include<iostream>
using namespace std;
int main(){
//Initializing prices for each product
int price1 = 23;
int price2 = 36; 
int price3 = 85;
//Initializing quantity for each product
double quantity1=0;
double quantity2=0;
double quantity3=0;
cout << "Enter the quantity of Product A:";
cin >> quantity1;
cout << "Enter the quantity of Product B:";
cin >> quantity2;
cout << "Enter the quantity of Product C:"; 
cin >> quantity3;
//For finding total price
double total=(price1*quantity1)+(price2*quantity2)+(price3*quantity3);
cout<<"Total:$"<<total<<endl;
//Applying discount using a ternary operator
double f_total=(total>200)?total*0.9:total;
cout<<"Total after discount:$"<<f_total<<endl;
string couponcode;
cout<<"Enter a coupon code(if any):";
cin>>couponcode;
double coupon_discount= (couponcode=="SAVE10")?f_total-10:f_total;
cout<<"Total after applying coupon:$"<<coupon_discount<<endl;
int region;
cout<<"Enter your location(1,2 or 3):";
cin>>region;
double tax=(region==1)?0.05:(region==2)?0.10:0.08;
double taxed_amount=coupon_discount*(1+tax);
cout<<"Total after applying sales tax:$"<<taxed_amount;
return 0;
}