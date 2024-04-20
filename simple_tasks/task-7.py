# O(n)
last = None
count = 0
N = 0
n = 0
while True:
    inp = input()
    N += 2
    n += 1
    if inp == "":
        break
    N += 3
    num = int(inp)
    if last is not None and last > num:
        N += 1
        print(f"{num} не подходит, необходимо число >= {last}")
    else:
        N += 1
        if last != num:
            N += 1
            count += 1
        N += 1
        last = num
N += 1
print(count)
print(f"Расчет сложности: {n=} {N=}")