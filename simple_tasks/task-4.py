# O(n)
data = list(map(int, input().strip().split(" ")))
N = 2
max_, current = 1, 1
for i in range(1, len(data)):
    N += 1
    if data[i] == data[i-1]:
        N += 1
        current += 1
    else:
        N += 2
        max_ = max_ if max_ > current else current
        current = 1
N += 1
print(max_)
print(f"Расчет сложности: n={len(data)} {N=}")