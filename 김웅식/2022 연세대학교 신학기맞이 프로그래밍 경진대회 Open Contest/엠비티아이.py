import re
p = re.compile('(E|I)(N|S)(F|T)(P|J)|(P|J)(F|T)(N|S)(E|I)')

n, m = map(int, input().split())
a = [input() for _ in range(n)]

ans = 0

for i in range(n):
    for j in range(m):
        if i+3 < n and p.match(a[i][j]+a[i+1][j]+a[i+2][j]+a[i+3][j]):
            ans += 1
        if j+3 < m and p.match(a[i][j]+a[i][j+1]+a[i][j+2]+a[i][j+3]):
            ans += 1
        if i+3 < n and j+3 < m and p.match(a[i][j]+a[i+1][j+1]+a[i+2][j+2]+a[i+3][j+3]):
            ans += 1
        if i-3 >= 0 and j+3 < m and p.match(a[i][j]+a[i-1][j+1]+a[i-2][j+2]+a[i-3][j+3]):
            ans += 1

print(ans)
