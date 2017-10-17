//
// Journey to the moon.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

int dfs_util(vector<int>v[],vector<bool>& visited,int u,int &count){
    visited[u]=true;
    count++;
    for(int i=0;i<v[u].size();i++){
        if(visited[v[u][i]]==false)
            dfs_util(v,visited,v[u][i],count);
    }
    return count;
}
int dfs(vector<int>v[],vector<int>& sum,int N){
    vector<bool>visited(N,false);
    long long c=0;
    for(int i=0;i<N;i++){
        if(visited[i]==false){
            int count=0;
            count=dfs_util(v,visited,i,count);
            if(count!=1)
                sum.push_back(count);
            else
                c++;
        }
    }
    return c;
}
int main()
{
    int N, I,i;
    long long c;
    cin >> N >> I;
    
    vector<int>pairs[N];
    for (i = 0; i < I; ++i) {
        int a, b;
        cin >> a >> b;
        pairs[a].push_back(b);
        pairs[b].push_back(a);
    }
    vector<int>sum;
    long long result = 0;

    c=dfs(pairs,sum,N);
    for( i=0;i<sum.size()-1;i++){
        for(int j=i+1;j<sum.size();j++){
            result+=(sum[i]*sum[j]);

        }
        result+=(sum[i]*c);
    }
    result+=(sum[i]*c);

    result+=(c*(c-1)/2);
    cout << result << endl;
    return 0;
}