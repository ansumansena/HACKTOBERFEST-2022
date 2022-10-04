#Lists - Have brackets []
movies = ["When Harry Met Sally", "The Hangover", "The Perks of Being a Wallflower", "The Exorcist"]

print(movies[1]) #returns the second item in the list
print(movies[0]) #returns the first item in the list
print(movies[1:3]) #returns the first number given until right before last number given
print(movies[1:4]) #returns all
print(movies[1:]) #returns everything from number to end of list
print(movies[:1]) #everything before 1
print(movies[:2])
print(movies[-1]) #grabs last item

print(len(movies)) #counts items in list
movies.append("JAWS")
print(movies) #appends to end of list

movies.pop() #removes last item
print(movies)

movies.pop(0) #removes first item
print(movies)