#include<string.h>;
#include<iostream>;
#include<stdio.h>;
//leet 231 
class Solution {
public:
    bool isPowerOfTwo(int n) {
       if(n<=0){return false ;}
       if(( n &(n-1))==0){return true ;}
           
    return false ;
        
    }
};
