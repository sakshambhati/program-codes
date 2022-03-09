 string removeOccurrences(string s, string part) {
        
        while(s.length() != 0 && s.find(part) < s.length())  // s.find -> 1(P/A) which is < len(str).. part h ki nhi..
            s.erase(s.find(part), part.length());  //kaha se kaha tk
        
        return s;
    }