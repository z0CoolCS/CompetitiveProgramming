#include<bits/stdc++.h>

using namespace std;

class LotteryTicket {
  public:
  bool bt (vector<int>&v, int ind, int cost) {
      if (cost == 0) { return true; }
      if (cost < 0) { return false; }
      if (ind == 4) { return false; }
      if (bt (v, ind + 1, cost - v[ind])) {
          return true;
      }
      return bt (v, ind + 1, cost);
  }
  string buy (int cost, int b1, int b2, int b3, int b4){
      vector<int> v = {b1, b2, b3, b4};
      if (bt(v, 0, cost)) {
          return "POSSIBLE";
      }
      return "IMPOSSIBLE";
  }
};
