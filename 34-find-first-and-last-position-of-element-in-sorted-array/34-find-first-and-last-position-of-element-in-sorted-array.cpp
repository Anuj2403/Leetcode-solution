class Solution {
public:
    vector<int> searchRange(vector<int>& a, int target) {
	int low = 0;
    int high = a.size()-1;
        
	vector<int> ans(2, -1);
        
	// Loop for first occurrence of target
	while(low <= high){
		int mid = low + (high-low)/2;
        
		if(a[mid] < target)
			low = mid+1;
		else if(a[mid] > target)
			high = mid-1;
		else{
			if(mid == low || a[mid] != a[mid-1]){
				ans[0] = mid;
				break;
			}
			else{
				high = mid-1;
				ans[0] = mid-1;
			}
		}
	}

	//Loop for last occurrence of target
	low = 0;
    high = a.size()-1;
        
	while(low <= high)
    {
		int mid = low + (high-low)/2;
        
		if(a[mid] < target)
			low = mid+1;
		else if(a[mid] > target)
			high = mid-1;
		else{
			if(mid == high || a[mid] != a[mid+1]){
				ans[1] = mid;
				break;
			}
			else{
				low = mid+1;
				ans[1] = mid+1;
			}
		}
	}
	return ans;
        
   }
};

//Reference -->https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/discuss/573123/C%2B%2B-how-to-nail-binary-search-the-very-first-time(explained)
