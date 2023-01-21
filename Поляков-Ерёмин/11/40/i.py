s = input()
l = sorted(list(i for i in s if s.count(i) == 1))
if len(l) == 0:
    print("NO")
for i in l:
    print(i, end='')