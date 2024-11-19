#include<iostream>
# include <bits/stdc++.h>

using namespace std;

int main(){
    int n, bt[10], wt[10], tat[10], w1 = 0, t1 = 0;
    float aw, at;
    cout << "Enter the number of Processes: ";
    cin >> n;
    cout << endl << endl << "ENTER THE BURST TIME OF PROCESSES" << endl;
    for(int i = 0; i < n; i++){
        cout << "Burst time of Process " << i+1 << " : ";
        cin >> bt[i];
    }
    sort(bt, bt + n);
    cout << "Burst Time in Increasing Order : ";
    for(int i = 0; i < n; i++){
        cout << bt[i] << "  ";
    }
        wt[0] = 0;
        tat[0] = bt[0];
    for(int i = 0; i < n; i++){
        wt[i+1] = wt[i] + bt[i];
        tat[i+1] = tat[i] + bt[i+1];
        w1 += wt[i];
        t1 += tat[i];
    }
    aw = (float)w1 / n;
    at = (float)t1 / n;
    cout << endl << endl << "BT\tWT\tTAT" << endl;
    for(int i = 0; i < n; i++){
        cout << bt[i] << "\t" << wt[i] << "\t " << tat[i] << endl;
    }
    cout << "Average Waiting Time : " << aw << endl;
    cout << "Average Turn Around Time : " << at;
    return 0;
}