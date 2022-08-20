#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    int i = n-2;
    while(i >= 0 && permutation[i] > permutation[i+1]) i--;
    if(i<0)
    {
        sort(permutation.begin(),permutation.end());
        return permutation;
    }
    int mi = INT_MAX;
    int mi_i;
    int j;
    for(j = i+1;j<n;j++)
    {
        if(permutation[j] > permutation[i] && permutation[j] < mi)
        {
            mi = permutation[j];
            mi_i = j;
        }
    }
    swap(permutation[i],permutation[mi_i]);
    i=i+1;
    j=n-1;
    while(i<j)
    {
        swap(permutation[i],permutation[j]);
        i++;
        j--;
    }
    return permutation;
    
}
