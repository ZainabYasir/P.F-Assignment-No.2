#include<iostream>
using namespace std;
int main() {
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
    //Applying discount using a ternary operator
    double f_total=(total>200)?total*0.9:total;
    //Adding shipping fee if finaltotal is less than $150 using a ternary operator
    double totalwithshipping=(f_total<150)?f_total+15.0:f_total;
    cout<<"Total after discount and shipping:$"<<totalwithshipping<<endl;
    return 0;

}