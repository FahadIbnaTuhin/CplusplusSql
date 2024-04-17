#include <bits/stdc++.h>
using namespace std;

int main() {
    // int a[4];
    // vector<int> v;

    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(5);
    // v.push_back(6);

    // cout << v[2] << endl; // Can print and assign individually
    // v[2] = 10;
    // cout << v[2] << endl;

    // for(int i = 0; i < v.size(); i++) cout << v[i] << " "; // can print using size()
    // cout << endl;

    // can take input from the use and store them dynamically 
    // int n; cin >> n;
    // for(int i = 0; i < n; i++) {
    //     int a; cin >> a;
    //     v.push_back(a);
    // }

    // for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
    // cout << endl;


    // Can assign at the initialization:
    // vector<int> x = {1, 2, 3, 4, 5};
    // for(int i = 0; i < x.size(); i++) cout << x[i] << " ";
    // cout << endl;

    // you can clear vector if you want and also check if a vector is empty or not using 
    // empty(), for true 1, 0 otherwise.
    // vector<int> y = {1, 4, 3};
    // v.clear();

    // cout << v.empty() << endl;
    // v = {2, 3};
    // cout << v.empty() << endl;


    // resize to declare the size of the vector like array. You will get rest of 
    // the elements 0 if all the size is not filled up
    // vector<int> p = {2, 3, 4, 5};
    
    // p.resize(10);

    // cout << p.size() << endl;
    // for(int i = 0; i < p.size(); i++) cout << p[i] << " ";
    // cout << endl; 

    // To use resize at the beginning, can do this: 
    // vector<int> u;
    // v.resize(10);
    // vector<int> u(10); // initialization at the beginning. Now it is the same like array

    // int n; cin >> n;
    // for(int i = 0; i < n; i++) cin >> v[i];

    // for(int i = 0; i < n; i++) cout << v[i] << " ";
    // cout << endl;


    // If you initilize the vector with the size at the beginning, you can access, modify anytime you want like array
    // vector<int> r(10);
    // for(int i = 0; i < r.size(); i++) cout << r[i];
    // cout << endl;

    // r[4] = 5;
    // cout << r[4] << endl;

    // to store 10 values where all of the element will be 5, then
    // vector<int> e(10, 5);

    // for(int i = 0; i < e.size(); i++) cout << e[i] << " ";
    // cout << endl;


    // To copy one vector all thing to another vector
    // vector<int> a = { 2, 3, 4, 5 };
    // vector<int> temp;

    // temp = a;

    // cout << temp.size() << endl;
    // for(int i = 0; i < temp.size(); i++) cout << temp[i] << " ";
    // cout << endl;

    // cout << a.size() << endl;
    // for(int i = 0; i < a.size(); i++) cout << a[i] << " ";
    // cout << endl; 


    // To access the first and last thing of a vector, we can use begin() and end()
    // here begin() and end() is iterator type, like pointer. So to use this, have to use iterator
    // vector<int> h = {1, 2, 3, 4, 5};
    // vector<int>::iterator it; // iterator works with pointer. Vector type is int because h is also int type of 
    // // instead of it you can use any variable, but we use it because iterator starts with it

    // for(it = h.begin(); it != h.end(); it++) {
    //     cout << *it << " "; // as it is a pointer here so to get the value, use dereferencing
    // }
    // cout << endl;

    // for each loop -- loop through more shortly
    // vector<int> v = { 2, 3, 4, 5 };

    // for( int u : v ) cout << u << " ";
    // cout << endl;


    // vector<int> v = {2, 3, 4, 5};
    // for(int u : v) {
    //     u += 2;
    //     cout << u << " ";
    // }
    // cout << endl;

    // for(int u : v) cout << u << " ";
    // cout << endl;

    // you can use vector for string int, float, double, map anything
    // also you can use vector inside an vector and so on
    // vector< vector< vector<int> > > v; 


    // Problem: Until you get 0, store multiple input from an array and print them 
    // int n; 
    // vector<int> v;

    // while(cin >> n) {
    //     if (n == 0) break;
    //     v.push_back(n);
    // }

    // cout << v.size() << endl;
    // for(auto u : v) cout << u << " ";
    // cout << endl;


    // Sorting 
    // int a[] = {5, 3, 1, 2};
    // vector<int> v = {5, 3, 1, 2};

    // sort(a, a + 4); // sort(a + 0, a + 4);
    // sort(v.begin(), v.end()); 

    // sort(v.begin(), v.begin() + 3);
    // sort(v.begin() + 1, v.begin() + 3); // Time complexity of these kind: O(nlog2(n)). 1s almost, so, use this all the time, nothing to worry
    // sort(v.begin() + 1, v.end() - 1);

    // for(int u : v) cout << u << " ";
    // cout << endl;
    // Conclusion sorting: sort(a, a + 4) & sort(v.begin(), v.end()) both case a and v.begin() starts 
    // from 0 index. Both case second argument is exclusive. a to a + 4 means 0 to 4(exclusive)
    // v.begin() to v.end() means 0 to end(exclusive). Remember v.begin + 3 means 0 index to 4(exclusive) [0 index element, 1 + 3 = 4]
    // or you can say 0 to 3(inclusive) - Remember last one.

    // Summary
    // v.begin() + 1 to v.begin() + 3 means: 
    // 1) v.begin() + 1 means from the 1 index(not 0)
    // short v.begin() + 3 means before the 3rd index always always must index starts from 0)


    vector<int> y = {5, 1, 0, 3, 8};
    // // sort(y.begin(), y.end(), greater<int>()); // to get decreasing -- better to use the same thing for both
    // sort(y.rbegin(), y.rend()); // same like before but better for only vector

    // reverse(y.begin(), y.end()); // O(n)
    // for(int i : y) cout << i << " ";
    // cout << endl;

    // int arr[] = {5, 1, 3, 2, 19};
    // sort(arr, arr + 5, greater<int>()); 
    // sort(arr.begin(), arr.end()); // Error, cann't do that
    
    // for(int i = 0; i < 5; i++) cout << arr[i] << " ";
    // cout << endl;


    // vector<int> arr = {10, 3, 5};
    // cout << arr.back() << endl; // O(1)
    // arr.pop_back(); // O(1)
    // cout << arr.back() << endl;
    // cout << *arr.begin() << endl; // O(1)


    // vector<int> n = {2, 3, 4, 5};
    
    // n.erase(n.begin()); // O(n) because after deleting the first element, rest of the elements will shift 1 room at the left.
    // means element 2 will be deleted, then n[0], n[1], n[2] will be 3, 4, 5 respectively.

    // n.erase(n.begin() + 2); // O(n) - Bec element 4 will be deleted and the rest of the element will shift 1 room at the left.

    // for(int i : n) cout << i << " ";
    // cout << endl;
    
    // Conclusion: pop_back() takes O(1) because as it deletes from the end, no need to shift index to the left as no element exist after this
    // but for erasing at the beginning O(n). So, if a program needs to delete the first element every time it will be O(n^2) 
    // so, for these type of thing we will reverse that and use pop_back as it is too much faster


    // vector<int> v = {2, 3, 4, 5};

    // reverse(v.begin(), v.end()); // 5 4 3 2 

    // while(!v.empty()) {
    //     cout << v.back() << endl;
    //     v.pop_back();
    // }

    return 0;
}