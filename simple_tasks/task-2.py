sum_ = 0
n = 0
N = 1  # выделение памяти sum_
while True:
    n += 1
    num = int(input())
    N += 2  # int, num == 0
    if num == 0:
        break
    sum_ += num
    N += 1  # sum_ += num

print(num)
print(f"\nРасчет сложности: {n=} {N=}")

# O(3*n) => O(n)
