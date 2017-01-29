#include <iostream>
#include "dynarr_part1.h"
#include "dynarr_part2.h"
#include "dynarr_part3.h"

using namespace std;

void run_part_1();
void run_part_2();
void run_part_3();

int main() {

    //run_part_1();
    //run_part_2();
    run_part_3();

    return 0;
}

void run_part_1() {

    dynArr obj1;
    dynArr obj2(5);

    for (int i = 0; i < 5; i++) {

        int temp;

        cin >> temp;

        obj2.set(i, temp);

    }

    for (int i = 0; i < 5; i++) {

        cout << obj2.get(i) << endl;

    }


}

void run_part_2() {

    int count;

    cin >> count;

    dynArr obj2(count);

    for (int i = 0; i < count; i++) {

        int temp;

        cin >> temp;

        obj2.set(i, temp);

    }

    for (int i = 0; i < count; i++) {

        cout << obj2.get(i) << endl;

    }


}

void run_part_3() {

    int rows, columns;

    cout << "Number of rows:" << endl;
    cin >> rows;

    cout << "Number of columns:" << endl;
    cin >> columns;

    dynArr3 obj3(rows, columns);
    obj3.set(rows, columns);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << "Row: " << i << " Column: " << j << endl;

            cout << obj3.get(i, j) << endl;
        }


    }


}
