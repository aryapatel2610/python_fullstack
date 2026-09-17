
messages = ['Hi', 'Spam', 'Hello', 'Spam', 'How are you?']

for msg in messages:

    if msg == 'Spam':
        continue

    if msg == 'How are you?':
        break

    print(msg)
