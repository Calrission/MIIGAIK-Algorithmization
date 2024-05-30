# O(n)

data = list(map(int, input().strip().split(" ")))
N = 1
indexes_local_maximum = []
N += 2
N += 1  # Выделение памяти
for index in range(1, len(data)-1):
    N += 2
    current_value = data[index]
    N += 2
    prev_value = data[index-1]
    N += 2
    next_value = data[index+1]
    if prev_value < current_value and current_value > next_value:
        indexes_local_maximum.append(index)
    N += 3
    N += 1

N += 1
if len(indexes_local_maximum) < 2:
    print(0)
else:
    min_ = len(data)
    N += 1
    for i in range(1, len(indexes_local_maximum)):
        N += 2
        current = indexes_local_maximum[i]
        N += 2
        prev = indexes_local_maximum[i-1]
        N += 2
        diff = current - prev
        N += 2
        min_ = min_ if min_ < diff else diff
    print(min_)

print(f"Расчет сложности: n={len(data)} {N=}")
