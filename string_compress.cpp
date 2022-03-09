class Solution {
public:
    int compress(vector<char>& chars) {
        
        int i = 0;  //traverse krne ke liye
        int ansIndex = 0;  //char or count dalne ke liye
        int n = chars.size();
        
        while(i<n)
        {
            int j = i+1;
            while(j<n && chars[i] == chars[j])
            {
                j++;
            }
            
            // char bdl gya hoga
            chars[ansIndex++] = chars[i];  //char store kr lia
            
            int count = j-i;
            
            if(count > 1)
            {
                string cnt = to_string(count);  //str format me store ho jaye
                for(char ch: cnt)  //double digit b ho skte h
                    chars[ansIndex++] = ch;
                    
            }
         i = j;
        }
      return ansIndex;
    }
};