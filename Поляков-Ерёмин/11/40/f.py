s = input()
if sum(1 for i in s if (not i.isdigit()) and (not i.isalpha()) and i != '_') or s[0].isdigit():
    print("NO")
else:
    print("YES")