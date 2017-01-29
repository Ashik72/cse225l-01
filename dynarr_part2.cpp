//
// Created by Ashiqur Rahman on 1/29/17.
//

#include "dynarr_part2.h"
#include <iostream>

using namespace std;

dynArr2::dynArr2() {

    data = NULL;
    size = 0;
}

dynArr2::dynArr2(int s) {

    data = new int[s];
    size = 0;
}

dynArr2::~dynArr2() {
    delete [] data;
}

int dynArr2::get(int index) {
    return data[index];
}

void dynArr2::set(int index, int value) {

    data[index] = value;
}

void dynArr2::allocate(int s) {

    dynArr2::~dynArr2();
    data = new int[s];

}

