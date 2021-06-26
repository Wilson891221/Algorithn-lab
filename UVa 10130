#include <iostream>
#include <string.h>
# include <stdlib.h>
#include <algorithm>
#include <typeinfo>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int test, item, bag, sizemax;
    int price[1000], weight[1000];
    int dp[35];
    cin >> test;
    while (test--) {
        cin >> item;
        for (int i=0; i<item; i++){
            cin >> price[i] >> weight[i];
        }
        cin >> bag;
        for(int i=0; i<35; i++){
            dp[i] = 0;
        }
        sizemax = 30;
        int result = 0;
        while (bag--) {
            cin >> sizemax;
            int dp[35] = {0};
            for (int i=0; i<item; i++) {
                for (int j=sizemax; j-weight[i]>=0; j--) {
                    dp[j] = max(dp[j], dp[j-weight[i]] + price[i]);
                    }
            }
            result += dp[sizemax];
        }
        cout << result << endl;
    }
    return 0;
}
