import re
import json
import time

input = open("fiddler.txt", "rt", errors = 'ignore').read()
output = open("events.json", "wt")

# remove websocket send before first data
input = re.sub(r'[^\[]*\[', '[', input, 1)

# remove data between websocket packets
regex = re.compile(r"\n\]\n[^[]*\[{1,}", re.MULTILINE|re.DOTALL)
output_string = re.sub(regex, "\n],\n[", input)

# remove trailing comma
output_string = '[' + output_string.rsplit(']', 1)[0] + ']]'

output.write(output_string)

print("Safety check for invalid JSON, if it crashes something didn't work as it should")
valid = json.loads(output_string)

print("Done!")
time.sleep(1)