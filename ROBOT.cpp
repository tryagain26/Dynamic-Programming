#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string s, ss;
    cin >> s >> ss;
    int cnt = 0;
    for(int i = 0; i < ss.length(); i++){
        if(ss[i]=='R'){
            cnt++;
        }else{
            cnt--;
        }
    }
    int n = s.length();
    if(cnt == 0){
        cout << s;
    }else if(cnt > 0){
        for(int i = n-cnt; i < n; i++){
            cout << s[i];
        }
        for(int i = 0; i < n-cnt; i++){
            cout << s[i];
        }
    }else{
        for(int i = -cnt; i < n; i++){
            cout << s[i];
        }
        for(int i = 0; i < -cnt; i++){
            cout << s[i];
        }
    }

    return 0;


}
