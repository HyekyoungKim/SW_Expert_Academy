#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>

using namespace std;

/* Problem #1983 조교의 성적 매기기 */
int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	freopen("input.txt", "r", stdin);
	cin >> T;
	/*
	   여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
	*/
	for (test_case = 1; test_case <= T; ++test_case) {
		int N, K;
		double K_score;
		cin >> N >> K;
		vector<double> scores;
		double cut[10];	// cut[0]: A+ 커트라인, ..., cut[9]: D0 커트라인
		string grade[10] = { "A+","A0","A-","B+","B0","B-","C+","C0","C-","D0" };
		for (int i = 0; i < N; i++) {
			double mid, fin, assign, score;
			cin >> mid >> fin >> assign;
			score = 0.35 * mid + 0.45 * fin + 0.2 * assign;
			scores.push_back(score);
		}
		K_score = scores[K - 1];
		sort(scores.begin(), scores.end(), greater<double>());	// 총점을 내림차순으로 정렬
		for (int i = 0; i < 10; i++)
			cut[i] = scores[(N / 10) * (i + 1) - 1];
		for (int i = 0; i < 10; i++) {
			if (K_score >= cut[i]) {
				cout << "#" << test_case << " " << grade[i] << '\n';
				break;
			}
		}
	}
	return 0;
}