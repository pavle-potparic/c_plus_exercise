#include <iostream>
using namespace std;

class Animal {
private:
    string name;

public:
    void setName(string name) {this-> name = name;}
    void speak() const {cout << "My name is:" << name << endl;}

};

int main() {
    Animal animal;
    animal.setName("Pavle");
    Animal animal2 = animal;

    animal.speak();
    animal2.speak();

    return 0;
}
