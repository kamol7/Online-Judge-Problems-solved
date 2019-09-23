#include <iostream>
#include <queue>
using namespace std;
struct point{
    int x;
    int y;
    int z;
};
int dx[]={1,-1,0,0,0,0};
int dy[]={0,0,0,0,1,-1};
int dz[]={0,0,1,-1,0,0};

class Graph3d{
public:
    int floor;
    int length;
    int width;
    point base,end;
    string grid[30][30];
    Graph3d(int,int,int);
    void takeInput();
    void baseAndEndPosition();
    int findBestPossibleWayBFS();
    bool isPossibleToGo(point);
};



Graph3d::Graph3d(int x, int y , int z) {
    floor = x;
    length = y;
    width =z;
}



void Graph3d::takeInput() {
    for(int i=0;i<floor;i++){
        for(int j=0;j<length;j++) cin>>grid[i][j];
    }
}


void Graph3d::baseAndEndPosition() {
        for(int i=0;i<floor;i++){
            for(int j=0;j<length;j++){
                for(int k=0;k<width;k++){
                    if(grid[i][j][k]=='S'){
                        base.x=i;
                        base.y=j;
                        base.z=k;
                    }
                    else if(grid[i][j][k]=='E'){
                        end.x=i;
                        end.y=j;
                        end.z=k;
                    }
                }
            }
        }
}

int Graph3d::findBestPossibleWayBFS() {

    int distance[floor][length][width];
    bool visit[floor][length][width];


    for(int i=0;i<floor;i++){
        for(int j=0;j<length;j++){
            for(int k=0;k<width;k++){
                visit[i][j][k]=false;
                distance[i][j][k]=-1;
            }
        }
    }
    distance[base.x][base.y][base.z]=0;

    queue <point> storeData;
    storeData.push(base);

    while (!storeData.empty()){
        point source;
        source= storeData.front();
        storeData.pop();
        int dis= distance[source.x][source.y][source.z];
        visit[source.x][source.y][source.z]=true;
        for(int i=0;i<6;i++){
            point child;
            child.x=source.x+dx[i];
            child.y=source.y+dy[i];
            child.z=source.z+dz[i];
            if(isPossibleToGo(child)){
                if(!visit[child.x][child.y][child.z] && grid[child.x][child.y][child.z] !='#'){
                    visit[child.x][child.y][child.z]=true;
                    distance[child.x][child.y][child.z]= dis+1;
                    //printf("child %d %d %d dis: %d %d\n",child.x,child.y,child.z,distance[child.x][child.y][child.z],dis);
                    storeData.push(child);
                }
            }

        }
    }





    return distance[end.x][end.y][end.z];
}

bool Graph3d::isPossibleToGo(point d) {
    if(d.x>=0 && d.y>=0 && d.z>=0 && d.x< floor && d.y<length && d.z < width){
        return true;
    }
    return false;
}
void solve(int x,int y,int z){
    auto *obj = new Graph3d(x,y,z);
    obj->takeInput();
    obj->baseAndEndPosition();
    int ans= obj->findBestPossibleWayBFS();
    free(obj);
    if(ans==-1){
        cout<<"Trapped!\n";
    }
    else{
        printf("Escaped in %d minute(s).\n",ans);
    }
}

int main() {
    //std::cout << "Hello, World!" << std::endl;
    int x,y,z;
    while (cin>>x>>y>>z && x+y+z){
        solve(x,y,z);
    }
    return 0;
}