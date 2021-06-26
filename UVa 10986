#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<algorithm>
#define N 20000
using namespace std;

struct Node
{
    int a, b;
    Node(){}
    Node(int a1, int b1) :a(a1), b(b1){}
    bool operator<(const Node& a)const{
        return b > a.b;
    }
};
vector<Node>list[N];//adjacent list
int dijkstra(int s, int goal, int n)
{
    bool visit[N] = {};
    int d[N];
    fill(d, d + n, 999999);
    d[s] = 0;
    priority_queue<Node> t;
    t.push(Node(s, 0));

    while(1){
        int next = -1;
        while (!t.empty() && visit[next = t.top().a]){
             t.pop();
        }
        if (next == -1 || next == goal){
            return d[goal];
        }

        visit[next] = true;

        for (Node node : list[next]){
            if (!visit[node.a] && d[next] + node.b < d[node.a]){
                d[node.a] = d[next] + node.b;
                t.push(Node(node.a, d[node.a]));
            }
        }
    }

    return d[goal];
}

int main()
{
    int casee;
    cin >> casee;
    for (int c = 1; c <= casee; c++){
        int n, m, s, t;
        int u, v, w;
        cin >> n >> m >> s >> t;
        for (int i = 0; i < n; i++)
            list[i].clear();

        for (int i = 0; i < m; i++){
            cin >> u >> v >> w;
            list[u].push_back(Node(v, w));
            list[v].push_back(Node(u, w));
        }
        int ans = dijkstra(s, t, n);
        cout << "Case #" << c <<": ";

        if (ans == 999999){
            cout << "unreachable" << endl;
        }
        else{
            cout << ans << endl;
        }

    }
    return 0;
}
