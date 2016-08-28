



class RubberDuck(object):

	def __init__(self):
		self.quack_behaviour = Squeak()
		self.fly_behaviour = FlyNoWay()

	def display(self):
		print "I'm a rubber duck"
