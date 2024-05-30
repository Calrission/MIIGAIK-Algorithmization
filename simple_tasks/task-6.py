# O(n)
data = input().split(" ")
N = 0
for i in range(len(data)):
    N += 3
    if (i+1) % 2 != 0:
        N += 2
        print(data[i+1] if len(data)-1 > i else data[i], end=" ")
    else:
        N += 1
        print(data[i-1], end=" ")
    N += 1
print(f"\nРасчет сложности: n={len(data)} {N=}")
