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
    void getAge()
    {
        cout << age << endl;
    }
};

int main()
{
    dog d;

    d.speak();
    d.getAge();
}
//  [12-15]