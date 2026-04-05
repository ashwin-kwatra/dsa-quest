// HI !  as i told ill be posting my revision , here are also some popular methords i had learnt for doing this dsa 
#include<string.h>;
#include<iostream>;
#include<stdio.h>;
#include<vector>;
#include <algorithm>;
//1: pallindrome check on string
class Solution {
public:
    bool isPalindrome(std::string s) {
       int start=0;
       int end=s.size()-1;
       while(start<=end){
           if(!isalnum(s[start])){start++; continue;}
           if(!isalnum(s[end])){end--;continue;}
           if(tolower(s[start])!=tolower(s[end]))return false;
           else{
               start++;
               end--;
           }
       }
       return true;
}
};
//1. finding a number thats single out of a list of numbers where everyone is a pair < non xor solution)
class Solution {
public:
    int singleNumber(std::vector<int>& nums) { 
       sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i+=2)
        {
            if(nums[i]!=nums[i-1])
                return nums[i-1];
        }
        return nums[nums.size()-1];
    }
};