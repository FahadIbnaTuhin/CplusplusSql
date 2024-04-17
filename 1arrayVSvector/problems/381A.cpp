// time complexity O(n) because, everytime when the while loop occurs, 
// one index will be reduce when calculating
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int l = 0, r = sizeof(arr) / sizeof(arr[0]) - 1;
    int s = 0, d = 0, f1 = 1;

    while(l <= r) {
        if (f1 == 1) {
            if (arr[l] < arr[r]) {
                s += arr[r];
                --r;
            } else {
                s += arr[l];
                ++l;
            }

            f1 = 2;
        } else {
            if (arr[l] < arr[r]) {
                d += arr[r];
                --r;
            } else {
                d += arr[l];
                ++l;
            }

            f1 = 1;
        }
    }

    cout << s << " " << d << endl;

    return 0;
}



// time complexitity: wrost case: 5 4 3 2 1
// here always the begin will be picked by someone and for one time do this
// take O(n) so, if we do n times for comparing all of these, it will take O(n^2).
// O(n^2)-> here from problem page, n can be 1000, so (1000^2) = 10^6[10^8 takes 1 second].
// as the time limit is 1, so 10^6 will pass easily
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n; cin >> n;
//     vector<int> cards(n);
//     for(int& i : cards) cin >> i;
//     int s = 0, d = 0, f1 = 1; // f1 = 1 means Sereja, 0 for dima

//     while(!cards.empty()) {
//         if (f1 == 1) {
//             // instead of *cards.begin() you can use cards[0] to access value
//             // begin() is a iterator, so to access it's value, need to do dereference
//             if (*cards.begin() > cards.back()) { 
//                 s += *cards.begin(); // here cards[0] is wrong, because we erase take iterator
//                 cards.erase(cards.begin());
//             } else {
//                 s += cards.back();
//                 cards.pop_back();
//             }

//             f1 = 2;
//         } else {
//             if (*cards.begin() > cards.back()) {
//                 d += *cards.begin();
//                 cards.erase(cards.begin());
//             } else {
//                 d += cards.back();
//                 cards.pop_back();
//             }

//             f1 = 1;
//         }
//     }

//     cout << s << " " << d << endl;

//     return 0;
// }

// 44