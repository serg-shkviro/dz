#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

vector<list<unsigned int>> makeAdjacentyList(const list<pair<unsigned int, unsigned int>>& edgeList)
{
	size_t vertexSize = 0;
	for (auto i = edgeList.begin(); i != edgeList.end(); i++)
		vertexSize = max(vertexSize, (size_t)max(i->first, i->second) + 1);

	vector<list<unsigned int>> adjacentyList(vertexSize);
	for (auto i = edgeList.begin(); i != edgeList.end(); i++)
	{
		adjacentyList[i->first].push_back(i->second);
		adjacentyList[i->second].push_back(i->first);
	};

	return adjacentyList;
};

vector<vector<unsigned int>> makeAdjacentyMatrix(const vector<list<unsigned int>>& adjacentyList)
{
	size_t vertexSize = adjacentyList.size();
	vector<vector<unsigned int>> adjacentyMatrix;

	adjacentyMatrix.resize(vertexSize);
	for (size_t i = 0; i < vertexSize; i++)
		adjacentyMatrix[i] = vector<unsigned int>(vertexSize, 0);

	for (size_t i = 0; i < vertexSize; i++)
		for (auto j = adjacentyList[i].begin(); j != adjacentyList[i].end(); j++)
			adjacentyMatrix[i][*j] = 1;
	return adjacentyMatrix;
}

list<pair<unsigned int, unsigned int>> makeEdgeList(const vector<vector<unsigned int>>& adjacentyMatrix)
{
	size_t vertexSize = adjacentyMatrix.size();
	list<pair<unsigned int, unsigned int>> edgeList;
	for (unsigned int i = 0; i < vertexSize; i++)
		for (unsigned int j = i; j < vertexSize; j++)
			if (adjacentyMatrix[i][j] == 1)
				edgeList.emplace_back(i, j);
	return edgeList;
}

int main()
{
	size_t E;
	list<pair<unsigned int, unsigned int>> edgeList;
	unsigned int v, u;

	cin >> E;
	for (size_t i = 0; i < E; i++)
	{
		cin >> v >> u;
		edgeList.emplace_back(v, u);
	};
	cout << endl;
	size_t q = 0;
	vector<list<unsigned int>> adjacentyList = makeAdjacentyList(edgeList);
	for (auto i = adjacentyList.begin(); i != adjacentyList.end(); i++)
	{
		cout << q++ << ": ";
		for (auto j = i->begin(); j != i->end(); j++)
			cout << *j << " ";
		cout << endl;
	};

	cout << endl;
	vector<vector<unsigned int>> adjacentyMatrix = makeAdjacentyMatrix(adjacentyList);
	q = adjacentyMatrix.size();
	cout << "   ";
	for (size_t i = 0; i < q; i++)
	cout << i << " ";
	for (size_t i = 0; i < q; i++)
	{
		cout << "\n" << i << ": ";
		for (size_t j = 0; j < q; j++)
			cout << adjacentyMatrix[i][j] << " ";
	};

	cout << endl << endl;
	edgeList = makeEdgeList(adjacentyMatrix);
	for (auto i = edgeList.begin(); i != edgeList.end(); i++)
		cout << i->first << " " << i->second << endl;


	return 0;
}