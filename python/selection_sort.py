def selt_sort(lst):
    for i in range(len(lst)):
        minpos=i
        for j in range(i+1,len(lst)):
            if lst[j] < lst[minpos]:
                minpos=j

        if minpos!=i:
            lst[i] , lst[minpos] = lst[minpos] , lst[i]

        print("pass",i+1,lst)   

def main():
    n=int(input("how many terms you want to enter inside the list, please enter :"))
    lst=[]
    for i in range(n):
      lst.append(int(input()))

    print("\nUnsorted list:",lst)
    selt_sort(lst)
    print("\nList after sorting;",lst)

if __name__=='__main__':
    main()