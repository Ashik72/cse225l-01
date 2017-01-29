//
// Created by Ashiqur Rahman on 1/29/17.
//

#ifndef CSE225L_01_DYNARR_PART2_H
#define CSE225L_01_DYNARR_PART2_H

class dynArr2 {

private:
    int *data;
    int size;

public:
    dynArr2();
    dynArr2(int);
    ~dynArr2();
    void set(int, int);
    int get(int);
    void allocate(int s);

};


#endif //CSE225L_01_DYNARR_PART2_H
