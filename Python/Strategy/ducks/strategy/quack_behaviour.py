################################################################################
# Quack behavior interface and behavior implementation classes.
################################################################################
class QuackBehaviour(object):
    def __init__(self):
        pass

    def quack(self):
    	 # explicitly set it up so this can't be called directly
        raise NotImplementedError('Exception raised, QuackBehaviour is supposed to be an interface / abstract class!')


class Quack(QuackBehaviour):
    def quack(self):
        print "Quack"


class MuteQuack(QuackBehaviour):
    def quack(self):
        print "<< Silence >>"


class Squeak(QuackBehaviour):
    def quack(self):
        print "Squeak"

