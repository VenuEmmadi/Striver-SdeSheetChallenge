#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	   if(matrix.empty()||matrix[0].empty()) return;
        int nrow = matrix.size(),ncol = matrix[0].size();
        vector<pair<int,int>> zeros;
        vector<bool> isRowZero(nrow,true);
        vector<bool> isColZero(ncol,true);
        for(int i=0;i<nrow;++i){
            for(int j=0;j<ncol;++j){
                if(matrix[i][j] == 0){
                     zeros.emplace_back(i,j);
                } 
                else{
                    isRowZero[i] = false;
                    isColZero[j] = false;
                }
            }
        }
        for(auto& p : zeros){
            int i=p.first,j=p.second;
            if(!isRowZero[i]){
                for(int k=0;k<ncol;++k) matrix[i][k]=0;
                isRowZero[i]=true;
            }
            if(!isColZero[j]){
                for(int k=0;k<nrow;++k) matrix[k][j]=0;
                isColZero[j]=true;
            }
        }
}
