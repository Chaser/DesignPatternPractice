



class MallardDuck(object):

	def __init__(self):
		self.quack_behaviour = Quack()
		self.fly_behaviour = FlyWithWings()

	def display(self):
		print "I'm a real Mallard Duck"