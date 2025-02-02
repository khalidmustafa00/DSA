#include <iostream>
using namespace std;
int Find_Sum(int A[], int n)
{
    if (n <= 0)
    {
        return 0;
    }
    return A[n - 1] + Find_Sum(A, n - 1);
}
string solve(string sentence)
{
    int i = 0;
    int j = sentence.size();
    while (i < j)
    {
        string word = "";
        while (i != ' ')
        {
            word += sentence[i];
            i++;
        }
        i++;
    }
}
int main()
{
    int A[] = {1, 2, 3, 4, 5};
    int n = sizeof(A) / sizeof(A[0]);
    int sum = Find_Sum(A, n);
    cout << "Sum of array elements: " << sum << std::endl;
    return 0;
}