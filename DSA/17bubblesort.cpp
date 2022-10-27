// #include <bits/stdc++.h> 
// void bubbleSort(vector<int>& arr, int n)
// {   
// for(int i = 1 ; i<n ; i++)
// {
//     for(int j =0;j<n-i;j++)
//     {
//         if(arr[j]>arr[j+1]){
//         swap(arr[j],arr[j+1]);    
//         }
        
//     }
// }
// }   


 //optized code


 #include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
for(int i = 1 ; i<n ; i++)
{
    bool swapped=false;  // by using a bool we can check if the array is sprted or not
    for(int j =0;j<n-i;j++)
    {
        if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);    
            swapped = true; // if there are any swap in the array it changes to true
        }
        
    }
    if(swapped == false)
        break; // if there are no swap then he bool variable will remain false and thus we dont need to sort this array
}
}