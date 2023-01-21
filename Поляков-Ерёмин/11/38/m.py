fin = open('input.txt', 'r')
fout = open('output.txt', 'w')
sum = 0
for line in fin:
	sum += int(line)
fout.write(str(sum) + '\n')