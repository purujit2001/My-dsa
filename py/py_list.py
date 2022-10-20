# printing list
# list1=['physics','chem',1997,3000]
# list2=[1,2,3,5,6,7,8]
# print("list1[0]:", list1[0])
# print("list2[1:5]:", list2[1:5])


# thislist=["apple","banana","cherry"]
# thislist[0:3]=["bluenerry","watermelon"]
# print(thislist)

# adding list
# thislist = ["apple", "banana", "cherry"]
# thislist.append("orange")
# print(thislist)

# insert at index
# thislist = ["apple", "banana", "cherry"]
# thislist.insert(1, "orange")
# print(thislist)

# extend list
# thislist = ["apple", "banana", "cherry"]
# tropical = ["mango", "pineapple", "papaya"]
# thislist.extend(tropical)
# print(thislist)


# Add elements of a tuple to a list:

# thislist = ["apple", "banana", "cherry"]
# thistuple = ("kiwi", "orange")
# thislist.extend(thistuple)
# print(thislist)


# Remove "banana":

# thislist = ["apple", "banana", "cherry"]
# thislist.remove("banana")
# print(thislist)


# Remove the second item:

# thislist = ["apple", "banana", "cherry"]
# thislist.pop(1)
# print(thislist)

# delete

# thislist = ["apple", "banana", "cherry"]
# del thislist[2]
# print(thislist)


# Delete the entire list:

# thislist = ["apple", "banana", "cherry"]
# del thislist

# Clear the list content:

# thislist = ["apple", "banana", "cherry"]
# thislist.clear()
# print(thislist)


# Print all items in the list, one by one:

# thislist = ["apple", "banana", "cherry"]
# for x in thislist:
#   print(x) 



# thislist = ["apple", "banana", "cherry"]
# for i in range(len(thislist)):
#   print(thislist[i])


# Sort List Alphanumerically

# thislist = ["orange", "mango", "kiwi", "pineapple", "banana"]
# thislist.sort()
# print(thislist)


# Make a copy of a list with the copy() method:

# thislist = ["apple", "banana", "cherry"]
# mylist = thislist.copy()
# print(mylist)



# Based on a list of fruits, you want a new list, containing only the fruits with the letter "a" in the name.

# fruits = ["apple", "banana", "cherry", "kiwi", "mango"]
# newlist = []

# for x in fruits:
#   if "a" in x:
#     newlist.append(x)

# print(newlist)

# or
# fruits = ["apple", "banana", "cherry", "kiwi", "mango"]

# newlist = [x for x in fruits if "a" in x]

# print(newlist)



