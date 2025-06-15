import re

def generate_tag(caption: str) -> str:
    # Step 1: Split the caption into words
    words = caption.strip().split()

    # Step 2: Format into camelCase
    if not words:
        return "#"
    
    camel_case = words[0].lower()
    for word in words[1:]:
        if word:
            camel_case += word[0].upper() + word[1:].lower()

    # Step 3: Remove non-letter characters (except the first '#')
    cleaned = re.sub(r'[^a-zA-Z]', '', camel_case)

    # Step 4: Prefix with '#' and truncate to 100 characters
    result = '#' + cleaned
    return result[:100]
