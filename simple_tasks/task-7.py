last = None
count = 0
while True:
    inp = input()
    if inp == "":
        break
    num = int(inp.strip())
    if last is not None and last > num:
        print(f"{num} не подходит, необходимо число >= {last}")
    else:
        if last != num:
            count += 1
        last = num

print(count)