#include<iostream>
# include <bits/stdc++.h>

using namespace std;

int main(){
    int n, tq, st[10], bt[10], wt[10], tat[10], count = 0, w1 = 0, t1 = 0, temp, sq = 0;
    float aw, at;
    cout << "Enter the number of Processes : ";
    cin >> n;
    cout << endl << endl << "ENTER THE BURST TIME OF PROCESSES" << endl;
    for(int i = 0; i < n; i++){
        cout << "Burst time of Process " << i+1 << " : ";
        cin >> bt[i];
        st[i] = bt[i];
    }
    cout << "Enter Time Quantum : ";
    cin >> tq;
    while(true){
        for(int i = 0; i < n; i++){
            temp = tq;
            if(st[i] == 0){
                count++;
                continue;
            }
            if(st[i] > tq){
                st[i] -= tq;
            }else if(st[i] >= 0){
                temp = st[i];
                st[i] = 0;
            }
            sq += temp;
            tat[i] = sq;
        }
        if(n == count){
            break;
        }
    }
    for(int i = 0; i < n; i++){
        wt[i] = tat[i] - bt[i];
        w1 += wt[i];
        t1 += tat[i];
    }
    aw = (float)w1 / n;
    at = (float)t1 / n;
    cout << endl << endl << "Prc\tBT\tWT\tTAT" << endl;
    for(int i = 0; i < n; i++){
        cout << " " << i + 1 << "\t" << bt[i] << "\t" << wt[i] << "\t " << tat[i] << endl;
    }
    cout << "Average Waiting Time : " << aw << endl;
    cout << "Average Turn Around Time : " << at;
    return 0;
}