/*
2427. Number of Common Factors

Given two positive integers a and b, return the number of common factors of a and b.

An integer x is a common factor of a and b if x divides both a and b.

 

Example 1:

Input: a = 12, b = 6
Output: 4
Explanation: The common factors of 12 and 6 are 1, 2, 3, 6.

Example 2:

Input: a = 25, b = 30
Output: 2
Explanation: The common factors of 25 and 30 are 1, 5.

Constraints:

    1 <= a, b <= 1000


*/

class Solution {
public:
    int gcd(int a,int b) {
        if(a==0) return b;
        return gcd(b%a,a);
    }
    int commonFactors(int a, int b) {
        int n= gcd(a,b);
        int ans=0;
        for(int i=1;i<=sqrt(n);i++) {
            if(n%i==0) {
                if(n/i==i)
                    ans+=1;
                else ans+=2;
            }
        }
        return ans;
    }
};
