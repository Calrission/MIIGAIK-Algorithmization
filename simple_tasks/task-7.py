# O(n)
last = None
count = 0
N = 0
n = 0
while True:
    inp = input()
    N += 1
    n += 1
    if inp == "":
        break
    num = int(inp)
    N += 3
    if last is not None and last > num:
        print(f"{num} не подходит, необходимо число >= {last}")
    else:
        N += 1
        if last != num:
            N += 1
            count += 1
        N += 1
        last = num
print(count)
print(f"Расчет сложности: {n=} {N=}")