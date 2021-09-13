// here i have demonstrated the full code with full logical syntanxe of leetcode problem number 33
Tc = ologn 
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& a, int key) {
        int s = 0;
        int e = a.size() - 1;
        while(s<=e){
            int mid = (s+e)/2;
            if(a[mid] == key){
                return mid;
            }
            
            if(a[s]<=a[mid]){
                if(key>=a[s] && key<=a[mid]){
                    e = mid - 1;
                }else{
                    s = mid + 1;
                }
            } else {
                if(key>=a[mid] && key<=a[e]){
                    s = mid + 1;
                }else{
                    e = mid - 1; 
                }
            }
            
        }
        return -1;
    }
};
int main()
{
	Solution A;
	vector<int> v(5,0);
	v.at(0) = 3;
	v.at(1) = 4;
	v.at(2) = 5;
	v.at(3) = 1;
	v.at(4) = 2;
	
	cout<<A.search(v,1);
}
