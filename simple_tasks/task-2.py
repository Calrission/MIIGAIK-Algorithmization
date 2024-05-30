# O(n)
n = int(input())
N = 1  # кол-во ввода
Y = 0  # кол-во операций
while n != 0:
    Y += 1
    new_n = int(input())
    N += 1
    Y += 1
    if new_n == 0:
        break
    Y += 1
    n += new_n

print(n)
print(f"\nРасчет сложности: {N=} {Y=}")