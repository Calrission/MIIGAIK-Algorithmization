# O(n)
n = int(input())
N = 1  # кол-во ввода
Y = 1  # кол-во операций
while n != 0:
    new_n = int(input())
    N += 1
    Y += 1
    if new_n == 0:
        break
    Y += 1
    n += new_n
N += 1
print(n)

print(f"\nРасчет сложности: {N=} {Y=}")