#from fly_behaviour import *
#from quack_behaviour import *


class Duck(object):
	def __init__(self):
		self.fly_behaviour = None
		self.quack_behaviour = None

	def perform_fly(self):
		#*** CHANGE TO EXCEPTION HANDLING
		if self.fly_behaviour == None:
			print "No flying behaviour defined!"
		else:
			self.fly_behaviour.fly()

	def set_fly_behaviour(self, fly_behaviour):
		self.fly_behaviour = fly_behaviour


	def perform_quack(self):
		#*** CHANGE TO EXCEPTION HANDLING
		if self.quack_behaviour == None:
			print "No quacking behaviour defined!"
		else:
			self.quack_behaviour.quack()

	def set_quack_behaviour(self, quack_behaviour):
		self.quack_behaviour = quack_behaviour

	def swim():
		print "All ducks float,even decoys!!"
