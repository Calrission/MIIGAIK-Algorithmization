# O(n)
data = list(map(int, input().strip().split(" ")))
n = len(data)
max_, max_second = 0, 0
N = 3
for elem in data:
    N += 1  # Выделение памяти elem
    N += 1
    if elem > max_:
        N += 2
        max_second = max_
        max_ = elem
    elif elem > max_second:
        max_second = elem
        N += 2
    N += 1
print(max_second)
print(f"Расчет сложности: n={len(data)} {N=}")
