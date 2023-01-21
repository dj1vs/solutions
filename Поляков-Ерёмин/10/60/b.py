def avg(lst):
    return (sum(lst) - min(lst) - max(lst))/3

def main():
    lst = [int(x) for x in input().split(' ')]
    print(min(lst), max(lst))
    print('%.2f' % avg(lst))

main()