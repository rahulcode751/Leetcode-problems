#include<iostream>
#include<vector>
// is code ki time complexity ologn h leet code
using namespace std;
class solution{
	public:
		int getFirst(vector<int>& nums , int target){
			int s = 0;
			int e = nums.size()-1;
			int ans = -1;
			while(s<=e){
				int mid = s+ (e-s)/2;   /// (s+e)/2
				
				if(nums[mid] == target)
				{
					ans = mid;
					e = mid -1;  /// LHS for first position
				} else if(nums[mid] < target)
				{
					s = mid + 1;
				} else
				{
					e = mid -1;
				}
			}
			return ans;
		}
		
	   int getLast(vector<int>& nums , int target){
			int s = 0;
			int e = nums.size()-1;
			int ans = -1;
			while(s<=e){
				int mid = s+ (e-s)/2;   /// (s+e)/2
				
				if(nums[mid] == target)
				{
					ans = mid;
					s = mid + 1;  /// RHS for first position
				} else if(nums[mid] < target)
				{
					s = mid + 1;
				} else
				{
					e = mid -1;
				}
			}
			return ans;
		}
		vector<int> searchRange(vector<int>& nums,int target)
		{
			vector<int> v(2,-1);
			int first = getFirst(nums,target);
			if(first == -1)
			{
				return v;    //or agr ye krna ho cout the coccernece to yha v[0] = last - first + 1; kr dena 
			}
			int last = getLast(nums, target);
			v[0] = first;  ///or agr ye krna ho cout the coccernece to yha v[0] = last - first + 1; kr dena  or v[1] ki koi zarurat nhi h
			v[1] = last;
			return v;
		}
};
int main()
{
	vector<int> v(5,5),b;
	solution a;
	b = a.searchRange(v,5);
	cout<<b[0]<<" "<<b[1]<<endl;

	 return 0;
}


