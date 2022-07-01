#include <bits/stdc++.h>

using namespace std;

vector<int> primes = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,
                    103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,
                    211,223,227,229, 233,239,241,251,257,263,269,271,277,281,283,293,
                    307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,
                    401,409,419,421,431,433,439,443,449,457,461,463,467,479,487,491,499,
                    503,509,521,523,541,547,557,563,569,571,577,587,593,599,
                    601,607,613,617,619,631,641,643,647,653,659,661,673,677,683,691,
                    701,709,719,727,733,739,743,751,757,761,769,773,787,797,
                    809,811,821,823,827,829,839,853,857,859,863,877,881,883,887,
                    907,911,919,929,937,941,947,953,967,971,977,983,991,997,
                    1009};

int main() 
{
	ifstream cin("test_cases/divisors.txt");

    int n,k;

    while (cin >> n >> k) {

        vector<int> top(1005, 0);
        for (int i{2}; i<=n; ++i) {
            int n = i;
            while (n > 1) {
                for (int i{0}; i < primes.size(); ++i) {
                    if (n % primes[i] == 0) {
                        top[primes[i]] += 1;
                        n /= primes[i];
                        break;
                    }
                }
            }
        }

        vector<int> bot(1005,0);
        for (int i{2}; i<=k; ++i) {
            int n = i;
            while (n > 1) {
                for (int i{0}; i < primes.size(); ++i) {
                    if (n % primes[i] == 0) {
                        bot[primes[i]] += 1;
                        n /= primes[i];
                        break;
                    }
                }
            }
        }


        for (int i{2}; i<=n-k; ++i) {
            int n = i;
            while (n > 1) {
                for (int i{0}; i < primes.size(); ++i) {
                    if (n % primes[i] == 0) {
                        bot[primes[i]] += 1;
                        n /= primes[i];
                        break;
                    }
                }
            }
        }

        long long divisors = 1;
        for (int i{0}; i<=1001; ++i) {
            if (top[i] > bot[i])
                divisors = divisors * (long long)(top[i] - bot[i] + 1);
        }

        cout << divisors << endl;
    }
}
