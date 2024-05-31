n = int(input())
data = []
used = {}
N = 3  # int, выделение памяти data
for i in range(n):
    N += 2  # append, int
    N += 2  # сдвиг i / выделение памяти
    data.append(int(input()))  # split
for i in data:
    N += 2  # Выделение памяти i / сдвиг
    N += 2  # i not in used
    if i not in used:
        N += 1  # used[i] = True
        used[i] = True
        print(i, end=" ")

print(f"\nРасчет сложности: n={len(data)} {N=}")

# O(2+6*n) => O(n^2)
# 1 -> 9
# 2 -> 16
# 3 -> 23
