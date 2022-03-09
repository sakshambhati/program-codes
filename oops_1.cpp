#include<iostream>
using namespace std;

class hero      // user defined datatype
{
    //private by default:
    int health;
    char level;

    public:

    hero()     //def constructor -> obj bnate waqt call hota h, hm khud bnake bhi value vgera return krva skte h

    // jese hi aap swayam apna constructor bnayege, compiler vale ki mrutyu ho jayegi. /compiler mem allocate krega and 1 baar hi krega..
    {
        cout << "constructor called" << endl;
    }

    // curr obj ke data member/fn ko use krna h toh 'this' operator ka use kr skte h..  'this' is a pointer to the current 'obj'.. eg-

    //parameterised constructor
    hero(int health)      //curr obj ramesh hai, toh ramesh ki health me value dalne ke liye 'this' ka prayog krenge
    {
        cout << "mai pointer hu " << this << endl;      //'this' ramesh pe h  hero class ka..
        this -> health = health;
    }


    //getter
    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    //setter
    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char l)
    {
        level = l;
    }
};

int main()
{
    /*
    hero ramu;   //obj creation - static allocation
    cout << sizeof(ramu) << endl;  // o/p-> size of all datatypes
    //cout << ramu.health << endl;  // works only with public access
    //ramu.health = 70;   //no garbage value
    cout << ramu.getHealth() << endl;       //ye fn pvt value return kr rha h

    ramu.setHealth(70);   // value set ho gyi

    cout << ramu.getHealth() << endl;

    hero *b = new hero;   //dynamic memory allocation and obj creation

    b->setLevel('a');

    cout << "level is " << (*b).getLevel() << endl;   //same as below
    cout << "level is " << b->getLevel() << endl;     // same as above
    */

   //obj create hone pr default constructor call hoga having same name as class
   // def. constructor -same class name   - no return type   - no i/p parameter

    cout << " hello " << endl;
    //hero ramesh;     //obj created statically

    //call 1
    hero ramesh(10);  //parameter passed for parameterised constructor
    cout <<" Ramesh ka address " << &ramesh << endl;

    //call2
    hero *suresh = new hero(20);    // dynamically
    cout << "Suresh ka address " << suresh << endl;

    /*
    hero suresh;
    cout << "suresh add "<< &suresh << endl;  // hero() vala const. ayega
    */


   cout << "bye " << endl;

    //call1 ki value
   cout << ramesh.getHealth() << endl;
   //call2 ki value
   cout << suresh->getHealth() << endl;
}

//  [12-15]