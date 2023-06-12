#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    vector<int> d(N+1);
    
    d[1] = 1;
    d[2] = 2;
    for (int i=3; i<=N; i++)
        d[i] = (d[i-1] + d[i-2])%10007;
    
    cout << d[N];

    return 0;
}
