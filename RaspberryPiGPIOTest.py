from datetime import datetime
import RPi.GPIO as GPIO

GPIO.setmode(GPIO.BCM)
GPIO.setup(18, GPIO.IN)

for i in range(0,100):
	input_value = GPIO.input(18)
	print(input_value, datetime.now().strftime("%S.%f"))