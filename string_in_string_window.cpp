class Solution {
private:
    bool compare (int arr1[], int arr2[])
    {
        for(int i = 0; i<26; i++)
        {
            if(arr1[i] != arr2[i])
                return 0;
        }
        return 1;
    }
    
public:
    bool checkInclusion(string s1, string s2) {
        
        int arr1[26] = {0};
        for(int i = 0; i < s1.length(); i++)
        {
            int num = s1[i] - 'a';
            arr1[num]++;
        }
        
        int i = 0;
        int arr2[26] = {0};
        
        // window bnai h
        while(i < s1.length() && i < s2.length())  // i < window_size
        {
            int num = s2[i] - 'a';
            arr2[num]++;
            i++;
        }
        
        if (compare(arr1, arr2) )
            return 1;
        
        //window aage bdao
        while(i < s2.length())
        {
            char newchar = s2[i];
            int num = newchar - 'a';
            arr2[num]++;
            
            char oldchar = s2[i - s1.length()]; // [i - win_size]
            int index = oldchar - 'a';
            arr2[index]--;
            i++;
        
        if (compare(arr1, arr2) )
            return 1;
        
        }
        return 0;
    }
    
};