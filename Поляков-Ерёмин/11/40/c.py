s = input()
a = sorted(set(i for i in s if i.isdigit()))
t = False
for i in a:
        if s.count(i) > 1:
            t = True
            print(i, end='')
if not t:
    print("NO")