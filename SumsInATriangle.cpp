#include<bits/stdc++.h>
using namespace std;


#define rep(i, a, b) for(int i = a;i <= b; i++)
const int N = 110;
using ll = long long;
ll A[N][N];
ll dp[N][N];

int main(){
    system("color 02");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int k = 1;
        while(k!=n+1){
            rep(i, 1, k){
                cin >> A[k][i];
            }
            k++;
        }
        dp[1][1] = A[1][1];

        rep(i, 2, n){
            rep(j, 1, n){
                if(j==1){
                    dp[i][j] = dp[i-1][j] + A[i][j];
                }else if(i==j){
                    dp[i][j] = dp[i-1][j-1] + A[i][j];
                }else{

                    dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]) + A[i][j];
                }
            }
        }
        ll maxx = -99999999;
        rep(i, 1, n){
            maxx = max(dp[n][i], maxx);
        }
        cout << maxx << "\n";
    }
    return 0;

}
