#include<iostream>
#include<vector>
using namespace std;

void calc(vector<int> &q)
{
    int ans = 0;
    for (int i = q.size() - 1; i >= 0; i--) {
        if (q[i] - (i + 1) > 2) {
            cout << "Too chaotic" << endl;
            return;
        }
        for (int j = max(0, q[i] - 2); j < i; j++)
            if (q[j] > q[i]) ans++;
    }
    cout << ans << endl;
}

int main(){
    vector<int> q;
    int num, person;
    cout << "Enter total number of people" << endl;
    cin >> num;
    cout << "Enter the queue of people" << endl;
    for(int i = 0; i< num; i++){
        cin >> person;
        q.push_back(person);
    }
    cout << "No of bribing operations that took place: " << endl;
    calc(q);
}
