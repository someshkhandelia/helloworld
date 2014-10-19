"""create a form.txt in the same directory and this will act like a ToDo function"""
fp=open('form.txt','a+')
while(1):
    k=raw_input("what do you wish to do?\n1:enter something you want to do?\n2:see your to do list\n3:exit\nEnter choice: ")
    if(k=="1"):
        while(1):
            fp.write("To Do: "+"\n"+raw_input("what do you need to do? ")+"\n")
            fp.write("Deadline: "+raw_input("enter deadline: ")+"\n")
            x=raw_input("do you wish to continue?y or n : ")
            if(x=="n"):
                break
    if(k=="2"):
        fp.seek(0)
        print (fp.read())
    else:
        exit(0)
    
    
