#include<iostream>

using namespace std;

void merge(int nums1[], int m, int nums2[], int n, int arr[])
    {
        
        int i = 0;
        int j = 0;
        int k = 0;
       while(i<m && j<n)
       {
                if(nums1[i] < nums2[j])
                {
                    arr[k] = nums1[i];
                    k++;
                    i++;
                }
               else
                {
                   arr[k] = nums2[j];
                   k++;
                   j++;
                }
        }
        
        while(i<m)          // copy
        {
            arr[k] = nums1[i];  //galti kri thi
            k++;
            i++;
            
        }     
        while(j<n)          // copy
        {
            arr[k] = nums2[j];
            k++;
            j++;
            
        }     
    }

void print(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] <<" ";
    }  cout << endl;
}


int main()
{
    
    int nums1[5] = {1,3,5,7,9};
    int nums2[3] = {2,4,6};

    int arr[8] = {0};

    merge(nums1, 5, nums2, 3, arr);

    print(arr,8);
} 
  

'''
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        vector <int> arr;
        int i = 0;
        int j = 0;
       while(i<m && j<n)
       {
                if(nums1[i] > nums2[j])
                {
                    arr.push_back(nums2[j]);
                    j++;
                }
               else if (nums1[i] < nums2[j])
                {
                   arr.push_back(nums1[i]); 
                    i++;
                }
               else
               {
                   arr.push_back(nums1[i]);
                   arr.push_back(nums2[j]);
                   i++;
                   j++;
               }
        }
        
        while(i<m)          // copy
        {
            arr.push_back(nums1[i]);  // try
            i++; 
            
        }     
        while(j<n)          // copy
        {
            arr.push_back(nums2[j]);
            j++;
        }    
        
    nums1 = arr;
    }
};
'''
