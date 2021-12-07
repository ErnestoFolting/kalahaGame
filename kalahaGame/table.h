#pragma once
#include <vector>
using namespace std;

struct table
{
	vector<int> tableVector;
	bool move(int id, int cell) {
		int lastId = 0;
		int stones = tableVector[cell];
		tableVector[cell] = 0;
		for (int i = cell + 1; i < tableVector.size(); i++) {
			if (id == 0 && i == tableVector.size() - 1) {
				i = -1;
				continue;
			}
			if (id == 1 && i == 6) {
				continue;
			}
			tableVector[i] += 1;
			lastId = i;
			if (id == 1 && i == (tableVector.size() - 1)) {
				i = -1;
			}
			stones--;
			if (stones == 0)break;
		}
		//If we chose kalah------------
		if (lastId == 6 && id == 0) {
			return false;
		}
		if (lastId == 13 && id == 1) {
			return false;
		}
		//------------------------------

		//If last stone in your blank cell
		if (id == 0 && lastId < 6 && tableVector[lastId] == 1  ) {
			tableVector[lastId] = 0;
			tableVector[6] += 1;
			tableVector[6] += tableVector[12 - lastId];
			tableVector[12 - lastId] = 0;
		}
		//--------------------------------

		//If last stone in computer's blank cell
		if (id == 1 && lastId < 13 && lastId > 6 && tableVector[lastId] == 1) {
			tableVector[lastId] = 0;
			tableVector[13] += 1;
			tableVector[13] += tableVector[12 - lastId];
			tableVector[12 - lastId] = 0;
		}
		//--------------------------------
		return true;
	}
	table(vector<int> vec) {
		for (int i = 0; i < 14; i++) {
			tableVector.push_back(vec[i]);
		}
	}
	
};

