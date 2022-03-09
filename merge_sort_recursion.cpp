void merge(int *arr, int s, int e)
{
    int mid = (s+e)/2;

    int len1 = mid-s+1;
    int len2 = e - mid;

    int *first = new int[len1];  // dynamic memory allocation
    int *second = new int[len2];    //caution : free b krna h baad me otherwise mem leak problem

    //copying values in each halves
    int arrayIndex = s;
    for(int i = 0; i<len1; i++)
    {
        first[i] = arr[arrayIndex++];
    }

    arrayIndex = mid+1;
    for(int i = 0; i<len2; i++)
    {
        second[i] = arr[arrayIndex++];
    }
 
    //merge 2 arrays
    int index1 = 0;
    int index2 = 0;
    arrayIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if(first[index1] < second[index2])
            arr[arrayIndex++] = first[index1++];
        else
            arr[arrayIndex++] = second[index2++];
    }
     
     while(index1 < len1)
     {
         arr[arrayIndex++] = first[index1++];
     }

     while(index2 < len2)
     {
         arr[arrayIndex++] = second[index2++];
     }

     delete []first;    // freeing memory
     delete []second;

}

void mergeSort(int *arr, int s, int e)
{
    //base case
    if(s>=e)
        return;

    int mid = (s+e)/2;

    //left part sort krna h
    mergeSort(arr, s , mid);

    //right part sort krna h
    mergeSort(arr, mid+1, e);

    //merge 2 sorted arrays
    merge(arr, s, e);

}

int main()
{
    int arr[5] = {5,2,6,1,3};
    int n = 5;
    mergeSort(arr, 0, n-1);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }   cout << endl;
}