n=raw_input()
k=len(n)
p=0
for i in range(0,k):
    if(n[i]=='1' or n[i]=='0'):
         p=p+1
if(k==p):
   print "yes"
else:
   print "no"
