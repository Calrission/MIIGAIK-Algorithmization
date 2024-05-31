n = int(input())
N = 2  # выделение памяти data, int
data = []
for i in range(n):
    N += 2  # append, int
    N += 1  # сдвиг
    N += 1  # выделение памяти i
    data.append(int(input()))
N += 3  # len, len(data)-1, выделение памяти для indexes_local_maximum
indexes_local_maximum = []
for index in range(1, len(data)-1):
    N += 2  # сдвиг index / выделение памяти
    N += 2  # data[index], присвоение current_value
    current_value = data[index]
    N += 3  # index-1, data[index-1], присвоение prev_value
    prev_value = data[index-1]
    N += 3  # index+1, data[index+1], присвоение next_value
    next_value = data[index+1]
    if prev_value < current_value and current_value > next_value:
        indexes_local_maximum.append(index)
    N += 4  # <, >, append, and
N += 2  # len, <
if len(indexes_local_maximum) < 2:
    print(0)
else:
    min_ = len(data)
    N += 2  # len, выделение памяти min_
    N += 1  # len(indexes_local_maximum)
    for i in range(1, len(indexes_local_maximum)):
        N += 2  # сдвиг i / выделение памяти
        N += 2  # indexes_local_maximum[i], выделение памяти current
        current = indexes_local_maximum[i]
        N += 2  # indexes_local_maximum[i-1], выделение памяти prev
        prev = indexes_local_maximum[i-1]
        N += 2  # current - prev, выделение памяти diff
        diff = current - prev
        N += 2  # min_ < diff, выделение памяти min_
        min_ = min_ if min_ < diff else diff
    print(min_)

print(f"Расчет сложности: n={len(data)} {N=}")

# O(10+(n-1)*16) => O(n)
# 1 -> 110
# 2 -> 14 (26)
# 3 -> 30
# 4 -> 46
# 5 -> 62
# 6 -> 78
# 7 -> 106
# 8 -> 122
