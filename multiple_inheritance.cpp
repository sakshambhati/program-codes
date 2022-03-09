#include<iostream>
using namespace std;

class Animal      // user defined datatype
{
    public:
    int age;
    int weight;

    void bark()
    {
        cout << "barking " << endl;
    }
};

class human    
{
    public:
    void speak()
    {
        cout << "speaking" << endl;
    }
};

class hybrid : public Animal, public human    // multiple inheritance..
{

};



int main()
{
   hybrid h1;
    h1.speak();
    h1.bark();

}
//  [12-15]