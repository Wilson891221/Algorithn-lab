#include<bits/stdc++.h>
using namespace std;


class edge{
public:
	int a,b,v;
};

int n,m;
edge E[1000];
int dis[1000];
bool track()
{
	dis[0] = 0;
	for (int i=1;i<n;i++){
        dis[i]=9999999999;
	}
	for (int i=0;i<n-1;i++){
		for (int i=0;i<m;i++){
			if (dis[E[i].a] > dis[E[i].b] + E[i].v){
                dis[E[i].a] = dis[E[i].b] + E[i].v;
			}
		}
	}

	bool temp = 0;
	for (int i=0;i<m;i++){
		if (dis[E[i].a]>dis[E[i].b]+E[i].v){
			temp=1;
          	break;
		}
	}
	return (!temp);

}

int main()
{
	int test,a,b,v;
	cin>>test;
	while (test--){
		cin >> n>> m;
		for (int i=0;i<m;i++){
			cin >> a >> b >> v;
			E[i].a=a;
            E[i].b = b;
            E[i].v = v;
		}

		if (track()==1){
            cout << "not possible" << endl;
		}
		else{
            cout << "possible" << endl;
		}
	}
	return 0;
}
