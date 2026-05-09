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
//leet 686 , string-substring rivision
class Solution {
public:
    int repeatedStringMatch(std::string a, std::string b) {
    std::string repeated_a = a;
    int count = 1;

    while (repeated_a.length() < b.length()) {
        repeated_a += a;
        count++;
    }
    if (repeated_a.find(b) != std::string::npos) {
        return count;
    }
    repeated_a += a;
    count++;
    
    if (repeated_a.find(b) != std::string::npos) {
        return count;
    }
    return -1;
}
};
//leet 1392 rivision
class Solution {
public:
    std::string longestPrefix(std::string s) {
        int n = s.size();
        std::vector<int> lps(n,0);
        int pt1 = 0;
        int pt2 = 1;
        while(pt2 < n){
            if(s[pt1] == s[pt2]){
                pt1++;
                lps[pt2] = pt1;
                pt2++;
            }else{
                if(pt1 != 0){

                    pt1 = lps[pt1 - 1];
                }else{
                    lps[pt2] = 0;
                    pt2++;
                }
            }
        }
        return s.substr(0, lps[n-1]);
    }
};