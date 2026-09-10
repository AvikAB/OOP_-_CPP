#include<bits/stdc++.h>
using namespace std;

class Hero {
    // properties
    public:
    int health;
    char level;
};

int main(){
    // creation of obj
    Hero AB;

    AB.health = 70;
    AB.level = 'A';

    cout<<"Health: "<<AB.health<<endl;
    cout<<"Level: "<<AB.level<<endl;
}


/*
class className {
    access_modifier:
      1. Attributes
      2. Constructor
      3. Behavior/Functions
      4. Destructor
}
*/
