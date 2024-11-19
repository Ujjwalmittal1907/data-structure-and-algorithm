# include <bits/stdc++.h>

using namespace std;

int main()
{
	int p[10],bt[10], su[10], wt[10],tat[10], n, temp, w1 = 0, t1 = 0;
	float aw, at;
	cout << "Enter the number of Processes : ";
	cin >> n;
    cout << endl << endl << "ENTER THE PROCESS TYPE AND BURST TIME OF PROCESSES" << endl;
    for(int i = 0; i < n; i++){
        p[i] = i+1;
        cout << "Process Type for Process " << i+1 << " (System Process or User Process (0 / 1)) : ";
        cin >> su[i];
        cout << "Burst time of Process " << i+1 << " : ";
        cin >> bt[i];
    }
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(su[i] > su[j])
			{
			temp = p[i];
			p[i] = p[j];
			p[j] = temp;
			temp = bt[i];
			bt[i] = bt[j];
			bt[j] = temp;
			temp = su[i];
			su[i] = su[j];
			su[j] = temp;
			}
        }
    }
	aw = wt[0] = 0;
	at = tat[0] = bt[0];
	for(int i = 1; i < n; i++){
		wt[i] = wt[i-1] + bt[i-1];
		tat[i] = tat[i-1] + bt[i];
		w1 += wt[i];
		t1 += tat[i];
	}
    aw = (float)w1/n;
    at = (float)t1/n;
    cout << endl << endl << "Prc\tS/U\tBT\tWT\tTAT" << endl;
	for(int i = 0; i < n; i++){
        cout << " " << p[i] << "\t " << su[i] << "\t " << bt[i] << "\t" << wt[i] << "\t " << tat[i] << endl;
    }
	cout << "Average Waiting Time : " << aw << endl;
	cout << "Average Turn Around Time is : " << at;
	return 0;
}