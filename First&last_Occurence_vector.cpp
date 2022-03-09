int FirstOccurence(vector<int>& arr, int n, int k)
{    
int beg = 0, end = n-1, ans = -1; // return -1 if not found
    int mid = (beg + (end - beg)/2);
    
    while (beg <= end)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (k > arr[mid])
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (beg + (end - beg)/2);
    }
    return ans;
}

int lastOccurence(vector<int>& arr, int n, int k)
{    
int beg = 0, end = n-1, ans;
    int mid = (beg + (end - beg)/2);
    
    while (beg <= end)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            beg = mid + 1;
        }
        else if (k > arr[mid])
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (beg + (end - beg)/2);
    }
    return ans;
}



pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair <int, int> p;
    p.first = FirstOccurence(arr, n, k);
    p.second = lastOccurence(arr, n, k);
    return p;
}