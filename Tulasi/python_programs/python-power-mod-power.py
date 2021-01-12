# Enter your code here. Read input from STDIN. Print output to STDOUT
def my_power(a,b):
    m=1
    for i in range(1,b+1):
        m*=a
    return m
if __name__ == '__main__':
    i = int(input())
    j = int(input())
    k = int(input())
    p=my_power(i,j)
    print("{}".format(p))
    print("{}".format(p%k))
    