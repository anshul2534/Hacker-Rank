#include <cstdio>
#include <vector>

using namespace std;

int divisors(int n)
{
    int divisor_count = 0;

    for(int i = 1; i*i <= n; i++)
    {
        if(n%i == 0)
        {
            if(i*i == n)
                divisor_count++;
            else
                divisor_count += 2;
        }
    }

    return divisor_count;
}

void precompute(vector <int> &no_of_divisors, int LIMIT)
{
    for(int n = 1; n < LIMIT; n++)
    {
        no_of_divisors[n] = (n%2 == 0 ? divisors(n/2)*divisors(n + 1) : divisors(n)*divisors((n + 1)/2));
    }
}

int main()
{
    const int LIMIT = 5e4;
    vector <int> no_of_divisors(LIMIT + 1, 0);
    precompute(no_of_divisors, LIMIT);

    int no_of_test_cases;
    scanf("%d", &no_of_test_cases);

    while(no_of_test_cases--)
    {
        int minimum_divisors;
        scanf("%d", &minimum_divisors);

        long long n = 1;
        while(no_of_divisors[n] <= minimum_divisors) n++;

        long long triangular_n = (n*(n + 1))/2;
        printf("%lld\n", triangular_n);
    }

    return 0;
}

