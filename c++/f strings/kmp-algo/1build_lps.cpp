#include<iostream>
#include<bits/stdc++.h>
using namespace std ;



vector<int> buildLPS(string S) {
    vector<int> lps(S.size(), 0); 
    int pre = 0;   // length of previous longest prefix suffix
    int suf = 1;   // current index we are calculating LPS for

    while (suf < S.size()) {
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
    return lps;
}
