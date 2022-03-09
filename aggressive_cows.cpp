bool isPossible(vector<int> &stalls, int k, int n, int mid)
{
    int cow = 1;
    int lastpos = stalls[0];
    
    for(int i = 0; i < n; i++)
    {
        if(stalls[i] - lastpos >= mid)
        {
            cow++;
            if(cow == k)
            {
                return true;
            }
            lastpos = stalls[i];
        }
    }
    return false;
}


int aggressiveCows(vector<int> &stalls, int k)
{
   int s = 0;
   int max = -1;
    int min = 100000;
    int ans = -1;
    int n = stalls.size();
    sort(stalls.begin(), stalls.end());
    for(int i = 0; i<n; i++)
    {
        if (stalls[i] > max)
        {
            max = stalls[i];
        }
    }
    for(int i = 0; i<n; i++)
    {
        if (stalls[i] < min)
        {
            min = stalls[i];
        }
    }
    int e = max - min;
    int mid = (s + (e-s)/2);
    
    while(s<=e)
    {
        if (isPossible(stalls, k, n , mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = (s + (e-s)/2);
    }
    return ans;
}