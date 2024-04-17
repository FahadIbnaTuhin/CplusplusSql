#include <bits/stdc++.h>

using namespace std;

void insert(set<int> &s,int x)
{
    s.insert(x);
}

/*prints the contents of the set s */
void print_contents(set<int> &s)
{
    for(auto u : s) cout << u << " ";
}

/*erases an element x from the set s */
void erase(set<int> &s,int x)
{
    s.erase(x);
}

/*returns 1 if the element x is
present in set s else returns -1 */
int find(set<int> &s,int x)
{
    if (s.count(x) == 1) return 1;
    else return -1;
}

/*returns the size of the set s */
int size(set<int> &s)
{
   return s.size();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) {
        int q; cin >> q;
        set<int> s;

        for(int i = 0; i < q; i++) {
            char y;
            cin >> y;
            if (y == 'e') {
                cout << size(s) << ' ';
                continue;
            } else if (y == 'b') {
                print_contents(s);
                continue;
            }
            int x; 
            cin >> x;

            if (y == 'a') insert(s, x);
            else if (y == 'c') erase(s, x);
            else if (y == 'd') cout << find(s, x) << ' ';
        }
        cout << '\n';
    }

    return 0;
}

// Input: 
// 2
// 6
// a 1 a 2 a 3 b c 2 b
// 5
// a 1 a 5 e d 5 d 2

// Output: 
// 1 2 3 1 3
// 2 1 -1

// https://www.geeksforgeeks.org/problems/c-stl-set-6-set/1