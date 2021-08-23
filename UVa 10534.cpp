#include <iostream>
#include <string.h>
# include <stdlib.h>
#include <algorithm>
#include <typeinfo>
#include <iomanip>
#include <cmath>
using namespace std;

int N;
int num[100001];
int LIS[100001];  //LIS的Stack
int lis[100001];  //每個數字LIS的表
int LDS[100001];
int lds[100001];
int lism, ldsm; // 表示LIS的Stack有幾層(level)

void LIS_function(int i)
{
    int j = 0;
    while (num[i] > LIS[j] && j < lism){
        j++;
    }
    if (j == lism) {
        LIS[lism] = num[i];
        lism++;
    }
    else if (num[i] < LIS[j])
        LIS[j] = num[i];

    lis[i] = j;
}
void LDS_function(int i)
{
    int j = 0;
    while (num[i] > LDS[j] && j < ldsm){
        j++;
    }
    if (j == ldsm) {
        LDS[ldsm] = num[i];
        ldsm++;
    }
    else if (num[i] < LDS[j])
        LDS[j] = num[i];

    lds[i] = j;
}



int main()
{
    int test;
    while(cin >> test){
        lism = 0;
        ldsm = 0;
        for(int i=0; i<test; i++){
            cin >> num[i];
        }
        for(int i=0, j=test-1; i<test; i++,j--){
            LIS_function(i);
            LDS_function(j);
        }
        int max=0;
        for(int i=0; i<test; i++){
            if(min(lis[i],lds[i]) > max){
                max = min(lis[i], lds[i]);
            }
        }
        cout << max*2 + 1 << endl;
        
    }
    return 0;
}
