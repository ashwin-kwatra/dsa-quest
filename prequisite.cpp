// HI !  as i told ill be posting my revision , here are also some popular methords i had learnt for doing this dsa 
#include<string.h>;
#include<iostream>;
#include<stdio.h>;

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
