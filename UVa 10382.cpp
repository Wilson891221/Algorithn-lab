#include <iostream>
#include <string.h>
# include <stdlib.h>
#include <algorithm>
#include <typeinfo>
#include <iomanip>
#include <cmath>
#include<set>
#include<vector>
using namespace std;



bool compare(pair<double, double> a, pair<double, double> b) {
    if (a.first == b.first){
        if(a.second > b.second){
            return 1;
        }
        else{
            return 0;
        }
    }
    else{
        if(a.first < b.first){
            return 1;
        }
        else{
            return 0;
        }
    }
}

int main() {
    int n;
    double place, rad;
    double l, w, dx;
    while (cin >> n >> l >> w) {
        vector<pair<double, double> > sp;
        w = w/2;
        for(int i=0; i<n; i++) {
            cin >> place >> rad;
            if (rad > w){
                dx = sqrt(rad*rad - w*w);
                sp.push_back({place-dx, place+dx});
            }
        }
        sort(sp.begin(), sp.end(), compare);
      	int ans = 0;
    	double in = 0;
        for(int i = 0; i < sp.size(); i++){
            if (sp[i].first > in){
                break;
            }
            for(int j = i+1; j < sp.size() && sp[j].first <= in; j++){
                if (sp[j].second > sp[i].second){
                    i = j;
                }
            }
            ans++;
            in = sp[i].second;
            if (in >= l){
                break;
            }
        }

        if (in >= l){
            cout << ans << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }
    return 0;
}
