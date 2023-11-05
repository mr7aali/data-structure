#include<iostream>
#include<vector>
using namespace std;


int main(){
int vertex,edge;
cin>>vertex>>edge;

vector<vector<int>>graph(vertex+1,vector<int>(vertex+1,0));


    for(int i=0;i<edge;++i){
        int v,u;
        cin>>v>>u;
        graph[v][u]=1;
        graph[u][v]=1;

    }

for(int i=0;i<=vertex;i++)graph[0][i]=i;
for(int i=0;i<=vertex;i++)graph[i][0]=i;

 for(int i=0;i<=vertex;i++){
    for(int j=0;j<=vertex;j++){
        cout<<graph[i][j]<<" ";
    }
cout<<endl;
 }

return 0;
}
