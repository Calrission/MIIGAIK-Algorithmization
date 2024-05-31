# O(n^2)
line = input()
data = list(map(int, line.split(" ")))
N = len(data)**2 + len(line)   # list, map, split
max_, max_second = 0, 0
N += 3  # len, выделение памяти max_, max_second
for elem in data:
    N += 1  # сдвиг elem
    N += 1  # выделение памяти elem
    N += 1  # >
    if elem > max_:
        N += 2  # Присвоение max_second и max_
        max_second = max_
        max_ = elem
    elif elem > max_second:
        max_second = elem
        N += 2  # присвоение max_second
    else:
        N += 1  # elem > max_second
print(max_second)
print(f"Расчет сложности: n={len(data)} {N=}")
