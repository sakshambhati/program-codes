class Solution{
    private:
    string reverse(string s)
    {
        int i = 0;
        int j = s.length()-1;
        
        while(i<j)
        {
            swap(s[i++], s[j--]);
        }
        return s;
    }

public:
    string encryptString(string s){
    // code here
    int i = 0;
    int n = s.length();
    string s1 = "";
    
    while(i<n)
    {
        int j = i+1;
        while(j<n && s[i] == s[j])
        {
            j++;
        }        // char bdl gya
        
         s1.push_back(s[i]);   // char store kr lia
        //count
        int count = 0;
        count = j-i;    // count
       
        
        if(count > 1)
        {
            string cnt = to_string(count);  // converted int to string
            for(char ch : cnt)
                s1.push_back(ch);
        }
        
        if(count == 1)
            s1.push_back('1');
           
        i = j;   // next char
     }
     return reverse(s1);
    }
};