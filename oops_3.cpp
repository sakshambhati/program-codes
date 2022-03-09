#include<iostream>
using namespace std;

class Human      // user defined datatype
{
    protected:
    int height;

    public:
    int weight;
    int age;

    void setAge(int age)
    {
        this->age = age;
    }

    int getAge()
    {
        return this->age;
    }

    void setWeight(int w)
    {
        this->weight = w;
    }

};

class male : private Human     //inherit krne ka tarika  / parent_class: Access_Mod Sub-class
{
    public:
    string color;

    void sleep()
    {
        cout << "Male sleeping " << endl;
    }

    int getHeight()   // bcz sub class can access parent class in 'protected' modifier
                        // ye vala fn 'Private' vale ke sath b chlega, bcz class ke ander access h
    {
        return this->height;
    }

};

int main()
{
    male m1;
    /*
    m1.setAge(23);
    m1.setWeight(65);

    cout << m1.age << endl;
    cout << m1.weight << endl;
    */

   //cout << m1.height << endl;
   cout << m1.getHeight() << endl;
}
//  [12-15]