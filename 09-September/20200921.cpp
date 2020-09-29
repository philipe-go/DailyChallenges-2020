//Snail

#include <vector>

std::vector<int> snail(const std::vector<std::vector<int>> &snail_map) {
  std::vector<int> output;
  const int n = snail_map[0].size();;
  int arr[n][n];
  int counter = 0, ratio = n-1, line=0;
  if (n==0) return output; 
  if (n==1) return snail_map[0];
  for (int i=0;i<n;i++)
  {
    for (int j=0;j<n;j++)
    {
        arr[i][j]=snail_map[i][j];
    }
  }
  
  for (int i=0;i<(n%2==0?n*2+1:n*2);i++)
  {
    int j=line;
    while(j<ratio)
    {
        output.push_back(arr[line][j]);
        j++;
    }

    for (int k=0;k<n/2;k++)
    {
        for (int l=k;l<n-k-1;l++)
        {
        int val = arr[k][l];
        arr[k][l]=arr[l][n-k-1];
        arr[l][n-k-1]=arr[n-k-1][n-l-1];
        arr[n-k-1][n-l-1]=arr[n-l-1][k];
        arr[n-l-1][k]=val;
        }
    }
    if (counter == 3) { line++; ratio--; counter = 0;}
    else counter ++;
  }
  if (n%2!=0) output.push_back(arr[n/2][n/2]);
  
  return output;
}