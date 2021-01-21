if __name__ == '__main__':
    N = int(raw_input())
    list=[]
    for i in range(0,N):
        integer_list = map(None,raw_input().split())
        list.append(integer_list)
    lst=[]
    for i in list:
        if i[0]=="print":
            print(lst)
        elif i[0]=="insert":
            #print(i)
            j=int(i[1])
            k=int(i[2])
            lst.insert(j,k)
        elif i[0]=="remove":
            j=int(i[1])
            lst.remove(j)
        elif i[0]=="append":
            j=int(i[1])
            lst.append(j)
        elif i[0]=="reverse":
            lst.reverse()
        elif i[0]=="pop":
            lst.pop()
        elif i[0]=="sort":
            lst.sort()