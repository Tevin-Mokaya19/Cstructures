#include <stdio.h>
#include "function.h"

int main() {
    int arraySize = 6; 
    struct AirbnbListing airbnbArray[arraySize];

    // Populate the structure array
    populateAirbnbListings(airbnbArray, arraySize);

    // Print the structure elements
    printAirbnbListings(airbnbArray, arraySize);

    return 0;
}

