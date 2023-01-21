fin = open('input.txt', 'r')
fout = open('output.txt', 'w')
numbers = []
for line in fin:
	numbers.append(int(line))
fout.write(str(numbers[0]//numbers[1]) + '\n' + str(int(numbers[0] % numbers[1])) + '\n')