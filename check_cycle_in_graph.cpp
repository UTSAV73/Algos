bool check_cycle(int n, vector<int>*edges)
{
	bool *white = new bool[n]();
	bool *grey = new bool[n]();
	bool *black = new bool[n]();
	for (int i = 0; i < n; i++)
		white[i] = true;
	for (int i = 0; i < n; i++)
	{
		if (white[i])
		{
			bool ans = dfs(i, edges, white, grey, black);
			if (!ans)
				return true;
		}
	}
	return false;
}