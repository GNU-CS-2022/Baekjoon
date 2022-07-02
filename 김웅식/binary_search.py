def binary_search(element, some_list):
    # 코드를 작성하세요.
    low = 0
    high = len(some_list)
    while low < high:
      middle = (low + high) // 2
      if some_list[middle] == element:
        return middle
      elif some_list[middle] > element:
        high = middle
      else:
        low = middle
    return None

print(binary_search(2, [2, 3, 5, 7, 11]))
print(binary_search(0, [2, 3, 5, 7, 11]))
print(binary_search(5, [2, 3, 5, 7, 11]))
print(binary_search(3, [2, 3, 5, 7, 11]))
print(binary_search(11, [2, 3, 5, 7, 11]))