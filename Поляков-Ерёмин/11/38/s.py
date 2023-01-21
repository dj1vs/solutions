from math import sqrt
def isqrt(n):
    root = 0 # Running result.
    rmdr = 0 # Running remainder n - root**2.
    for s in reversed(range(0, n.bit_length(), 2)): # Shift n by s bits.
        bits = n >> s & 3 # The next two most significant bits of n.
        rmdr = rmdr << 2 | bits # Increase the remainder.
        cand = root << 2 | 1 # Shifted candidate root value to try.
        bit_next = int(rmdr >= cand) # The next bit in the remainder.
        root = root << 1 | bit_next # Add next bit to running result.
        rmdr -= cand * bit_next # Reduce the remainder if bit was added.
    return root
    
  
fin = open('input.txt', 'r')
fout = open('output.txt', 'w')
num = 0
for line in fin:
	if line != None:
		num = int(line)
s = isqrt(num)
sub = num - (s ** 2)
fout.write(str(s) + '\n' + str(sub) + '\n')