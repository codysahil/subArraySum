#include<iostream>
using namespace std;

int subArraySum(int arr[], int n,int target) {
	
	
	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = i; j < n; j++) {
			sum = sum + arr[j];
			if (sum == target) {
				cout << i<<" "<<"TO"<<" " << j << endl;
			}
		}
	}
	return 0;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
		
	}
	subArraySum(arr, n, 15);
	

}