VOWEL=('a,e,i,o,u')
CONSONANT=('b,c,d,f,g,h,j,k,l,m,n,p,q,r,s,t,v,w,x,y,z')
char=input()
if char in VOWEL:
	print("Vowel")
elif char in CONSONANT:
	print("Consonanant")
else:
	print("invalid")
