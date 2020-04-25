#include<iostream>

using namespace std;
const int MAX = 51000;
const int MOD =  1000000007;

long long fac[MAX], finv[MAX], inv[MAX];

void COMInit(){
    fac[0] = 1;
    fac[1] = 1;
    finv[0] = 1;
    finv[1] = 1;
    inv[0] = 1;
    for (int j = 2; j < MAX; j++)
    {
        fac[j] = (fac[j-1] * j) % MOD;
        inv[j] = MOD-((inv[MOD%j]*(MOD/j))%MOD);
        finv[j] = (finv[j-1]*inv[j]) % MOD;
    }
}

long long COM(int n,int k){
    if(n < k) return 0;
    if(n < 0 || k < 0) return 0;
    

}