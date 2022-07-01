# 8986. 전봇대

문제 티어: 플레티넘 5

## 사용한 알고리즘 f(x) <= f(x-1)

배점 32점을 받았는데 그 이유를 잘 모르겠다.

```py
N = int(input())
X = list(map(int, input().split()))
i = 1
fx = 100000000000000

while True:
  if N == 1:
    fx = 0
    break
  X_ = []
  for j in range(0, len(X) * i - i + 1, i):
    X_.append(j)
  y = 0
  for _ in range(len(X)):
    y += abs(X[_] - X_[_])

  if y <= fx:
    fx = y
  else:
    break
  i+=1

print(fx)
```

## 사용한 알고리즘 삼분탐색

추후에 추가예정
