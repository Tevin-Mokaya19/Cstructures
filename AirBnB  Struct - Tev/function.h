#ifndef FUNCTION_H
#define FUNCTION_H

struct AirbnbListing {
    char flatType[100];
    char location[100];
    char keyAmenity[100];
    float price;
};

void populateAirbnbListings(struct AirbnbListing *airbnbArray, int arraySize);
void printAirbnbListings(struct AirbnbListing *airbnbArray, int arraySize);

#endif

