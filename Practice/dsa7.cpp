
#include<iostream>
#include<cstring>
using namespace std;

int prism(){
	int v = 4;
	int arr[v][v] = {{0,2,0,5},
			{2,0,3,1},
			{0,3,0,4},
			{5,1,4,0}};
	bool visited[v];
	int total = 0;
	int noedge = 0;
	memset(visited,false,sizeof(visited));
	visited[0] = true;
	while(noedge < v-1){
		int mini = 1000;
		int x,y;
		x=y=0;
		for (int i = 0; i < v; i++){
			if (visited[i]){
				for (int j = 0; j < v; j++){
					if (!visited[j] && arr[i][j]){
						if (arr[i][j]<mini){
							mini = arr[i][j];
							x = i;
							y = j;
						}
					}
				}
			}
		}
		cout<<x<<" to "<<y<<" cost "<<arr[x][y]<<endl;
		total = total + arr[x][y];
		visited[y] = true;
		noedge++;
	}
	cout<<"Total wt."<<total;
	return total;
}


int main(){
	
	int v = 4;
	int arr[v][v] = {{0,2,0,5},
			{2,0,3,1},
			{0,3,0,4},
			{5,1,4,0}};
	for(int i = 0;i<v;i++){
		for(int j = 0;j<v;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Minimum cost of tree is"<<endl;
	prism();
	
	
	return 0;

}

