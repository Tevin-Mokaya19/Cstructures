#include <stdio.h>
#include "function.h"

// Function to populate the structure array
void populateAirbnbListings(struct AirbnbListing *airbnbArray, int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        printf("Enter details for Airbnb Listing %d:\n", i + 1);
        printf("Flat Type: ");
        scanf("%s", airbnbArray[i].flatType);
        printf("Location: ");
        scanf("%s", airbnbArray[i].location); 
        printf("Key Amenity: ");
        scanf("%s", airbnbArray[i].keyAmenity);
        printf("Price (per night): ");
        scanf("%f", &airbnbArray[i].price);
    }
}

// Function to print the structure elements
void printAirbnbListings(struct AirbnbListing *airbnbArray, int arraySize) {
    printf("\nAirbnb Listing Details:\n");
    for (int i = 0; i < arraySize; i++) {
        printf("Airbnb Listing %d:\n", i + 1);
        printf("Flat Type: %s\n", airbnbArray[i].flatType);
        printf("Location: %s\n", airbnbArray[i].location);
        printf("Key Amenity: %s\n", airbnbArray[i].keyAmenity);
        printf("Price: $%.2f per night\n", airbnbArray[i].price);
    }
}

