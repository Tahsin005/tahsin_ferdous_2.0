#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
    Consider this problem: There are N≤5000
    workers. Each worker is available during some days of this month (which has 30 days). For each worker, you are given a set of numbers, each from interval [1,30]
    , representing his/her availability. You need to assign an important project to two workers but they will be able to work on the project only when they are both available. Find two workers that are best for the job — maximize the number of days when both these workers are available.
*/

/*
    Input:
        5
        4
        1 4 7 9
        6
        2 9 1 7 25 29
        7
        1 23 4 7 9 11 29
        10
        2 28 8 7 9 10 30 21 18 19
        4
        1 11 29 7
*/
int main(){
    int n; cin >> n;
    vector<int> masks(n);
    for (int i = 0; i < n; i++) {
        int num_workers;
        cin >> num_workers;
        int mask = 0;
        for (int j = 0; j < num_workers; j++) {
            int day; cin >> day;
            mask |= (1 << day);
        }
        masks[i] = mask;
    }
    int max_days = 0;
    int person1 = -1, person2 = -1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int intersection = (masks[i] & masks[j]);
            int common_days = __builtin_popcount(intersection);
            // cout << i << " " << j << " " << common_days << endl;
            if (common_days > max_days) {
                max_days = common_days;
                person1 = i;
                person2 = j;
            }
        }
    }
    cout << person1 << " " << person2 << " "     << max_days << endl;
    return 0;
}