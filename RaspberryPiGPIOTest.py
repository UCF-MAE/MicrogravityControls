from datetime import datetime
import RPi.GPIO as GPIO

GPIO.setup(18, GPIO.OUT)

for i in range(0,100):
	GPIO.output(18, state)
	print(state, datetime.now().strftime("%S.%f"))