from nose.tools import *
from project_name.project_name import ProjectName

def setup():
	print "SETUP!"

def teardown():
	print "TEAR DOWN!"

def test_basic():
	print "I RAN!"
	assert_equal('Test failed','Because not equal')
	
