test=int(input())
while(test>0):
    p=input()
    s=input()
    list1=[]
    for i in s:
        list1.append(p.find(i))
        list1.sort()
        for i in list1:
            print(p[i],end="")
        if test>1:
         print()
        test=-1 