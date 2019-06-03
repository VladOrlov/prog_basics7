#include <iostream>
#include "work7.h"

using namespace std;

void interchange(int *array_length, int *seed_number);

int print_array(int *arr, int p_array_length);

int print_array_by_pointer(int *arr, int *p_length);

int main(int argc, char *argv[]) {

    string size_text;
    cout << "Please set array size from 1 up to 100 elements:" << endl;
    cin >> size_text;

    string seed_text;
    cout << "Please set seed number for elements generation from 1 to 100:" << endl;
    cin >> seed_text;

    int array_length;
    int seed_number;

    try {
        array_length = stoi(size_text);
    } catch (int i) {
        cout << "Illegal array length size! Please enter valid parameters - number from 1 to 100!\n>";
        return -1;
    }

    try {
        seed_number = stoi(seed_text);
    } catch (int i) {
        cout << "Illegal seed number! Please enter valid parameters - number from 1 to 100!\n>";
        return -1;
    }

    interchange(&array_length, &seed_number);

    cout << "Interchange apply! Array of size - " << array_length
         << " will be generated, for seed number - " << seed_number << endl;

    int numbers[array_length];
    for (int i = 0; i < array_length; i++) {
        srand(seed_number * i);
        cout << "add number : " << numbers << endl;
        numbers[i] = rand() % 100;;
    }

    int *p_length = &array_length;
    print_array(numbers, array_length);
    print_array_by_pointer(numbers, p_length);

    return 0;
}

int print_array(int *arr, int array_length) {
    cout << "Printing array using length value" << endl;
    for (int i = 0; i < array_length; i++) {
        cout << "Element # " << i + 1 << " - " << arr[i] << endl;
    }
}

int print_array_by_pointer(int *arr, int *p_length) {
    cout << "Printing array using length pointer" << endl;
    for (int i = 0; i < *p_length; i++) {
        cout << "Element # " << i + 1 << " - " << arr[i] << endl;
    }
}