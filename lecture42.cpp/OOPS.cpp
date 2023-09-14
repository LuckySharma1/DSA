#include<iostream>
#include <cstring>
using namespace std;

class Hero {

    // properties
    private:
    int health;

    public:
    char *name;
    char level;
    static int timeTOComplete;

    Hero() {
        cout<<" Simple Constructor Called "<<endl;
        name = new char[100];
    }

    // paramerterised Constructor
    Hero(int health) {
        this -> health = health;
    }
    Hero(int health, char level) {
        this -> level = level;
        this -> health = health;
    }
    // // copy constructor
    Hero(Hero& temp){

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch,temp.name );
        this->name = ch;

        cout<<" copy Constructor Called "<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout<<endl;
        cout<<"[ Name: "<<this->name<<" ,";
        cout<<"health: "<<this->health<<" ,"; 
        cout<< "level: "<< this->level<<" ]";
        cout<<endl<<endl;
    }

    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

    void setName(char name[]) {
        strcpy(this->name, name);
    }

    static int random() {
        return timeTOComplete;
    }

    // destructor
    ~Hero() {
        cout<< "destructor bhai called "<<endl;
    }

};

int Hero::timeTOComplete = 5;


int main() {


    // cout<< Hero::timeTOComplete <<endl;
    cout<< Hero::random() <<endl;






    /*
    Hero a;
    cout<< a.timeTOComplete <<endl;

    Hero b;
    b.timeTOComplete = 10;
    cout<< a.timeTOComplete <<endl;
    cout<< b.timeTOComplete <<endl;
    */


    /*
    // statically
    Hero a;

    // dynamically
    Hero *b = new Hero();
    // manually destructor call
    delete b;
    */

    return 0;
}
    /*
    int main() {
    Hero hero1;

    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "Babber";
    hero1.setName(name);

    // hero1.print();

    // use  default copy constructor
    Hero hero2(hero1);
    // hero2.print();
    // Hero hero2 = hero1;

    hero1.name[0] = 'G';
    hero1.print();

    hero2.print();

    hero1 = hero2;
    hero1.print();

    hero2.print();
    */




    // // object created statically
    // Hero ramesh(10);
    // // cout<<" Address of ramesh "<< &ramesh <<endl;
    // ramesh.print();

    

    // // dynamically
    // Hero *h = new Hero(11);
    // h->print();

    // Hero temp(22, 'B');
    // temp.print();


    /*
    // static alloaction
    Hero a;
    a.setHealth(80);
    a.setLevel('A');
    cout<<"level is "<<a.level<<endl;
    cout<<"health is "<<a.getHealth()<<endl;

    // dyamic allocation
    Hero * b = new Hero;
    b->setHealth(90);
    b->setLevel('B');

    cout<<"level is "<<(*b).level<<endl;
    cout<<"health is "<<(*b).getHealth()<<endl;

    cout<<"level is "<<b->level<<endl;
    cout<<"health is "<<b->getHealth()<<endl;
    */

    /*
    // creation of Object
    Hero ramesh;
    cout<< "Size  of Ramesh is : "<<sizeof (ramesh) << endl;

    cout<<"Ramesh health is "<<ramesh.getHealth()<<endl;
    // use setter
    ramesh.setHealth(70);

    // ramesh.health = 70;
    ramesh.level = 'A';

    cout<<"health is: "<< ramesh.getHealth() << endl;
    cout<<"level is: "<< ramesh.level << endl;

    return 0;
}
    */