#include <iostream>
#include <vector>
using namespace std;
int findMax(vector<int>& v) {
	int max = v[0];
	for (int i = 1; i < v.size(); i++) {
		if (v[i] > max) {
		max = v[i];
		}
	}
	return max;
}
int findMin(vector<int>& v) {
	int min = v[0];
	for (int i = 1; i < v.size(); i++) {
	if (v[i] < min) {
		min = v[i];
		}
	}
	return min;
}
int main() {
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	int max = findMax(v);
	int min = findMin(v);
	cout << "Vektorun en buyuk elemani: " << max <<endl;
	cout << "Vektorun en kucuk elemani: " << min <<endl;
	return 0;
}
