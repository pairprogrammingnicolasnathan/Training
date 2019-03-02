#include <bits/stdc++.h>
#include<cstdio>

using namespace std;

int checkNeighbors(vector<vector<int>>& path, par<int,int>& pos, int N, int M){
	path[pos.first, pos.second] = 1;
	if(pos.second+1 <= M-1) if(path(pos.first, pos.second+1) == 0){
		pos.second+=1;
		return 1;
	}
	if(pos.first+1 <= N-1) if(path(pos.first+1, pos.second)==0){
		pos.first+=1;
		return 2;
	}
	if(pos.second-1 >= 0) if(path[pos.first, pos.second-1] == 0){
		
	}
}

int main() {
	int N, M;
	while(scanf(" %d%d", &N, &M) != EOF){
		vector<vector<int>> path(N,M);
		pair<int, int> pos;
		for(int i = 0; i<N; i++){
			int el;
			for(int j=0; j<M; j++){
				cin >> el;
				path[i][j] = el;
				if(el == 'X'){
					pos.first = i;
					pos.second = j;
				}
			}	
		}
		int direcao = checkNeighbors(path, pos, N,M);
		int front = direcao;
		while(direcao != 0){
			
			direcao = checkNeighbors(pos, N,M);
		}
	}
	return 0;
}