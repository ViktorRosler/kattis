#include <bits/stdc++.h>

using namespace std;

vector<string> tokenize(string s) {
    vector<string> result;

    string token = "";
    for (int i{0}; i<s.length(); ++i) {
        if (s[i] == ' ') {
            if (token != "-" && token.length() > 0) {
                result.push_back(token);
                token = "";   
            }
            continue;
        }

        if (s[i] == '-') {
            if (token == "") {
                if (result.size() == 0) {
                    token = "-";
                    continue;
                } else {
                    char c = result[result.size()-1][result[result.size()-1].size()-1];
                    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '(') {
                        token = "-";
                        continue;
                    }
                }         
            } 
        }

        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '(' || s[i] == ')') {
            if (token.length() > 0) {
                result.push_back(token);
                token = "";
            }
            result.push_back(string(1, s[i]));
            continue;
        }

        if (isdigit(s[i])) {
            token += s[i];

            if (i+1 == s.length()) {
                result.push_back(token);
            }
        }

    }

    return result;
}

double eval(vector<string> v) {
    vector<string> todo = v;
    int index = 0;

    // eval ()
    vector<string> next;
    while (index < todo.size()) {
        if (v[index] == "(") {
            int l_count = 1;
            vector<string> tmp;
            ++index;
            while (true)
                if (todo[index] == "(") {
                    ++l_count;
                    tmp.push_back(todo[index++]);
                } else if (todo[index] == ")") {
                    --l_count;
                    if (!l_count) {
                        break;
                    } else {
                        tmp.push_back(todo[index++]);
                    }
                } else {
                    tmp.push_back(todo[index++]);
                }
                
            next.push_back(to_string(eval(tmp)));
            ++index;
        
        } else 
            next.push_back(todo[index++]);       
    }
    todo = next;
    index = 0;

    // eval * /
    next.clear();
    while (index < todo.size()) {
        if (todo[index] == "*") {
            next[next.size()-1] = to_string(stod(next[next.size()-1]) * stod(todo[index+1]));
            index += 2;
        } else if (todo[index] == "/") {
            next[next.size()-1] = to_string(stod(next[next.size()-1]) / stod(todo[index+1]));
            index += 2;
        } else {
            next.push_back(todo[index++]);
        }
    }
    todo = next;
    index = 0;

    // eval + -
    next.clear();
    while (index < todo.size()) {
        if (todo[index] == "+") {
            next[next.size()-1] = to_string(stod(next[next.size()-1]) + stod(todo[index+1]));
            index += 2;
        } else if (todo[index] == "-") {
            next[next.size()-1] = to_string(stod(next[next.size()-1]) - stod(todo[index+1]));
            index += 2;
        } else {
            next.push_back(todo[index++]);
        }
    }

    return stod(next[0]);
}

int main() 
{
	ifstream cin("test_cases/calculator.txt");

    string line;

    while (getline(cin, line)) {
        vector<string> tokens = tokenize(line);

        /*
        for (int i{0}; i<tokens.size(); ++i)
            cout << tokens[i] << " ";
        cout << endl;
        */

        cout << fixed << setprecision(2) << (eval(tokens) == -0.00 ? 0.00 : eval(tokens)) << endl;
    }
}
