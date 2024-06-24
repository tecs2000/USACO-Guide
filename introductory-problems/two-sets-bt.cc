#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> seq;

typedef long long ll;

/**
 * @brief Procura por um subset do array 1..n, cuja soma dos seus elementos seja igual a sum
 *
 * @param sum soma dos digitos do subset
 * @param curr soma corrente, com a adicao de i
 * @param i   índice do número atual
 *
 * @return true, caso a insercao de i leve a um caminho possivel, false caso contrario
 */
bool backtracking(ll sum, ll curr, int i)
{
    if (curr == sum)
        return true;

    if (curr > sum || i > n)
        return false;

    for (int j = i + 1; j <= n; j++)
    {
        seq.push_back(j);
        if (backtracking(sum, curr + j, j))
            return true;
        seq.pop_back();
    }

    return false;
}

void printSequences()
{
    vector<int> secondSeq;
    vector<bool> inSeq(n + 1, false);

    cout << seq.size() << endl;
    for (int num : seq)
    {
        inSeq[num] = true;
        cout << num << " ";
    }
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        if (!inSeq[i])
            secondSeq.push_back(i);
    }

    cout << secondSeq.size() << endl;
    for (int num : secondSeq)
        cout << num << " ";
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    ll sn = (ll)n * (n + 1) / 2;

    // Se a soma da PA for impar, não é possível ter dois sets de mesma soma
    if (sn % 2 != 0)
    {
        cout << "NO" << endl;
        return 0;
    }

    ll sum = sn / 2;
    bool ret = false;
    for (int i = 1; i <= n && !ret; i++)
    {
        seq.clear();
        seq.push_back(i);
        ret = backtracking(sum, i, i);
        if (ret)
        {
            cout << "YES" << endl;
            printSequences();
        }
    }

    if (!ret)
        cout << "NO" << endl;

    return 0;
}
