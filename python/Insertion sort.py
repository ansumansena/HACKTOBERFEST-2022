def insr_sort(lst):
    for i in range(len(lst)):
        temp=lst[i]
        j=i-1
        while j>=0 and temp<lst[j]:
            lst[j+1]=lst[j]
            j-=1

        lst[j+1]=temp


def main():
    n=int(input("how many terms you want to enter inside the list, please enter :"))
    lst=[]
    for i in range(n):
      lst.append(int(input()))

    print("\nUnsorted list:",lst)
    insr_sort(lst)
    print("\nList after sorting;",lst)

if _name=='main_':
    main()