s = input()
t = sum(1 for i in s if (not i.isdigit()) and ord(i.upper()) > ord('F'))
if t or s[0] == '0':
    print("NO")
else:
    print("YES")