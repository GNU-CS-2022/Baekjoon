#include <iostream>
using namespace std;
typedef long long ll;

ll N;
ll arr[100000];

ll func(ll x) {
	ll ret = 0;
	for (ll i = 1; i < N; i++) {
		ret += abs(arr[i] - i * x);
	}
	return ret;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) cin >> arr[i];

	ll L = 0, R = 1000000000;
	while (L < R) {
		ll mid = (L + R) / 2;
		ll midval = func(mid);
		ll rightval = func(mid + 1);
		if (midval <= rightval) R = mid;
		else L = mid + 1;
	}

	cout << func(L);
}