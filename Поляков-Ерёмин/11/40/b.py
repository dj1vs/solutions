a = sorted(set(i for i in input() if i.isdigit()))
if len(a) == 0:
    print("NO")
else:
    for i in a:
        print(i, end='')