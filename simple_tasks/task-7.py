last = None
count = 0
n = 0
N = 3  # выделение памяти last, count, n
while True:
    inp = input()
    n += 1
    N += 1  # ==
    if inp == "":
        break
    num = int(inp)
    N += 2  # int
    N += 3  # last is not None, last > num
    if last is not None and last > num:
        print(f"{num} не подходит, необходимо число >= {last}")
    else:
        N += 1  # !=
        if last != num:
            N += 1  # += 1
            count += 1
        N += 1  # присваивание last
        last = num
print(count)
print(f"Расчет сложности: {n=} {N=}")

# O(4+(n-1)*9) => O(n)
# 1 -> 4
# 2 -> 13
# 3 -> 22
# 4 -> 31
