def swap_case(s):
    list=[]
    for i in s:
        if i.isupper()==True:
            k=i.lower()
        else:
            k=i.upper()
        list.append(k)
    str="".join(list)
    return str

if __name__ == '__main__':
    s = raw_input()
    result = swap_case(s)
    print result