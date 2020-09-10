
Added a procedure to extArgs.obn called GetAppName that
will return the value of sysv[0] passed into C's main.
This allows you to check what the process filename is
and in turn use that to see if you are running as a module
or as the main compiled process. - RSD, 2020-09-09

Improved .gitignore to avoid including file generated
by the compile and test processes. - RSD, 2020-09-10
