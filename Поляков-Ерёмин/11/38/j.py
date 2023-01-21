def f(n):
	s = 1
	for i in range(1, n+1):
		s *= i
	return s

x = int(input())
print(f(x))