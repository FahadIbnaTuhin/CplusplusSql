#include <bits/stdc++.h>

using namespace std;

int main() {
    // Node: City & Edge: Road
    // From one node, if you can go other node directly, then these are called adjcent 

    // Direct Edge: Can go only one direction. Can't go opposite. Like One Way Highway
    // Undirect Edge: Opposite of Direct Edge. 

    // Undirect Edge two way, Direct Edge one way

    // Distance/Duration between two node is called Weight. It occurs Direct edge. 
    // In Undirect, weight is 1 between any two node. If no node is mentioned, take 1 

    // Starting from one node, and after going through a lot of path cyclically if you come
    // to the starting node, then it is called cyclic graph. Number of nodes you went through 
    // will be the length of the cycle 
    
    // You cann't say if you go one node
    // to his adjcnet and come back it will be 2 length cyclic, as you go through 2 node

    // In Connected graph, every node is connected with each other. Connected style can be
    // either directly or indirectly

    // Simple Path: Will visit each node only once when going to any path. 
    // Complex Path: If visit any node more than once, then it is called complex path

    // Arributes of Tree:
    // If exist N nodes and (N - 1) edges and if the graph is connected
    // It can be weighted or unweighted. Cycle won't exist. For going to one node to another will
    // be always one simple path
    // In tree, simple path is the shortest path

    // If a node connected with n number of edges, then it's degree is n. Another way, number of adjcents
    // a node is connected is called degree of this node. Here, node must be root to calculate it's degree


    // End nodes of Tree, that has no child is called Leaf. Every Leafs degree is 1

    // Except leaf node, if every node has 2 child, then that tree is called binary tree



    return 0;
}