// Function to find length of longest increasing subsequence
int LIS(int arr[], int i, int n, int prev)
{
	// Base case: nothing is remaining
	if (i == n)
		return 0;

	// case 1: exclude the current element and process the
	// remaining elements
	int excl = LIS(arr, i + 1, n, prev);

	// case 2: include the current element if it is greater
	// than previous element in LIS
	int incl = 0;
	if (arr[i] > prev)
		incl = 1 + LIS(arr, i + 1, n, arr[i]);

	// return maximum of above two choices
	return max(incl, excl);
} // techiedelight
