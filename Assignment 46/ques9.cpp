/* 9. Given two maps map1 and map2 having a string as the key and arrays of integers as
values, the task is to merge them in one map such that if a key is common in both the
maps, the respective arrays should be merged.
Example:
Input: map1 = { (“key1”, {0, 1}), (“key2”, {0, 1}) }, map2 = { (“key2”, {1, 2}) };
Output: { (key1, {0, 1}), (key2, {0, 1, 2}) }
Explanation: After merging key1 array will become {0, 1} and for key2 after merging
array will become {0, 1, 2} */

#include <bits/stdc++.h>
using namespace std;

vector<int> mergeArrays(vector<int>& a, vector<int>& b,
						int n, int m)
{
	vector<int> mergedArray;

	map<int, bool> mp;

	for (int i = 0; i < n; i++)
		mp[a[i]] = true;

	for (int i = 0; i < m; i++)
		mp[b[i]] = true;

	for (auto i : mp)
		mergedArray.push_back(i.first);
	return mergedArray;
}

map<string, vector<int> >
mergeMap(map<string, vector<int> >& map1,
		map<string, vector<int> >& map2)
{
	map<string, vector<int> > map3;
	map3.insert(map1.begin(), map1.end());

	for (auto itr : map2) {
		if (map3.find(itr.first) == map3.end())
			map3.insert({ itr.first, itr.second });
		else {
			auto temp_itr = map3.find(itr.first);
			vector<int> arr = mergeArrays(
				itr.second, temp_itr->second,
				itr.second.size(),
				temp_itr->second.size());
			map3[itr.first] = arr;
		}
	}
	return map3;
}

int main()
{
	map<string, vector<int> > map1, map2, map3;
	map1.insert({ "key1", { 0, 1 } });
	map1.insert({ "key2", { 0, 1 } });
	map2.insert({ "key2", { 1, 2 } });

	map3 = mergeMap(map1, map2);

	for (auto itr : map3) {
		cout << "\"" << itr.first << "\", { ";
		for (auto x : itr.second)
			cout << x << " ";
		cout << "}\n";
	}
	return 0;
}
