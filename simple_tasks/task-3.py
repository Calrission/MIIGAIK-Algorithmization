# O(n log n)
data = list(map(int, input().strip().split(" ")))
data.sort(reverse=True)  # O(n log n)
print(data[1])
