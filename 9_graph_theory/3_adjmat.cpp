#include <bits/stdc++.h>

using namespace std;

const int mx = 1002;
char adjMat[mx][mx];

int main() {
    // Number of dimension = number of nodes
    // In LightOj always use scanf, printf. [lightoj has problems with cin, cout]

    // int n, m;
    // cin >> n >> m;

    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= m; j++) { // for using string, index will be 0 based
    //         cin >> adjMat[i][j];
    //     }
    // }

    // cout << "\nMy adjMat : \n";

    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         cout << adjMat[i][j];
    //     }
    //     cout << '\n';
    // }

    // What is the maximum degree in a graph? -> If there exists M edges, then highest degree will be 2 * M

    // every node's list size is equivaluent to it's degree
    // M size is at max 10^5

    // Space Complexity of Adj Mat: O(n ^ 2)

    // For grid problem, we will use adjacent matrix 
    // But for normal graph where node, edge will be given, here, we will always use adjacent list, as it 
    // takes very less memory compared to the adjacent matrix

    return 0;
}

// Input 
// 4 3
// s##
// ...
// ##.
// ##t

// ".": can go right if it exist in the right
// "#": can go down if it exist in the bottom
// "s": indicates starting index from where we should start moving
// "t": indicates the ending point where we need to reach