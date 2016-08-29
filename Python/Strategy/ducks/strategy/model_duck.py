



class ModelDuck(object):

	def __init__(self):
		self.quack_behaviour = Squeak()
		self.fly_behaviour = FlyWithWings()

	def display(self):
		print "I'm a model Duck"