//Find the parity outlier

int FindOutlier(std::vector<int> arr)
{
  std::vector<int> odd;
  std::vector<int> even;
for (int x : arr)
  {
  if (x%2==0) even.push_back(x); 
  else odd.push_back(x);
}
  return even.size() == 1 ? even[0] : odd[0];
}