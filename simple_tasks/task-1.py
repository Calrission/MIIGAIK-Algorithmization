N = 1
n = int(input())

for num in range(1, n):
    num_square = num ** 2
    N += 3
    if num_square < n:
        N += 1
        print(num_square)
    else:
        break

print(f"\nРасчет сложности: {n=} {N=}")

# O(sqrt(n))
