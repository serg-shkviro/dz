#include "pch.h"
#include <iostream>
#include <queue>
#include <vector>
#include <functional>
#include <stdio.h>
using namespace std;


int main() {
	int time, N, X;
	priority_queue<long long, vector<long long>, greater<long long>> station;
	scanf("%d %d", &N, &X);
	for (int i = 0; i < N; i++) {
		scanf("%d", &time);
		if (station.size() != X) station.push(time);
		else {
			long long temp = station.top(); station.pop();
			station.push(temp + time);
		};
	};
	
	while (station.size() > 1) station.pop();
	printf("%lld\n", station.top());
	return 0;
};
