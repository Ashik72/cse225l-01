//
// Created by Ashiqur Rahman on 1/29/17.
//

#include "dynarr_part1.h"
#include <iostream>
using namespace std;

dynArr::dynArr() {

    data = NULL;
    size = 0;
}

dynArr::dynArr(int s) {

    data = new int[s];
    size = s;
}

dynArr::~dynArr() {
    delete [] data;
}

int dynArr::get(int index) {
    return data[index];
}

void dynArr::set(int index, int value) {

    data[index] = value;
}


