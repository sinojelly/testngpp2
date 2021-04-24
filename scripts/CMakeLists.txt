
INSTALL(DIRECTORY . DESTINATION generator
        FILES_MATCHING PATTERN "*.py"
        PATTERN "pycompile.py" EXCLUDE
        PATTERN "__pycache__" EXCLUDE
        PATTERN "CMakeFiles" EXCLUDE
        PATTERN ".svn" EXCLUDE
        PATTERN ".pyc" EXCLUDE)