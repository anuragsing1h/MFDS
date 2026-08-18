#include<bits/stdc++.h>
using namespace std;
const int INF=1e9;
vector<int> getMinDistances(vector<vector<int>>& graph,int startNode){
    int totalNodes=graph.size();
    vector<int> distances(totalNodes,INF);
    set<pair<int,int>> activeNodes;
    distances[startNode]=0;
    activeNodes.insert({0,startNode});
    while(!activeNodes.empty()){
        int currNode=activeNodes.begin()->second;
        activeNodes.erase(activeNodes.begin());
        for(int neighbor=0;neighbor<totalNodes;++neighbor){
            if(graph[currNode][neighbor]!=INF){
                int newDist=distances[currNode]+graph[currNode][neighbor];
                if(newDist<distances[neighbor]){
                    activeNodes.erase({distances[neighbor],neighbor});
                    distances[neighbor]=newDist;
                    activeNodes.insert({newDist,neighbor});
                }
            }
        }
    }
    return distances;
}
int main(){
    int v;
    cout<<"Enter number of cities: ";
    cin>>v;
    vector<string> labels(v);
    cout<<"Enter city names separated by space: ";
    for(int i=0;i<v;++i) cin>>labels[i];
    cout<<"Enter adjacency matrix (-1 for infinity/no edge):\n";
    vector<vector<int>> adjMatrix(v,vector<int>(v));
    for(int i=0;i<v;++i){
        for(int j=0;j<v;++j){
            cin>>adjMatrix[i][j];
            if(adjMatrix[i][j]==-1) adjMatrix[i][j]=INF;
        }
    }
    int origin;
    cout<<"Enter starting node index (0 to "<<v-1<<"): ";
    cin>>origin;
    vector<int> finalDist=getMinDistances(adjMatrix,origin);
    cout<<"Shortest distances from "<<labels[origin]<<"\n";
    for(int i=0;i<v;++i){
        cout<<labels[origin]<<" -> "<<labels[i]<<" = ";
        if(finalDist[i]==INF) cout<<"INF\n";
        else cout<<finalDist[i]<<"\n";
    }
    return 0;
}
