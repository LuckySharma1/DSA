#include<iostream>
using namespace std;

class A {

    public:
    void sayHello() {
        cout<< " Hello Love Babber "<<endl;
    }
    int sayHello(char name) {
        cout<< " Hello Love Babber "<<endl;
        return 1;
    }
    void sayHello(string name) {
        cout<< " Hello Love Babber "<<endl;
    }

};

int main () {

    A obj;
    obj.sayHello();

}