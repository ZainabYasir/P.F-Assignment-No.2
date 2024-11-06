#include <iostream>
using namespace std;
int main() {
    // Stock limits for each product
    int stockA = 10, stockB = 5, stockC = 8;
    // Variables to store the quantities requested by the user
    int quantityA, quantityB, quantityC;
    // Get the quantities for each product from the user
    cout << "Enter quantity for Product A: ";
    cin >> quantityA;
    cout << "Enter quantity for Product B: ";
    cin >> quantityB;
    cout << "Enter quantity for Product C: ";
    cin >> quantityC;
    // Check if requested quantities exceed stock limits
    bool stockAvailable = true;
    if (quantityA > stockA) {
        cout << "Sorry, only " << stockA << " units of Product A are available."<<endl;
        stockAvailable = false;
    }
    if (quantityB > stockB) {
        cout << "Sorry, only " << stockB << " units of Product B are available."<<endl;;
        stockAvailable = false;
    }
    if (quantityC > stockC) {
        cout << "Sorry, only " << stockC << " units of Product C are available."<<endl;
        stockAvailable = false;
    }
    // Confirm order if stock is available
    if (stockAvailable) {
        cout << "Order confirmed! Your items will be shipped shortly."<<endl;
    } else {
        cout << "Please adjust your quantities and try again."<<endl;
    }

    return 0;
}
