#include<iostream>
using namespace std;

class A
{
    public:
    void func()
    {
        cout << "A" << endl;
    }
};

class B
{
    public:
    void func()
    {
        cout << "B" << endl;
    }
};

class C : public A, public B
{

};


int main()
{
   C obj;
   obj.A :: func();   //scope resolution in case of ambiguity
   obj.B :: func();

}
//  [12-15]