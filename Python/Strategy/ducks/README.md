
1. Make a copy of your skeleton directory. Name it after your new project.
2. Rename (move) the NAME module to be the name of your project or whatever you want to call your root module.
3. Edit your setup.py to have all the information for your project.
4. Rename tests/NAME_tests.py to also have your module name.
5. Double check it’s all working using nosetests again.
6. Start coding.


Project Structure
/bin - Directory for scripts and excutabilies 
/docs - Directory containing project documentation
/lib -  Directory for your C-language libraries and DLLs
/project_name - Directory named with the project's name which stores the actual Python Package
/test - Directory with containt test code and resources
/workspaces - Directory for project and workspaces for different IDEs

