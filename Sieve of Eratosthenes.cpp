
// Sieve of Eratosthenes

#include <bits/stdc++.h>
using namespace std;

#define ull long long

void build_sieve(bool *primes, ull n)
{
	for(ull i = 0; i < n; i++)
		primes[i] = true;

	// set 0 and 1 as 'not prime'
	primes[0] = false;
	primes[1] = false;

	for(ull i = 2; i*i <= n; i++)
	{
		if(primes[i])
		{
			for(ull j = i*i; j <= n; j += i)
				primes[j] = false;
		}
	}
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ull n; cin >> n;

    bool primes[n+1];

    build_sieve(primes, n);

    cout << "Primes upto " << n << " are: ";
    for(int i = 0; i < n+1; i++)
  		if(primes[i])
  			cout << i << ' ';

    return 0;
}
