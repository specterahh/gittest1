#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
struct node {
    int id;
    double sc1, sc2;
    int score;
    double final_score;
}
a[1000];
int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> a[i].id >> a[i].sc1 >> a[i].sc2;
        a[i].score = a[i].sc1 + a[i].sc2;
        a[i].final_score = a[i].sc1 * 0.7 + a[i].sc2 * 0.3;
    }
    for(int i=0; i<n; i++) {
        if(a[i].score > 140 && a[i].final_score >= 80) {
            cout << "Excellent" << endl;
        }
        else {
            cout << "Not excellent" << endl;
        }
    }
    return 0;
}