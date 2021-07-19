while True:
    try:
        h,m = input().split(':')
        h=int(h)
        m=int(m)
        h=h+1
        if(h<8):
            print("Atraso maximo:",0)
        elif(h==8):
            if(m==0):
                print("Atraso maximo:",0)
            elif(m>0):
                print("Atraso maximo:",m)
        elif(h>8):
            print("Atraso maximo:",(((h-8)*60))+m)
    except EOFError:
        break
