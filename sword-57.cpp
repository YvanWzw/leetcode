vector<vector<int>> findContinuousSequence(int target) {
	vector<vector<int>> ans;
	for (int i = target / 2; i >=2; i--)
	{
		double val = (double)target / i;
		if (i%2==0&&val -floor(val) == 0.5)
		{
			vector<int> vec;
			int center = target / i;
			if (center - (i - 2) / 2 > 0)
			{
				for (int j = center - (i - 2) / 2; j < center - (i - 2) / 2 + i; j++)
				{
					vec.push_back(j);
				}
				ans.push_back(vec);
			}
			
		}
		else if (i%2!=0&&val - floor(val) == 0)
		{
			vector<int> vec;
			int center = target / i;
			if (center - (i - 1) / 2 > 0)
			{
				for (int j = center - (i - 1) / 2; j < center - (i - 2) / 2 + i - 1; j++)
				{
					vec.push_back(j);
				}
				ans.push_back(vec);
			}
		}
	}
	return ans;
}