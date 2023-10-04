#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge {
	int u, v, weight;
};

bool compareEdges(const Edge &e1, const Edge &e2) {
	return e1.weight < e2.weight;
}

int findParent(vector<int> &parent, int node) {
	if (parent[node] == node) {
		return node;
	}
	return findParent(parent, parent[node]);
}

void unionSets(vector<int> &parent, int u, int v) {
	int parentU = findParent(parent, u);
	int parentV = findParent(parent, v);
	parent[parentU] = parentV;
}

int minimumSpanningTree(vector<Edge> &edges, int n) {
	sort(edges.begin(), edges.end(), compareEdges);

	vector<int> parent(n + 1);
	for (int i = 1; i <= n; i++) {
		parent[i] = i;
	}

	int totalWeight = 0;
	int numEdges = 0;

	for (int i = 0; i < edges.size(); i++) {
		int u = edges[i].u;
		int v = edges[i].v;
		int weight = edges[i].weight;

		if (findParent(parent, u) != findParent(parent, v)) {
			unionSets(parent, u, v);
			totalWeight += weight;
			numEdges++;
		}
	}

	if (numEdges == n - 1) {
		return totalWeight;
	} else {
		return -1;
	}
}

int main() {
	int N, M;
	cin >> N >> M;

	vector<Edge> edges(M);
	for (int i = 0; i < M; i++) {
		cin >> edges[i].u >> edges[i].v >> edges[i].weight;
	}

	int minWeight = minimumSpanningTree(edges, N);
	if (minWeight == -1) {
		cout << "orz" << endl;
	} else {
		cout << minWeight << endl;
	}

	return 0;
}