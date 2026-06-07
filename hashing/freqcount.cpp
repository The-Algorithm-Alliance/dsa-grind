//count the number of occurences of array elements using an unordered_map. 

#include <iostream>
#include <unordered_map>
//#include <bits/stdc++.h> can be used as well but it runs a large overhead.
using namespace std;



void countfreq(int arr[],int s){
    unordered_map <int,int> f;
    
    for(int i = 0;i<s;i++)
        f[arr[i]]++;
    
    for (auto x : f) {
        cout << x.first << " " << x.second << endl;
    }
}

int main(){
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    countfreq(arr,n);
}
