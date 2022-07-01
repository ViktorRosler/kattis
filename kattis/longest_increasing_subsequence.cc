#include <bits/stdc++.h>

using namespace std;

int main() 
{
	ifstream cin("test_cases/longest_increasing_subsequence.txt");

    int n;
    while (cin >> n) {

        vector<int> seq;
        for (int i{0}; i<n; ++i) {
            int tmp;
            cin >> tmp;
            seq.push_back(tmp);
        }

        vector<int> previous;           // previous[i] == index of previous element in seq[i]'s sequence
        vector<int> subseq(100001);   // subseq[i] == index of last element of the (first) subsequence of length i
        int length = 0;
        for (int i{0}; i<n; ++i) {

            int low = 1, high = length;
            while (low <= high) {
                int mid = ceil((low + high) / 2.0 );
                if (seq[subseq[mid]] < seq[i]) 
                    low = mid + 1;
                else
                    high = mid -1;
            }

            previous.push_back(subseq[low- 1]);
            subseq[low] = i; 

            length = max(length, low);
        }

        int s = subseq[length];
        vector<int> result;
        for (int i{length-1}; i>=0; --i) {
            result.push_back(s);
            s = previous[s];
        }

        cout << result.size() << endl;
        for (int i{(int) result.size() - 1}; i>0; --i) {
            cout << result[i] << " "; 
        }
        cout << result[0] << endl;       

        // cout << n << endl;
    }

    
}
