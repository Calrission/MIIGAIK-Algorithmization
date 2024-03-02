# O(n)
data = list(map(int, input().strip().split(" ")))
max_, current = 1, 1
for i in range(1, len(data)):
    if data[i] == data[i-1]:
        current += 1
    else:
        max_ = max(max_, current)
        current = 1
print(max_)