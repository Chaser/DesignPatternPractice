src 	  	  	  	 
 +-- main 	  	  	 
     +-- java 	  	Main Java source directory. Under version control.
     +-- resources   	General resources. Under version control.
         +-- database 		Embedded databases such as Cloudscape.
         +-- scripts 		Shell or batch files.
         +-- images 		Optional: images and icons.
         +-- sounds 		Optional
         +-- xml 		XML and XSLT files.
     +-- config 	Configuration files. Under version control
     +-- help 	  	JavaHelp files. Under version control.
  	  	  	  	 
  	  	  	  	 
     +-- site 	  	Maven settings for the documentation site. Under version control.
  	  	  	 	 
     +-- test 	  	Test source files. Under version control
         +-- java 	  	 
         +-- resources 	Any resources needed by the tests.
  	  	  	  	   	  	  	  	 
docs 	  	  	General document repository. Under version control.	  	 
     +-- library		Any general documents, articles of interest or relevance 	  	  	 
     +-- project       		A project plan
     +-- design	       		Design documents  
     +-- apis			Javadocs
  	  	  	  	 
libs 	  	  	Third party JARs. Under version control for now, but these could be externalised at some point.
  	  	  	  	 
installer 	  	BuildDesk or InstallAnywhere project files. Under version control.
  	  	  	  	 
target 	  	  	The target directory is used to house all output of the build.  	  	  	  	 
  	  	  	  	 
distrib 	  	Created and deleted by the build file. Not under version control.
     +-- libs 	  	  	 
     +-- docs 	  	  	 

build 	  	  	Build output. Created and deleted by the build file. Not under version control.
     +-- libs 	  	  	 
     +-- classes 	  	  	 
     +-- test


bin: The output executables go here, both for the app and for any tests and spikes.

build: This folder contains all object files, and is removed on a clean.

doc: Any notes, like my assembly notes and configuration files, are here. I decided to create the development and production config files in here instead of in a separate config folder as they “document” the configuration.

include: All project header files. All necessary third-party header files that do not exist under /usr/local/include are also placed here.

lib: Any libs that get compiled by the project, third party or any needed in development. Prior to deployment, third party libraries get moved to /usr/local/lib where they belong, leaving the project clean enough to compile on our Linux deployment servers. I really use this to test different library versions than the standard.

spike: I often write smaller classes or files to test technologies or ideas, and keep them around for future reference. They go here, where they do not dilute the real application’s files, but can still be found later.

src: The application and only the application’s source files.

test: All test code files. You do write tests, no?

