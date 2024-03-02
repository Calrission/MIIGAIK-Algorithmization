# O(sqrt (n))
n = int(input())
for num in range(1, int(n**0.5)+1):
    print(num**2, end=" ")