def f(n):
	s = 0
	if n % 2:
		s = 1
	else:
		s = 2
	i = s + 2
	while i <= n:
		s *= i
		i += 2
	return s

x = int(input())
print(f(x))