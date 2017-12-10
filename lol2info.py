from swag2info import *
import http.client
import base64
import json
import ssl
import os
import re

cmdline = os.popen("WMIC PROCESS WHERE name='LeagueClientUx.exe' GET commandline").read()

port = re.search("--app-port=(\d+)", cmdline).group(1)
password = re.search('--remoting-auth-token=([^"]+)', cmdline).group(1)

context = ssl._create_unverified_context()
connection = http.client.HTTPSConnection('localhost', port, context=context)
headers = { 'Authorization' : 'Basic %s' % base64.b64encode("riot:{0}".format(password).encode()).decode("ascii")}

connection.request('GET', '/v2/swagger.json', headers=headers)
swagger = json.load(connection.getresponse())

connection.request('GET', '/Help?format=Full', headers=headers)
help = json.load(connection.getresponse())

json_save(info_init(help, swagger), "info.json")