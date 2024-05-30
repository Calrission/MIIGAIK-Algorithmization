N = 0
n = int(input())

for num in range(1, n):
    N += 1
    num_square = num ** 2
    N += 1
    if num_square < n:
        print(num_square)
    else:
        break

print(f"\nРасчет сложности: {n=} {N=}")

# O(sqrt(n)*2+1)
