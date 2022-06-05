#include<bits/stdc++.h>

using namespace std;

using ll = long long;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    long long arr[n+1][n+1];

    for(int i = 1; i<= n; i++){
        for(int j = 1; j <= n; j++){

            arr[i][j] = 0;

        }
    }

    arr[1][1] = 1;
    while(m--){
        int x, y;
        cin >> x >> y;
        arr[x][y] = -1;


    }
    int o = 1;
    for(int i = 1; i <= n; i++){

        if(arr[i][1] == -1){
            o  = 0;
        }else{
            arr[i][1] = o;
        }
    }
    o = 1;
    for(int i = 1; i <= n; i++){
        if(arr[1][i] == -1){
            o = 0;
        }else{
            arr[1][i] = o;
        }
    }
    for(int i = 2; i <= n; i++){
        for(int j = 2; j <= n; j++){
            if(arr[i-1][j] == -1){
                arr[i-1][j] = 0;
            }
            if(arr[i][j-1] == -1){
                arr[i][j-1] = 0;
            }
            if(arr[i][j] == -1){
                arr[i][j] = 0;
            }else{
                arr[i][j] += arr[i-1][j];
                arr[i][j] +=arr[i][j-1];
            }

        }
    }



    cout << 1ll*arr[n][n] << endl;

}
