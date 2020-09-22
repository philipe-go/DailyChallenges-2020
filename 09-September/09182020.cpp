#include <vector>

std::vector<int> snail(const std::vector<std::vector<int>> &snail_map) {
  std::vector<int> output;
  const int n = sizeof(snail_map[0])/sizeof(int);
  int arr[n][n];
  int counter = 0, ratio = n-1, line=0;
  for (int i=0;i<n;i++)
  {
    for (int j=0;j<n;j++)
    {
        arr[i][j]=snail_map[i][j];
    }
  }

  for (int i=0;i<n*2-1;i++)
  {
    int j=line;
    do
    {
        output.push_back(arr[line][j]);
        j++;
    } while(j<ratio);

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
    counter ++;
  }
  if (n%2 != 0) output.push_back(arr[n/2][n/2]);;
  
  return output;
}

int main()
{
    std::vector<std::vector<int>> test = {{1,2,3},{4,3,5},{7,8,9}};
    snail(test);

    return 0;
}