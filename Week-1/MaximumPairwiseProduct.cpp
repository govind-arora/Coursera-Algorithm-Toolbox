#include <iostream>
#include <vector>
using namespace std;

long long int MaximumPairwiseProduct(const vector<int> numbers)
{
    if (numbers.size() < 2)
        return 0;

    int a = max(numbers[0], numbers[1]), b = min(numbers[0], numbers[1]);

    for (int i = 2; i < numbers.size(); i++)
    {
        if (numbers[i] >= a)
        {
            b = a;
            a = numbers[i];
        }
        else if ((numbers[i] < a) && (numbers[i] > b))
            b = numbers[i];
    }

    return a * b;
}

int main()
{

    int n;
    cin >> n;

    vector<int> numbers(n);
    for (int i = 0; i < n; i++)
        cin >> numbers[i];

    long long int result = MaximumPairwiseProduct(numbers);
    cout << result;
    return 0;
}