#include<string.h>;
#include<iostream>;
#include<stdio.h>;
#include<vector>;
#include <climits>
//leet 231 
class Solution {
public:
    bool isPowerOfTwo(int n) {
       if(n<=0){return false ;}
       if(( n &(n-1))==0){return true ;}
           
    return false ;
        
    }
};

//counting no of set bits
int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        count += (n % 2);  
        n = n / 2;         
    }
    return count;
}

//leet 2220 ( to find mionimum bit flips to turn number a to b)
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int p= start ^ goal ;
        int ctr=0;
        while(p){
            if((p & 1)==1){
                ctr+=1;
            }
            p= p >> 1;
        }
        return ctr;
    }
};

//leet 136 (unique number)
class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        int res = 0;
        for (int n : nums) {
            res ^= n;
        }
        return res;        
    }
};

//leet 78 , generating subsets
class Solution {
public:
    std::vector<std::vector<int>> subsets(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<std::vector<int>> b;
        for(int i = 0; i < (1 << n); i++){
            std::vector<int> l;
            for(int j = 0; j < n; j++){
                if((i & (1 << j)) != 0){
                    l.push_back(nums[j]);
                }
            }
            b.push_back(l);
        }
        return b;
    }
};

//counting numbers =|||
class Solution {
public:
    std::vector<int> singleNumber(std::vector<int>& nums) {
        int xr = 0;
        for (int num : nums) xr ^= num;
        int diff = xr & (-xr);
        int a = 0, b = 0;
        for (int num : nums) {
            if (num & diff) a ^= num;
            else b ^= num;
        }
        if (a < b) return {a, b};
        return {b, a};
    }
};

//leet 29
class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend ==INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        long dvd = labs(dividend), dvs = labs(divisor), ans = 0;
        int sign = dividend > 0 ^ divisor > 0 ? -1 : 1;
        while (dvd >= dvs) {
            long temp = dvs, m = 1;
            while (temp << 1 <= dvd) {
                temp <<= 1;
                m <<= 1;
            }
            dvd -= temp;
            ans += m;
        }
        return sign * ans;
    }
};