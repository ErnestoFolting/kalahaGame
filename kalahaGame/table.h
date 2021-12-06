#pragma once
#include <vector>
using namespace std;

struct table
{
	vector<int> tableVector;
	void move(int id, int cell) {
		int stones = tableVector[cell];
		tableVector[cell] = 0;
		for (int i = cell+1; i < tableVector.size(); i++) {
			if (id == 0 && i == tableVector.size() - 1) {
				i = -1;
				continue;
			}
			tableVector[i]+=1;
			stones--;
			if (stones == 0)break;
		}
	}
	table() {
		for (int i = 0; i < 14; i++) {
			tableVector.push_back(6);
		}
		tableVector[0] = 20;
		tableVector[6] = 0;
		tableVector[13] = 0;
	}
	
};

