class Solution {
public:
    int countPrimes(int n) {
        
        // sieve of eratosthenes method

        vector <bool> prime(n+1, true); // n index (n+1) values, and sbme true daal dia
        int count = 0;
        
        prime[0] = prime[1] = false;
        
        for(int i = 2; i < n; i++)
        {
            if(prime[i])
            {               
                count++;
            for(int j = 2*i; j < n; j = j+i)
            {
                prime[j] = false;
            }
            }
        }
        
        return count;
    }
};

// t(c) = O(n* log(log n))

// segmented sieve pdhna..
