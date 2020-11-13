#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int max_diff = INT_MIN;
        int size = arr.size();
	for (int i=0; i<size; i++){
		if (i==0){
			for(int j=i; j<size; j++) if (arr[i]<arr[j] && max_diff<(arr[j]-arr[i])) max_diff = arr[j]-arr[i];
		}
		else for(int j=i; j<size; j++) if (arr[j]>arr[j-1] && arr[i]<arr[j] && max_diff<(arr[j]-arr[i])) max_diff = arr[j]-arr[i];
	}
	
    if (max_diff==INT_MIN) return 0;
	return max_diff;
    }
};