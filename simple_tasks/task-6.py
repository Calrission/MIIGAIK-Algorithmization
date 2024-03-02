# O(n)
data = input().split(" ")
for i in range(len(data)):
    if (i+1) % 2 != 0:
        print(data[i+1] if len(data)-1 > i else data[i], end=" ")
    else:
        print(data[i-1], end=" ")
