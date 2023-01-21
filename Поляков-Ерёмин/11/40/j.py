s = input()
l = set(list(i for i in s if i.isdigit()))
if len(l) == 10:
    print("NO")
for i in "9876543210":
    if not i in l:
        print(i, end='')