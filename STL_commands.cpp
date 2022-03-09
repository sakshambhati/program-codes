#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>
#include<iterator>
#include<map>
using namespace std;

int main()
{
    '''
    array
    ''' /*

    int arr[4] = {1,2,3,4};
    for(int i = 0; i<4; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
    
    // ispe commands se khel skte h
    array<int, 4> a = {5,6,7,8};  //static
    for(int i = 0; i<4; i++)
    {
        cout << a[i] << endl;
    }
    
    cout << endl;

    cout << a.empty() << endl;

    cout << a.at(2) << endl; // at pos me kya h

    cout << a.front() << endl;

    cout << a.back() << endl; */

    '''
    __________________________________
    vector
    '''
    // bhr jaye toh double kr deta h

    vector<int> v;
    cout << v.capacity() << endl;  // kitni aukat h, start = 0

     cout << a.at(2) << endl; // at pos me kya h and all array operations

     v.push_back(1);
     v. pop_back();  // last se element udd jayega

     //print elements
     for(int i:v)  // i iteration over v
     {
         cout << i << endl;
     }

    v.clear(); // sare elements del honge, capacity nhi

    vector <int> a(5, 1); // 5 size ka and sare elements 1

    vector <int> dusra(a); // a vector ke sare elements dusra vector me aa gye 


    '''
    __________________________________
    deque
    '''

    deque <int> d;  // dono side se maje lo
    d.push_back(2);
    d.push_front(1);        // similar for pop

    for(int i:d)  // i iteration over v
     {
         cout << i << endl;
     }

    // front(), end(), empty() vale b kaam kr rhe h

    d.erase(d.begin(), d.begin()+1)  // 0-1 ki range me del. marega.. mtlb phla udd gya..


    '''
    __________________________________
    LISt
    '''

    list <int> l;
    l.push_back(2);
    l.push_front(1);        // similar for pop

    for(int i:l)  // i iteration over v
     {
         cout << i << endl;
     }

    l.erase(l.begin());   //jo pos () me doge, vo del. ho jayegi  

    // front(), end(), empty() vale b kaam kr rhe h

    list <int> dusra(a); // a list ke sare elements dusra list me aa gye 

    list <int> a(5, 1); // 5 element ka and sare elements 1



    '''
    __________________________________
    STACK
    '''


    stack <string> s;

  s.push("amar");
  s.push("akbar");
  s.push("anthony");

  cout<< s.top() << endl;  //anthony ayega bcz last me rkha gya
   s.pop();
  cout<< s.top() << endl;  //akbar
  cout<< s.size() << endl;


    '''
    __________________________________
    QUEUE
    '''

    queue <string> s;

  s.push("amar");
  s.push("akbar");
  s.push("anthony");

    // isme top nhi hota
   s.pop();  // amar udega
  
  // front(), end(), empty() vale b kaam kr rhe h

  cout<< s.size() << endl;

  '''
    __________________________________
    PRIORITY QUEUE
    '''

    //max heap - default
   priority_queue <int> maxi;

  //min-heap
   priority_queue <int, vector <int>, greater <int> > mini;

   maxi.push(1);
   maxi.push(2);
   maxi.push(3);
   maxi.push(4);
    int n = maxi.size();
    for (int i = 0; i<n; i++)
    {
        cout<< maxi.top() << " ";
        maxi.pop();     //hr bar max element return krega and udega bhi
    }  cout << endl;

   mini.push(5);
   mini.push(1);
   mini.push(0);
   mini.push(4);

   int m = mini.size();
    for (int i = 0; i<m; i++)
    {
        cout<< mini.top() << " ";
        mini.pop();     //hr bar min element return krega and udega bhi
    }  cout << endl;


     '''
    __________________________________
    SET
    '''

    set<int> s;     //duplicate elements b 1 hi baar ayenge

    s.insert(5);
    s.insert(0);
    s.insert(6);
    s.insert(1);

    for(auto i : s)
    {
        cout << i << endl;  // ye inc order me ayenge
    } cout << endl;

    set <int> :: iterator it = s.begin();   //set ke liye int iterator, s[0] pe rkho. it naam hai..
    it++;

    s.erase(it);    // 1 index vala ud jayega

    for(auto i:s)  //advance for loop
    {
        cout << i << endl;
    }

    set<int>:: iterator itr = s.find(5);  //dhund 5 h ki nhi

    for(auto itr; itr != s.end(); itr++)  // itr index bta rha h.. kaha se kaha tk chaye
    {
        cout<< *itr <<" ";      // *itr -> itr index pe jo value h, vo bta
    } cout << endl;

    cout<< s.count(3); // 3 h ki nhi.. 0/1 btayega

    '''
    __________________________________
    MAP
    '''

    map<int, string>  m;  // int-> key, string -> value

    m[1] = "duster";
    m[3] = "harrier";
    m[2] = "xuv";

    for(auto i:m)
    {
        cout << i.first <<endl;     // sorted order me print hoga.. 1,2,3.. /string ke liye second likna
    }

    m.insert({5,"astor"});  // value jod dega m me..

    cout<< m.count(3); // 3 h ki nhi.. 0/1 btayega

    m.erase(3);   // 3 key vala ud jayega


    auto itr = m.find(2);   //itr me 2 ka index store ho gya 1 tarike se
    for(auto i= itr; itr != s.end(); itr++)  // itr index bta rha h.. kaha se kaha tk chaye
    {
        cout<< *itr <<" "; 



//reverse a string
reverse(s.begin(), s.end());
 
 // swap(a,b)   max/min(a,b)    sort(v.begin(), v.end())

 //rotate
 rotate(v.begin(), v.begin()+1, v.end());   // beech vala bta rha h kitne element rotate krne h -> 0+1
    //eg  1367 becomes 3671

} 

