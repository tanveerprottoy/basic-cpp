#include <iostream>

using namespace std;

void allocation_basic() {
    // dynamically allocate memory
    int* int_ptr = new int;

    // assign value to the memory
    *int_ptr = 10;

    // print the value
    cout << "Value: " << *int_ptr << endl;

    // release the memory
    delete int_ptr;

    // set pointer to nullptr
    // It is a good practice to set pointer to nullptr after
    // deallocating the memory to avoid undefined behavior if
    // the pointer is dereferenced.
    int_ptr = nullptr;

    // dynamically allocate memory
    // and assign value
    int* int_ptr1 = new int{45};

    // print the value
    cout << "Value: " << *int_ptr1 << endl;

    // release the memory
    delete int_ptr1;

    // set pointer to nullptr
    int_ptr1 = nullptr;
}

void allocation_array() {
    int num;

    cout << "Enter total number of students: ";
    cin >> num;

    float* ptr;

    // memory allocation of num number of floats
    ptr = new float[num];

    cout << "Enter GPA of students." << endl;

    for (int i = 0; i < num; ++i) {
        cout << "Student" << i + 1 << ": ";
        cin >> *(ptr + i);
    }

    cout << "\nDisplaying GPA of students." << endl;

    for (int i = 0; i < num; ++i) {
        cout << "Student" << i + 1 << ": " << *(ptr + i) << endl;
    }

    // ptr memory is released
    delete[] ptr;

    // set pointer to nullptr
    ptr = nullptr;
}