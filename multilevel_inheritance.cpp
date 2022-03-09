#include<iostream>
using namespace std;

class Animal      // user defined datatype
{
    public:
    int age;
    int weight;

    void speak()
    {
        cout << "speaking " << endl;
    }
};

class dog : public Animal      // 'pvt' 'protected' me class ke ander hi use kr payega
{
    public:
    int getAge()
    {
        return age;
    }
};

class germanShepherd : public dog 
{

};



int main()
{
    germanShepherd gs;
    gs.speak();
    cout << gs.getAge() << endl;
}
//  [12-15]