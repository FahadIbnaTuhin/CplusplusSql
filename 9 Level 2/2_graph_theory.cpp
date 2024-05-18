#include <bits/stdc++.h>

using namespace std;

int main() {
    // Node: City & Edge: Road
    // From one node, if you can go other node directly, then these are called adjcent 

    // Direct Edge: Can go only one direction. Can't go opposite. Like One Way Highway
    // Undirect Edge: Opposite of Direct Edge. 
    // Undirect Edge two way, Direct Edge one way

    // Distance/Duration between two node is called Weight. It occurs Direct edge. 
    // In Undirect, weight is 1 between any two node. If no weight is mentioned, take 1 

    // Starting from one node, and after going through a lot of path cyclically if you come
    // to the starting node, then it is called cyclic graph. Number of nodes you went through 
    // will be the length of the cycle. REMEMBER, it won't cycle if you visit any node twice(exclude the root/starting node)
    // to be a cycle, minimum 2 edges will need. If you go 1 to 2 and come 2 to 1, then it is not cycle
    // It's called Backage
    
    // You cann't say if you go one node to his adjcnet and come back it will be 2 length cyclic, as you go through 2 node

    // In Connected graph, every node is connected with each other such a way that everyone can visit directly or 
    // indirectly but visiting is possible. 

    // Simple Path: Will visit each node only once when going to any path. 
    // Complex Path: If visit any node more than once, then it is called complex path

    // Arributes of Tree:
    // If exist N nodes and (N - 1) edges and if the graph is connected
    // It can be weighted or unweighted. Cycle won't exist. For going to one node to another,
    // there will be always one simple path
    // In tree, simple path is the shortest path

    // Tree has root. So, it is called also rooted tree

    // Degree of a node will be always root. And the number of child it has is the degree of 
    // this node. Degree of a node can have his parent, but when we will try to find out his degree,
    // we have to consider it as the root and this roots number of adjcent child will be the degree of this node

    // End nodes of Tree, that has no child is called Leaf. Every Leafs degree is 1

    // Except leaf node, if every node has 2 child, then that tree is called binary tree

    // In a tree, if we consider someone as a root and including root all of his tree will be subtree
    // N node has m Subtree if number of m nodes are availble(including N node as a root also) inside this 

    // If two nodes parents are same, then they are siblings of one another

    // Root always 0 lavel. Suppose, root has 2 adjcnet child, so these 2 child will be in 1 level and so on.
    // First 0lvel, 1 level , 2 level, ..............  
    // Highest Level is the height of a tree

    return 0;
}