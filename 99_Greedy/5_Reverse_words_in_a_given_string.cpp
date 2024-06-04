#include <bits/stdc++.h>

using namespace std;


// class Solution
// {
//     public:
//     string reverseWords(string S) 
//     { 
//         string ans = S;
//         reverse(ans.begin(), ans.end()); 

//         int m = 0;
//         for (int i = 0, n = ans.size(); i < n; i++) { 
//             if (ans[i] == '.') {
//                 reverse(ans.begin() + m, ans.begin() + i);
//                 m = i + 1;
//             }
//         }

//         reverse(ans.begin() + m, ans.end()); 

//         return ans;
//     } 
// };


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        string ans, temp;
        
        for (int i = S.size() - 1; i >= 0; i--) {
            if (S[i] == '.') {
                reverse(temp.begin(), temp.end());
                ans = ans + temp + '.';
                temp = "";
            } else {
                temp += S[i];
            }
        }
        
        reverse(temp.begin(), temp.end());
        ans = ans + temp;
        
        return ans;
    } 
};

// Both TC: O(N) && SC: O(N)

int main() {
    // string s = "hcum";
    // string s1 = "margorp";

    // reverse(s.begin(), s.end());
    // reverse(s1.begin(), s1.end());

    // cout << s << ' ' << s1 << '\n';
    string S = "i.like.this.program.very.much";
    string S1 = "pqr.mno";

    Solution sol;
    cout << sol.reverseWords(S) << '\n';

    return 0;
}

// https://www.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1