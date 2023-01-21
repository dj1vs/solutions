s = input()
t = sum(1 for i in s if (not i.isdigit()) or int(i) > 7)
if t or s[0] == '0':
    print("NO")
else:
    print("YES")