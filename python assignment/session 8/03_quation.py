# Reverse Message

def reverse_message(message):
    reverse = ""

    for ch in message:
        reverse = ch + reverse

    return reverse

print(reverse_message("WhatsApp"))
