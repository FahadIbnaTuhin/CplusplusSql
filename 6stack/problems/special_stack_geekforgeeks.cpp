#include <bits/stdc++.h>

using namespace std;

void push(stack<int>& s, int a){
	// Your code goes here
	s.push(a);
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	return s.size() == n;
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	return s.empty();
}

int pop(stack<int>& s){
	// Your code goes here
	s.pop();
}

int getMin(stack<int>& s){
	// Your code goes here
	int minimum = 9999;
    while(!s.empty()) {
        minimum = min(minimum, s.top());
        s.pop();
    }
    return minimum;
}

// https://www.geeksforgeeks.org/problems/special-stack/1