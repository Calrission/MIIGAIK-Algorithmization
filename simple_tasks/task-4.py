# O(n^2)
line = input()
data = list(map(int, line.split(" ")))
N = len(data)**2 + len(line)   # list, map, split
max_, current = 1, 1
N += 2  # Выделение памяти для max_, current
N += 1  # len
for i in range(1, len(data)):
    N += 1  # сдвиг
    N += 1  # выделение памяти i
    N += 3  # data[i], data[i-1], ==
    if data[i] == data[i-1]:
        N += 1  # инкрементация current
        current += 1
    else:
        N += 3  # >, выделение памяти max_ и current
        max_ = max_ if max_ > current else current
        current = 1
print(max_)
print(f"Расчет сложности: n={len(data)} {N=}")