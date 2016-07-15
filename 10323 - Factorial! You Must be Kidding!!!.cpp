/// Name: Md. Samshad Rahman
/// Prob: 10323 - Factorial! You Must be Kidding!!!

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
#define pf1(x) printf("%lld\n", x)
#define pf printf
#define nl "\n"
#define FOR(i,j,k) for(i = j; i < k; i++)
#define LL long long

using namespace std;

LL fact(LL n){
    if(n == 0)
        return 1;

    else
        return(n * fact(n-1));
}

int main(){

    LL n, r;

    while(sf1(n) != EOF){

        if(n > 13 || (n < 0 && n % 2 != 0))
            pf("Overflow!\n");

        else if((n >=0 && n < 8) || (n < 0 && n % 2 == 0))
            pf("Underflow!\n");

        else
            pf1(fact(n));
    }

    return 0;
}
