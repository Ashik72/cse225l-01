//
// Created by Ashiqur Rahman on 1/29/17.
//

#ifndef CSE225L_01_DYNARR_PART1_H
#define CSE225L_01_DYNARR_PART1_H

class dynArr {

    private:
        int *data;
        int size;

    public:
        dynArr();
        dynArr(int);
        ~dynArr();
        void set(int, int);
        int get(int);

};


#endif //CSE225L_01_DYNARR_PART1_H
