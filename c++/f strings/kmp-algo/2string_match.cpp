#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

// string matching 
// s1 = "abad"     s2 =  "abacdabad"



// first let do buy the brutte force using two pointer i in s1 and j in s2
//output   --- it will return the first index of s2 from where s1 started ;

// time complexity   O(n-m)*(m) === O(n*m)

int strStr(string haystack, string needle) {
    int n = haystack.size();
    int m = needle.size();

    for (int i = 0; i <= n - m; i++) {
        int first = i, second = 0;

        while (second < m) {
            if (haystack[first] != needle[second]) {
                break;
            } else {
                first++;
                second++;
            }
        }

        if (second == m) {
            return first - second;  // found match
        }
    }

    return -1;  // not found
}


// lets see its optimised approach in linear time complexity 


// Function to compute LPS (Longest Prefix Suffix) array

void lpsfind(vector<int>& lps, string& S) {
    
    int pre = 0;   // length of previous longest prefix suffix
    int suf = 1;   // current index we are calculating LPS for
    int n = S.size() ;
    while (suf < n) {
        if (S[pre] == S[suf]) {
            lps[suf] = pre + 1;
            pre++;
            suf++;
        } else {
            if (pre == 0) {
                lps[suf] = 0;
                suf++;
            } else {
                pre = lps[pre - 1];
            }
        }
    }
   
}


// KMP Search function
int strStr(string haystack, string needle) {
    if (needle.empty()) return 0;

    vector<int> lps(needle.size(), 0);
    lpsfind(lps, needle);

    int first = 0;  // pointer for haystack
    int second = 0; // pointer for needle

    while (first < haystack.size()) {
        if (needle[second] == haystack[first]) {
            first++;
            second++;
        }

        if (second == needle.size()) {
            return first - second; // match found
        } else if (first < haystack.size() && needle[second] != haystack[first]) {
            if (second != 0) {
                second = lps[second - 1]; // use lps to skip
            } else {
                first++;
            }
        }
    }
    return -1; // not found
}





