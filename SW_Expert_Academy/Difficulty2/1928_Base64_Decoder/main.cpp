#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int char_to_value(char c) {
	if (c >= 'A' && c <= 'Z')
		return c - 'A';
	else if (c >= 'a' && c <= 'z')
		return c - 'a' + 26;
	else if (c >= '0' && c <= '9')
		return c - '0' + 52;
	else if (c == '+')
		return 62;
	else if (c == '/')
		return 63;
	else
		return -1;
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
	freopen("input.txt", "r", stdin);
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case) {
		string s, original = "";
		cin >> s;
		int len = s.length();
		for (int i = 0; i < len; i = i + 4) {
			int chunk = 0;
			for (int j = 0; j < 4; j++) {
				chunk *= 64;
				chunk += char_to_value(s.at(i + j));
			}
			char third(chunk % 256);
			chunk /= 256;
			char second(chunk % 256);
			chunk /= 256;
			char first(chunk);
			original.push_back(first);
			original.push_back(second);
			original.push_back(third);
		}
		cout << "#" << test_case << " " << original << '\n';
	}
	return 0;
}