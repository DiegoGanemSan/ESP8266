//Diego Ganem Sandoval
AT+RST 
AT+IPR = 9600: 
AT+CWMODE=1 
AT+CWMODE? 
AT+CWLAP 
AT+CWJAP="nombre_wifi","contraseña" 
AT+CWJAP? 
AT+CIPMODE=0 
AT+CIPMUX=1 
AT+CIPSTART=0,"TCP","api.thingspeak.com",80 
AT+CIPSEND=0,220 
GET /apps/thingtweet/1/statuses/update?api_key=yourAPI&status=mensaje  
