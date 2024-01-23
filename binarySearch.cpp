#include<iostream>
using namespace std;

// Function to Search the number using Binary search
int binarySearch (int arr[], int n, int toSearch){
    int si = 0;
    int li = n-1;
    while (si <= li){
        int mi = (si + li) / 2;
        if (arr[mi] == toSearch){
            return mi;
        }
        if (arr[mi] > toSearch){
            li = mi - 1;
        } else {
            si = mi + 1;
        }
    };
    if (si > li){
        return -1;
    }
}
int main (){
    int n;
    cout<<"Enter the size of an array : ";
    cin >> n;
    int arr[n];
    int toSearch;
    cout<< "Enter array elements"<<endl;
    for (int i = 0;i<n;i++){
      cin >> arr[i];
    }
    cout<<"Enter the number you want to search in this array : ";
    cin >> toSearch;
    int pos = binarySearch(arr, n, toSearch);
    pos >= 0 ? cout<<"Found at position "<<pos : cout<<"Not found"; 
    
}