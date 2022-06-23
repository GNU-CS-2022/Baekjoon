import re

text = "adawdadawd010-1234-5678"
p = re.compile("\d\d\d-\d\d\d\d-\d\d\d\d")

result = p.findall(text)
print(result)

text = "저의 MBTI는 ENFJ입니다."
p = re.compile("(E|I)(N|S)(F|T)(P|J)")
result = p.findall(text)
print(result)

print(p.search(text))

text = "ENFP"
print(p.match(text))
