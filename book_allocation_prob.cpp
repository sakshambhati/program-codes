bool isPossible(vector<int> &boards, int n, int k, int mid)
{
    int painter = 1;
    int boardLength = 0;
    
    for(int i = 0; i < n; i++)
    {
        if(boardLength + boards[i] <= mid)
        {
        	boardLength += boards[i];
        }
        else
        {
            painter ++;  // remember
            if(painter > k || boards[i] > mid)
            {
                return false;
            }
            boardLength = boards[i];  //remember
        }
    }
    return true;
}


int findLargestMinDistance(vector<int> &boards, int k)
{
    int s = 0;
    int sum = 0, ans = -1;
    int n = boards.size();
    for (int i = 0; i<n; i++)
    {
        sum += boards[i];
    }
    int e = sum;
    int mid = (s + (e-s)/2);
    while(s<=e)
    {
        if(isPossible(boards, n, k, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = (s + (e-s)/2);
    }
    return ans;
}