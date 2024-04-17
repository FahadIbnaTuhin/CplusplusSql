#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// sync_with_stdio is used to stop syncronization with C because we will use only c++
// cin.tie(0);cout.tie(0); to make input and output faster. 

int main() {
    optimize(); 
    // cout << "HI" << '\n'; // for using optimize(), don't use endl. It will give you TLE
    // '\n' is more efficient in terms of memory usage because it's a single character. BEST!!!
    // "\n" might be more readable to some programmers because it's consistent with other string literals and might convey the intention of outputting a newline more clearly.
    // but for interactive coding, you need to use endl. No neeeded now. interactive coding, you will know more about flush
    // interactive problem means - online judge will give you input based on you input output, especially higher rating 

    // int a[4] = {1, 2, 3, 4}; // static
    // vector<int> b = {1, 2, 3, 4}; // dynamic

    // same char works like int and static. vector works like dynamic and vector style
    // int you can initialize at the beginning and faster than vector.
    // char & string also same. string also at the initialization without telling the size
    // stores only end(), then when you add element, it just make index and keep that value inside 
    // char ch[] = {'f', 'a', 'h', 'a', 'd'};
    // string s;

    // s = s + 'a'; // can use any type of quote but for single and multiple character it is recommanded to use '' & "" respectively
    // s = s + "b";
    // s = s + ' ';
    // s += 'c';
    // cout << s << endl;

    // the functions that are in vector, can also use with string
    // string name = "fahad";
    // cout << name.size() << endl;
    // cout << name[0] << " " << name[name.size() - 1] << " " << endl;
    // name[2] = 'G';
    // cout << name[2] << endl;

    // string s, s1 = "Fahad", s2 = "Islam";
    // char c = ' ';
    // s = s1 + c + s2;
    // cout << s << endl;

    // s1 += c; 
    // s1 += s2;
    // cout << s1 << endl;

    // string s = "fahad"; // don't initializing an string also contains a empty string, it is not invalid
    // s.clear(); // this will clear the s. But empty string is also a string
    // cout << s;

    // string s1 = "Shah", s2 = "kumar";
    // s1 = s2;
    // cout << s1 << endl;
    // cout << s1.empty() << endl;


    // string s = "Fahad Ibna Tuhin";
    // string::iterator it; // same like vector

    // // for(it = s.begin(); it != s.end(); it++) {
    // //     cout << *it;
    // // }
    // for(auto i : s) cout << i;
    // cout << endl;


    // string s1 = "Muhammad", s2 = "muhammad"; // c++ case sensitive
    // if (s1 == s2) cout << "Equal" << endl; // equal here is O(n) here n will be the length of the smallest string
    // else cout << "Not Equal" << endl;


    // string s1 = "ABCD";
    // // reverse(s1.begin(), s1.end()); // O(n)
    // reverse(s1.begin() + 1, s1.begin() + 3);
    // // reverse(s1.begin() + 1, s1.end() - 1); // same like the below line
    // cout << s1 << endl; 


    // Famous problem using string equal & reverse, we can check if a string is palindrome or not
    // Palindrome: It remains unchanged when its order is reversed
    // string s = "aabaa";
    // string temp = s;

    // reverse(temp.begin(), temp.end());

    // if (s == temp) cout << "Palindrome\n";
    // else cout << "Not Palindrome\n";


    // To get string which has space: 
    // string name; 
    // // cin >> name; // for input "fahad islam", you will get only this output "fahad"

    // getline(cin, name);
    // cout << name << '\n';


    // int t; cin >> t;
    // for(int tc = 1; tc <= t; tc++) {
    //     string s;
    //     getline(cin, s);
    //     cout << "Input: " << s << endl;
    // }
    // It takes the previous enter as a input, so problem arises when using getline

    // Alaways take char inp before taking getline. To solve this: 
    // int t; cin >> t;
    // for(int tc = 1; tc <= t; tc++) {
    //     string s;
    //     char c;
    //     cin >> c; // first character input
    //     getline(cin, s);
    //     s = c + s;
    //     cout << "Input: " << s << endl;
    // }


    // string s = "deacb"; // works like lexicographically. Ascii low value first, big value at the end
    // string s = "deacbA"; // in ascii, A comes before a lexicographically
    // sort(s.begin(), s.end()); // O(nlog2(n))
    // cout << s << '\n';


    // string a = "fahad";
    // // sort(a.begin(), a.end(), greater<char>());
    // sort(a.rbegin(), a.rend());
    // cout << a << '\n';

    // string s = "deacbAAA";
    
    // sort(s.begin(), s.end());
    // int Sz = unique(s.begin(), s.end()) - s.begin();

    // for(int i = 0; i < Sz; i++) cout << s[i];
    // cout << endl;


    // string s = "deacbAAA"; // lexicographically, A is the smallest and e is the highest[compare ascii value]

    // string::iterator it = max_element(s.begin(), s.end());
    // cout << *it << endl;

    // cout << *max_element(s.begin(), s.end()) << endl;
    // cout << *min_element(s.begin(), s.end()) << endl;


    // string s = "deacbAAA";
    // // s.erase(s.begin()); // O(n) cause every index element will shift 1 to the left side
    // s.erase(s.begin() + 2);
    // cout << s << endl;


    // string s = "deacbAAA";
    // s.erase(s.end() - 1); // end() is the place by which program can understand it's the end. So, before this will be the last element of s
    // // here erase takes O(1) as it is deleting from the right, so no need to shift any index to the right side
    // cout << s << endl;

    // string n = "fahad";
    // // n.push_back('g');
    // n.pop_back();
    // cout << n << endl;
    // cout << n.back() << endl;


    // string s = "eeemon", t = "eemomo"; // will compare s[0] == t[0], then s[1] = t[2], ..... Lexicographically

    // if (s < t) cout << s << " is smallest\n";
    // else cout << t << " is smallest\n";

    // string s = "eee", t = "ee"; // s[0] = t[0], s[1] = t[1], then now as t has less length, so t will be the smallest
    // string s = "eea", t = "ee";
    // if (s < t) cout << s << " is smallest\n";
    // else cout << t << " is smallest\n";

    // lexicographically will count length only when both their previous part is same
    // string s = "Aasdfasdfasdfasdfsdf", t = "aDsdfsd";
    // lexicographically first s[0], t[0] comparison korbe, then s[1], t[1], evabe colte thake. jodi dui string r ekta nirdishto
    // index projonto sob same thake, tarpor konotar string shesh hoye jai, tokhon jeta small length, ota lexicographically small hobe

    // if (s < t) cout << s << endl;
    // else cout << s << endl;
    
    
    // int e n songkhok int r jonno sort nlog2(n) hoy, jekhane amra O(1) e comparison korte pari
    // string e O(n) e compare not possible, here we compare depending on the highest length of a string
    // so len(s) r jonno time complexity: nlog2(n) * len(s)
    // vector<string> v = {"Shariar", "Mubarat", "emon", "Nishan", "momo", "Prity", "Momo", "AAAA", "AA"}; 
    // // sort(v.begin(), v.end()); // compare will be in lexicographically like before
    // sort(v.rbegin(), v.rend()); // compare will be in lexicographically like before
    // for(auto u : v) cout << u << endl;

    // char arr[] = {'a', 'b', 'd', 'e'}; prefix of arr, also same like string but here char is used
    // for char, subarr, prefix of arr, suffix of arr
    // for string, substring, prefix of substring, suffix of

    // continous anything in a string is a prefix, the whole word is also a prefix itself
    // abcdef - a, ab, abc, abcd, abcde, abcdef all prefix of abcdef
    // same like prefix, suffix will be count from the back
    // abcdef - f, fe, fed, fedc, fedcba all suffix. 
    // Suffix, prefix continuous always so, ac not prefix and fd is not prefix

    // substring & subsegment is a part of string but it must need to be continue 
    // abcdef - cde, def, abc, ef etc are substring of abcdef

    // gap & continuous hole subsequence. abcdef - here ac is subsequence

    // Continuous & no gap hole contigious or substring


    // To delete any particular thing multiple time from a string
    // string s = "ASADAF";
    // // s.erase(remove(s.begin(), s.end(), 'A'), s.end());
    // // s.erase(remove(s.begin(), s.end(), 'A'), s.begin() + 4); 
    // s.erase(remove(s.begin(), s.end(), 'A'), s.end() - 2); // same like before
    // cout << s << endl;
    

    return 0;
}