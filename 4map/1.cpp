#include <bits/stdc++.h>

using namespace std;

int bmt[1000];

int main() {        
    ios::sync_with_stdio(false);
    cin.tie(0);
    // // int cnt[1000]; // local variable's initial element is not all 0
    // int cnt[1000] {}; // using curly braces, you can make all elements to 0 like the global varible
    // for(int i = 0; i < 10; i++) cout << cnt[i] << " ";
    // cout << '\n';

    // for(int i = 0; i < 10; i++) cout << bmt[i] << " "; // global variable's all element is 0
    // cout << '\n';


    // can see how many times, an elemenet of an array occurs in an array
    // vector<int> v = {1, 2, 1, 3, 1, 3};
    // for(int i = 0; i < 5; i++) {
    //     bmt[v[i]]++;
    // }
    // for(int i = 0; i < 5; i++) cout << bmt[i] << ' ';
    // cout << '\n';


    // 1 1 2 1 3 3 - Here, frequency of 1, 2, 3 are 3, 2, 1 respectively


    // int arr[5];
    // arr[2] = 10; // data type of index is int
    // cout << arr[2] << '\n';

    // map<string, int> id; // first one works as key, second one works like int
    // id["fahad"] = 1; // data type of index is string. It doesn't store like index, map only know key and value. Value can be accessed by key
    // id["sima"] = 5;

    // cout << id["sima"] << '\n';

    // map<string, int> m = {{"Fahad", 20}, {"Sima", 30}}; // initialization at the beginning
    // cout << m["Fahad"] << " " << m["Sima"] << '\n';


    // map<string, string> gender;
    
    // gender["fahad"] = "male";
    // gender["mim"] = "female";

    // cout << gender["fahad"] << " " << gender["mim"] << '\n';


    // If you don't initialize anything, then map will print the default value which will be empty
    // not garbage like the local variable if you don't use curly braces
    // map<string, int> gender;
    // cout << gender["fahad"] << '\n'; // calling a key that has no value will store the key in the map with empty default thing depending on the data type

    
    // normal array can't work with negative index or 10^8 this kind of, that time, map is the best to use as it stores value as key-value 
    // vector<long long> v = {1, 2345234523452345, 10, 2345234523452345};
    // map<long long, int> count;

    // for(int i = 0; i < v.size(); i++) {
    //     count[v[i]]++;
    // }
    // cout << count[2345234523452345] << '\n'; // occured two times


    // map always sorted based on his key
    // vector<long long> v = {2345234523452345, 2, 10, 2345234523452345, 2};
    // map<long long, int> count;

    // for(auto u : v) count[u]++;

    // for(auto u : count) cout << u.first << " " << u.second << '\n';


    // when string is used as a key of map, then it is sorted through lexicographically
    // map<string, int> id;
    // id["sharif"] = 1;
    // id["momo"] = 3;
    // id["sharif"] = 5;
    // id["prety"] = 6;
    // id["dima"] = 10;

    // for(auto u : id) cout << u.first << " " << u.second << '\n';


    // map<string, int> id = {{"shazif", 1}, {"momo", 3}, {"sharif", 5}};
    // id["sharif"] = 10; // key is exist, so no new key will be created but change the value of that key
    // for(auto u : id) cout << u.first << " " << u.second << '\n';


    // int cnt[123];
    // cnt[5] = 10; // for modifing and accessing, time complexity O(1) - constant time

    // but map sorted the key and retrive the key when you modify or access, so time complexity
    // map<string, int> id;
    // id["shahriar"] = 20; // O(log2(n))
    // cout << id["shahriar"] << '\n'; // O(log2(n))


    // map<int, bool> vis;
    // vector<int> v = {2, 2, 1, 1, 3};
    
    // for(auto u : v) vis[u] = 1;
    // // for only modifing one, it takes O(log2(n)), this loops runs n times, so overall n * log2(n)

    // for(auto u : vis) cout << u.first << " " << u.second << '\n';


    // map<string, int> id; // storing input in map

    // int n; cin >> n;
    // for(int i = 0; i < n; i++) {
    //     string s;
    //     int d; 
    //     cin >> s >> d;
    //     id[s] = d;
    // }

    // for(auto u : id) cout << u.first << " " << u.second << '\n';


    // vector<map<string, int>> v; // vector of map
    
    // map<string, int> c;
    // c["fahad"] = 1;
    // v.push_back(c);

    // cout << v[0]["fahad"] << '\n';


    // unique: maps keys are always distinct, so the size of map will be the number of distinct elements here
    // map<int, int> c;
    // c[1] = 1;
    // c[2] = 2;
    // c[3] = 1;
    // c[3] = 2; // the updated so, c[3] values will be change from 1 to 2

    // cout << c.size() << '\n';



    return 0;
}