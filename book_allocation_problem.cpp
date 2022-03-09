bool isPossible(vector<int> arr, int n, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;  // mid se compare krne ke liye
    
    for(int i = 0; i<n; i++)
    {
        if(pageSum + arr[i] <= mid)
            pageSum += arr[i];
        else
        {
            studentCount++;
        	if(studentCount > m || arr[i] > mid)
            	return false;
            
            // ab nya student ayega
            pageSum = arr[i];  // value de di
        }
    }
    return true;
}

int allocateBooks(vector<int> arr, int n, int m) {
    
    int s = 0;
    int sum = 0, ans = -1;
    
    for(int i = 0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    int e = sum;   
    // n = no. of books  / m = no. of students
    int mid = s + (e-s)/2;
    
    while(s<=e)
    {
        if(isPossible(arr, n, m, mid))
    	{
			ans = mid; 
            e = mid - 1;
    	}
        else
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}