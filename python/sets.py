# Python’s built-in set type has the following characteristics:
# Sets are unordered, that means it will return diiferent 
# output every time we run it.
# Set elements are unique. Duplicate elements are not allowed.
# A set itself may be modified, but the elements contained 
# in the set must be of an immutable type.


this_set = {"apple", "orange", "mango", "apple"}
print(this_set)
# Output- {'mango', 'apple', 'orange'}

print(len(this_set))
# Output- 3

# Adding a element in set-
this_set.add("guava")
print(this_set)
# Output- {'guava', 'apple', 'orange', 'mango'}

# Inserting items from one set to other-
my_set={"one", "two", "three","four"}
my_set.update(this_set)
print(my_set)
# Output- {'one', 'two', 'guava', 'three', 'mango', 'four', 'orange', 'apple'}

# Join two sets-
x = {"apple", "banana", "mango", "cherry"}
y = {"google", "microsoft", "apple"}
x.intersection_update(y, this_set)
# It updates the current set with intersection of itself with
# the other sets.
print(x)
# Output- set() 
# An empty set will be printed because of no common elements among the sets.

x = {"apple", "banana", "cherry"}
x.symmetric_difference_update(y)
# It updates the current set with the uncommon items among all the sets.
print(x)
# Output- {'microsoft', 'google', 'banana', 'cherry'}
# This method prints only the uncommon elements ammong the sets and removes the common elements.

# If we want a new set with the intersection, union, symmetric difference 
# of the sets rather than updating a single set, then we use -
x = {"apple", "banana", "cherry"}
y = {"google", "microsoft", "apple"}

z = x.union(y)                    # to take union of sets.
print(z)
# Output- {'cherry', 'microsoft', 'google', 'apple', 'banana'}

z = x.intersection(y)             # to take intersection of sets.
print(z)
# Output- {'apple'}

z = x.symmetric_difference(y)     # to take uncommon items of the sets.
print(z)
# Output- {'google', 'cherry', 'microsoft', 'banana'}

z = x.isdisjoint(y)               # Returns whether set 'x' has an intersection with set 'y' or not.
print(z)                          # Returns True if there are no common elements else returns False.
# Output- False

z = x.issubset(y)                 # Returns whether another set contains this set or not.
print(z)                          # Returns True if one set is subset of other else returns False.
# Output- False

z = x.issuperset(y)               # Returns whether this set contains another set or not.
print(z)                          # Returns True if one set is superset of other else returns False.
# Output- False

# Removing an item from a set-
this_set.discard("apple")
print(this_set)
# Output- {'guava', 'orange', 'mango'}

x = my_set.pop()
# .pop() removes the last element from the set which we don't
# know what it was.
print(x)
# Output- Anything randomly from the set "my_set".
print(my_set)
# Output- All the elements of my_set except 'x'

# If the item to remove does not exist then .remove() will
# raise an error whereas .discard() will not raise an error.
# this_set = {"guava", "orange", "mango"}
this_set.remove("apple")
# Output- KeyError: 'apple'
