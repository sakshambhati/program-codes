#include<iostream>
using namespace std;

class hero      // user defined datatype
{
    //private by default:
    int health;
    char level;

    public:
    char *name;    // idhr hi mem allocate mat krna, stack mem bhr jayegi, heap pe allocate kro

    //default constructor
    hero()     // -> obj bnate waqt call hota h, hm khud bnake bhi value vgera return krva skte h

    // jese hi aap swayam apna constructor bnayege, compiler vale ki mrutyu ho jayegi. /compiler mem allocate krega and 1 baar hi krega..
    {
        cout << "default constructor" << endl;
        name = new char[100];
    }

    // curr obj ke data member/fn ko use krna h toh 'this' operator ka use kr skte h..  'this' is a pointer to the current 'obj'.. eg-


    //parameterised constructor
    hero(int health, char ch)      //curr obj ramesh hai, toh ramesh ki health me value dalne ke liye 'this' ka prayog krenge
    {
        cout << "mai pointer hu " << this << endl << endl;      //'this' ramesh pe h  hero class ka..
        this -> health = health;
        this -> level = ch;
    }


    //Copy constructor
    hero (hero& k)          //hm nhi bnayege toh compilor apne ap bna lega.. shallow copy
    {
                         // pass by ref krna vrna copy ke time yhi apne ap ko call krta rhega, infinite loop
        cout << "copy constructor " << endl;
        this->health = k.health;
        this->level = k.level;
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


    void setName(char name[])
    {
        strcpy(this->name, name);
    }


    void print()
    {
        cout <<"name " << name << endl;
        cout << "health " << health << endl;
        cout << "level " << level << endl;
    }

    //destructor
    ~ hero()
    {
        cout << " destructor aa gya " << endl;  
    }
};

int main()
{
   // hero suresh(70, 'A');

    //cout << suresh.getHealth() << endl;
    //cout << suresh.getLevel() << endl;

    //COPY CONSTRUCTOR CALL HO GYA
   /* hero ritesh(suresh);  //ab ritesh ki health aur level suresh ke barabr hoga..  

   cout << ritesh.getHealth() << endl;  

   cout << endl;

   hero h1;
   h1.setHealth(70);
   h1.setLevel('D');
   char name[7] = "xyzabc";
   h1.setName(name);
  
   h1.print();

    cout << endl;

   hero h2(h1);     //default is shallow copy if not mentioned in class
   // hero h2 = h1;
   h2.print();

   h1.name[0] = 'F';
   h1.print();
    */

   //static
   hero h1;    //static ke liye destructor default call ho jata h, upr fn b lika h class me

    //dynamic
    hero *b = new hero();   //iska destructor khud bnana pdta h..
    delete b;  // aese krne ka dynamic ke case me



}

//  [12-15]