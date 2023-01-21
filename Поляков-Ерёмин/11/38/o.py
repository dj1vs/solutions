fin = open('input.txt', 'r')
fout = open('output.txt', 'w')
sum = 0
for line in fin:
	sum += int(line)
res = str(sum // 2)
if sum % 2:
	res += '.5'
fout.write(res + '\n')