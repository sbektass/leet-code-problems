// Problem - 1. Two Sum
// https://leetcode.com/problems/two-sum/
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        /*
        Time Complexity: O(n^2)
        Auxiliary Space: O(1)

	        for(int i=0; i<nums.size(); i++) {           
	            
	            for(int j=1; j<nums.size(); j++) {       
	                
	                if(nums[i]+nums[j]==target && i!=j)   
	                    return vector<int> {i,j};   
	            }
	        }
	        return {};   // return empty vector if condition no solution found
        */

        /* Time Complexity: O(n)
           Auxiliary Space: O(n) */
    
		unordered_map<int, int> mp; 

		for (int i = 0; i < nums.size(); i++) {
			if (mp.find(target - nums[i]) != mp.end())
				return vector<int> {i, mp[ target - nums[i]]}; 
			else
				mp[nums[i]] = i;
		}
		return {}; // return empty vector if no solution found
    }
};