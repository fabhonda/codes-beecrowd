alfabeto=['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z']
n=int(input())
for i in range(n):
    string=input()
    m=int(input())
    change=[]
    for j in range(len(string)):
        ind = alfabeto.index(string[j])
        if((ind-m)<0):
            change.append(alfabeto[25+(ind-m+1)])
        else:
            change.append(alfabeto[ind-m])
    for i in range(len(change)):
        print(change[i],end='')
    print()
    
