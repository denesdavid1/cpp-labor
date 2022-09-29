//
// Created by Dénes Dávid on 22.09.2022.
//

#include "functions.h"

int countBits(int number) {
    int counter = 0;
    while(number != 0) {
        if ((number & 1) == 1)
            counter++;
        number = number >> 1;
    }
    return counter;
}

bool setBit(int& number, int order) {
    if(order < 31 && order>=0) {
        number = number | 1 <<order;
        return true;
    } else{
        return false;
    }
}

double mean(double array[], int numElements){

}
