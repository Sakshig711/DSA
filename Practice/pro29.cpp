#include <iostream>
using namespace std;

#define max 3

int find_max(int *p);
void radix_sort(int *num);

int main()
{
    int num[max];
    cout << "Enter the array: ";
    for (int i = 0; i < max; i++)
    {
        cin >> num[i];
    }

    radix_sort(num);

    cout << "Sorted array: ";
    for (int i = 0; i < max; i++)
    {
        cout << " " << num[i];
    }

    return 0;
}

int find_max(int *p)
{
    int cnt[max] = {0}; // Initialize cnt array with zeros
    for (int i = 0; i < max; i++)
    {
        int temp = p[i];
        while (temp > 0)
        {
            temp = temp / 10;
            cnt[i]++;
        }
    }
    int max_count = 0;
    for (int i = 0; i < max; i++)
    {
        if (cnt[i] > max_count)
        {
            max_count = cnt[i];
        }
    }
    return max_count;
}

void radix_sort(int *num)
{
    int passes = find_max(num);
    int div = 1;

    while (passes > 0)
    {
        int bucket[10][max];
        int count[10] = {0};

        for (int i = 0; i < max; i++)
        {
            int bucketno = (num[i] / div) % 10;
            int col = count[bucketno];
            bucket[bucketno][col] = num[i];
            count[bucketno]++;
        }

        int k = 0;
        for (int bucketno = 0; bucketno < 10; bucketno++)
        {
            for (int j = 0; j < count[bucketno]; j++)
            {
                num[k] = bucket[bucketno][j];
                k++;
            }
        }
        div = div * 10;
        passes--;
    }
}

