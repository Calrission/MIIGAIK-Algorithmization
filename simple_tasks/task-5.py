# O (n)
data = list(map(int, input().strip().split(" ")))

N = 2

indexes_local_maximum = []
for index in range(1, len(data)-1):
    current_value = data[index]
    prev_value = data[index-1]
    next_value = data[index+1]
    if prev_value < current_value and current_value > next_value:
        indexes_local_maximum.append(index)
    N += 6

N += 1
if len(indexes_local_maximum) < 2:
    print(0)
else:
    min_ = len(data)
    N += 3
    for i in range(1, len(indexes_local_maximum)):
        current = indexes_local_maximum[i]
        prev = indexes_local_maximum[i-1]
        diff = current - prev
        min_ = min_ if min_ < diff else diff
        N += 5

    N += 1
    print(min_)

print(f"Расчет сложности: n={len(data)} {N=}")
