void abc(string &str, int s, int e)  //pass by reference
{
    //base case
    if(s>=e)
        return;
    
    swap(str[s], str[e]);
    s++;
    e--;
    
    //recursion
    abc(str, s, e); 
}

string reverseString(string str)
{
	int s = 0;
    int e = str.length()-1;
    
    abc(str, s, e);
    return str;
}