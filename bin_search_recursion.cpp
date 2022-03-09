
void print1(int arr[], int s, int e)
{

    for(int i = s; i<=e; i++)
    {
        cout << arr[i] << " ";
    }  cout << endl;
}


bool binsearch(int *arr, int s, int e, int key)
{

    print1(arr, s, e);
   // base case
   if(s > e)
        return 0;


    int mid = s + (e-s)/2;  //index

    if(arr[mid] == key)
        return 1;

    if(arr[mid] > key)
        return binsearch(arr, s, mid-1, key);
    else
        return binsearch(arr, mid+1, e, key);
}

int main()
{
    int n;
    int arr[5] ={2,4,6,8,10};  // sorted
    
    cout << endl;
    bool ans = binsearch(arr, 0, 4, 10);

    cout << ans << endl;
}