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
    // creation of obj
    Hero AB; 

    // use setter to set health
    AB.setHealth(100);
    AB.level = 'A';

    cout<<"Health: "<<AB.getHealth()<<endl;  // getter to read vals
    cout<<"Level: "<<AB.level<<endl;
}
