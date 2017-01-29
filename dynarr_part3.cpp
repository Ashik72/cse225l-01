//
// Created by Ashiqur Rahman on 1/29/17.
//

#include "dynarr_part3.h"
#include <iostream>

using namespace std;

dynArr3::dynArr3() {

    data = NULL;
    size = 0;
}

dynArr3::dynArr3(int r, int c) {

    data = new int*[r];
    size = r * c;

    for (int i = 0; i < r; i++)
        data[i] = new int[c];

}

dynArr3::~dynArr3() {
    delete [] data;
}

int dynArr3::get(int r, int c) {
    return data[r][c];
}

void dynArr3::set(int r, int c) {

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int value;

            cout << "Row: " << i << " Column: " << j << endl;

            cin >> value;

            data[i][j] = value;
        }


    }

}

