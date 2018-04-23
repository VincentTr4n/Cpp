#include <bits/stdc++.h>
using namespace std;

string max_permutation(string w, string s){

	// calculate 127**(w.size()-1), where ** means exponentation
	unsigned long long pow127 = 1;
	for(unsigned int i=1; i<w.size(); i++)
	{
		pow127 *= 127;
	}


	// character count for w
	array<int, 26> w_charcount;
	w_charcount.fill(0);
	for(unsigned int i=0; i<w.size(); i++)
	{
		w_charcount[w[i]-'a']++;
	}


	// initial character count and hash for s except last character
	array<int, 26> charcount;
	charcount.fill(0);
	unsigned long long hash = 0;
	for(unsigned int i=0; i<w.size()-1; i++)
	{
		charcount[s[i]-'a']++;
		hash = (hash*127)+s[i];
	}


	// find permutations
	unordered_map<long long, pair<int,int> > perms;

	for(unsigned int i=0; i<=s.size()-w.size(); i++)
	{
		charcount[s[i+w.size()-1]-'a']++;
		hash = (hash*127) + s[i+w.size()-1];

		if(charcount == w_charcount)
		{
			if(perms.count(hash)==0)
			{
				perms[hash] = make_pair(0,i);
			}
			perms[hash].first++;
		}

		charcount[s[i]-'a']--;
		hash -= pow127 * s[i];
	}


	// find most common permutations
	int max_qty = 0;
	for(pair<const int, pair<int, int> > p : perms)
	{
		max_qty = max(max_qty, p.second.first);
	}

	if(max_qty == 0) return "-1";

	vector<int> solutions;
	for(pair<const int, pair<int, int> > p : perms)
	{
		if(p.second.first == max_qty)
		{
			solutions.push_back(p.second.second);
		}
	}


	// find lexicographically shortest solution
	int best = solutions[0];
	for(int sol : solutions){
		if(best==sol)continue;
		int i = best;
		int j = sol;
		
		while(s[i] == s[j])
		{
			i++;
			j++;
		}
		
		if(s[j] < s[i])
		{
			best = sol;
		}
	}

	return s.substr(best,w.size());
}


int main()
{
	int t;
	cin >> t;
	while(t--){
		string w,s,answer;
		cin >> w >> s;
		answer = max_permutation(w, s);
	   cout << answer << endl;
	}

    return 0;
}
