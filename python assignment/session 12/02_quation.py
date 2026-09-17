# Format Follower Count

def format_follower_count(count):

    if count >= 1000000:
        return str(count / 1000000) + "M"

    elif count >= 1000:
        return str(count / 1000) + "K"

    else:
        return str(count)

print(format_follower_count(1500))
print(format_follower_count(1200000))
