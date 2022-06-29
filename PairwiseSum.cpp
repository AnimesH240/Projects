#include<bits/stdc++.h>
using namespace std;

vector<int> inputArray()
{
  int n, a;

  cout<<"Enter the size of the array: ";
  cin>>n;

  vector<int> A;

  cout<<"Input "<<n<<" elements in ascending order:\n";
  for(int i = 0; i < n; i++)
  {
  cin>>a;
  A.push_back(a);
  }

  return A;
}

bool checkTargetPair(vector<int> A, int k)
{
 int sum;
  int i = 0, j = A.size() - 1;

  while(i<=j)
    {
  sum = A[i]+A[j];
  if(sum == k)
            return true;
  else if(sum < k)
            i++;
  else
            j--;
  }

  return false;
}

void printResult(bool found)
{
  if(found)
        cout<<"Pair found";
  else
        cout<<"Pair not found";
}

int main()
{
  int k;
  vector<int> A = inputArray();
  cout<<"Enter target sum: ";
  cin>>k;

  bool found = checkTargetPair(A, k);

  printResult(found);

  return 0;
}