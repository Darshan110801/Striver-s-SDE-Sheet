#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
   unordered_set<int> st_row,st_col;
   int m = matrix.size();int n = matrix[0].size();
   int i,j;
   for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {
           if(matrix[i][j] == 0)
           {
               st_row.insert(i);
               st_col.insert(j);
           }
       }
   }
   for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {
           if(st_row.find(i) != st_row.end() || st_col.find(j) != st_col.end())
           {
               matrix[i][j] = 0;
           }
       }
   }
}
