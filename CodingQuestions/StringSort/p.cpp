#include <iostream>
#include <cstring>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Node
{

public:
    char data;
    unordered_map<char, Node *> children;
    bool terminal;

    Node(char d)
    {
        data = d;
        terminal = false;
    }
};

class Trie
{

    Node *root;
    int cnt;

public:
    Trie()
    {
        root = new Node('\0');
        cnt = 0;
    }
    void insert(char *w)
    {
        Node *temp = root;
        for (int i = 0; w[i] != '\0'; i++)
        {
            char ch = w[i];
            if (temp->children.count(ch))
            {
                temp = temp->children[ch];
            }
            else
            {
                Node *n = new Node(ch);
                temp->children[ch] = n;
                temp = n;
            }
        }
        temp->terminal = true;
    }
};
// bool compare(string a, string b)
// {
//     if (a[0] != b[0])
//     {
//         return a < b;
//     }
// }

int main()
{

    int n;
    cin >> n;

    Trie t;

    char batch[n][100];

    int j = 0;
    while (n != 0)
    {

        char word[1000];
        char c;
        int i = 0;
        do
        {
            cin >> c;
            word[i] = c;
            batch[j][i] = c;
            i++;
        } while (c != '\0');

        char *temp = word;
        temp = new char[i];
        t.insert(temp);

        j++;
        n--;
    }

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < 100; k++)
        {
            cout << batch[i][k];
        }
        cout << endl;
    }

    return 0;
}