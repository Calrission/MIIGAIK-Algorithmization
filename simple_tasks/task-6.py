n = int(input())
N = 2  # выделение памяти data, int
data = []
for i in range(n):
    N += 2  # append, int
    N += 2  # сдвиг i / выделение памяти
    data.append(int(input()))  # split
N += 1  # len(data)
for i in range(len(data)):
    N += 2  # сдвиг i / выделение памяти
    N += 3  # i+1, % 2, != 0
    if (i+1) % 2 != 0:
        N += 4  # len(data), -1, >, data[i+1]/data[i]
        print(data[i+1] if len(data)-1 > i else data[i], end=" ")
    else:
        N += 2  # data[i-1]
        print(data[i-1], end=" ")
print(f"\nРасчет сложности: n={len(data)} {N=}")
# O(8n+14) => O(n)
# 1 -> 14
# 2 -> 22
# 3 -> 33
# 4 -> 41
# 5 -> 52
# 6 -> 60
# 7 -> 71
# 8 -> 79
# 9 -> 90
# 10 -> 98
