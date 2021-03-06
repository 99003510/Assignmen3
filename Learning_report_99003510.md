![](media/image1.jpeg){width="8.500694444444445in"
height="10.728472222222223in"}

Linux OS & Programming

> **Document History**

  ------------------------------------------------------------------------------------------------------------------------------------------
  > **Ver. Rel.**   > **Release Date**   > **Prepared. By**   > **Reviewed By**   > **To be Approved By**   > **Remarks/Revision Details**
  >                                                                                                         
  > **No.**                                                                                                 
  ----------------- -------------------- -------------------- ------------------- ------------------------- --------------------------------
  1                 > 1-03-21            > Rajath P D         > Bharath                                     

                                                                                                            

                                                                                                            

                                                                                                            

                                                                                                            
  ------------------------------------------------------------------------------------------------------------------------------------------

<span id="_Toc65876679" class="anchor"><span id="_bookmark0" class="anchor"></span></span>
==========================================================================================

Assignment-1
============

<span id="_bookmark1" class="anchor"><span id="_Toc65877219" class="anchor"></span></span>Case study – Design & Link with Libraries
===================================================================================================================================

> Step 0 - Preparation
>
> Step-1A - Simple Make file
>
> Step-1B- Simple Make file with Inc and Src Folders Step 2- Static
> Libraries
>
> Step 3- Dynamic Libraries

<span id="_bookmark2" class="anchor"></span>

<span id="_bookmark3" class="anchor"></span>Learning :

-   Creating .out and object files(.o files)

> &gt;&gt; gcc dep1.c dep2.c dep3.c

-   Executing the output considering a.out is the executable file

> &gt;&gt; ./a.out

-   Creating libraries

> **&gt;&gt;** ar rc libsimple.a dep1.o dep2.o
>
> **&gt;&gt;** gcc -L. dep1.o s1.out -lsimple
>
> **&gt;&gt;** gcc -L. dep1.o -o s1.out -lsimple
>
> &gt;&gt; gcc -L. dep1.o -o s2.out -lsimple -static

-   Dynamic Library Linking:

> &gt;&gt;gcc -L. dep1.o -o d1.out -lsample

-   Makefile:

> &gt;&gt; Target : Dependencies
>
> &lt;Tab&gt;gcc dependencies
>
> Run : Target
>
> &lt;Tab&gt; ./a.out

Challenges :

-   Making makefile.

-   Implementation of concepts to code.

Link**:**<https://github.com/99003510/Assignment1.git>

<span id="_bookmark4" class="anchor"><span id="_Toc65877220" class="anchor"></span></span>Assignment2
=====================================================================================================

Description: programs on System call, process and Threads

Learning Outcome:

-   learned about theTerminology in the process , Process Hierarchy
    and waitpid.

-   Started with the Threads and unity.

Challenges:

-   Implementation of concepts to code.

Link:
[https://lnttsgroup.sharepoint.com/sites/GEA/Global%20Engineering%20Academy/GENESIS%20%20Jan%202020%20Submission/Forms/AllItems.aspx?ct=1614828544473&or=OWA%2DNT&cid=30165eef%2D0368%2D0848%2Dc521%2De8bafc1c90bc&originalPath=aHR0cHM6Ly9sbnR0c2dyb3VwLnNoYXJlcG9pbnQuY29tLzpmOi9zL0dFQS9HbG9iYWwlMjBFbmdpbmVlcmluZyUyMEFjYWRlbXkvRWd5WVo0ak0xdkpGaGZmbjRMQnYxQUlCN2pZX2gzdGljeEdmQzlNdVhhVU41UT9ydGltZT1NcXZucXIzZTJFZw&viewid=c6456521%2D0829%2D4568%2Db8d1%2D27a784675a0f&id=%2Fsites%2FGEA%2FGlobal%20Engineering%20Academy%2FGENESIS%20%20Jan%202020%20Submission%2FSubmission%2FMYSORE%2F2002MYSEMB%5FF1%2F99003510%2FSpecialization%2Fassingment2](https://lnttsgroup.sharepoint.com/sites/GEA/Global%20Engineering%20Academy/GENESIS%20%20Jan%202020%20Submission/Forms/AllItems.aspx?ct=1614828544473&or=OWA-NT&cid=30165eef-0368-0848-c521-e8bafc1c90bc&originalPath=aHR0cHM6Ly9sbnR0c2dyb3VwLnNoYXJlcG9pbnQuY29tLzpmOi9zL0dFQS9HbG9iYWwlMjBFbmdpbmVlcmluZyUyMEFjYWRlbXkvRWd5WVo0ak0xdkpGaGZmbjRMQnYxQUlCN2pZX2gzdGljeEdmQzlNdVhhVU41UT9ydGltZT1NcXZucXIzZTJFZw&viewid=c6456521-0829-4568-b8d1-27a784675a0f&id=%2Fsites%2FGEA%2FGlobal%20Engineering%20Academy%2FGENESIS%20%20Jan%202020%20Submission%2FSubmission%2FMYSORE%2F2002MYSEMB_F1%2F99003510%2FSpecialization%2Fassingment2)

Assignment 3:
=============

> Description: Concepts on Scheduling, Race conditioning, IPC,
> Semaphore, Pipe and Message queue.
>
> Learning Outcome:

-   Learned to tackle Racing condition by semaphore and mutex concepts.

-   Deadlocks and message queues

Challenges:

-   Implementation of concepts to code

Link:
<https://lnttsgroup.sharepoint.com/sites/GEA/Global%20Engineering%20Academy/GENESIS%20%20Jan%202020%20Submission/Forms/AllItems.aspx?ct=1614962531776&or=OWA%2DNT&cid=533a5746%2D81c3%2Dddfe%2D3a7e%2Df535f3b65cef&originalPath=aHR0cHM6Ly9sbnR0c2dyb3VwLnNoYXJlcG9pbnQuY29tLzpmOi9zL0dFQS9HbG9iYWwlMjBFbmdpbmVlcmluZyUyMEFjYWRlbXkvRWd5WVo0ak0xdkpGaGZmbjRMQnYxQUlCN2pZX2gzdGljeEdmQzlNdVhhVU41UT9ydGltZT1GWl9Vb2ZYZjJFZw&viewid=c6456521%2D0829%2D4568%2Db8d1%2D27a784675a0f&id=%2Fsites%2FGEA%2FGlobal%20Engineering%20Academy%2FGENESIS%20%20Jan%202020%20Submission%2FSubmission%2FMYSORE%2F2002MYSEMB%5FF1%2F99003510%2FSpecialization>
