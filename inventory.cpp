/* Function prototypes */
#include <fstream>
#include <iostream>
#include <string>
#include "inventory.hpp" // Include function prototype folder
using namespace std;

// This function will create a file stream object, read in the file, and return the product and price
string locateProduct(int number) {

    ifstream inputFile; // Create file stream object
    inputFile.open("./db/inventory.dat"); // Open the file
    string line; // String variable that holds the product in the file
    string productName2;

    while (inputFile >> line) // Reads in the lines
    {
        if (to_string(number) == line)
        {
            inputFile.ignore();
            getline(inputFile, productName2);
            return productName2;
        }

    }
    inputFile.close(); // Close the file
    return "Not found";
}