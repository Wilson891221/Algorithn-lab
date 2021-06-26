#include <iostream>
#include <string.h>
# include <stdlib.h>
#include <sstream>
#include <typeinfo>
#include <cmath>
#include <iomanip>

using namespace std;


bool LorR(double x, int pie, int fri, double a[]){
    int sum=0;
    for(int i=0; i<pie; i++){
        sum += (a[i]/x);
    }
    return sum>=fri+1;
}
int main(){
    int test;
    double radix[10000];
    const double min = 1e-6;
    const double pi=M_PI;
    cin >> test;
    int pie,fri;
    while(test--){
        cin  >> pie >> fri;
        double sum=0;
        for(int i=0; i<pie; i++){
            cin >> radix[i];
            radix[i] = radix[i] * radix[i] * pi;
            sum += radix[i];
        }
        double left = 0, right = sum, middle = (left + right)/2;
        while(right - left > min){
            if(LorR(middle, pie, fri, radix)){
                left = middle;
            }
            else{
                right = middle;
            }
            middle = (left + right)/2;
        }
        cout << fixed << setprecision(4) << middle << endl;
    }
    return 0;
}
