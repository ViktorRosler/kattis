#include <bits/stdc++.h>

using namespace std;

int main() 
{
	ifstream cin("test_cases/planting_trees.txt");

    int nr_of_trees;
    int tree;
    vector<int> tree_list;

    cin >> nr_of_trees;
    for (int i{0}; i < nr_of_trees; ++i) {
        cin >> tree;
        tree_list.push_back(tree);
    }

    sort(tree_list.begin(), tree_list.end(), greater<int>());

    int max = 0;
    for (int i{1}; i <= nr_of_trees; ++i) {
        if (tree_list[i-1] + i > max)
            max = tree_list[i-1] + i;
    }
    cout << max+1 << endl;

}