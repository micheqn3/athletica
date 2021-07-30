#include <iostream>
#include <string>
#include <fstream>
#include "inventory.hpp" // Include the file with prototypes
using namespace std;
string locateProduct(int number); // Initialize prototypes

int main() {
    int productCode;
    int purchase;
    string productName;
    string productPrice;
    double total; // This will hold the total price
    cout << "************ Welcome to What's in Store? *************" << endl;

    do {
        cout << "\nEnter a product code. Or enter -1 to checkout : ";
        cin >> productCode;

        if (productCode == -1) {
        break;
        }

        productName = locateProduct(productCode);

        if (productName == "Not found") {
        cout << "\nCode not found, try again." << endl;
        } else {
        cout << "\nProduct code " << productCode << ": " << productName << endl;
        
        // convert productPrice to number to add up and store in total
        }
    } while (productCode != -1);
    // generate receipt when purchase is done
    cout << "\n* THANKS FOR SHOPPING *" << endl;

    return 0;
}