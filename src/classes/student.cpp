#include <iostream>
using namespace std;

class Student {
   private:
    int age;

   public:
    void set_age(int a) {
        age = a;
    }

    int get_age() {
        return age;
    }
};

void caller() {
    // dynamically declare student object
    Student* student = new Student();

    student->set_age(20);

    // call get_age() function
    int age = student->get_age();

    cout << "Student age: " << age << endl;

    // ptr memory is released
    delete student;

    // set ptr to nullptr
    student = nullptr;
}