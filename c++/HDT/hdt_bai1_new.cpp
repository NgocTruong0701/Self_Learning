#include <iostream>

using namespace std;

class Student {
public:
    string name;
    int age;

    void getInformation() {
        cin >> name;
        cin >> age;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1;
    s1.getInformation();
    s1.display();
    return 0;
}
