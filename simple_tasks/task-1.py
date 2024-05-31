N = 0
n = int(input())
N += 5  # int, int, **0.5, +1, выделение памяти n
for num in range(1, int(n ** 0.5) + 1):
    N += 1  # сдвиг
    N += 1  # выделение памяти num
    N += 2  # выделение памяти num_square, *
    num_square = num * num
    print(num_square)

print(f"\nРасчет сложности: {n=} {N=}")

# O(5+4*(sqrt(n))) => O(sqrt(n))
# Примеры: 10, 3, 8
