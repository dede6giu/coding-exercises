# -*- coding: utf-8 -*-

# this exceeds the available runtime with higher inputs, but it only uses recursion

k = int(input())
fbToK = []

# (recursive) gets all fb numbers up to N-th position, returns a list of them
def fblist(N, fbnumbers=[], i=0, f1=1, f2=1):
	if i >= N - 1:
		fbnumbers.append(f1)
		return fbnumbers
	else:
		fbnumbers.append(f1)
		f1, f2 = f2, f1 + f2
		i += 1
		return fblist(N, fbnumbers, i, f1, f2)

# (recursive) pops numbers from the fblist while also removing those from the not-fblist, returns the not-fblist 
def Nfblist(FBlist, Nlist):
	if len(FBlist) == 0:
		return Nlist
	elif FBlist[0] in Nlist:
		Nlist.pop(Nlist.index(FBlist[0]))
		FBlist.pop(0)
		return Nfblist(FBlist, Nlist)
	else:
		FBlist.pop(0)
		return Nfblist(FBlist, Nlist)
		

fbToK = fblist(k + 5) 
Nfb = list(range(1, fbToK[-1])) # makes a list of all the ints up to the k-th fb number
fbToK.pop() # removes last fb number (wont be used)

Nfb = Nfblist(fbToK, Nfb)
print(Nfb[k - 1])
