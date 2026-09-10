#include<bits/stdc++.h>
using namespace std;

class Hero {
    // properties
    private:
    int health;
    public:
    char level;

    // getter
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    // setter
    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }
};

int main(){
    // static allocation
    Hero a;
    a.setHealth(80);
    a.setLevel('B');
    cout<<"Hero A's level: "<<a.level<<endl;
    cout<<"Hero A's health: "<<a.getHealth()<<endl;

    // dynamic allocation
    Hero *b = new Hero;
    b->setHealth(74);
    b->setLevel('C');
    cout<<"Hero B's level: "<<(*b).level<<endl;
    cout<<"Hero B's health: "<<(*b).getHealth()<<endl;
    
    // another way
    cout<<"Hero B's level: "<< b->level <<endl;
    cout<<"Hero B's health: "<< b->getHealth() <<endl;
}
