# O(n)
n = int(input())
data = input().split(" ")
N = 0
for i in data:
    N += 2
    if data.count(i) == 1:
        N += 1
        print(i, end=" ")
    N += 1

print(f"Расчет сложности: n={len(data)} {N=}")