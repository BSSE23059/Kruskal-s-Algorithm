#ifndef FUNCTION_H
#define FUNCTION_H

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void makeSet(vector<int>& parent, vector<int>& rank, int n);
int findParent(vector<int>& parent, int node);
void unionSet(int u, int v, vector<int>& parent, vector<int>& rank);
int minimumSpanningTree(vector<vector<int>>& edges, int n);

#endif