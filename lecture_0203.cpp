//
// Created by Ashiqur Rahman on 1/29/17.
//

#include <iostream>

using namespace std;

int main() {


    char str[6] = {'H', 'E', 'L', 'L', 'O', '\0'};

    char *ptr = &str[0];

    printf("ptr = %08x\n", ptr);
    printf("ptr = %08x\n", str);

    cout << str[2] << endl;

    ptr = ptr+2;

    ptr[2] = 'k';

    cout << *(ptr + 1 * 2) << endl;


    cout << str << endl;


    int A[3] = {3, 1, 8};

    cout << A[2] << endl;

    cout << *(A + 4 * 2) << endl;

    int *ptr2 = A;

    cout << ptr2[2] << endl;

    cout << *(ptr2 + 4 * 2) << endl;

//    int B[3][4] = { {1, 2 ,3, 34}, {4, 5, 6, 67}, {7, 8, 9, 99} };
//    cout << B[1][0] << endl;
//
//    int **b1;
//    b1 = B;
//
//    cout << b1[1][0] << endl;

    int *tptr;

    tptr = new int;

    *tptr = 55;

    cout << *tptr << endl;

    delete tptr;
    tptr = NULL;
    cout << tptr << endl;

    cout << "2D Array" << endl;

    int rows;
    int columns;

    cout << "rows:" << endl;

    cin >> rows;

    int **arr2;

    arr2 = new int*[rows];

    cout << "columns:" << endl;
    cin >> columns;

    for (int i = 0; i < rows; i++) {
        arr2[i] = new int[columns];
    }

    //int B[3][4] = { {1, 2 ,3, 34}, {4, 5, 6, 67}, {7, 8, 9, 99} };

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < columns; j++)
            cout << arr2[i][j] << endl;

    }

    std::cout << "Length of array = " << (sizeof(arr2)/sizeof(*arr2)) << std::endl;


    return 0;
}