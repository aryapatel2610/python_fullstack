# Display Friends Function

def display_friends(friends):
    for username, followers in friends.items():
        print(username, ":", followers, "followers")

friends = {
    "aryan": "2.3K",
    "rahul": "5K",
    "Aman": "1.8K"
}

display_friends(friends)
