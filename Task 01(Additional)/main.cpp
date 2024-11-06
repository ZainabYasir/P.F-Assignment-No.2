#include<iostream>
using namespace std;
int main(){
//Initializing price for each product
int price1=45;
int price2=67;
int price3=29;
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
cout<<"Total:$"<<total<<endl;
//Applying discount if total is greater than $200
double f_total=(total>200)?total*0.9:total;
cout<<"Total after discount:$"<<f_total<<endl;
//Adding shipping fee if finaltotal is less than $150
double totalwithshipping=(f_total<150)?f_total+15.0:f_total;
cout<<"Total after discount and shipping:$"<<totalwithshipping<<endl;
int pay_method;
cout<<"Enter a payment method(1 for Credit card, 2 for PayPal, 3 for Cash):";
cin>>pay_method;
//For finding transactionfee
double transactionfee=(pay_method==1)?totalwithshipping*0.02:(pay_method==2)?totalwithshipping*0.03:0.0;
//For finding total payment after transaction
double Finalpay=totalwithshipping+transactionfee;
cout<<"Total after applying transaction fee:$"<<Finalpay<<endl;
return 0;
}