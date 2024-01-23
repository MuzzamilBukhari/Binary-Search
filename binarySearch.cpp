// "Embarking on a journey into Data Structures and Algorithms in C++! 🚀 Today marked a milestone as I conquered the basics with Linear Search and Binary Search Algorithms. Excited for the challenges and learning ahead! 💻🔍 #DSA #Cplusplus #LearningJourney #AlgorithmMastery"

#include<iostream>
using namespace std;
int main (){
    int n = 5;
    int arr[5] = {32, 45, 49, 53, 72};
    int toSearch = 54;
    int si = 0;
    int li = n-1;
    while (si <= li){
        int mi = (si + li) / 2;
        if (arr[mi] == toSearch){
            cout<<"Found at position "<<mi<<endl;
            break;
        }
        if (arr[mi] > toSearch){
            li = mi - 1;
        } else {
            si = mi + 1;
        }
    };
    if (si > li){
        cout<<"Not found";
    }
}