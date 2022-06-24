[2022 연세대학교 신학기맞이 프로그래밍 경진대회 Open Contest](https://www.acmicpc.net/contest/view/777)

# 정규표현식

```py
import re
```

## match()

문자열이 정규식과 완전히 매치되는가

## search()

문자열이 정규식과 일부 매치되는가

## findall()

정규식과 매치되는 문자열을 리스트로 반환

## 기본적인 사용방법

```py
p = re.compile(정규표현식)
result = p.match(문자열)
print(result)
```
