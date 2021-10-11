#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

const float ERROR = 1e-9;

int digitsum(int number)
{
    int sum = 0;
    while (number > 0)
    {
        sum += number % 10;
        number /= 10;
    }

    return sum;
}

int main()
{
    int composite[50000] = {true, true, false};
    for (int i = 2; i < 50000; ++i)
    {
        if (!composite[i])
        {
            for (int j = i + i; j < 50000; j += i)
            {
                composite[j] = true;
            }
        }
    }

    int testcase;
    while (scanf("%d", &testcase) != EOF)
    {
        int n;
        for (int i = 0; i < testcase; ++i)
        {
            scanf("%d", &n);
            int smith_number = n + 1;
            while (true /* break if smith_number is found. */)
            {
                int left_sum = 0, right_sum = 0;

                int temp = smith_number;
                int sqrt_temp = (int)(sqrt(temp) + ERROR);
                for (int j = 2; j <= sqrt_temp && temp > 1; ++j)
                {
                    if (!composite[j])
                    {
                        while (temp % j == 0)
                        {
                            right_sum += digitsum(j);
                            temp /= j;
                        }
                    }
                }

                if (temp != smith_number)
                {
                    if (temp > 1)
                        right_sum += digitsum(temp);

                    left_sum = digitsum(smith_number);
                    if (left_sum == right_sum)
                        break;
                }

                ++smith_number;
            }

            printf("%d\n", smith_number);
        }
    }
    return 0;
}