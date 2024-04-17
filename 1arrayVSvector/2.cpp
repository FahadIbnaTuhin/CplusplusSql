#include <bits/stdc++.h>
using namespace std;

int main() {
    // To print only the unique values of a vector
    // vector<int> v = {2, 3, 5, 5, 7, 7, 1};
    // sort(v.begin(), v.end());
    // unique(v.begin(), v.end()); // will give unique unique values before a centain index

    // for(int& i : v ) cout << i << " ";
    // cout << endl;


    // To print exactly the unique values 
    vector<int> v = {2, 3, 5, 5, 7, 7, 1};
    // sort(v.begin(), v.end()); // O(nlog2(n)) 
    // int Sz = unique(v.begin(), v.end()) - v.begin(); // unique will return an index before this all are unique elements but it is not. So, we will subtract it, so - v.begin()
    // // here, as v is sorted, so overall unique time complexity is O(n)

    // cout << Sz << endl;
    // for(int i = 0; i < Sz; i++) cout << v[i] << " ";
    // cout << endl;
    // we sorted before unique because to know how many unique values are 


    // here, this it iterator indicates in which point there is the maximum value
    // vector<int>::iterator it = max_element(v.begin(), v.end()); // max_element & min_element time complexitiy O(n)
    // cout << *it << endl;

    // if you want to use sort for max_element or min_element, then it will take more time cause O(nlog2(n)) > O(n)

    // to get the maximum value from the middle 
    // vector<int>::iterator it = max_element(v.begin() + 1, v.begin() + 4); // to print index 1 to 3 index using iterator
    // cout << *it << endl;
    // int ind = max_element(v.begin() + 1, v.begin() + 4) - v.begin(); // to print the highest value index
    // cout << ind << endl;


    // int arr[2][2]; // 2d array in vector style
    vector< vector<int> > y;

    vector<int> a1 = {2, 3, 4};
    vector<int> a2 = {2, 3, 4, 5, 6, 7};
    y.push_back(a1);
    y.push_back(a2);

    for(auto u : y) {
        for(auto g : u) cout << g << " ";
        cout << endl;
    }
    // for 2d, 3d most of the time, array is used. If we don't need anything that will need vector
    // then array will be better as it is faster than vector but vector has a lot of functionality.
    // If you need any vector functionality, then use vector, otherwise array

    // vector<int> arr = {1, 2, 3, 8, 5, 3, 2, 1};
    // max_element(arr.begin(), arr.end()) will return the maximum iterator "begin() + 3". we can call this address 
    // for this it will return: 
    // begin() + 3 = address
    // => 3 = address - begin()


    // Calculate how much memory you have taken: 
    // Memomry usage means sum of how many you have taken integer or long long or other data types to store something
    // suppose one vector int arr has 10 elements. 1 int = 4 byte.
    // so 10 x 4 = 40 bytes

    // suppose inside an int vector arr, there are 10^5 elements, then total byte 10^5 x 4 byte
    // (10^5 x 4) / 1000 = 4x10^2 kilobyte. So memory usage 4x10^2kb
    // if you divide kb again with 1000, then will get mega byte


    // distinct count - Hackerearth
    // int sz = unique(arr.begin(), arr.end()) - arr.begin();
    // unique reture kore jotodur unique paise tar porer ta, tai last e 1 kom kore dite arr.begin() substract

    // log a base b = log(a)(b) will use like this to convey a base b
    // log(a)(b) = log(b) / log(a) [formula for log a base b]

    // / Time complexity: T number of case and everytime need to sort. One sort O(nlog2(n))
    // so, time complexity will be = T * O(nlog2(n)) = 50 * (13000 * log2(13000))
    // log2(13000) = log(13000) / log(2) = 13.66 = 14(almost)
    // 50 * 13000 * 14 = 9100000 = 9x10^6 (almost) which is less than(10^8 = 1s), so will pass
    return 0;
}