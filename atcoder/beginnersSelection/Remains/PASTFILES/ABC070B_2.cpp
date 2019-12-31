#include<cstdio>
#include<algorithm>

using namespace std;

// Problem https://atcoder.jp/contests/abc070/tasks/abc070_b

int solver(int ASTART,int ASTOP,int BSTART,int BSTOP){
    int result;
    result = 0;
    int startmax,stopmin,switchingtime;
    startmax = max(ASTART,BSTART);
    stopmin = min(ASTOP,BSTOP);
    switchingtime = stopmin-startmax;
    if(0 < switchingtime){
        result = switchingtime;
    }
    return result;
}

int main(void){
    int tmp;
    int answer;
    int A,B,C,D;
    tmp = scanf("%d%d%d%d",&A,&B,&C,&D);
    answer = solver(A,B,C,D);
    printf("%d\n",answer);
    return 0;
}