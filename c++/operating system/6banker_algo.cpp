#include <iostream>
#include <vector>

using namespace std;

bool isSafe(vector<vector<int>>& allocation, vector<vector<int>>& max, vector<int>& available, vector<int>& work, vector<bool>& finish, int processCount, int resourceCount) {
    vector<int> need(resourceCount);
    for (int i = 0; i < processCount; i++) {
        for (int j = 0; j < resourceCount; j++) {
            need[j] = max[i][j] - allocation[i][j];
        }
    }
    for (int i = 0; i < processCount; i++) {
        if (finish[i] == false) {
            bool canAllocate = true;
            for (int j = 0; j < resourceCount; j++) {
                if (need[j] > work[j]) {
                    canAllocate = false;
                    break;
                }
            }

            if (canAllocate) {
                for (int j = 0; j < resourceCount; j++) {
                    work[j] += allocation[i][j];
                }
                finish[i] = true;
                i = -1;
            }
        }
    }

    for (int i = 0; i < processCount; i++) {
        if (finish[i] == false) {
            return false;
        }
    }

    return true;
}

int main() {
    int processCount, resourceCount;

    cout << "Enter the number of processes: ";
    cin >> processCount;

    cout << "Enter the number of resources: ";
    cin >> resourceCount;

    vector<vector<int>> allocation(processCount, vector<int>(resourceCount));
    vector<vector<int>> max(processCount, vector<int>(resourceCount));
    vector<int> available(resourceCount);
    vector<int> work(resourceCount);
    vector<bool> finish(processCount, false);

    cout << "Enter the allocation matrix:" << endl;
    for (int i = 0; i < processCount; i++) {
        for (int j = 0; j < resourceCount; j++) {
            cin >> allocation[i][j];
        }
    }


    cout << "Enter the max matrix:" << endl;
    for (int i = 0; i < processCount; i++) {
        for (int j = 0; j < resourceCount; j++) {
            cin >> max[i][j];
        }
    }

    cout << "Enter the available resources:" << endl;
    for (int i = 0; i < resourceCount; i++) {
        cin >> available[i];
        work[i] = available[i];
    }

    if (isSafe(allocation, max, available, work, finish, processCount, resourceCount)) {
        cout << "The system is in a safe state." << endl;
    } else {
        cout << "The system is not in a safe state." << endl;
    }

return 0;
}