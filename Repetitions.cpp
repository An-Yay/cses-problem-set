#include <bits/stdc++.h>
using namespace std;

int main()
{
      string str;
      cin >> str;
      long long int max = 1;
      long long int maxr = 1;

      for (long long int i = 0; i < str.size() - 1; i++)
      {
            if (str[i] == str[i + 1])
            {
                  max++;
            }
            else
            {
                  max = 1;
            }
            if (max > maxr)
            {
                  maxr = max;
            }
      }
      cout << maxr;

      return 0;
}
