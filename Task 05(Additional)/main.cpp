#include <iostream>
using namespace std;
int main() {
// Product details
double quantityA = 2;
double quantityB = 1;
double quantityC = 3;
int priceA = 15.00, priceB = 20.00, priceC = 10.00;
// Calculate individual totals
double totalA = priceA * quantityA;
double totalB = priceB * quantityB;
double totalC = priceC * quantityC;
// Calculate subtotal
double subtotal = totalA + totalB + totalC;
// Additional costs and discounts
double discount = 5.00; // discount applied
double shipping = 7.50;// Shipping fee
double transactionFee = 2.00; // Transaction fee
double couponDiscount = 3.00;  // Coupon discount
double taxRate = 0.07;// Sales tax rate (7%)
// Apply discounts to subtotal
double totalAfterDiscount = subtotal - discount;
double totalAfterCoupon = totalAfterDiscount - couponDiscount;
// Calculate sales tax
double salesTax = totalAfterCoupon-couponDiscount;
double totalWithTax = totalAfterCoupon + salesTax + shipping + transactionFee;
// Output order summary
cout << "Order Summary:\n";
cout << "Product A : $" << totalA << endl;
cout << "Product B : $" << totalB << endl;
cout << "Product C : $" << totalC << endl;
cout << "Subtotal: $" << subtotal << endl;
cout << "Discount: $" << discount << endl;
cout << "Coupon Discount: $" << couponDiscount <<endl;
cout << "Shipping: $" << shipping <<endl;
cout << "Transaction Fee: $" << transactionFee <<endl;
cout << "Sales Tax: $" << salesTax << endl;
cout << "Total Amount to Pay: $" << totalWithTax << endl;

    return 0;
}