#include<iostream>
#include<vector>
#include<string>
using namespace std;
    string replaceSpace(string s) {
        if (s.length()==0) {
            return s;
        }
        int nums = 0;
        for (int i=0;i<s.length();i++) {
            if (s[i]==' ') {
                nums++;
            }
        }
        int n = s.length()+ nums*2;
        string str_bak(n, 'a');
        for (int i=0, j=0;i<s.length();i++) {
            if (s[i]!=' ') {
                str_bak[j] = s[i];
                j++;
            } else {
                str_bak[j] = '%';
                str_bak[++j] = '2';
                str_bak[++j] = '0';
                j++;
            }
        }
        return str_bak;
    }

int main() {
    string s = "we are good";
    string out = replaceSpace(s);
    cout<<out;

}