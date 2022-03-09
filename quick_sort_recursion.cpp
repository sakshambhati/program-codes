int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int count = 0;

    //count
    for(int i = s+1; i<=e; i++)
    {
        if(arr[i] <= pivot)
            count++;
    }
    
    int rightPlace = s + count;  //rightPlace = pivotIndex
    swap(arr[rightPlace], arr[s]);

    //L and R vala part dek lenge  <a  a  >a
    int i = s, j = e;  // 2 pointer

    while(i < rightPlace && j > rightPlace)
    {
        while(arr[i] < arr[rightPlace])
            i++;
        while(arr[j] > arr[rightPlace])
            j--;
        
        if(i < rightPlace && j > rightPlace)
            swap(arr[i++], arr[j--]);        
    }
    return rightPlace;    

}

void quickSort(int arr[], int s, int e)
{
    //base case
    if(s >= e)
        return;

    //partition krenge
    int p = partition(arr, s, e);

    //left part me QS
    quickSort(arr, s, p-1);     // p pe toh partition vala element h

    //right part me QS
    quickSort(arr, p+1, e);
}

int main()
{
    int arr[5] = {5,2,6,1,3};
    int n = 5;
    quickSort(arr, 0, n-1);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }   cout << endl;
}