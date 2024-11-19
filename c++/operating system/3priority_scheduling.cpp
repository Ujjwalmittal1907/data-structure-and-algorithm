# include <bits/stdc++.h>

using namespace std;

int main(){
    int n, p[10], pty[10], bt[10], wt[10], tat[10], w1 = 0, t1 = 0, temp = 0;
    float aw, at;
    cout << "Enter the number of Processes : ";
    cin >> n;
    cout << endl << endl << "ENTER THE PROCESS NUMBER, PRIORITY AND BURST TIME OF PROCESSES" << endl;
    for(int i = 0; i < n; i++){
        p[i] = i + 1;
        cout << "Priority for process " << i+1 << " : ";
        cin >> pty[i];
        cout << "Burst time of Process " << i+1 << " : ";
        cin >> bt[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(pty[i] > pty[j]){
                temp = pty[i];
                pty[i] = pty[j];
                pty[j] = temp;
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;
            }
        }
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
    cout << endl << endl << "Prc\tPty\tBT\tWT\tTAT" << endl;
    for(int i = 0; i < n; i++){
        cout << " " << p[i] << "\t " << p[i] << "\t" << bt[i] << "\t" << wt[i] << "\t " << tat[i] << endl;
    }
    cout << "Average Waiting Time : " << aw << endl;
    cout << "Average Turn Around Time : " << at;
    return 0;
}