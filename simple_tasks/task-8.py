# O(n^2)
n = int(input())
data = input().split(" ")
for i in data:
    if data.count(i) == 1:
        print(i, end=" ")
