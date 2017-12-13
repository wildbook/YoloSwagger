from swag2yolo import *
import http.client
import base64
import json
import time
import ssl
import os
import re

print("Getting commandline arguments from LeagueClientUx...")
cmdline = os.popen("WMIC PROCESS WHERE name='LeagueClientUx.exe' GET commandline").read()

print("Extracting port and password...")
port = re.search("--app-port=(\d+)", cmdline).group(1)
password = re.search('--remoting-auth-token=([^"]+)', cmdline).group(1)

print("Connecting to LeagueClient...")
context = ssl._create_unverified_context()
connection = http.client.HTTPSConnection('localhost', port, context=context)
headers = { 'Authorization' : 'Basic %s' % base64.b64encode("riot:{0}".format(password).encode()).decode("ascii")}

print("Requesting /v2/swagger.json...")
connection.request('GET', '/v2/swagger.json', headers=headers)
response = connection.getresponse()
swagger = json.loads(response.read().decode('utf-8'))

print("Requesting /Help?format=Full...")
connection.request('GET', '/Help?format=Full', headers=headers)
response = connection.getresponse()
help = json.loads(response.read().decode('utf-8'))

print("Generating yolo.json...")
json_save(yolo(help, swagger), "yolo.json")

print("Done!")
time.sleep(1)