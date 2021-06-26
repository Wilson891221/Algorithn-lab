#include<bits/stdc++.h>>
#define eps 1e-6

using namespace std;
double W[105][105];
int N, M;
int mx[105], my[105];
double lx[105], ly[105];
int x[105], y[105];



int hungary(int nd) {
    int i;
    x[nd] = 1;
    for(i = 1; i <= M; i++) {
        if(y[i] == 0 && abs(W[nd][i]-lx[nd]-ly[i]) < eps) {
            y[i] = 1;
            if(my[i] == 0 || hungary(my[i])) {
                my[i] = nd;
                return 1;
            }
        }
    }
    return 0;
}
double KM() {
    int i, j, k;
    double d;
    for(int i =0; i<105; i++){
        mx[i] = 0;
        my[i] = 0;
        lx[i] = 0;
        ly[i] = 0;
    }

    for(i = 1; i <= N; i++){
         for(j = 1, lx[i] = W[i][j]; j <= M; j++){
            if(lx[i] > W[i][j]){
                lx[i] = lx[i];
            }
            else{
                lx[i] = W[i][j];
            }
         }
    }
    for(i = 1; i <= N; i++) {
        while(true) {
           for(int i =0; i<105; i++){
                x[i] = 0;
                y[i] = 0;
            }
            if(hungary(i)==1){
                break;
            }
            d = 99999999;
            for(j = 1; j <= N; j++) {
                if(x[j]) {
                    for(k = 1; k <= M; k++)
                        if(!y[k])
                        d = d < lx[j]+ly[k]-W[j][k] ?
                            d : lx[j]+ly[k]-W[j][k];
                }
            }
            if(d == 9999999){
                break;
            }
            for(j = 1; j <= N; j++){
                if(x[j]){
                     lx[j] -= d;
                }
            }

            for(j = 1; j <= M; j++){
                if(y[j]){
                     ly[j] += d;
                }
            }

        }
    }
    double res = 0;
    for(i = 1; i <= M; i++) {
        if(my[i])
            res += W[my[i]][i];
    }
    return res;
}
int main() {
    int n, m;
    while(cin >> n >> m) {
        if((n == 0 && m == 0)||n>m|| m>20 ){
             break;
        }
        N = n, M = m;
        int i, j;
        for(i = 1; i <= n; i++) {
            for(j = 1; j <= m; j++) {
                cin >> W[i][j];
                W[i][j] *= -1;
            }
        }
        cout << fixed << setprecision(2) << -KM()/n+eps << endl;
    }
    return 0;
}
