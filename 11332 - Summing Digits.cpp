/// Name: Md. Samshad Rahman
/// Prob: 11332 - Summing Digits

#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<iostream>
#include<string>
#include<stack>

#define co cout
#define ci cin
#define sf1(x) scanf("%lld", &x)
#define sf scanf
#define pf1(x) printf("%d\n", x)
#define pf printf
#define nl "\n"
#define FOR(i,j,k) for(i = j; i < k; i++)

using namespace std;

int digit(long long n);

int main(){
    long long n, l, a;

    while(sf1(n)){
        if(n == 0)
            return 0;

        pf1(digit(n));
    }

    return 0;
}

int digit(long long n){
    long long s = 0;

    while(n){
        s += n%10;
        n /= 10;
    }

    if(s > 9)
        digit(s);

    else
        return s;
}
