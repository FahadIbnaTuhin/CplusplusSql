#include <bits/stdc++.h>

using namespace std;

set<int> setInsert(int arr[],int n)
{
    set<int>s;
    
    //Your code here to insert arr into s
    for(int i = 0; i < n; i++) s.insert(arr[i]);
    
    return s;
}


void setDisplay(set<int>s)
{
    //Your code here to display elements of s
    for(auto u : s) cout << u << " ";
    cout<<endl;
}


void setErase(set<int>&s,int x)
{
   //write if condition here
    if (s.count(x) == 1) {
        s.erase(x);
        cout<<"erased "<< x;
    } else {
        //write else condition here
        cout<<"not found";   
    }
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) cin >> arr[i];

    set<int> s = setInsert(arr, n);
    setDisplay(s);
    int x; cin >> x;

    setErase(s, x);
    setDisplay(s);

    return 0;
}
// Input:
// 4
// 1 2 1 1
// 1

// Output:
// 1 2
// 2

// https://www.geeksforgeeks.org/problems/set-operations/1