#include <bits/stdc++.h>
using namespace std;

int main()
{
      long long int n;
      cin >> n;
      long long sum = 0;
      for (long long int i = 0; i < n - 1; i++)
      {
            long long int a;
            cin >> a;
            sum += a;
      }
      cout << n * (n + 1) / 2 - sum;
      return 0;
}