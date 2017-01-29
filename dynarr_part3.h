//
// Created by Ashiqur Rahman on 1/29/17.
//

#ifndef CSE225L_01_DYNARR_PART3_H
#define CSE225L_01_DYNARR_PART3_H
class dynArr3 {

private:
    int **data;
    int size;

public:
    dynArr3();
    dynArr3(int, int);
    ~dynArr3();
    void set(int, int);
    int get(int, int);

};

#endif //CSE225L_01_DYNARR_PART3_H
