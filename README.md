# pset3
<div id="content">
            <div id="preamble">
<div class="sectionbody">
<div class="paragraph">
<p><em>with thanks to Eric Roberts of Stanford</em></p>
</div>
</div>
</div>
<div class="sect1">
<h2 id="objectives"><a class="link" href="#objectives">Objectives</a></h2>
<div class="sectionbody">
<div class="ulist">
<ul>
<li>
<p>Accustom you to reading someone else’s code.</p>
</li>
<li>
<p>Introduce you to an API.</p>
</li>
<li>
<p>Acquaint you with event handling.</p>
</li>
<li>
<p>Impress your friends.</p>
</li>
</ul>
</div>
</div>
</div>
<div class="sect1">
<h2 id="recommended_reading"><a class="link" href="#recommended_reading">Recommended Reading</a></h2>
<div class="sectionbody">
<div class="ulist">
<ul>
<li>
<p>Page 17 of <a href="http://www.howstuffworks.com/c.htm">http://www.howstuffworks.com/c.htm</a>.</p>
</li>
<li>
<p>Chapters 20 and 23 of <em>Absolute Beginner’s Guide to C</em>.</p>
</li>
<li>
<p>Chapters 13, 15, and 18 of <em>Programming in C</em>.</p>
</li>
</ul>
</div>
</div>
</div>
<div class="sect1">
<h2 id="academic_honesty"><a class="link" href="#academic_honesty">Academic Honesty</a></h2>
<div class="sectionbody">
<div class="paragraph">
<p>This course’s philosophy on academic honesty is best stated as "be reasonable." The course recognizes that interactions with classmates and others can facilitate mastery of the course’s material. However, there remains a line between enlisting the help of another and submitting the work of another. This policy characterizes both sides of that line.</p>
</div>
<div class="paragraph">
<p>The essence of all work that you submit to this course must be your own. Collaboration on problem sets is not permitted except to the extent that you may ask classmates and others for help so long as that help does not reduce to another doing your work for you. Generally speaking, when asking for help, you may show your code to others, but you may not view theirs, so long as you and they respect this policy’s other constraints. Collaboration on the course’s final project is permitted to the extent prescribed by its specification.</p>
</div>
<div class="paragraph">
<p>Below are rules of thumb that (inexhaustively) characterize acts that the course considers reasonable and not reasonable. If in doubt as to whether some act is reasonable, do not commit it until you solicit and receive approval in writing from the course’s heads. Acts considered not reasonable by the course are handled harshly.</p>
</div>
<div class="sect2">
<h3 id="reasonable"><a class="link" href="#reasonable">Reasonable</a></h3>
<div class="ulist">
<ul>
<li>
<p>Communicating with classmates about problem sets' problems in English (or some other spoken language).</p>
</li>
<li>
<p>Discussing the course’s material with others in order to understand it better.</p>
</li>
<li>
<p>Helping a classmate identify a bug in his or her code at Office Hours, elsewhere, or even online, as by viewing, compiling, or running his or her code, even on your own computer.</p>
</li>
<li>
<p>Incorporating snippets of code that you find online or elsewhere into your own code, provided that those snippets are not themselves solutions to assigned problems and that you cite the snippets' origins.</p>
</li>
<li>
<p>Reviewing past semesters' quizzes and solutions thereto.</p>
</li>
<li>
<p>Sending or showing code that you’ve written to someone, possibly a classmate, so that he or she might help you identify and fix a bug.</p>
</li>
<li>
<p>Sharing snippets of your own code online so that others might help you identify and fix a bug.</p>
</li>
<li>
<p>Turning to the web or elsewhere for instruction beyond the course’s own, for references, and for solutions to technical difficulties, but not for outright solutions to problem set’s problems or your own final project.</p>
</li>
<li>
<p>Whiteboarding solutions to problem sets with others using diagrams or pseudocode but not actual code.</p>
</li>
<li>
<p>Working with (and even paying) a tutor to help you with the course, provided the tutor does not do your work for you.</p>
</li>
</ul>
</div>
</div>
<div class="sect2">
<h3 id="not_reasonable"><a class="link" href="#not_reasonable">Not Reasonable</a></h3>
<div class="ulist">
<ul>
<li>
<p>Accessing a solution in CS50 Vault to some problem prior to (re-)submitting your own.</p>
</li>
<li>
<p>Asking a classmate to see his or her solution to a problem set’s problem before (re-)submitting your own.</p>
</li>
<li>
<p>Decompiling, deobfuscating, or disassembling the staff’s solutions to problem sets.</p>
</li>
<li>
<p>Failing to cite (as with comments) the origins of code or techniques that you discover outside of the course’s own lessons and integrate into your own work, even while respecting this policy’s other constraints.</p>
</li>
<li>
<p>Giving or showing to a classmate a solution to a problem set’s problem when it is he or she, and not you, who is struggling to solve it.</p>
</li>
<li>
<p>Looking at another individual’s work during a quiz.</p>
</li>
<li>
<p>Paying or offering to pay an individual for work that you may submit as (part of) your own.</p>
</li>
<li>
<p>Providing or making available solutions to problem sets to individuals who might take this course in the future.</p>
</li>
<li>
<p>Searching for, soliciting, or viewing a quiz’s questions or answers prior to taking the quiz.</p>
</li>
<li>
<p>Searching for or soliciting outright solutions to problem sets online or elsewhere.</p>
</li>
<li>
<p>Splitting a problem set’s workload with another individual and combining your work.</p>
</li>
<li>
<p>Submitting (after possibly modifying) the work of another individual beyond allowed snippets.</p>
</li>
<li>
<p>Submitting the same or similar work to this course that you have submitted or will submit to another.</p>
</li>
<li>
<p>Submitting work to this course that you intend to use outside of the course (e.g., for a job) without prior approval from the course’s heads.</p>
</li>
<li>
<p>Using resources during a quiz beyond those explicitly allowed in the quiz’s instructions.</p>
</li>
<li>
<p>Viewing another’s solution to a problem set’s problem and basing your own solution on it.</p>
</li>
</ul>
</div>
</div>
</div>
</div>
<div class="sect1">
<h2 id="getting_ready"><a class="link" href="#getting_ready">Getting Ready</a></h2>
<div class="sectionbody">
<div class="paragraph">
<p>First, re-acquaint yourself with with our old friends, linear search and binary search (and Patrick), if hazy:</p>
</div>
<div class="videoblock">
<div class="content">
<iframe width="960" height="540" src="//www.youtube.com/embed/CX2CYIJLwfg?rel=0&amp;playlist=D5SrAga1pno" frameborder="0" allowfullscreen=""></iframe>
</div>
</div>
<div class="paragraph">
<p>Next, get to know our new friends, bubble sort, selection sort, insertion sort, and merge sort (and Jackson, Tommy, and Rob):</p>
</div>
<div class="videoblock">
<div class="content">
<iframe width="960" height="540" src="//www.youtube.com/embed/8Kp-8OGwphY?rel=0&amp;playlist=f8hXR_Hvybo,DFG-XuyPYUQ,EeQ8pwjQxTM" frameborder="0" allowfullscreen=""></iframe>
</div>
</div>
<div class="paragraph">
<p>Phew, so many shorts. And so many sorts! Ha.</p>
</div>
<div class="paragraph">
<p>Finally, meet <code>gdb</code> (and Nate again):</p>
</div>
<div class="videoblock">
<div class="content">
<iframe width="960" height="540" src="//www.youtube.com/embed/USPvePv1uzE?rel=0" frameborder="0" allowfullscreen=""></iframe>
</div>
</div>
<div class="paragraph">
<p>Be sure you’re reasonably comfortable answering the below when it comes time to submit this problem set’s form!</p>
</div>
<div class="ulist">
<ul>
<li>
<p>Why does binary search require that an array be sorted?</p>
</li>
<li>
<p>Why is bubble sort in <em>O</em>(<em>n</em><sup>2</sup>)?</p>
</li>
<li>
<p>Why is insertion sort in Ω(<em>n</em>)?</p>
</li>
<li>
<p>In no more than 3 sentences, how does selection sort work?</p>
</li>
<li>
<p>What’s an upper bound on the (worst-case) running time of merge sort?</p>
</li>
<li>
<p><code>gdb</code> lets you "debug"  program, but, more specifically, what does it let you do?</p>
</li>
</ul>
</div>
</div>
</div>
<div class="sect1">
<h2 id="getting_started"><a class="link" href="#getting_started">Getting Started</a></h2>
<div class="sectionbody">
<div class="paragraph">
<p>Recall that, for Problem Sets 1 and 2, you started writing programs from scratch, creating your own <code>pset1</code> and <code>pset2</code> directories with <code>mkdir</code>.  For Problem Set 3, you’ll instead download "distribution code" (otherwise known as a "distro"), written by us, and add your own lines of code to it.  You’ll first need to read and understand our code, though, so this problem set is as much about learning to read someone else’s code as it is about writing your own!</p>
</div>
<div class="paragraph">
<p>Let’s get you started.  Go ahead and open a terminal window if not open already (whether by opening gedit via <strong>Menu &gt; Accessories &gt; gedit</strong> or by opening Terminal itself via <strong>Menu &gt; Accessories &gt; Terminal</strong>).  Then execute</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">update50</code></pre>
</div>
</div>
<div class="paragraph">
<p>to make sure your appliance is up-to-date. <strong>Then close the terminal window (or <code>gedit</code>) and re-open it.</strong> Then execute</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">cd ~/Dropbox</code></pre>
</div>
</div>
<div class="paragraph">
<p>followed by</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">wget http://cdn.cs50.net/2014/fall/psets/3/pset3/pset3.zip</code></pre>
</div>
</div>
<div class="paragraph">
<p>to download a ZIP of this problem set’s distro into your appliance (with a command-line program called <code>wget</code>). You should see a bunch of output followed by:</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">'pset3.zip' saved</code></pre>
</div>
</div>
<div class="paragraph">
<p>If you instead see</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">unable to resolve host address</code></pre>
</div>
</div>
<div class="paragraph">
<p>your appliance probably doesn’t have Internet access (even if your laptop does), in which case the simplest fix is probably to restart your appliance via <strong>Menu &gt; Log Off</strong>, after which you can try <code>wget</code> again.</p>
</div>
<div class="paragraph">
<p>Ultimately, confirm that you’ve indeed downloaded <code>pset3.zip</code> by executing:</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">ls</code></pre>
</div>
</div>
<div class="paragraph">
<p>Then, run</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">unzip pset3.zip</code></pre>
</div>
</div>
<div class="paragraph">
<p>to unzip the file.  If you then run <code>ls</code> again, you should see that you have a newly unzipped directory called <code>pset3</code> as well.  Proceed to execute</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">cd pset3</code></pre>
</div>
</div>
<div class="paragraph">
<p>followed by</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">ls</code></pre>
</div>
</div>
<div class="paragraph">
<p>and you should see that the directory contains two "subdirectories":</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">breakout  find</code></pre>
</div>
</div>
<div class="paragraph">
<p>How fun!</p>
</div>
</div>
</div>
<div class="sect1">
<h2 id="searching"><a class="link" href="#searching">Searching</a></h2>
<div class="sectionbody">
<div class="paragraph">
<p>Okay, let’s dive into one of those subdirectories.  Execute the command below in a terminal window.</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">cd ~/Dropbox/pset3/find</code></pre>
</div>
</div>
<div class="paragraph">
<p>If you list the contents of this directory (remember how?), you should see the below.</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">helpers.c  helpers.h  Makefile  find.c  generate.c</code></pre>
</div>
</div>
<div class="paragraph">
<p>Wow, that’s a lot of files, eh?  Not to worry, we’ll walk you through them.</p>
</div>
<div class="paragraph">
<p>Implemented in <code>generate.c</code> is a program that uses a "pseudorandom-number generator" (via a function called <code>drand48</code>) to generate a whole bunch of random (well, pseudorandom, since computers can’t actually generate truly random) numbers, one per line. Go ahead and compile this program by executing the command below.</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">make generate</code></pre>
</div>
</div>
<div class="paragraph">
<p>Now run the program you just compiled by executing the command below.</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">./generate</code></pre>
</div>
</div>
<div class="paragraph">
<p>You should be informed of the program’s proper usage, per the below.</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">Usage: generate n [s]</code></pre>
</div>
</div>
<div class="paragraph">
<p>As this output suggests, this program expects one or two command-line arguments.  The first, <code>n</code>, is required; it indicates how many pseudorandom numbers you’d like to generate.  The second, <code>s</code>, is optional, as the brackets are meant to imply; if supplied, it represents the value that the pseudorandom-number generator should use as its "seed."  A seed is simply an input to a pseudorandom-number generator that influences its outputs.  For instance, if you seed <code>drand48</code> by first calling <code>srand48</code> (another function whose purpose is to "seed" <code>drand48</code>) with an argument of, say, <code>1</code>, and then call <code>drand48</code> itself three times, <code>drand48</code> might return <code>2728</code>, then <code>29785</code>, then <code>54710</code>. But if you instead seed <code>drand48</code> by first calling <code>srand48</code> with an argument of, say, <code>2</code>, and then call <code>drand48</code> itself three times, <code>drand48</code> might instead return <code>59797</code>, then <code>10425</code>, then <code>37569</code>.  But if you re-seed <code>drand48</code> by calling <code>srand48</code> again with an argument of <code>1</code>, the next three times you call <code>drand48</code>, you’ll again get <code>2728</code>, then <code>29785</code>, then <code>54710</code>! See, not so random.</p>
</div>
<div class="paragraph">
<p>Go ahead and run this program again, this time with a value of, say, <code>10</code> for <code>n</code>, as in the below; you should see a list of 10 pseudorandom numbers.</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">./generate 10</code></pre>
</div>
</div>
<div class="paragraph">
<p>Run the program a third time using that same value for <code>n</code>; you should see a different list of 10 numbers.  Now try running the program with a value for <code>s</code> too (e.g., <code>0</code>), as in the below.</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">./generate 10 0</code></pre>
</div>
</div>
<div class="paragraph">
<p>Now run that same command again:</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">./generate 10 0</code></pre>
</div>
</div>
<div class="paragraph">
<p>Bet you saw the same "random" sequence of ten numbers again?  Yup, that’s what happens if you don’t vary a pseudorandom number generator’s initial seed.</p>
</div>
<div class="paragraph">
<p>Now take a look at <code>generate.c</code> itself with <code>gedit</code>.  (Remember how?)  Comments atop that file explain the program’s overall functionality.  But it looks like we forgot to comment the code itself.  Read over the code carefully until you understand each line and then comment our code for us, replacing each <code>TODO</code> with a phrase that describes the purpose or functionality of the corresponding line(s) of code.  (Know that an <code>unsigned int</code> is just an <code>int</code> that cannot be negative.)  And for more details on <code>rand</code> and <code>srand</code>, recall that you can execute:</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">man drand48</code></pre>
</div>
</div>
<div class="paragraph">
<p>and:</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">man srand48</code></pre>
</div>
</div>
<div class="paragraph">
<p>(Those functions aren’t in <a href="https://reference.cs50.net/">CS50 Reference</a>).</p>
</div>
<div class="paragraph">
<p>Once done commenting <code>generate.c</code>, re-compile the program to be sure you didn’t break anything by re-executing the command below.</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">make generate</code></pre>
</div>
</div>
<div class="paragraph">
<p>If <code>generate</code> no longer compiles properly, take a moment to fix what you broke!</p>
</div>
<div class="paragraph">
<p>Now, recall that <code>make</code> automates compilation of your code so that you don’t have to execute <code>clang</code> manually along with a whole bunch of switches.  Notice, in fact, how <code>make</code> just executed a pretty long command for you, per the tool’s output.  However, as your programs grow in size, <code>make</code> won’t be able to infer from context anymore how to compile your code; you’ll need to start telling <code>make</code> how to compile your program, particularly when they involve multiple source (i.e., <code>.c</code>) files.  And so we’ll start relying on "Makefiles," configuration files that tell <code>make</code> exactly what to do.</p>
</div>
<div class="paragraph">
<p>How did <code>make</code> know how to compile generate in this case?  It actually used a configuration file that we wrote.  Using <code>gedit</code>, go ahead and look at the file called <code>Makefile</code> that’s in the same directory as <code>generate.c</code>.  This <code>Makefile</code> is essentially a list of rules that we wrote for you that tells make how to build generate from <code>generate.c</code> for you.  The relevant lines appear below.</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">generate: generate.c
    clang -ggdb3 -O0 -std=c99 -Wall -Werror -o generate generate.c</code></pre>
</div>
</div>
<div class="paragraph">
<p>The first line tells <code>make</code> that the "target" called <code>generate</code> should be built by invoking the second line’s command.  Moreover, that first line tells <code>make</code> that <code>generate</code> is dependent on <code>generate.c</code>, the implication of which is that <code>make</code> will only re-build generate on subsequent runs if that file was modified since <code>make</code> last built <code>generate</code>.  Neat time-saving trick, eh?  In fact, go ahead and execute the command below again, assuming you haven’t modified <code>generate.c</code>.</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">make generate</code></pre>
</div>
</div>
<div class="paragraph">
<p>You should be informed that generate is already up-to-date.  Incidentally, know that the leading whitespace on that second line is not a sequence of spaces but, rather, a tab.  Unfortunately, <code>make</code> requires that commands be preceded by tabs, so be careful not to change them to spaces with <code>gedit</code> (which automatically converts tabs to four spaces), else you may encounter strange errors!  The <code>-Werror</code> flag, recall, tells <code>clang</code> to treat warnings (bad) as though they’re errors (worse) so that you’re forced (in a good, instructive way!) to fix them.</p>
</div>
<div class="paragraph">
<p>Now take a look at <code>find.c</code> with <code>gedit</code>.  Notice that this program expects a single command-line argument: a "needle" to search for in a "haystack" of values.  Once done looking over the code, go ahead and compile the program by executing the command below.</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">make find</code></pre>
</div>
</div>
<div class="paragraph">
<p>Notice, per that command’s output, that <code>make</code> actually executed the below for you.</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">clang -ggdb3 -O0 -std=c99 -Wall -Werror -o find find.c helpers.c -lcs50 -lm</code></pre>
</div>
</div>
<div class="paragraph">
<p>Notice further that you just compiled a program comprising not one but two <code>.c</code> files: <code>helpers.c</code> and <code>find.c</code>.  How did <code>make</code> know what to do?  Well, again, open up <code>Makefile</code> to see the man behind the curtain.  The relevant lines appear below.</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">find: find.c helpers.c helpers.h
    clang -ggdb3 -O0 -std=c99 -Wall -Werror -o find find.c helpers.c -lcs50 -lm</code></pre>
</div>
</div>
<div class="paragraph">
<p>Per the dependencies implied above (after the colon), any changes to <code>find.c</code>, <code>helpers.c</code>, or <code>helpers.h</code> will compel <code>make</code> to rebuild find the next time it’s invoked for this target.</p>
</div>
<div class="paragraph">
<p>Go ahead and run this program by executing, say, the below.</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">./find 13</code></pre>
</div>
</div>
<div class="paragraph">
<p>You’ll be prompted to provide some hay (i.e., some integers), one "straw" at a time.  As soon as you tire of providing integers, hit ctrl-d to send the program an <code>EOF</code> (end-of-file) character.  That character will compel <code>GetInt</code> from the CS50 Library to return <code>INT_MAX</code>, a constant that, per <code>find.c</code>, will compel <code>find</code> to stop prompting for hay.  The program will then look for that needle in the hay you provided, ultimately reporting whether the former was found in the latter.  In short, this program searches an array for some value.  At least, it should, but it won’t find anything yet! That’s where you come in.  More on your role in a bit.</p>
</div>
<div class="paragraph">
<p>In turns out you can automate this process of providing hay, though, by "piping" the output of <code>generate</code> into <code>find</code> as input.  For instance, the command below passes 1,000 pseudorandom numbers to <code>find</code>, which then searches those values for <code>42</code>.</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">./generate 1000 | ./find 42</code></pre>
</div>
</div>
<div class="paragraph">
<p>Note that, when piping output from <code>generate</code> into <code>find</code> in this manner, you won’t actually see <code>generate</code>'s numbers, but you will see <code>find</code>'s prompts.</p>
</div>
<div class="paragraph">
<p>Alternatively, you can "redirect" <code>generate</code>'s output to a file with a command like the below.</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">./generate 1000 &gt; numbers.txt</code></pre>
</div>
</div>
<div class="paragraph">
<p>You can then redirect that file’s contents as input to <code>find</code> with the command below.</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">./find 42 &lt; numbers.txt</code></pre>
</div>
</div>
<div class="paragraph">
<p>Let’s finish looking at that <code>Makefile</code>.  Notice the line below.</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">all: find generate</code></pre>
</div>
</div>
<div class="paragraph">
<p>This target implies that you can build both <code>generate</code> and <code>find</code> simply by executing the below.</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">make all</code></pre>
</div>
</div>
<div class="paragraph">
<p>Even better, the below is equivalent (because <code>make</code> builds a <code>Makefile</code>'s first target by default).</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">make</code></pre>
</div>
</div>
<div class="paragraph">
<p>If only you could whittle this whole problem set down to a single command!  Finally, notice these last lines in <code>Makefile</code>:</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">clean:
    rm -f *.o a.out core find generate</code></pre>
</div>
</div>
<div class="paragraph">
<p>This target allows you to delete all files ending in <code>.o</code> or called <code>core</code> (more on that soon!), <code>find</code>, or <code>generate</code> simply by executing the command below.</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">make clean</code></pre>
</div>
</div>
<div class="paragraph">
<p>Be careful not to add, say, <code>*.c</code> to that last line in <code>Makefile</code>!  (Why?)  Any line, incidentally, that begins with <code>#</code> is just a comment.</p>
</div>
<div class="sect2">
<h3 id="search"><a class="link" href="#search">search</a></h3>
<div class="paragraph">
<p>And now the fun begins!  Notice that <code>find.c</code> calls <code>search</code>, a function declared in <code>helpers.h</code>.  Unfortunately, we forgot to implement that function fully in <code>helpers.c</code>!  (To be sure, we could have put the contents of <code>helpers.h</code> and <code>helpers.c</code> in <code>find.c</code> itself.  But it’s sometimes better to organize programs into multiple files, especially when some functions are essentially utility functions that might later prove useful to other programs as well, much like those in the CS50 Library.)  Take a peek at <code>helpers.c</code> with <code>gedit</code>, and you’ll see that <code>search</code> always returns <code>false</code>, whether or not <code>value</code> is in <code>values</code>.  Re-write <code>search</code> in such a way that it uses linear search, returning <code>true</code> if <code>value</code> is in <code>values</code> and <code>false</code> if <code>value</code> is not in <code>values</code>.  Take care to return <code>false</code> right away if <code>n</code> isn’t even positive.</p>
</div>
<div class="paragraph">
<p>When ready to check the correctness of your program, try running the command below.</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">./generate 1000 50 | ./find 127</code></pre>
</div>
</div>
<div class="paragraph">
<p>Because one of the numbers outputted by <code>generate</code>, when seeded with <code>50</code>, is <code>127</code>, your code should find that "needle"!  By contrast, try running the command below as well.</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">./generate 1000 50 | ./find 128</code></pre>
</div>
</div>
<div class="paragraph">
<p>Because <code>128</code> is not among the numbers outputted by <code>generate</code>, when seeded with <code>50</code>, your code shouldn’t find that needle.  Best to try some other tests as well, as by running <code>generate</code> with some seed, taking a look at its output, then piping that same output to <code>find</code>, looking for a "needle" you know to be among the "hay".</p>
</div>
<div class="paragraph">
<p>Incidentally, note that <code>main</code> in <code>find.c</code> is written in such a way that <code>find</code> returns <code>0</code> if the needle is found, else it returns <code>1</code>.  You can check the so-called "exit code" with which <code>main</code> returns by executing</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">echo $?</code></pre>
</div>
</div>
<div class="paragraph">
<p>after running some other command.  For instance, assuming your implementation of <code>search</code> is correct, if you run</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">./generate 1000 50 | ./find 127
echo $?</code></pre>
</div>
</div>
<div class="paragraph">
<p>you should see <code>0</code>, since <code>127</code> is, again, among the 1,000 numbers outputted by <code>generate</code> when seeded with <code>50</code>, and so <code>search</code> (written by you) should return <code>true</code>, in which case <code>main</code> (written by us) should return (i.e., exit with) <code>0</code>.  By contrast, assuming your implementation of <code>search</code> is correct, if you run</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">./generate 1000 50 | ./find 128
echo $?</code></pre>
</div>
</div>
<div class="paragraph">
<p>you should see <code>1</code>, since <code>128</code> is, again, not among the 1,000 numbers outputted by <code>generate</code> when seeded with <code>50</code>, and so <code>search</code> (written by you) should return <code>false</code>, in which case <code>main</code> (written by us) should return (i.e., exit with) <code>1</code>.  Make sense?</p>
</div>
<div class="paragraph">
<p>When ready to check the correctness of your program officially with <code>check50</code>, you may execute the below.  Be sure to run the command inside of <code>~/Dropbox/pset3/find</code>.</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">check50 2014.fall.pset3.find helpers.c</code></pre>
</div>
</div>
<div class="paragraph">
<p>Incidentally, be sure not to get into the habit of testing your code with <code>check50</code> before testing it yourself.  (And definitely don’t get into an even worse habit of only testing your code with <code>check50</code>!)  Suffice it to say <code>check50</code> doesn’t exist in the real world, so running your code with your own sample inputs, comparing actual output against expected output, is the best habit to get into sooner rather than later.  Truly, don’t do yourself a long-term disservice!</p>
</div>
<div class="paragraph">
<p>Anyhow, if you’d like to play with the staff’s own implementation of <code>find</code> in the appliance, you may execute the below.</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">~cs50/pset3/find</code></pre>
</div>
</div>
</div>
</div>
</div>
<div class="sect1">
<h2 id="sorting"><a class="link" href="#sorting">Sorting</a></h2>
<div class="sectionbody">
<div class="paragraph">
<p>Alright, linear search is pretty meh.  Recall from Week 0 that we can do better, but first we’d best sort that hay.</p>
</div>
<div class="sect2">
<h3 id="sort"><a class="link" href="#sort">sort</a></h3>
<div class="paragraph">
<p>Notice that <code>find.c</code> calls <code>sort</code>, a function declared in <code>helpers.h</code>.  Unfortunately, we forgot to implement that function fully too in <code>helpers.c</code>!  Take a peek at <code>helpers.c</code> with <code>gedit</code>, and you’ll see that <code>sort</code> returns immediately, even though <code>find</code>'s <code>main</code> function does pass it an actual array.</p>
</div>
<div class="paragraph">
<p>Now, recall the syntax for declaring an array.  Not only do you specify the array’s type, you also specify its size between brackets, just as we do for <code>haystack</code> in <code>find.c</code>:</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="c language-c"><span class="predefined-type">int</span> haystack[MAX];</code></pre>
</div>
</div>
<div class="paragraph">
<p>But when passing an array, you only specify its name, just as we do when passing <code>haystack</code> to <code>sort</code> in <code>find.c</code>:</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="c language-c">sort(haystack, size);</code></pre>
</div>
</div>
<div class="paragraph">
<p>(Why do you think we pass in the size of that array separately?)</p>
</div>
<div class="paragraph">
<p>When declaring a function that takes a one-dimensional array as an argument, though, you don’t need to specify the array’s size, just as we don’t when declaring <code>sort</code> in <code>helpers.h</code> (and <code>helpers.c</code>):</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="c language-c"><span class="directive">void</span> sort(<span class="predefined-type">int</span> values[], <span class="predefined-type">int</span> n);</code></pre>
</div>
</div>
<div class="paragraph">
<p>Go ahead and implement <code>sort</code> so that the function actually sorts, from smallest to largest, the array of numbers that it’s passed, in such a way that its running time is in <em>O</em>(<em>n</em><sup>2</sup>), where <em>n</em> is the array’s size.  Odds are you’ll want to implement bubble sort, selection sort, or insertion sort, if only because we discussed them in Week 3.  Just realize that there’s no one "right" way to implement any of those algorithms; variations abound.  In fact, you’re welcome to improve upon them as you see fit, so long as your implementation remains in <em>O</em>(<em>n</em><sup>2</sup>).  However, take care not to alter our declaration of <code>sort</code>.  Its prototype must remain:</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="c language-c"><span class="directive">void</span> sort(<span class="predefined-type">int</span> values[], <span class="predefined-type">int</span> n);</code></pre>
</div>
</div>
<div class="paragraph">
<p>As this return type of <code>void</code> implies, this function must not return a sorted array; it must instead "destructively" sort the actual array that it’s passed by moving around the values therein.  As we’ll discuss in Week 4, arrays are not passed "by value" but instead "by reference," which means that <code>sort</code> will not be passed a copy of an array but, rather, the original array itself.</p>
</div>
<div class="paragraph">
<p>Although you may not alter our declaration of <code>sort</code>, you’re welcome to define your own function(s) in <code>helpers.c</code> that <code>sort</code> itself may then call.</p>
</div>
<div class="paragraph">
<p>We leave it to you to determine how best to test your implementation of <code>sort</code>.  But don’t forget that <code>printf</code> and, per Week 4’s first lecture, <code>gdb</code> are your friends.  And don’t forget that you can generate the same sequence of pseudorandom numbers again and again by explicitly specifying <code>generate</code>'s seed.  Before you ultimately submit, though, be sure to remove any such calls to <code>printf</code>, as we like our programs' outputs just they way they are!</p>
</div>
<div class="paragraph">
<p>Here’s Zamyla with some tips:</p>
</div>
<div class="videoblock">
<div class="content">
<iframe width="960" height="540" src="//www.youtube.com/embed/U8k-0StE1Ik?rel=0" frameborder="0" allowfullscreen=""></iframe>
</div>
</div>
<div class="paragraph">
<p>Incidentally, check out <strong>Resources</strong> on the course’s website for a quick-reference guide for <code>gdb</code>.  Again, if you’d like to play with the staff’s own implementation of <code>find</code> in the appliance, you may execute the below.</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">~cs50/pset3/find/find</code></pre>
</div>
</div>
<div class="paragraph">
<p>No <code>check50</code> for this one!</p>
</div>
</div>
<div class="sect2">
<h3 id="search_2"><a class="link" href="#search_2">search</a></h3>
<div class="paragraph">
<p>Now that <code>sort</code> (presumably) works, it’s time to improve upon <code>search</code>, the other function that lives in <code>helpers.c</code>.  Recall that your first version implemented linear search.  Rip out the lines that you wrote earlier (sniff) and re-implement <code>search</code> as Binary Search, that divide-and-conquer strategy that we employed in Week 0. You are welcome to take an iterative approach (as with a loop) or a recursive approach (wherein a function calls itself). If you pursue the latter, though, know that you may not change our declaration of <code>search</code>, but you may write a new, recursive function (that perhaps takes different parameters) that <code>search</code> itself calls.  When it comes time to submit this problem set, it suffices to submit this new-and-improved version of <code>search</code>; you needn’t submit your original version that used linear search.</p>
</div>
<div class="paragraph">
<p>Here’s Zamyla again:</p>
</div>
<div class="videoblock">
<div class="content">
<iframe width="960" height="540" src="//www.youtube.com/embed/7DSRJj7qfP8?rel=0" frameborder="0" allowfullscreen=""></iframe>
</div>
</div>
</div>
</div>
</div>
<div class="sect1">
<h2 id="backstory"><a class="link" href="#backstory">Backstory</a></h2>
<div class="sectionbody">
<div class="quoteblock">
<blockquote>
<div class="paragraph">
<p>One day in the late summer of 1975, Nolan Bushnell [founder of Atari and, um, Chuck E. Cheese’s], defying the prevailing wisdom that paddle games were over, decided to develop a single-player version of Pong; instead of competing against an opponent, the player would volley the ball into a wall that lost a brick whenever it was hit.  He called [Steve] Jobs into his office, sketched it out on his little blackboard, and asked him to design it.  There would be a bonus, Bushnell told him, for every chip fewer than fifty that he used.  Bushnell knew that Jobs was not a great engineer, but he assumed, correctly, that he would recruit [Steve] Wozniak, who was always hanging around.  "I looked at it as a two-for-one thing," Bushnell recalled.  "Woz was a better engineer."</p>
</div>
<div class="paragraph">
<p>Wozniak was thrilled when Jobs asked him to help and proposed splitting the fee.  "This was the most wonderful offer in my life, to actually design a game that people would use," he recalled.  Jobs said it had to be done in four days and with the fewest chips possible.  What he hid from Wozniak was that the deadline was one that Jobs had imposed, because he needed to get to the All One Farm to help prepare for the apple harvest.  He also didn’t mention that there was a bonus tied to keeping down the number of chips.</p>
</div>
<div class="paragraph">
<p>"A game like this might take most engineers a few months," Wozniak recalled.  "I thought that there was no way I could do it, but Steve made me sure that I could."  So he stayed up four nights in a row and did it.  During the day at HP, Wozniak would sketch out his design on paper.  Then, after a fast-food meal, he would go right to Atari and stay all night.  As Wozniak churned out the design, Jobs sat on a bench to his left implementing it by wire-wrapping the chips onto a breadboard.  "While Steve was breadboarding, I spent time playing my favorite game ever, which was the auto racing game Gran Trak 10," Wozniak said.</p>
</div>
<div class="paragraph">
<p>Astonishingly, they were able to get the job done in four days, and Wozniak used only forty-five chips.  Recollections differ, but by most accounts Jobs simply gave Wozniak half of the base fee and not the bonus Bushnell paid for saving five chips.  It would be another ten years before Wozniak discovered (by being shown the tale in a book on the history of Atari titled <em>Zap</em>) that Jobs had been paid this bonus….</p>
</div>
</blockquote>
<div class="attribution">
<cite>Steve Jobs</cite><br>
— Walter Isaacson '74
</div>
</div>
</div>
</div>
<div class="sect1">
<h2 id="breaking_out"><a class="link" href="#breaking_out">Breaking Out</a></h2>
<div class="sectionbody">
<div class="paragraph">
<p>Your final challenge for this problem set is to implement the same game that Steve and Steve did, albeit in software rather than hardware. That game is Breakout.</p>
</div>
<div class="paragraph">
<p>Whereas all of your C programs to date have only had "command-line interfaces" (CLIs), this one will have a graphical user interface (GUI), not unlike Scratch! You’ll be building Breakout atop the Stanford Portable Library (SPL), which is similar in spirit to the CS50 Library but includes an "application programming interface" (API) for GUI programming and more.</p>
</div>
<div class="paragraph">
<p>Let’s take a look at what you can do with SPL by way of some of Week 4’s examples. Go ahead and execute the below.</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">cd ~/Dropbox
wget http://cdn.cs50.net/2014/fall/lectures/4/m/src4m.zip
unzip src4m.zip
rm -f src4m.zip
cd src4m</code></pre>
</div>
</div>
<div class="paragraph">
<p>If you then execute <code>ls</code>, among the files you see should be <code>bounce.c</code>, <code>button.c</code>, <code>checkbox.c</code>, <code>click.c</code>, <code>cursor.c</code>, <code>label.c</code>, <code>slider.c</code>, <code>text.c</code>, and <code>window.c</code>. Go ahead and compile the last of those files as follows:</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">make window</code></pre>
</div>
</div>
<div class="paragraph">
<p>And then execute it as follows:</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">./window</code></pre>
</div>
</div>
<div class="paragraph">
<p>A window quite like the below should appear and then disappear after 5 seconds.</p>
</div>
<div class="paragraph">
<p><span class="image"><img src="data:image/png;base64,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" alt="window.c"></span></p>
</div>
<div class="paragraph">
<p>Neat, eh? Go ahead and open up <code>window.c</code> with <code>gedit</code>. Let’s take a tour together:</p>
</div>
<div class="videoblock">
<div class="content">
<iframe width="960" height="540" src="//www.youtube.com/embed/IMOujDlGebQ?rel=0" frameborder="0" allowfullscreen=""></iframe>
</div>
</div>
<div class="paragraph">
<p>How did we know how to call <code>newGWindow</code> like that?  Well, there aren’t <code>man</code> pages for SPL, but you can peruse the relevant "header file" (i.e., <code>gwindow.h</code>) by executing:</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">gedit /usr/include/spl/gwindow.h</code></pre>
</div>
</div>
<div class="paragraph">
<p>What’s with <code>/usr/include/spl/gwindow.h</code>? That just means that <code>gwindow.h</code> lives deep in the appliance in a directory called <code>spl</code>, which lives in a directory called <code>include</code>, which lives in a directory called <code>usr</code>, which lives in the "root" (aka <code>/</code>) of the appliance’s (virtual) hard drive.</p>
</div>
<div class="paragraph">
<p>Anyhow, if you poke around <code>gwindow.h</code> with <code>gedit</code>, odds are you’ll be a bit overwhelmed. No biggee. Because SPL’s author has commented the code in a standard way, it turns out that you can generate more user-friendly, web-based documentation as a result!  Indeed, take a look now at <a href="http://cdn.cs50.net/2014/fall/psets/3/pset3/spl/doc/gwindow.html">http://cdn.cs50.net/2014/fall/psets/3/pset3/spl/doc/gwindow.html</a>, and you’ll see a much friendlier format.  (Well, relatively speaking.) Click <code>newGWindow</code> under <strong>Functions</strong>, and you’ll see its prototype:</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="c language-c">GWindow newGWindow(<span class="predefined-type">double</span> width, <span class="predefined-type">double</span> height);</code></pre>
</div>
</div>
<div class="paragraph">
<p>That’s how we knew!  See <a href="http://cdn.cs50.net/2014/fall/psets/3/pset3/spl/doc/index.html">http://cdn.cs50.net/2014/fall/psets/3/pset3/spl/doc/index.html</a> for an index into SPL’s documentation, though we’ll point out more specific places to look.</p>
</div>
<div class="paragraph">
<p><strong>In the interests of full disclosure, we should mention that SPL is still in beta, so there may be some bugs in its documentation.  When in doubt, best to consult those raw header files instead!</strong></p>
</div>
<div class="paragraph">
<p>Incidentally, even though I included <code>gwindow.h</code> with</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="c language-c"><span class="preprocessor">#include</span> <span class="include">"gwindow.h"</span></code></pre>
</div>
</div>
<div class="paragraph">
<p>on video, we’ve since installed SPL deep inside the appliance (for convenience), so you should now include that header file (and other SPL header files) with code like:</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="c language-c"><span class="preprocessor">#include</span> <span class="include">&lt;spl/gwindow.h&gt;</span></code></pre>
</div>
</div>
<div class="paragraph">
<p>Anyhow, now open up <code>click.c</code> (in <code>~/Dropbox/src4m</code>) with <code>gedit</code>. This one’s a bit more involved but it’s representative of how to "listen" for "events", quite like those you could "broadcast" in Scratch.  Let’s take a look.</p>
</div>
<div class="videoblock">
<div class="content">
<iframe width="960" height="540" src="//www.youtube.com/embed/BStiekPFKWI?rel=0" frameborder="0" allowfullscreen=""></iframe>
</div>
</div>
<div class="paragraph">
<p>See <a href="http://cdn.cs50.net/2014/fall/psets/3/pset3/spl/doc/gevents.html">http://cdn.cs50.net/2014/fall/psets/3/pset3/spl/doc/gevents.html</a> for SPL’s documentation of <code>GEvent</code>.</p>
</div>
<div class="paragraph">
<p>Now open up <code>cursor.c</code> (in <code>~/Dropbox/src4m</code>) with <code>gedit</code>.  This program, too, handles events, but it also responds to those events by moving a circle (well, a <code>GOval</code>) in lockstep.  Let’s take a look.</p>
</div>
<div class="videoblock">
<div class="content">
<iframe width="960" height="540" src="//www.youtube.com/embed/xsB0v8GtVMw?rel=0" frameborder="0" allowfullscreen=""></iframe>
</div>
</div>
<div class="paragraph">
<p>See <a href="http://cdn.cs50.net/2014/fall/psets/3/pset3/spl/doc/gobjects.html">http://cdn.cs50.net/2014/fall/psets/3/pset3/spl/doc/gobjects.html</a> for SPL’s documentation of <code>GOval</code> and other types of objects.</p>
</div>
<div class="paragraph">
<p>Next open <code>bounce.c</code> (in <code>~/Dropbox/src4m</code>) with <code>gedit</code>.  This one uses a bit of arithmetic to bounce a circle back and forth between a window’s edges.  Let’s take a look.</p>
</div>
<div class="videoblock">
<div class="content">
<iframe width="960" height="540" src="//www.youtube.com/embed/8RMHJe1ZpKM?rel=0" frameborder="0" allowfullscreen=""></iframe>
</div>
</div>
<div class="paragraph">
<p>Finally, take a look at <code>button.c</code>, <code>checkbox.c</code>, <code>label.c</code>, <code>slider.c</code>, and <code>text.c</code> in any order with <code>gedit</code>. And feel free to join me on a tour:</p>
</div>
<div class="videoblock">
<div class="content">
<iframe width="960" height="540" src="//www.youtube.com/embed/uFnsMLEgajQ?rel=0&amp;playlist=1o0xfkkPDFQ,ONSsCsNJcsE,mKiDejZId2g,2s_WGOz6SAs" frameborder="0" allowfullscreen=""></iframe>
</div>
</div>
<div class="paragraph">
<p>And, of course, feel free to compile (as with <code>make</code>) and run any of those programs.</p>
</div>
<div class="paragraph">
<p>Phew, that was a lot. Not to worry! Even though all this might feel like a lot, all we’ve really done is introduce you to some Scratch-like puzzle pieces, albeit in C! Arcane puzzle pieces, to be sure, so do ask lots of questions of classmates and staff as needed.</p>
</div>
<div class="imageblock">
<div class="content">
<img src="data:image/jpg;base64,/9j/4AAQSkZJRgABAQAAAQABAAD/2wBDAAIBAQEBAQIBAQECAgICAgQDAgICAgUEBAMEBgUGBgYFBgYGBwkIBgcJBwYGCAsICQoKCgoKBggLDAsKDAkKCgr/2wBDAQICAgICAgUDAwUKBwYHCgoKCgoKCgoKCgoKCgoKCgoKCgoKCgoKCgoKCgoKCgoKCgoKCgoKCgoKCgoKCgoKCgr/wAARCAF4AfQDASIAAhEBAxEB/8QAHwAAAQUBAQEBAQEAAAAAAAAAAAECAwQFBgcICQoL/8QAtRAAAgEDAwIEAwUFBAQAAAF9AQIDAAQRBRIhMUEGE1FhByJxFDKBkaEII0KxwRVS0fAkM2JyggkKFhcYGRolJicoKSo0NTY3ODk6Q0RFRkdISUpTVFVWV1hZWmNkZWZnaGlqc3R1dnd4eXqDhIWGh4iJipKTlJWWl5iZmqKjpKWmp6ipqrKztLW2t7i5usLDxMXGx8jJytLT1NXW19jZ2uHi4+Tl5ufo6erx8vP09fb3+Pn6/8QAHwEAAwEBAQEBAQEBAQAAAAAAAAECAwQFBgcICQoL/8QAtREAAgECBAQDBAcFBAQAAQJ3AAECAxEEBSExBhJBUQdhcRMiMoEIFEKRobHBCSMzUvAVYnLRChYkNOEl8RcYGRomJygpKjU2Nzg5OkNERUZHSElKU1RVVldYWVpjZGVmZ2hpanN0dXZ3eHl6goOEhYaHiImKkpOUlZaXmJmaoqOkpaanqKmqsrO0tba3uLm6wsPExcbHyMnK0tPU1dbX2Nna4uPk5ebn6Onq8vP09fb3+Pn6/9oADAMBAAIRAxEAPwD8p9B/5BUf0rQqvoMP/Ert/wDrjVivhcT/ABT9owX+6Uw/5ZVJUdH/AC1rE7COftUlRQ/678aln7VmAUVHUlABRUdSVmZhB3qnrGjwaxYSWN9/q6sT9qK1pVPYh7Nmp8JfG1/PFJ4O1ubzNQsP9TN/z1ir0Dzv3VeKa7DfWV1b+I9LPlahYfvIf+mv/TKvU/B/iqDxToNvrcH+rlrxM/wX/MTTPpclzJey+r1DD8VQz+CfFtv4/sbf/Q7/AP0fWIv/AGrXaQkzRefCKp69o8Gu6NcaHP8A6u6h8uauf+Fmr332C48H6r/x/wCj/u5v+msX/LKuKpUpZhl3tP8Al5TOinTVHMeT/n4ZfxBs7jwT4os/iLY/8e8v+jaxD/0y/wCetdRDeQTRfuJ/M8395V3WNBsvEej3Gi3sPmQXMPlzYrivhleT6ba3Hg/W5v8AS9Gm8v8A66xf8sq6adSlmOW/9PKZ4uZUnl+M9p/z8OsqSDvRRXijCiiiucCSo6KKr2gBRRRWIBRUef8Apv8ApVea8rZUrgWPP9qPP9qy5tYsYY/388UdV/8AhJNK87/kKxdP+e1dNPC1ifao2P3/AO8qPyPeq8OpecP3FWPOgm6UezdIq6JKk8/2qOimBJUnn+1R+f7VT1LUobO18+9n8uOL/nrSSdbYC5NxN+NU9S16x0e18++njjrLu9S1vWL6Sx8KWP7vyf8AkIS/6qtDQfh9Y2d1/auuT/2lef8APWX/AJZV0rDUaS9piGLDYati6v7sy4bzxT4wkkg0qD+zrP8A5+5f9bL/ANcq6Dwr4J0PQf38EEklxL/rruatiGHyqj1LV9K0G1+3X17HbR/9NaipjnW/d4Y9qllNHCfvKpc/1MX+vrL8SeKtE8OWvn6rfRx/9Mf+etc3eePPEXiS6+w+CNK8q3/6CF3DS6P4EsbO7j1TXJ5dSvP+et3V0sqj/ExLDE5tSpL2eHEm8YeMfG3mQeHLH+zbOU/8fcv+tqxo/gmx02X7dOPtNx/z2m/ey1qQw/vasVrVx1GkvZ4c8WrVrVv4gQRf8t81JUdSV5FWqQFSf8sqjorlNAqSDvUdSQd6AI65fUv+SqaP/wBed1XWeT+9rk9S/wCSn6P/ANed1XuZJ/vRy1NzUs7yez8W+IJ4P9ZFDayQ/wDfqj4ZQ/bNBj8U3x/0zVP3k1QQ/wDIx+Jf+vOL/wBFS1b+Eo874f6PP/0516eO9lSy72h7WFq/7X7M6j/llXn+vf8AI5+J/wDsVYv/AGrXoH/LKuD1j/kdfEv/AGLcX/tWvN4b/i1Tuzr+DTOk8Hzf8Uvp/kf8+cVbFYngL/kUdK/7BsX/AKKrbryM2/3uoa4L+DTCuE8Yf8lJ0D/R/wDl0v4//IVd3Xn/AI8/c/Erw3/1xv8A/wBFV2cN/wDIw/rsedn/APuFQ6iDvUlR8zQ1JXJiv4x87htiTz/aio6KwNDyrRv+QXHV2s/QP+PBK0K/Uqv8Y48t/wB0phUc0NSUVynQR/6qipKjm/1P4UAE/aipKjoAKIO9EP8AqfworMCOiGGfrUnke9H/AC1oAjng7z1B8PdY/wCEQ8Y/8I5PP5Wn6z+8h83/AJZS1bn7Vj+JNH+2WEk8E/l3EX7yGX/prWtO1aj7OoQqn1Wt7Q9oh/fRYrkPG0//AAi3ifS/G8H/AB7y/wChalWn8OPFX/CX+GLPW/8AlpLD++/661oeMNCg8R+HbjS5/wDlrDXx9Jf2fmPs6nU+sm/rWXe1plyzriPiPD/wivizT/G4/wBXL/oWpf8AtKtf4Wa9PrHh2OC+H+mWE32a8/66xVoeNfDn/CVeE7zQz/y1h/c/9da6MN/sGY+zfUWJpfX8u9p2I4O9SVzfws8STeJPDlvPP/x8Rf6Nef8AXWKuk8n97XNj8P8AVa/sz53DVPa0goooryzqCiiig0D/AJa1H53/AE3qOub8beJP7NtfIg/4+Jf9TXfhcP7Z+zMalWxJ4q8baVoMX7+fzJP+eNchaa74+8eSSQaUf7Ns/wDnrLVbWNHvvtVvYzz+ZeX8376X/nlFXeaPo8Gj2EcFv/q/avqadLC5fRvY82o6uKrHET/CzVopZL2DxH9tuP8Anld1JoQ0ODVP+EW8YeHo7K8/5Yzf8spa7C88R6JaSxwef5skv/LKL95LVy8/Zu+N/wAcdL8/wD8HtfubiL/jzuxZ+VTp4+jVX+0fuznqU6VI5fXvBd/DFJe+D9VljuIv9TF537qWr/gPxgddsCJ4PLvLX91eRf8APKWvXfCv7B37c02lx+f8ArrzPJ/10t3XP67+wF+2x4E8UXHjG5+AepDT5bP/AEyK0l82uX+08orUqlKpVp39UaVMRSpezmY3n+1E15BDF+/rE8Y+KZ/B8v2DW/DupW95LN5f2S7s/L/e1FpvgnxF4qh+3eMb7yrP/oH2k1cNLBXpe0m/3Z6VKr7b93TJJvG02pah/ZXhWw+23H/kKKruj/DKfUZv7V8b33224/59P+WUVbem6PY6RaxwWNjHbRxQ/wCqiq5NeQWcXnz+VFH/AM9ZqzqY2lS/d4ZHt4bKklfEElnZwWcUcEH7qOKpNS1LStNtfPvZ4raP/ntLXH6l8TZ72WTSvBGlS3skX/LaX/VRVBD4KvtXkj1Xxtqkt7J/z6/8s4qyWXVav7zEs6amY4TCUfZ4csXnxGvdd/0LwTpclwf+W2oTf6uKorTwH511/avirVJdSvP+m3+qiroNNsoLOKOCCDy46sQd61eJoYWjbDo8Cpia2K/iEcMPkxf9M6kqSftUdeRUxVasZezCiipKy9qbEcHepJv3VFE/asvaMAo/5a0VJNDQBFN/rvxqWjyf9XUlZgR/8ta5PWP3PxP0fj/l0uq7CuQ1L/kp2iQf9Q66/wDaVfQZBrW+85MQW4f+Rj8Uf9ecX/oqWrHwn/5EDSP+vOqUX/If8Uf9ecX/AKKlq78Jv+RA0f8A7BsVenmX/Ipfqelh/wDe6Z1FcHqf/I4eJP8AsW4v/ategV55rM//ABW3ifj/AJluL/2rXm8NfxKp6mdfwaZ0/wAPP+RN0v8A7BsVbqfeFYXw7/5FPS/+wZF/6Krcg714ma/77UOjBfwaYk3+u/GuF+IP/JRfCf8A13uv/RVd/N/qfwrhPiEfJ8eeFJ8f8vd1/wCiq9Hhv/e/k/yOHP6X+yG9Z/6o/SrNRw/6n8KKzxVvbM+bpfwSSio6K4Czyvw3/wAeEdaFZ+gf8eCVoV+nYn+Kc+B/3SmFR1JUdYmgUUUVmAUUUVoAUUUVmZhRRRWhoRz9qKkmhqOs/Zme4fCXUv7B8W3nhy4H7u//ANJs4q9U/wBbXi+vTT6NdWfiqD/WWF5FJ/2yr2TTZoJrWOeD/V/8sa8TP8P+6p4g9/IKt6tTDnIWfn+D/ixJZf8ALn4ih8yH/rrFXZTf6p/pXG/Guz8nRrfxTY/8fGj3kVx/2yrr7O8g1KL7dB/q5f3kNc+N/wBpwdLEnfh/3VWphzg9Bsh4V+Kmt+HT/wAe9/DFqMP/ALVrrP8AllWB8TbP+x/EWieMT/yyvPsU0v8A0ylrfg71pmX+1UKeIPm6VP6rWqUwooorw6R1BUc3/PfNSVXp06YEc0uOtcH/AMhjx5JBPP8Au7WHza7iaY+VWZ+z38APH/7VH7Q0nws+GV99mt5ofM13UP8An1ir6TJaSSdWpsjzMyq+xOX0DS/HHxC+LEfhf4S+D7nX9U8nyhaWn/LP97/y0r7o/Z6/4I6fEX4gxR65+0X43k023/6F/Sv+WX/XWWvqP9m/9gPwB+zp8QfD/ir4ZaVbW1nF4burLXppv9bfy+b5sUtfRlnD5MWRX5Nx/wCL2Dyml9Xy736hzYanWq/vKh4n8Gv+CeX7K/wU+znw58K7KW4i/wCYjqMPmy17hpuj2OnWv2fSrGO2j/6ZQ+VVjzYfWpPP9q/m7NuPOI81d6mIPRp0qJJBZzzdKk+xzwxeRiiGapPtnv8ApXylTPc5v7T2o/ZI4v4kfs9/B74s6XJpXxG+HOk6tHL/AM9bOvhT9qH/AIJDa34D+0eP/wBlHVZL6z/1l54U1D/2lX6P/wCtqvNDX3XC/ijxFkFa1Wp7SkZezdKr7SmfgR4k8a3+maxJ4WsvDl9Jq9r+7vNPu4PL+y/9daxz4W1vxJdRzeNtUx/zx0+L/V1+nn/BUj9hCDxv4bvP2mfg9on2bxXo8PmaxaWn/MUtf+Wv/bWvzm067std0yDVLIfJJ/5Cr+veH8/ynO8m/tDBfMVPN8Xin9XqEem6dBp1r5FjBFFH/wBMa0IO9R+R71JntWVXE1qp1U6fsiSkh/1340tSeR71gbBUkP8AqfwoorMzI6Sb/XfjS1J5HvQaEdHke9E/apKKm4EdSed+6kwKKP8AllQBJ/yyoqPzv3VEHeswJK5O8/ffF7Q/+wbddK6yuUmmnHxd0uH/AKg91X0HD/8AF+84MR/CRPN/yGfFk4/54xf+ipa0PhND/wAW/wBH/wCwbFWX5x+1eMJ/+mP/ALay1sfCz9z4A0fn/mGxV35n/wAi9/8Abh62C/3s6SftXnmpjzvGHiw5/wBV4ctf/atd/Xnesf8AIz+NJ/8AqEWv/tWuLhv+LVPTzr+DTOs8Cf8AIpaf/wBecX/oqtyDvWP4Jh8nwlp//XnFWqn3hXhZr/vlQ6cF/Bpj5v8AU/hXD/ED/kbfDH/X3df+iq7iaauH+IH/ACNvhj/r7uv/AEVXbkH/ACMKfoc2ff8AIvN+z/1R+lS0Q/8ALP8AGpKwxX8Y+Wo/wCOipPI96K5CzyPQf+QXF/1yrQrP0H/kFR/StCftX6jif4pz5b/uYUUQd6KyNCOiiigAooooAKKKKDMKKKKzAKPI96KK0Ap3lnBeW0ljP/q5a7D4M6x/a/gmzhm4ksP9GvP+2VcvVj4TXn9m+MdY8Of8s7qGK9h/9FS1z4nD/WsHUpnVltT6rjPaHoHirSINd8OXmlzn/j6s5Y6w/hBqU954O0+ef/WRQ/Zpv+2VdR/yyrkPhznTde8SeHcfu7XUvtMP/bWvAwV6uXVcP2Pp8b+7xdOoW/i/Z/2l4Ev/APnpa/6RD/2yqTRrz+07CO/gP+thikrU8SWcOo6NcWQ/5aWcsf8A5CrmPhZei88E6X5//Pn5f/fqng17bKKn/Ts8DNqfsswpm/RRUc/avFW5QT9qrTf678as1Xm/575rsQbGXqOj+KfFWs6X8OvA9j5useI9SisrP/trX6sfsvf8E8vh1+ztY+F9V+GV/LbapYf8h7UP+WuqRS/62vij/glr8N4PHn7ZcnjG+g8238EeHPtMPmw/8vVz+6ir9a9Hs/JtY8mvhPFXiytwzk9PDYf+JUPIVP6/WqFiGGCGKo6sT9qrz9q/kKtinXre1qHoVFZElR+f7Ued+6qPz/avPMi55/tVjz/as+GarFZm1Mued+6qSGGqcM1WIZq5zX2RHqUME1rJBP8AvY5f3fkzV+Lv7XfwNn/Zq/ao8T/DSCDytI1g/wBveHP+uUv+sir9ppv+Wn4V8If8FtPhjBefCnwv8fLGy/0zwnrH2K8l/wCethc1/QvgfxJ9Vzb+yqn8Or/SPn8xpexftaZ8DUQd6KSH/XfjX9DVafs6rge/Sqe1oqoWakg71HRXIUSf6qpJv9T+FV5pqk/1tABR5/tR5/tRQZhRRSQ/678aAJaKIO9FAEdSVHUn+trMCQ/x1zEP/JXtP8/r/YN1/wCja6euXh/ffFSz/wCxbuv/AEbX0HD/APG+84MRugm6eMv+uH/trWv8Mv8AkSNH/wCwZF/6KrEvZv8AiX+M/wDrh/7a10nw9/c+DdLGf+YbF/6Kr082/wCRUe1gf9/RsTf6n8K871T/AJCfjj/sHWv/AKKlr0iab91Xm+qf8hPxx/2DrX/0VLXk8N/xah6edfwjtPB8I/4RzTyf+fOL/wBFVqVl+Fv+Rd0//r0i/wDRVakHevHzP/kYVDowX+50yP8A5ZVxnjz/AJHrwz/1+XX/AKKrs64j4g/ufHXhz/r8uv8A0VXdw7/vbOLPv+Rejp4f9T+FSVHD/qfwqSubF/xj5el/BCilfr+FFcJueRaD/wAgqP6VcqnoP/ILi/65Vcr9VxP8U48t/wBzJKKKjrmOgKKIO9JN/rvxoAWo/P8AaiftRWhmSf62o6KkoAj8/wBqPP8AaiiswD97UlR0f8taACqllenSPiTomqj/AJazS2U3/bWrc/asfXZfsf2PVf8An11KKX/yLXTSHPRntEP+p/CuT/0jTfizcY/5f9H8z/v1XWQ/vosVy/ir9z8RfDcw/wCWsN1b18nl37vMatM+tr/vcuVQ6zyf3Vef/Cz9zpl5pP8Az4a9dR/+Ra7+H/j0rgPBUXk+LPE8Gf3f9u+ZD/36rXKv4OJpnj5z/wAuqh1lR+f7UTTfuqx/EnirSvDcXn6rN5Un/PH/AJay15lPDVq1X92c3taNjUmmrm9e8baVo/8AoMHmXt5L/wAukVUxD4v8ajMH/Ep0+X/v5LXSaD4J0Tw3a+RYwfvJf9dLN/ra9enhsHhP3mIY6FKtil+7Pqz/AIIfQ3134t+Kl9rdj9muP7S0a28r/nl/rZa/TyGYfZa/NP8A4I3axBZfEr4qaH/y087Qb2H/AK5fvYq/SSzm/wBFr+dPHz99mOHt/wA+zmwNP2VOpTJJpqP3VV5pqLOv5u9mdNTYkn7VHSzf6n8Kref7Ukm9jEuef7VJ/qqz/tnv+lWPO4/6Z06uEr0V7Q6qRcz/ANN/0qxDNWf/ANe/4VYhmrhsbFyvK/2y/hNY/GX9m/xn8Op4Ob/QZZbP/rrF+9ir0yG8gh7VX1KH+0rWSx/56w+XX1fCGOrZTn1LEQ/5dnmYmn7Wifg34VvJ7vw7Zzzff8nypv8Arr/qq0K9K/a2/ZG+KX7GniMHxhYx3HhvXtXl/sfW7T/llLLL5vlS15rCM2fWv7lqYjC4yhTxmHd6dQyymral7OoSef7VJUcHeiuB7nqElFFFIAoqOpP+WVBmWJ+1Rwd6KkrMAo/5ZUVH+9oAPI96koooAk4mta5jTJh/wuKOEf8AQuS/+ja6O8rmNI/5LFH9n/6FaX/0bX0uQfxX6HBifipiTf8AHh44nz/z1/8ASWuk8E/8inpX/YNi/wDRVcvd/wDIF8ef9dpf/RVdX4L/AORX07/sGRf+iq6s8/5F9M9rBf72bM3+p/CvONS/c33jj/rztY//ACFLXo83+p/CvM9f/fS+N/8ArjF/6KrzeGv4tQ9PNf4R3Phb/kXLP/rziq/Wf4b/AHOjWY/6c4v/AEVWhXj5j/vdQ6cD/udMk/1tcR8Qf33jvw5/12uv/RVdn/yyri/HX/I9eGP+u91/6Krt4f8A96+T/I4M/wD90Ojs/wDVH6Uvn+1Rwzfuqkh8+ufFfxT5il/CJKKjorlLPJ9B/wCQXF/1yq5VPQf+QZb/APXGtCftX6jP+Kc+W/7mR0UUVzVToEh/1340v/LWo4Zv3tSUGYVHP2qSo/8AlrWgEkP+p/CiiDvRQBHRRUlZgR0UeR70UAHke9Z/iqzxoV5/1xrQ/wBVWX4k1KD7BJYzz/vJYfL8n/lrWlP+MZ1Nz1jQZhNo1nP/AM9bOKsPxfD53jfw4f8AnlNdSf8AkKuT1jxtrlnpdvb6X5dl5UMUfk/8tauReJPtl1b33/CR/vIvN8n/AEOvFp4KrRxbxB9JSxNKrhPq56RDN+6/19ef6dqdlp3iLxPql9PFFGNY/wBb/wBsqsQ+KpxF/wAhX/yDWf4J8N6H4k8Ua5far/pskV55kP8Azy/exU8tw/sva+0FmK+tUqVMuw+JPFPjD/QfB9jJbWf/AEEbuGtPw38OND0j/ia308mpah/y2u5a6SGGCDy4IP8AVxf8sa5vxh4p1zR9Uj8O+HNL+03l1D5kMsv+qirl+s+1q/V8IFLLaOEpe0xBsajqWlaRayX2qTxW0cX/AD1rj734j6rr0slj4I0r93/0ELv/AFdEHgmfWLqTVfG+q/bZP+eX/LKKtyGzghi8iD/V1ryYTCr95+8ZnVxi/h4c9Z/4JVeJL74cftox+HNc1u5uP+Ey8LXVt+9/5a3Vt+9ir9e9Hm861j/641+Hnwj8Y/8ACt/2kfhx8TfP8uPTPGtr503/AEyl/dS/+jK/bPwfN+68jz6/F/HXBLF5dh8bT/wHgYL91i6lM2JoajqSeX/lhiqd7P8AY7WSef8A1cX+ur+VcNhXWl7I7va2Mf4kfEjw58N9G/tXXJ/Mkl/d2dpD/rbqX/nlFUfhX4A/tC/GY/25448Y/wDCE6PL/qdJ0/8AeX0v/XWWpP2TPh7B8WvFF5+0144g+0xyzS23gm0m/wBVFaxf62WvqCzs4K/tLwZ8C8uzbBrGZgj8l4j45xeEzGph8OeJw/sH/Cvy5IJ/GPimSSWbzPO/tiWuf179lH40/D2KS++Enxbk1+OL/U6H4nh/ey/9Mopa+mP3VR+T/rP+elf0TmPgVwNj8t+r/Vz5elxzm9Kt7R1D5X8K/EK+1K/k8OeK/CtzomuWv/H5pOof+0v+etdBeaxY6bayX19PFHHFD++ml/5ZV3n7S/wTn+Kng2S+8Kz/AGHxRpf+k6DqMUP+tli/5ZV4H8DNH1X9sDWY5/EelXOm+D9Gm8rWLT/Vfb7+L/Wxf9cq/lTjD6NGY4TPadPK/wB5TqH6DkvHVHMKNT2n7v2ZuaD4w+I3xal8j4H+APt1n/0HNWm8q1l/65V1Gm/Af9q+8l/07xV4Sto/J/5Y2cslfQHhvQdK0fS7fStKsYra3ih8uG0i/wBVFW5Z2dv5VfsnDX0aeHcJQX9oe/UPlMd4hYtVv9nPzz/4KNfsQ/tl/Hf9m/VPhz4bg8N6/cRala3sP2TzYpYvKl8391X5V6xoGueFfFGoeB/FWlXOm6xpd59m1LT7uHypYpa/pg+xwQxeeZ6/Jv8A4OEP2Y4PB/jzwX+1t4VsY4rfXpv7B8VTQ/8ALWXyv3Utfb47w5wuS5R9XwH8OmdPC/GFbF5l/tB+ff8Ay1qSo5v+uFFfk1Wl7GrY/a1VuiSDvUlV6K52rlFipIO9V6kqTMsf8sqIO9R1HQBYoqOij2bAIf3VSVHRQT/CJK5fQf8Akt1x/wBMvCv/ALVrpK5vR5v+L03E/wD1Lf8A7dV9DkP8ap/gOLE70yvrM3/FOePP+u0v/oquw8H/APIu6f8A9ekX/oquL1//AJEzxvP/ANPkv/oqKu48N/8AIuWH/XnF/wCiq7c7/wCRTTPby3/ezUm/1P4V5prA/wCR3m6f6r/0VXo83+p/CvONRng+zePz/wBNoo//ACFXlcNL97VO7Of4Z3Wgf8ga3/64xVdrO0D/AJA1v/1xiq7Xj5j/AL5UO3BfwCSuL+IM3/Fd+GD/ANNrr/0VXYVynxB/5KB4X/67XX/oqu7h/wD3r5P8jzOIP+Rca8HerFRw/wCp/CpK5sV/FPm8N/ACio/P9qK5TQ8v0ceTYRk3FWIf3tdJpvw98KfYI/8AQf8AljVz/hXvhWE5+w+V/wBtq+7xObUaVY7styqr9UpnH/uqPOt/+e5rsP8AhAvC3/PkaJvh74V/58a5v7Vond/ZNQ4v9z5tHnW//Pc12n/CB+HP+W9jUc3gPw5N1sa0/taic39k1jj/AD/aj/lrnz4q7D/hXnhz/nxNH/CvPDn/AD4mj+1aIf2TWOP86A/6ieKpIZoP+e8ddZ/wgXhz/nwP/f6o5vh74cl6WP4io/tWiH9k1jl/+/dFdZ/wrzw3/wA+B/7/AFP/AOEE0T/nwNL+08IH9k1jlKj8nyq7CHwT4b/1H2Gj/hCNE/58RWf9q0Q/smseb69rH2O/jsYJ445Jf+e1R6Dpuq69fSHwrpf/AF+ahLXaeMPhXoepaXJ9isP9M/5Yy1qaD418LWfhzz77y7KS1/dzWn/TWvRWNpOj7TD7mVPKaqrfvDD/AOFVwWeg6hfGf7TqEtn/AMtf9VWx4V03wdrul299Y6VbeZFD5c0X/PKWlm17xH4ql+z+HYPsVvL/AMvd3D+8rO+FenQ6bf8AiC3M8kskWseV++/65Vz03i8ThKntD07YTC1afszqP+EV0qE/8eMVc/8ADKzgh1PxBBBB/qtel/8ARVdhP2rkPhv/AMhTxJ/2HZf/AEVXm5bUq1cJVVQ0xr/2qkdfN5FcX9sg174gXF9Y/vLOws/s/m/9NZf9bR4kvfEWveJ7jwdBqv2azis/tM3lf62WtDQdHsdHsI7Kyg8uOKtcNTo5dR9pU3Zw5tjfrX7ssTQ1XqxP2qOvCbuziw2hifECGabw9d/Yv+PiI/aIv+usUvm1+z/7MnxBh+I/wc8L+PoeI9Z0G1vf+/sVfiv8Ttd/sLwxearb/vPKhr9HP+CNHxan8efscaHY30/+kaDeXWkzQ/8ALX/W+bF/6Nrk40yStnnCE1/z7Z5FXE0qWY2PddI/az0nUf2rdb/ZmvtF8uTTLOKSz1X/AJ6y+V5ssVdH+0t4kn0H4GeJNVsZ/KuP7N8qH/rrL+6r57/4Ru91g+P/AI/aH+81Dwv8cb+9tPK/5a2FraxRXMX/AKMr2j9orWIPEn7N154q0OD7TZy2drqP7r/lrFFLFLX4fjeE8twGZYJ0lp+79p/jNW/3NRn1p8H/AARY/D34faP4HsYPLj0vTYrb/v1FFXaQd65/w3rFjr9hHrmlT+Zb3/8ApMM0P/PKWtyGav8ARjw/wtGjw5S9mfzhnlT2uZVKgTf8tPwqOG8Pm/6+L/tlWH8U9H8R+JPhzrmh+DtV+xapf6PdW2m3f/PKWWL91Xyn/wAEqv2V/wBt/wDZk8EeJNE/a1+LUWvyXWseZoMX2z7T5UX/AC1r7KpiaVJ+zPMpYdVaJ9oed+6ryv8AZ2hg0HXviJ4Ohg8u30v4hXUkP/b1axXVeiTTT/ZeLivL/gDqVjrHij4meI/t0Xl3/jyWOH99/wA+trFFXLVq0FqzXD0n/wAuz2iy8irnnf6yufs9YgH/AC/R/uv3f+uq5Dr2lY/5Ctt/4GRULFUKVLcz+q1+xzfxa/aK+C3wT1TQ9D+KnxG03RLzxHefZtBtLub97dS18x/8F27PStY/4JxeJNV8+PzLDxJo1zZ/9dftXlV2P7d//BM74Zft6+Mvh3458Y+ONR0m88B6x9os/wCzx/x9RebFL5X/AJCrwL/gvN8QtD8H/ALwv+z1/a3m6h4j8SRXs0Pnf8utr/y1ryMyqqnltQ9vh/Be0zKn7M/LuftUdE372iv5gzb/AHtn9J4VP2BJRDDRUleWbkdSUVJP2rMAg70ef7UQd6KACiiiftQAT9qkg70Qd6z/ABJrtl4ctZL6+n/dxVVKm61ZU6ZjVND/AJZVy/huHzvi9qk//PLw3F/6NrQ0f/hKNetft3kR2Ucv+pil/wBbVzQfCp0fxHceKp7/AMy4ls/s/wDqa9vA1KWX1aiqGn1KtVdNnMav/wAiJ43n/wCnyX/0VFXb6D/yC7f/AK4xf+iq4fXRn4f+NAf+fyWT/wBFV3mjwn+y7f8A64xV6Ofu+W0j0st0xlQuTf6n8K831r/jw8d/9fkX/oqvSJv9T+Fecaz/AMgXx3P/ANRL/wBpV5vDX8Wqd2a/wjvNH/5Bdt/1xiq3VfTZv9Aj/wCuNWIO9eDjv97qHbgv4AVxnjz/AJKD4a/67XX/AKKrs64/xt/yUXw3/wBv/wD6Kr0eHP8Ae38zyM//AN0NyH/U/hRxDNRB3o/5a1lif4x85S/gklFR/uqK4vZMXtGeb6P4x8cfYLc/2pbf6n/njVz/AIS/xl/z+23/AH5rD0H/AI8I/wDria0K/R8TgsJ7U6stzHF/VKZc/wCEw8X/APPe3/Ok/wCE28Sf9Mvzqp5/tRXP9RwZ0VMyxZZ/4TbxD621Sf8ACb+J/S3qlR5HvWX1LCGf9pYwuQ+PPEXaC2pn/Cw/EX/PC2/Kq3k+VVfyPej6lQD+0sYaP/Cw/EP/AD721P8A+Fg+KP8Anztqz6PI96PqWE7B/aWMNSHx54p/5b2NtUn/AAsLXP8AnxjrH8j3oo/s3Bmn9p1jYh+IWq9f7Kiq54a+IVxeeKI9DvrHyvNh8yubqnpt7Do/xK0O9vp/Kjl823/7+0U8po1qNQ1WbVrnsHnebXD+KtO0OH4qaHe30Efl3VndRzf9da7SDvWX4w8KweJLHyPO8u4im82zl/55S14GW1f7Pxns6h62Mp1cVhL0zU8n91XCavr1j4D+JX26e9i+z67D5c0X/PKX/nrRpHiPxT4qtryx1vXbbTY9Lm+zXkpm/wBbXL+NrOARahfeDtDkvrMaP5d5dzf8sv8AprFX0GCwVWlVftNqh5uIxFKphP3Z7HDN50X/AF1Ncp8N5j/aniM/9R2X/wBFVteHP+QFb/8AXnF/6KrB+H3/AB/eI4P+o9L/AOiq83DU/ZUsQdOI/wCYcB/yUq4/7A8X/o2tzHGcVhXn7n4n3Hkf9AeL/wBG10GTjFcubbUzycTTvi6hXm/1P4VHP2qxNDVeftXm0gpaHB/HGUw+DZOP+XuL/wBG19Gf8EwfjlqvwN/aM1jwdqsEn/CJ699lubyX/llYXX+q82vA/idoN9r2l29jYQeb/pkUk1esfsfQ6FeftP6X4A8Y/wDIP8eaDdaDN/0yl/1trL/39ir7LDOjUyf6vU+2fNZjSrfW/rB+kv7BUVjr/wCz9eX17/pseveMNeuZv+msUt1LF/7Sq58CLL+x9K8T/szeN55ZLjR7yX7HFN/y9aPdf6r/ANqV0f7JnwHg/Z1+Bnh/4ST65Jff2NZy/wCl/wDPXzZfNrtLzwJ4dvPGsfxEnspZNTi03+zvtUX/ADy83zfKr+UuJOKMJl3EWJpv4Onqd3sqzwlOZH+xz8Wp/Ad1/wAMr/E3Vfs2qaND/wAUrqEv+q1Sw/5ZRf8AXWKvpizvIPK/f18z/EL4V+FfiFpcdj4jsZfMtZvM027h/dS2sv8Az1ilqnoPir9qH4Vy/wBlaVrll4y0uKb9zFq03lXPlf8AXWv6Q8I/HzIf7Ip5fmFT2dSmfnnFnCftqv1jB0z6smlgmFE03+i+fXgcP7YHiqGLyNb+BGt/bP8Ap0milirm/iF8bP2jPiFLHofgCxtvBuny/wDH5qN3/pNz/wBsq/cMd4v8F4XB/WKmIpnw1LhfOPa+z9mekftIftIaV8JbCPwr4Vni1LxprP7vR9Ji/wCWX/TWX/plXzPoP7E/wys/9OvtW8Qf2xdfvNYu7TXpY/tV1L/rZa7zwH8JfDngi6vNVE9zqWsX/wDx+a3qE3mXMtdhZzwfu6/jfxU8fM2x+M+r5NU9nTP1ThjhLB4XCe0xn8Q8zh/ZF+GX2rz59V8SS/8AXXxJdf8Ax2pB+x/8HfKx9n1uOT/ljLFr115v/o2vUPOHlc1JN+9r8ao+LHiBVrf7xUPf/sDJ/wDn2eX/AAr/AGotL/ZE8R+LPhl8d/iBc/8ACP6N4V/t7w3qGrXnmSy2vm+VLa/9da/Lv9qj9qLxV+2N8eNU+O/inzba3lh+zeG9Pl/5dbCvVf8AgsZ4lg+IXxr0CXSv9N0Pw7ENF1i7il/dfarn975X/TX/AFdfMcIItPJzX9m5Bxhm+L4Lw0MY71Ki1PFy3hzCUc3+sUyepKIO9EHevmqtS7P0BKxJUlRwd6krlehmFSUUUAR1J5/tR5HvR/y1oJ9oSeR70eT+9qPz/ao5ryCy/fzTxR/9dqap12FQsTfuq5jV4YNe8d6XpV+P9HtYZb2aL/nrWhP4pspZfIsoJLmT/plDVbTdB8Ral4tt/FN7Yx21vFpssf8A00r18qpexqupVM6VKtWf7s7CDvRND+6qSGGpJoYPKrxKtX2tc+5pUvZUDzPxGfJ+G3iv/r8l/wDaVeiabD/oEf8A1xrz/wAVXkH/AArTxR+4/wBbeeX/AORYq9A0z/j2jr6fOn/wl0j5zB3/ALRqEk3+p/CvM9Y/feF/HE//AFEvL/8ARVeoTQ/uq8q1n/kUvGn/AGGP/jVc/C/8Sod2ZfwT0nTYf9Fqx/y1qvaf6qP6VJ+9rwcb/vdQ6cL/ALpTJO1cR8QpoIfH/hyeefy44ob/AP8ARVdvXD/EebQ4fG3h+fxHPH9j8m687zf+uVejw5/yMDhz9e1whYm8baV0sfMuZP8AplDUf2zx/qX/ACCvDkdtH/z2u6jm+KnhXTYf+Kc0P7T/ANcYfKrL1Hx54+1iX9x9m02P/v7LX0FPA3re09mfNrDUqVH95UOkh8AeLbqMTXfxBjhc9Y/J6UVxc2i63eyG6ufGF7vfk/vqK6PqQe0o9inoP/ILi/65VoVn6D/yC4v+uVaFetif4pzYH/cwooormNCOipKj8/2oAKIf9T+FFFaARz9qkoooAKjqSo5+1Z/8vgCqfiTR/wC07D9xP5dxFN5sMv8A01rQorT2nsjM2PBPxUsdXtY7HW5/s2qRfu5opv8AVS12FnewXpzBPH/2yryfUtHsdSjzPBHWr8GvOtNd1uxgmkkt7WaLyYvWvGzHKaNWi8RTPby7Nv3tPD1C54k8N+HP+Fi3l/fWP+jxaD9tmh/5ZSyxS+VVK78S3134J8QaXqsEVt5um+bZxRf88qX4qTTw6xqFuT+7/sGLzv8AwKip/wAbfIP2eeCCL/kD3Udetgr1MJTdQ5qtWj9bqUztPDX/ACCLf/rzi/8ARVYfw+/5CfiD/sPS/wDoqtzw1/yLtv8A9ecVc98N/wDj/wDEf/Yel/8ARVeJR3xB61X/AJhx17/yVSeA/wDQIi/9G1v1z95/yVS4/wCwPF/6NroK5c22pHl1f97qEU3+u/GmVYn7VWm/13415NLcCpefuIvtFeu/sT/scz/tHH/heHxF8Y3vhLwno2sf8Se7tB5dzdSxf88pa8a8RwT/ANgXhsv+Pjyf3Nfpb8GLObwt/wAE49Cg+Gmlxalqlh4Ji/s6KH97/p//AC1lrqxuNrYXLZzp/wAT4Dz8T/G5D1P4G/DfQ/Ct1H/wrL403Or6PFD/AMTLT9QvPtMvm17RDD+6ryP4D/sseAfgpqcfinQ769l1i602KPWJZrz91dS/uv3vlV7JDD+6r+OeP3SWb8lOp7Q7aS/ckc0P72q80MHWrk37qvNP2iv2ifCvwB8Lx6re2Mt7ql/N5ej6Vaf626lr5LJ8tzLNcZ9Xw/8AEM6tWjRWp1+pTWGmxfbr6+jto4v+W001eN+PP23fgh4P1mTQ/C099r+oRTeX9k0Sz8zyv+2teWXvhb4w/HjWf+Ew+OviOXTbOX/jz8H6TN+6ii/6ay/8ta7Pw54J8LeD7X7D4W0O2sj/ANMoa/esp8PqVGj/AMKFX2h5NXGr/l2WIf2wPipr03/FOfAK9j/6bateeVUE/wC0J+1beD/QfhX4btv+u15Wv/yyqSGHza9mnwhw7S3w5l9ZrGRN8T/2rdS/5inhyyj/AOW3lWnmVl+KfCH7QnjuwuLHxH+0He28csP+p0qHy/3tdfDDVjyPevTw2Q5RhLVKdL8DOpiap8Kft1T+I/hL8DdD+BPirwpF/wAjta6jD4stP9VdeV/z1/6a18/f8sq/Uz4tfCDwf8cfh9qHw68fWMVzp9/D5f73/llL/wA9a/L/AMY/D3xV8DfiXrHwP8cDzbzRpvM027/5+rCX/VS1+oZbVo5hlFqf/Ls0y2r7KsH/ACyqSo4Yak87yq8w+g9qSeR71JVf7Z7/AKVn3ni/SrOXyPt3mSf88ov3lVTw1asZqozY/wCWtHnfuqxIdR8U6xL/AMSrw9LFH/z1u/3dPtPBWt3n/Ic1uT/rjaV0rA21qM0VKtVLF34j0vTv+P6+jqn/AMJVfXkuND0O5uf+uv7utC08FaJp37+Cx/ef89Zf3ldBDDBD0Fae1wdE7qWU1qv8Q5e00HxjqX7/AFTVY7GP/nlFWhZ+CdKh/f30EtzJ/wA9ppq2JoaIZq4quYt/wz1qWU0aW5HDpsFn/qII4/8ArjUnke9F5qVvZxfv5444/wDptWHeeO9Ehl8iCeS4k/6dIfMrNUsbW2O3/Y6J0E83lCiabzvLrmP7Y8bav+50Pw79mj/563c1RTaFqksv/FU+OPKj/wCnT93XVhsoq3vUOarjkU4ZrEeEtYuL6H93FrEvnf8Af2Ku3s/9UfpXlM/2eL4Oax9iuPM83XZf33/PX/Soq9Ws/wDXSfWvV4gpexwlOx52W1fa1qhL/wAsq8v1jP8Awhviyf8A6j0v/tKvUJv3VeV6p+++H3iw/wDUyS/+jYqy4bWlRnTmP8JHpln5/lR/aKkog70V4GN/3uodmF/ghXnfxm02x1jxRodjfQfu/wDSv/RVeiQd68/+Ln/I2+H/APt6/wDRVerw3/yMTyc//wCRccnD4bvrOP8A4lWqyx/9May9e1PXILuPQ577/v1Xaf8ALKuM8SY/4Tbn/llDX2/OzxMkwX1vMKdOqUvsd/8A9BW6/Oirnn+1Fc/tT9V/1Xyk2NB/5BUf0rQ8/wBqz9B/5BUf0q5XZif4p+O4H/dKZJRRUdZHQFFFFBmFFFSUAR/8sqKKKDMKKKPI96DQKKKKzMyOb/U/hVz4QTf8VP4k/wCutr/6KqnN/qfwq78IP3viPxH/ANflr/6KrOpTtg6p04b/AHymRfFn/kKah/2LkX/pXFR8YBmKOfr/AMSe6qv8YIQNYvP+ecWg/wDt1FUnxm4ijgg6f2bdV04H/dKYqv8AyN6h3nhubydBt4P+mMVc/wDDj/kJ6/8A9h7/ANpV0HhuD/inLfzz/wAsYqw/hjD52s6/B/1Hv/aVfOUd8SfQYn/mHK83/JSp/wDsDxf+jRXSVzsv/JTpP+wR/wC1a6KuXM/4VM82vb21Qjn7VHP2qSo5v9T+FcNMlbFeb/U/hXoPwe/a6+Pf7O1rIPh14qjk0/8A1n9lahD5sUX/AFzrz6ftVbU/+PS4/wCuMtbUadKr+7qGGKp/uT9Wv2HfGHxv+KXgTRPjr8RfiNHfW/ifSIriz0S0s/KitfNr6Thm/dfv6+aP+CZ80F5+x18NJ/8AqUIv/RstfSf/ACyr+S/FXD0aXFVWnh6dvZmeB/3SmZ/jbxVpXg/w5qHiPVZ4orOwh8yaaWvlPwtp1/8AFrxbJ+0J44gkkuL/APd+G7S7/wCXC1rtf23ddvvFUvhT9m3Sr/ypPFupfadel/55aXa/vZf/AGnFT9Nhghijggg8qOKH9zFX6FwDwv8AU8oWYVP4lQ8nMqvta3sySDvUfke9Sf8ALKpIO9ff0jkI6sQd6j8j3qSzoqUzMkqxB3qPyPepIYayAkh/fRYr47/4K3fDGys/C3hf9oSxgjjuNB1KLTtYl/6dZa+xIO9cP+0r8Df+Gg/gb4j+EsF9FHJrNn5dnLN/qopf+WVe7keNo4TGU1U2IqaM/Kv/AITzSppfI0KC5vpP+WPlQ1Y8jxxrA/cWMdlH/wBNv9bXUf8ACN654D8R3Hwy8caH/ZPiDS/3d5aeT/rf+msVXPJgh6V9HjatLC1f3dM+6ynBf2hhKdQ5Sz+GXnDz9c1W5uZP+u1bem+G9L04/wCg2Mcf1rQqveeJNK02L/Tb6KL/AK6zV51TE4yt/DPfp5bg6Jc+x+360f8ALWubm+IVjOfI0PS729k/6dIaJrzxxN+/voLLSbf/AJ63c1FPLcZV/iGn1jB0jpJpoOlZd54w8OaaP9O1WLzP+mVcZqPiXwPZ+ZNrfje91KT/AJ5adVaHx7BD5n/CHfDmKP8A6e9Rr0sPkH/Pw4qmbUaR1o8d32o8eHfC1zc/9NZf3dJ5Pje8l8/VdcttNj/55Vxd54w8fTWmNV8U22m28v8AyytIaz4YdD1E+fPrlzcyeT5n72avSp5TQpdDzamdnYXmp/DLTZf+JrrkmpXHt+8qufizBZxf8U54O8uP/nrL+7rm9HhsdT8W6X4P8OfYra81S8+zGaaHzfKq78d/B+ufCa1s7GfVYtSj1T93+5h8vyq7aeCovkPKxOf0qIl5488Y6xL5M/im2to/+eVpWPqU+kxar5F8L3UriX/ljivcfjX4I8K2fwh8jStDtraSWa1jhmhh/exV5l4V0EaD4t1iD+1ftP8Ax6/vpa1wVTCVfaVP5D4DNuOqWFrWMTTZf+LG3ghgkj83Xf8A26ir2+z/ANbJ/wBda8gu4YP+FL3HkW/+t8R/+3UVet2X+rk/6715vFDvg1/XY++4Ox39of7QJef6ofSvMLv/AJJ/4o/7GWX/ANGxV6heV5gf+SfeID/z18VS/wDo2KvM4b0o1GfS5tuel2/U/Q1IP9d+FMgh/dfhTx/rvwr53E/xpno4X+CFed/Fz/kcvD//AG9f+iq9In7V5v8AFn/kcPDf/b1/6Kr2eFv+Rgednf8AuhH/AMsq4PUpvtnjK45/5Y+XXcf8sq4ezzNr2oT/APTby6+ypb1Dm4Tp+1zGmE0uZDxRRexgXTg+tFcx+u3sbmg/8gqP6Vcg71T0H/jwj/64mrlejif4p/PuW/7mSVHUn/LKo6yNAooooAPP9qKjn7Ued+6oAkqSo6KAJKjoqTyPegCOiijyf3VZmYTf6n8KsfBj/kNa/wD9fkX/AKKqvN/qfwq78Gf+PnW/+wlF/wCiqzxH+6VTpw3++Uyl8X/+QpqH/Yt/+3UVSfGCGDzY/wDsG3VR/GD9zfah/wBirL/6VRVJ8YBmKOfr/wASe6rpwy/2SkaVP+RhUO80Gb/iTR/9cYqxPhj/AMh7xHP/ANR6X/0VWvoH77Qbf/rjFWR8OD52seIx/wBR6X/0VXzmG3xJ7lXfDle8mP8Aws6T9/8A8wjj/v7W/XP6j/yU7/uA/wDtWtjzv3tZY6nejTPHxv8AvlQk/wCWtRTf678al8/2qOftXjajpbFeb/U/hWfr03k6XcXH/TGWtSb/AFP4Vz/i6byfDuoZ/wCfSWvQwCvXsLFO1E/Wn/gmfF9j/Y5+Gdj/AM8vCFr/AORZZa+j5+1fPf8AwT4h8n9lv4bnH/Mk2H/oqvfJ5p/K8g/6yv5L8S37bjTEP/p4c2H/AN0pnzB4xlm8VftteJ72fMsfhzwhYaTZ/wDTKW6l82WunhhxFHWPeGCz/ab+IEH/AC8S/YLn/tlLF5Vbnnfuq/cMpq/8JGGh/wBOzwav8cWb/U/hVb7ZB5vkefH5n/PKsP4qa94j0HwHqmq+DtKlvtVis/8AiW2kP/PX/llXhfw++Fn7Yfwl1W88cXo0TxjqmveVJqUt3efZpYov+eUVe/hcCqtH2lzOqfTEM0HlVYhmrw+H9pfx/oP7j4jfs5+JLH/prp/+kxVqWf7Y3wq8mP8AtWx1+yk/6e9BlrKpgqxJ7BB3qx5sPrXk837V3wes/wDUT6le/wDTGHTZajH7V3hWbzP7D+HPi258r/qD+VXF9Wq3sB65DefvasQ3n7r9/b18V+PP+Cv/AIA0GOQeDvhlfS3EX/QRmijr5z+MH/BSb9oX4421xpUE8um6XL/y6aJ+6/8AIte5huFsxxVmOlS9sesf8FLPip8OdS/aQ8N/8Irff2lf6X4blttel06HzP3ssv7qKvEP+Ek8UalD/wASrw79mj/566hNXBReKvHHlSf2XBZaakv+ul/1ktU7z/iZX3ka54xubmT/AJ4zTV91Symk6NOnU/5dn0mW1q2A/dnWanr9v5cn/CU/EX9553+p0+sv/hK/Dnmyf8I74HlvZP8An71Caq9npulWcWbGxiq5/wBO/wCla08NSo9DpqZlWqkc3ivx/qUUkFvqsem2/wDzxtIap/8ACOQXkvn65fXN7J/01mrQqSGHzaXtTm9pWM+b+yvDdhcarBYxRxxQ1JoMPjHxV4kj0qxg+xRy6b9t827h/wBbVfxv/wAilqn/AF5y+dWh4kh8Yax4i8PweB74xyf8I3F5s0s3/LKv03gHhfCcQVv9oPzzjHiTF5T7OFMufCvR4NY+N2j6V4jsY763ihuv33/LKWWKtn9q7QbGz8d6HBodvHZRy6RL53kw+X/y1qt8Dpr6Xxd4Tgmg/wBIis9U87/rrVn9qf8A5H/Q4P8AqBS/+ja8njTKKWS8RfV8P/DDgLMsXxBm9P6wcF8B9N8j40+G/P8A9Z/aUv8A6Kr0X9sWz+2XXhv/AK/K4r4GQ+d8bvDf/X5L/wCiq7H9rmXyde8Nwf8ALMS/+1a+OxFR/wBoU0j7XizC0cJmHs6Z3/xrmn/4VLb8/wCtvLD/ANG15PZzf8VbrHP+q8qvUPjx/wAkv0+Af8tdSsK8v0f/AJGPXP8ArtFHXmZLT/dVP+vkz+fuJ6f/AApGQP33wbj/AOmviP8A9uq9es/9UfpXkkMxi+EGnweT/wAzT/7dV63Z/wCqP0rPi3+BTP6B8PKdsupi3leYT/vvhzqhz/zNMv8A6Nir0+ftXmDf8k2vP+xol/8ASqKuLhv+DU+R9bnW56XZ/wCqP0qSo7P/AFp+tSV8/jf97qHr4X+CEHevOPi/NBZ+K9Ann/1f+lf+iq9Hrzv4qeJLHwf420TXL6y+0x/6VH5Vetw0v+FE8nOv90MeG81XUpfI0Pw5eyUaD8E/H/2q4vr6e2svNm8zyq1P+FkeP9Yij/sOCyso/wDnr/rKp3l54qvIpP8AhI/GMvl/9Mv3dfY/vv4Z4+Cxv9n1adSnULg+Buk/8vPjL5+/FFY0Nn4V8sfaddw/f99RXF7LF/8APw9f/W2j/wA/CDQf+QXF/wBcquVT0H/kFxf9cquV60/4p8vlv+5hRRUlZHQR0UUUGYf8tajqSo4O9ABRUnlQ+lE0NAEdWIO9R0QzUAHke9SUUUAV5v8AU/hWh8E5v9J1+c/9Bj/2lWfN/qfwrQ+Bsv8AyMHvrH/tKufEf8i6qa4P/fKZl/GX/kL6h/2Ksv8A6VRVc+MH77y/+wPdVX+MB87U9U/7FWX/ANKoqk+Ks0E/+o/5ZaPdR/8AoqtcF/ueHHiP98qHeaD+50G3g/6YxVifDE+TqfiSf/nrr0v/AKKrf0f/AJA1v/1wrm/hj/yGvEn/AGHpf/RVfP4e/wDtJ71T/mHNDWPB/wDaXiL+2xfSx/6H9n/dVia9/bfgSSPVb6f7Tpcs3lzf89bau7rH8eaP/a/hjULH/nrZy1xYLHXrU6dU6cyy2jVo+0pkcM3nxVHNefuq5PR9X8Y3mmW9hYeD5Y7iKGKKaa7q7D4Q8VaiJP7c8ReXH/zytK7MTgaNKr/EPnMNRr1dC3qXirSrTi9voo65jxr41N3oOoW+laVc3EZhl86b/nlXWWnw/wDDtp+/Nj5sn/PW7qPxrpsH/CJXdlB/y9fu4Yv+utb4OpgqNWmdlXKa1Wh+8P17/YVs59N/Zp+H9jPB5ckXgnS/3X/bKvcLyuH+D+gweG/CWl6HB/x72Gm2ttD/ANsrWKKu8MMENfxF4h432vEdSov+fkzjp0/Y0qdM+bP2y/Dfir4ceKNL/au8H2MlzZ6XDFp3i/T4f+Wth5v+t/7ZVPoOvaVr+l2+uaHfRXNndQ+ZZ3cVfQGsaPY6xp8lje2MVzbyw+XNDN/y1r5X8YfBPxj+yvrN5rnw50q+1/4f3832mbRIv+PnRpf+mX/TKv1HgHizB5hlCweIqfvKZ83mWGrYXF+0p/8ALw7jyf8Alv8ArR5M/m1z/gn4keFfiDpkeqeDtcjvY/8Anl/y1i/66xVued18+v0KlWrfbCpSdIk8meHrR9jgmij8+C2k/wCu0NH2z3/Sia8gs4pL2+8uOP8A56zTfuq1qY2tcxAabYwy5gsbbzP+uNcP+05+0h4A/Zp+H154q8Y65bfaPscsdnp3/LW6l8qvB/2uv+CgX9j6ZrHgf9m2+i1LULWGX+0vEMP/AB7Wv/XKvl+z+G9j42+I0k/xN1zUtfkuvCsWo+dqE3meVLLL/wAsq+tyTJKtX/aMYcVXHUaR4naaxBqUt5fQeFpbm8lvJbmY+T/qvNlo1jx5PLo1wNDsbm2kim8vzvJ/1Utdho+g2/hvWdc0Oxnl+z2usS+T5tc/iCbS7ixg/wCXrxJ5dfvOScL0cwo066qHwGJ46rYStUw9OmaGg+CfH83i238OaHqsWpebZy3t5Dd/u/Kiir1jwr8PPDmpfDTwXpWuaFbSf29r0sl5N/y1li/ey1y/w9m8nxl4k1zyPM+weCZfJ/7ay16R/a9l4KPgsXsEsceg+FbrUZv+/XlV+oZVwXkWAX1irTP0DgbHYvNqXtMQHiX9m/4OaPayX1x4jl0SOX/nteV4f42m8OeA/GX9laH4w/tuz8j/AF0MP/LWl8b+JPEXxH1671ufzNl1L5kUUs3+qirG/wCEV8mb9/qv/fqvgONc64X/AN3weHP2LC8L4rF/wyP/AITC+m/1Glf9/a9g/Yo+AN9+058Vbjwd438YXPh/Q/scskOuWmm+ZFFL/wA8vNryeHTdEtIv+Wktffn/AASL/bL+JtkZP2ZfCvwC0TxBZ2EMtz9r/dRS+V5v/LX/AJ61+aZb7Gti/Z1EZ8SZA8qyn2lM4P8AaE/4JI/GPwf8OfEHjH4c/FTw34t0ew0eW5vPJvPKuvKii82vA/Dmm+T440Of/qT4q/Yz45XngfxJ8JfGHhzx/wDsr6l4bvLrw3dRw65aeV9li/0X/plX43w+NvB2g+MtL+3arH5cXhuKP/nr+9r+ifD2hlmVVKntD+VeOamNx/s7Uy58DYPI+I3hv/lpHLDrP/o2oP2qP+Sk6HD/ANQiX/0bWN8N/G8+g+I9D1yDwrqV9Ha/b/O8qH/nrLWp8TrTxV8VPGNv4p+w22kR2tn9m/4mF5X5P4jVaNbif2lOp+7PrfDDA4vB4uniKpz/AOzr+++N3h/A/wCW11J/5K12P7X8Xm+IfDA/d8//AB2uO03w34H8K38euar8VP8ATIv9T/Z9STeN/AF5LHP/AMIrqWtyRf6m71Gvz2pS9rWhU/kP1jiPD0MwxftKZ6R8a/GPhW88G2eh2OuR3Nxa6layTRQ/vP8AVV53oN54jvNY1i4sfB9zLHdTRSQyy/uv+WVH/CwvERi/4kng7TdN/wCutQan4k8b6wf+Jr4qlj/6Y2kPl1lhqf1X3D4HG8F4TMMX7SpUI9NhH/CsNHgng/ef8JH++/8AAqvVof8AVJ9K8o0L/kmHhiA/8tdei/8ARstet2f+qP0ryeKf4VM/R+E8CsHR9mLN/qfwryyH/kn/AD/y18R/+3Vep3kP+iyV5ZHDn4V28/8A1Mcn/pVXPw1/BqeqO/O96Z6ZYfeH41PUFjCNlTwd6+exP+9VD1sN/BCftXmfxghgvPG2hwTwRyx+Tdfupa9M/dV5n8U5v+LgaJj/AJ43Ve1wv/yMTyc6/wB0qHP/APCHwQf8gqe5sf8ArjNUlnZ315rOl6Hrk32mO6vJfO/65RVuVQ0H998Qbf8A6ddNll/7+19lTqfvmfluf4l4TLalSmdPDoHhzyx/xTltRXJfEHxTBpniD7Jj7tun8qK5mq1z8Peb5vf+IQaD/wAeEf8A1xNXKraF/wAgaP61d8n97XbP+Kf0zlv+6Uwg70eR70Qw/vasf8sqyOgr0UUVmZkfke9R/wDLWrFE/agCOijyPeitACpPI96If9T+FFZgFR0UVmATf6n8KsfA2IzjXMf9Bj/2lVK8/wBUPpWj8Bv+PHWP+wxL/wCiqMR/yLqhrgv+RjTKfxg/5Cmofv8A/mVZf/SqKj4wf8s4P+oPdc/9+qPjZ5H2/UP+xVl/9KoqPi10jz/y10G6/wDaVdGB/wBzw5niav8Awo1D0CzPk6XH/wBcYqwPhl5/9p+I/wDsOy/+iq29F/5Bcf8A1xirmPBOpQabfeI5554ov+J7/wC0q8Gkm3iT36j/AHWHOz8/2o82H1rk9Y+J2h2f7iDzJf8ArlXN6x8YL2L/AFFvbW3/AF1m8yvIpZLi6ruj1sRjsHRR6JMIP+e9Zeo+KdE06L9/fRV5XeeNtV1i6k8+e9uf/IUVV/Pv7u//ANBv7K28qb/rrLXt0cgrae1qHmvOaK/hn0R+yZ8PL79sD9oLQ/gRoZvbazl/03XtQ/55WsVfUn7Vv/BJL41aN8UPDeufs1/CyLUvBdheWtxqUUupf6TL5UtSf8G9XwfmvNK8aftC6pfSXNxrOpRaLps03/PKL97L/wCRa/Wizhg+y+RX6XkvB2X18J+8PybijjXMaGM/d/wz470H9oqDw3dSaV8Rvhl4k0C4/wCW32vTZfKrqLP9oT4V3sX/ACONtH/12/dV9OTWcF5D5F9BFLH/ANNYax9T+Ffw51n/AI/vAGkXP/XXTYq/EeKfoy0cxxlTE4fEHDS8RqVX+JTPA5vjZ8OYYvPn8cabHH/12qOb48fB3zfsN94403zJf+nyvbLz9nX4Hzf6/wCEmifX+zYqz5v2Y/gDefv5/g74f/8ABbXyuF+i5m1D95SxJpU4+wj/AOXZ8l/E74S/sr+MNUk8VaH4/tvC+qf6ybUNEvPL83/rrXnes2eq6PLHP4V/bD029t/J/cxXem+bJX05+2l4D+GXgn4Qf8IP4H+HOiW2ueMryLRdH8qzi/deb/rZf+/VU/BXwU+HXw+0ez0PRPCtlH9ghijhm+x/9Mq9v/iGHEXD/s6eIxHtD18pzalmv7yB8x/8Jt8af9RY339peV/rrvT9Blrc8H/sc/G/9pzRrfXNc8R3ur6Hqn+p868+zW3/AH6r6om/srR4pJ9Vntra3/5bSzVyf7F3xa8HaB8VfEnwB0PxjY3tnLN/bXhvyZv9VFL/AK2L/v7X2WQcFUquLp/WKhpm9XF4XB+0w9M+I/2x/wDglJ4r/ZY/ZGuPHHgEnUriws7r/hKtPtP3sUsX/PWvn/w3k/EX9z+9ji8B2H/kWWv3817wrofjbwleeFdcsY7nS9Us5ba8h/56xS1+E/xg+DOq/sl/th+OPhX44n+zafpej2tz4bu5f+Xqw+1fuq/Q+IsgpYTCfuz84w+ZPF1rHgdpObzWtcvv+euvXX/o2uY0gGbVNPg/56+I7qX/AL9RVfh8a6VDd3H7/wC0yS6ldSQ+TD/01qnoNp8QNT16PXYfB3lxxTXUkPnfuvN82vuuG8bg8vyml7SofH1cozLF5tU9nTO88Ewj+wfHFx/y0l/svSa7D47+JJ/Dl/rFvBYxSeV4VtbL/rl5sv8A9qrzfQdT8VeFdG1TQ/EfirRLGO/1KLUf3X7yXzaj17xj4c1e/uNW1vxJq+t3F/8A8fcUMPlRS17edcfZS8FUw+HP3zgHLquXYCn9YOfs4YBFi91WrFpB9rlxY2Nzc/8AbGrlnr3knyfDnwzto0i/5a3c3m1Yn1j4jXn+o1W2sY/+eWnQ1/P+JvWr+0P2v/XHCYSj7OnTI4PB/iqaLz/7Dito/wDnrdzV0nws8beI/gP49t/iL4U+LVtpuqWB4+yf8ta4y7/sOW78nW/EVzc3H/LaKaakhn8LWml3F9oljbSyRfu/33/PWjDYatVrfuz5vHcarMKX1dnrnxI/be+KnxO+0f8ACVfE3xbr8d1D++tPO8uKvN4vGGqw+XB4V+HOm2Mf/LGa7/e1uePPh744+GOl6Xqviuey+z6peRRww2n/ACy/dVj/AGyC8/fwTxSRy/8APKvWxlXOcv8A3cz46rhsFW/iUw1LX/iNrH7ifxVFbR+d/qrSGse8s/O1C30q+/tbVtQuv9TaRVXm8N3vjDWbixsdVktryXWLWys5f+ute0+A/hLqvw3+NmhjVfFUepeboOqSQzRQ+V5X+qrmrw9nS9riD5+pn2DoVamHpf8ALs8m8K+A9K1jVNUPiOeXRJLDyo4dOm/dS/6qjwfo/wATfFVho/8AxI5Io9UvPs0OrTf6quo+J3w3g8YfF/xh4xuL7/jwm+zf9+rWvSNHhng+F/wzgEH/AC2ta+izKphKPDtPEU6f8Q+Lw3FOLrZvUpnjnxr8M+JPg1dWeiX2qxXsl9Z+ZDLFD/qq5bTde8VfYP38EVz/ANNq9R/bSl/4qbSIP+odL/6Nrzbw3D/oEmP5V8XQrqphFUmfu/B+S/2rQ9pUOl0H918OvCcP/Uei/wDRtetQ/wCqT6V5ZZw/8Ud4Tg/6j0VeoQ/6n8K+f4od6VM9nD4b6pX9mSan/wAe0leWWcwHwr0+D/qY/wD26r0+8/49pa8stf8AkmGl/wDYx/8At1LT4b/gVDhzvemepw/6n8KKIYf3VE/avm8T/HqHq0v4AGEYHNeZ/FSH/i4Gh5/587qvUK8z+Kv/ACP+h/8AXndV63Cz/wBuPFz/AP3Qjqn8PovtnijXNV/65W9WM/8ATf8ASq/ws/c+F7zVZ/8Al61GW5/79fuq+1itah+OccYn2WXKmcP478NXvj3xjqOr2U8nlwXJthkf88+KK6b4d6YNR8Of2kf+Xi7mk/NzRXpJ1ktD8zWAlYm0D/jwStCs/Qf+QZb/APXGtCuGf8U/ovLf9zCiipIYfNrI6COo/wDlrUk/aiszMjn7UUUVoAVH+9qSo/I96zMySiftRRP2o9qAUVHUlZgV5+1anwNmg+waoMf8x6X/ANpVn1ofA2E/2Nqn/YYl/wDaVGN/5F9Q6Mt/5GNMzPjXxqd5P/z18LS/+jYqi+MHXn/oW7r/ANpVZ+MH/IcufPn/AHf/AAit1/6NiqL4t/8ALL/sA3X/ALSrty7TB0jDE0v+FKoeg6P/AMgu2/64xV4d4km8Rf8ACZ63/ZVj5sf9pf62vbLL/jwT/rjFXlkUvneJ9fg9dX/9pV5OUW+u4k9bNr0sup+zOSvL2eG1kn1y3vf3X/LL/Vx1sCz/ALB1n/hG73RPNvIoYvJFpD5n+tq54qhnmtbfSv8An/1K1j8r/trXYabrFjZ6zqh/1lxdeKtLtvK8nzZZYoq+1wuCpVsuqVD8zzXO62EzGnh6h53qXhqabxbeQa5Y3NtJF/yxl/5ZVia7pH9myIP+utfR/g/9j79rD9or4ja5rnwy+BGt3NndTfubvULP7NF5VegWf/BD3/goVr2qWGq33wy02Oz+2RSXf/Ez/e+VXHhsLi6tbY/QKeb5FSyf2n/Lw/Sz/gk58Df+FJ/seeB/Dc8Hl3Eum/bbz/rrdfvZa+uPtnk814P4U+OXgD4M2Gn+DvipY3PheSKHy/N1CH/Rv+/teqaP8SPB3iqKOfwr4x029jl/1P2S8ikr9Qyil7GlaofhPElT63W9pSOos5u9WPO82suG8qxDefuq9up7GqfJWZcoqp/aNv6mkmvP9F/cVwCpHzX+0V4kg8Yfth+D/AB/ex+F/Ct/r00P/TWWX7LFWX8YfjNofwxsI7GC3/tLXLr93o+k2n+tl/6a/wDXKuL/AGhPAfj/AMbftLfED9oT4ZQSy658L4dL0mHSYpv+QpYS2st1LFXP/s369B8SPBv/AA0N4q8qPWNe83zvtf8AzC4opfK+y/8ATKvgs6y3NsXjPaf8uz9i4KqUKq+rmhZ/B/xV8Tr/AP4Sr4/eKrm9k879z4etJvKtrWL/AJ5S/wDPWub+MPiSx+A/xV+H+q/CTwrYxyeHNSl1bxJDaQ/6rRv9VL/6NrtLz9pD4LWd/JYz+P7aS487995X72tD9i3w34c/aE1T4ofGnVYIr7T/ABHeS+GNHmm/58LWL97/AORZa7cLgsHSa5D7bO/Y4XLT7I8H6n/bGjR6rBP5tvdQ+ZDL/wA9Yq+D/wDgv9+yX/wsj4I6X+1R4O8OR3usfD7/AJCUP/P1pcv+t83/AK5V9IfscePJ9N+EEngHxxfR22qfD68l0XUpruby/wB1F/qpf+/XlV8r/wDBXr/grp8K/hv8KtY/Zz+GWlf8JBqnijR5dOvNWmh/0G1il/1v73/lrX0eJp0cVl1T2h+EYZVaWZc9M/Jf+0/GMvlz2P8AZum28sPmQ/ZIaJtN1S841zxVey/9tv3Vc3aeMJ4bCz0rQp/t3lQ+X5s0NSTeKtc/su8/4lUnmWsPmedDX5RiMPjKtb2VI/acNhaNHLfrtRHSaD4J/tK/vDYz2VtHYQxSXmo3f7z/AFtbHirwfqvw9i0u+vtcsb7T9U/1Mtp/1yrqPgD8PYLy68WaHrl9Jcxy/YI5pv8AVf8ALLzag/ah8N6Vo+geFPCtjYyfZ4prr/XTf9Mq83EJ4XMfq9U87DZlVzDF/wCzHHeG/tvjzxlZ+B9DvpLH7VeSxzXf/PL915tXP+Eb0r+wdUvrHXNWsrzS/K877X+883975VV/2aYfJ+LWhwf9RK/k/wDJWvbPj9DY2fgi38iCKOS616w879z/AK397WOMxNHC4unh/wDn4eJm+bZjhKtSmfOemmCCK41X7f8AvIvNuf8AU/63975VbkPgnQ9Yi8UeKp/3l5a6xFHD/wCQqk8K+FdD8SaDZ6rqtv5snnXX/o2tTQf3Hw+1ieD/AJa+Kv8A2rFFX6RwBhsHmGeLD1D81pZ/jKuZfxD6A8eabY3vi3wfpWq2Mdzb+ddSTRTf9MrWvmPwr8Pb7UtG/tWDxHLbR3U0skMMMP8Aqv3tfTnxIvPsfxG8N8/6qz1ST/yVrwf4ezed4N0s4/5c6/fM64WyjFVP3lM+4444gxeVZPSqUP4hj/D3R76y8eWdjPP5skvjy1/ff89fKir6A1Lz/wDheelwf88vCt1/5Flrxf4cS/bPir4fgz+7l8bSyf8AfqKvbIf33x4t/wDpl4V/9uq/mnj3A0cvzH2WHPhclxOMzD/aKp5vNeefd/ES+nP7v+2Lr/0lrtIYYIfDnwvsf+ev2X/0lrg5poP+EX8eX3/UY1SvRPJ/ffDe3/55Q/8AuPrfP6fsuEsPTHkv/I8qHlf7Y03neN9Lg/6hstcHoP8Ax4v9a7j9sAeT8QNPOP8AmD/+1a4fQf8AkG/jXwUP+RfTP7N8NfZf2adZDD53hfwfBn/mPRV6PZ/6o/SvPLP/AJA/gv8A7CVeiWf/AB7RV4XEf8KmRp/aNQNS/wCPV/8ArjXl+j/8kv0P/sPRf+lc1eoalN5NhJ/1xrzPToYP+FZ+F/8AprrEX/o2Wt+GP90qHh5t/Gpnp8P/AB6UtEP+p/CivmsV/GqHrUv4AV5x8SP33xA0f/V/8g66r0SL96o/GvOviReeFYfiBpc/iqfyrP8As26r1+F9MaeTn/8AyLkY/iTUrLTbCScTx/8ATGs/R9egs/hrHoWlQXMl5/Zsvk+VZ/8ALWWus/4TX4ZaPa4sfDn2n/tjVj/hcF95X+g+DraKP/lj501fW/XaqfuUz87zrhyjmvs/aVDnPB2neI7Lw1aWR8H3H7mIJz7UVr/8Jr4xl/0ndpMPm/P5fpmit/7RrHN/qflv/Pww9B8j+y48VcrP0GH/AIlcdXK1xP8AFPoct/3MkoqOiuY7CSiio6DMKPP9qKKACiiitACiiib/AFP4VnVAjoqOpKDMivP9UPpWz8DP+RXvP+wxdVjXn+qH0rS+A/8AyKVxP/1GLqs8b/yLqh0ZZ/yMaZnfGbyP7QvP+en/AAjcv/o2Ko/i1N5MVvn/AKA8v/tKl+Mv/H1cH/np4Wuv/RsVRfF+DyYbf/sAy/8AtKujAr/Y8OPG1P8AbKh6JZzf6BXmlpFAfEevzf8AUX/9pV6Hpvn/AGWODFav7EP7Fnjf9tj9pDV/BFjDJbeD7HUvtPiTVfT/AKZR15+SUm8ZiTozrE+xyinUZp/sZ/sB/Fr9urxlZ33hWeXSPCel6lFJeeJpof8AWy/88oq/XT9l3/gmD+yv+zra299pXgC21fWPO8ybVtRh8yWWWvYPgb8B/A/wZ+H2n+APAPhy203S7Cz/ANDtIa9Es9N8niv2bhzKKNPL/wB4fg/E+dUcfjPaUyvpuj2NnFHBY2MUf/XKGrkHerMP+p/Cov3ENe+sLQo/wz5Opiq9X/l4c/428E+DvHmg3Hhzxj4cttS0+6h8ua0u4fN82vgvxh+xz4A/ZL+KtvY64NWtvhv4ovPL03xNpN5LFLoN1L/yyl/6ZV+hk/auT+Knw98OfFTwHrHw/wDGNj9p0vVLP7NND/7VrmqU/aVfaHoZVmLp1fZ1f4Z4nD+yv8TdB/074ZftUa/bf8tPJ1GH7TFUf/CN/wDBRjwfNJPB4x8G+KY/+eU0MttLVj9i3xv4q03Stc/Zz+I2qyXPiT4fXn2L7XL/AK2/0uX/AI9Zf+/Ve8Qd6eHqe098MdUo0qv7s+e5vjx+2X4bv/I8R/sk/wBpR/8AP3omsRS1Ys/25Nch8zStc/Ze8dW15/zxh03zK+gIbPyasRQz9IKs41VpHg/7KNn441jxT8SPib4q8AXvh+Pxb4qtb3TbTUP9bFFFaxWtfO/7b37Lt94J+Ofg/Svhz4qk0nwX8VfGH2bxV4eh/wCWV1FFLdfuv+uvlV+hEMP7qvmP/gopZTw+KPgfrll/y6/Ga187/tra3UVc2KxVXC5dUpwPp+H8ytmNM8j8N+A/A/gn9rmPwpY+FbK20vVPhL5lnaeT/wA+uoReb/5Clr1D9l2HSfgz8bvEHwdg8qx0PXof7a8N2n+q8qX/AFV1FF/6Nr5//wCCh3xCvv2e7Xwn+0LpU/2a8sNN1nw5/wBNf9Pi/df+RYqp6l+0J8VfHml+C/jF4O+GV95fgi8tdWvNc1abypbqLyv9Kiii/wCmv72vzXBfXPrntD9VzJvF4L2Z9uePP2Lfgr8TviNc/E3xVPqX2i6s4o9S060vPLtb/wAr/nrFXm/7dX/BPH4A/G34S6Xqo+Fdlc3ngib7bZ6TaQ+X5tr/AMtYq+hPAfiux8X+F9P8VaVP5tnqlnFc2c3/AEylroIf30v7/wD1dfpf1ali8H+7PwytjcXl2NPzj1j/AIIJ/saftCfD6z+Jv7Ofj/VvDcmqQ+ZZ/vvtMUX/AEy8qvh/9s3/AIJa/tU/sN+HNcvvFXhyTxR4XvxF5PifRIfMitYv+msX/LKv2I+Ep0r9m/8AaW1T4A/8e2h+MoZde8H/APPL7V/y9Wv/ALVr6MvLOy17RrjStcsba5t5YfLmtLuHzIpYq5sqy3CYCr7Sp/EPaxnFebYrLvq9Sp+7qH86fwBmg1LWfFmq6Vcebb/2xaxwy/8AbrXL/taTf8T3QIP+mN1JX6Uf8FAv+CSN98Gb/VP2k/2LvDkf9ly/6T4q8Bxf6qX/AKeravy7/ac8V6Hr3iLw/fWN9/qtNuvOim/1sUvm/wCqlr8rz7A5jV4t+sVF+7PrfD50vbU+Qp/s0w+d8WtPnH/LLTdUk/8ARVeoftUXgh8JaX5H/QYi/wDRUteP/s3+MNK8KfEW31TXfN+z/wBg38fm+T5n72WWvQPjX42HxC0rT7Hwfod9c/ZbvzP3sP8A0y8qvEzWl/wr4ep/z7HxJhcbi8wxH7s5P4Y/ufBGl/8AXHzKk8OHPwwjgP8Ay18YeV/5NVH4K8N/EzTfDtnpQ8OW0clrD5f76apLPwH4/wBN0aPQ7jxVZWVvFefbf+2vm+bX3PBWdYTh/PKmMxHwHwOB4PzepiPaezPdPjNP/wAVbZ3EH/Lr4b1Tzv8A0VXh/g/7PZ+F9P8A3/lf6HF/rq2PFWpT69LJ/wAJV8Wv3ksMsfmw/wDPKWufs4fgtoMUcF9fXN9J/wBdpa/VsT4uZdWX7umfovFXBWY5/ltKnTD4V6x4cs/iDod9farFHb2uvSyTTf8APL91LXqk3xa8D6b8Y7jxH/aslzZ/8I3FbQzWln5v73zfNrzOH4hfDrTfM/4RzwB5n/bGrH/C2tcm/wCQV4Hij8r/AJ6zV+H8UZvWz/MfrFOmZ8P+HtXL6Ps8RUI4dS8Val4S8QeHLHwdeyXGs6ldSQyy/u/3Ustdx/wlXj+8l8P30Gh21jJoNn5f76b/AFv7ryq4Ob4hfEa7k8+D7Fbf+RKzJfG2ualL/p3j6SP/AJ7eVXNmOa4vMMBTw9T/AJdn0GF4LyPL8XUxFSodX8Qfh9rnxO16PxF4j8RW1tJFD5flRf8APKqZ+HHgHQbCTz/Ecn+pl8nzZq48TwalayXs+q6lcxxfvP300v72rGveENW0fQZNV1TwRfRR+T+5u7uvJVOrpTdQ+wwWd0Mqo+yw50mgiD+wfA+R/wAvvmf+Qpa9Ehh8qGM15p4cM50zwBD/AM9T/wC0q9Hh/fRRivI4op29mexkuJ9v+8Itf/5A1x/1xlrzyz/5J94Pg/6jFr/6Nlr0TXv+PG5/64y153pv/Ik+D/8AsJ2v/tWjhzTB1TnzqpevTPTP9VRN/qfwqODvRP2r5bE/xj2aX8ASH/XfjXnHxU02DUfiBpdvfQRyR/2bdSfva9Irzf4k/wDJQbD/ALBt1XucL/8AIwPJz/8A5FxqfAfwf4cvPihcWOq2H2m3i0eW58mb/Veb5teieAvhj4HHxB8WQT6HHLHazWsVnDL/AKqLzYq4/wCA8x/4W15H/Ut3X/o2KvTPh753/CwfGn/X5a/+iq9LNcTWo16lv+fZ+KZ1ia9Gt+7qHmmpfDHwhF4v1+2Gl/u4dWKQfvv4BFFiiuneDPi7xL+4/wCY9J/6Kiorl+s1tP3nb9D59Y7Gf8/DxPSP+PCP/rjVyq+gw/8AErj/AOuNPm/13419jP8Ain6/gf8AcyWiiiuY7CSiiigzI6Kko8j3oAjo8j3qSo6ACio4O9SVmZkdFFFCp6gtyK8/1Q+la3wI/wCROk/7CNz/AOjaxryYeVWz8D5seCMH/oI3OP8Av7TzH/kW1Dty3/kYmN8Zv+Qvef8AYqy/+jYqj+LRuJvLg/6gMv8A6NipfjN/yE7n/sW7r/0bFSfFqb/Ssf8AUBl/9GxV2Zb/AMi6kc2J/wCRhUO4m/tW8is9D8K2P2nWNZmistHtP+mstftp/wAE+P2RdE/ZS+A+j/Dqyg83UJYftviTUP8AlrdX8v8Ara/Ov/gkL8DrH4zftQah8VPEdj5ml/D6zij039z/AMv8tfsZ4bs/JtI6+y4KyWl7apUqUz4Tjbier7Gng6ZsWcPk1Y4mmqvUlfqFRKij8Zq61vaEnn+1V5v9d+NSTTVTmmrzqlQ1JJ+1V7z99+4qSaGq9Ygj5v8AjlD/AMKs/bS+H/xiguPKs/GVndeFNe/66/621/8AasVfQln/AKo/SvF/2/dBvrz9njVPFWlQf6Z4SvLDXofK/wCnW6ill/8AIXm16x4V1ix1jRrfXLH/AFd1DFcw/wDbWLzf/atcXtK3tj0alT2tE6CDvViGGq8P/LP8asef7VqcQV8n/wDBVbxrB8N/hp4D8fz2Nzff2X8VNLuYdOtIfMlupfKl/dV9YT9q+W/+CkH76L4T6VPBHLHdfGDS/O87/plFLLWdSnRq0v3h6/D/AO9zemeD+EPgD4j+KniiP4t/tNTx6lef8fOj+Gf+XXS/+2X/AD1r2j+x7Gawk0q+gi+xyw/ZvJ/6ZVJD++i/661Yrl+rYT2v7g/oXDYH2dAsf8E2fFd9Z/CC8+C2uX0tzqHw58SXWized/rfsv8ArbX/AMhf+iq+qLOHtXxH8B9Yn+GP7euoaHfeXFp/xL8ExXMP/TW/sf8A7VLX2xo837qOurDVLUj8H4xwX1XNjx/9ur4b+I9d+CH/AAs3wBY+b4s+H2pReI9B/wCmv2X/AFsX/bWLza9U+D/xC0P4neA9H+I3hyfzNP17TYr2z/7a1uTeRNFJBOfMjl/dzV85/sQ3k/wx8UfED9la+n/5EjxVLe6D/wBgu/8A3sX/AH6l82KulW9t7Q8OnarRPqTMP/PvX5P/APBZL/glTB4J1rUP22f2bPAEd7H/AKzxt4Tih/8AJqKv1chmqxeWdjqVhcWN9YxSRyw+XNDL/wAtavG4HCZhR5Jndw/ndbJcZ7Smfy5/8LC1ya1t77Q/B2m21vLD+5qvN4x+Jl5Fj+1ba2/54+VDX2Z/wWN/4JywfsmfF+3+Jvwrn/s34f8Aje8l/wBTD+60u/8A+eX/AG1r4TmvNch1mPQ/I/1upfYvtfk/9NfKr86xvB2Mq1v9n/eH7VgeLMHjKX7zc1JrzxheH/TvGFz/ANsv3dV5tH8/9/fX1zL/ANdpq9M179nTRNB1n+ytU1W5vbeXR7qTyZv+esVV5v2V9Vi+HX9qz+PoovK0f7T5Pk/9Mq3p+HvESo+0dM+lXtPYe1R5XNN4O06KMZ824lm/cxRQ+ZWpp2peHNYtfP0qeOjwH4b0vR/GVv5FjHHJ/wAIrFLN/wB/al8IeCfC2r+HLjVL+xj+0S6jc/vv+2tfMY3C/VP3dQ/OMbx9SweMqYeoUrzXZ7PS5Nbg8OSy6fF/y9+dR4b02DxtFrHiOfVL2KOKby7OL/V+V+6qSzMEPwWt7H3/APatbGj+RDYeKL6D/oMXX/oquVVFSpVPZnx2Y+IeLxXtPq5zY1jxVpHh2PVNbsfMjuof3N3FX0DefDHw74b+C9n4Wn8OWX9oXUNrZed5P737VL/ra828BaEfFMvg/wADz/6uWaK5vIv+mUX72vcfEkP9vfFTTND/AOWej2cuozf9df8AVRV5Oa4n2S5KZplvEmY5hR/eGd8SPDehnT/D/gGx0q28u61KKP8Ac/62KKL/AFtR/HOGfUtBj8HQH93fzSyTQ/8ATKKLza0LKc+I/jTqF7/rLfw7pv2aH/r6l/1v/kKqGswXGr694s1z/l30HR5dOhm/6ayxebLXgYb231ynTn/jOpYqvfc8a0HGPh3n/V+RL/6S16RZ153o8U8X/Cv4PWzl/wDSWvQ7P/VH6V28WO9SkfunCf8AulMg8STeTo1xP/0xlrz/AEY+d4I8F/8AYStf/atd54q/5Atx/wBcZf8A0VXB6D/yJXgf/r9tf/atLIVbBP8AxnTnX++Uz0CH/U/hUlRQ/wCqT6VLXy+K/jnt4b+EA715x8SJj/wsrS/+wPdf+ja9HHevM/id/wAlJsP+wPdf+ja9zhX/AJGP3nkZ/wD7odJ8Defi/b/9NdBuq9U8BzQf8LB8aQZ/5fLD/wBFV5P8E5vJ+NFmP+oDf16Z4Dz/AMJ540+0f8/lr/6Kruzqk/b1H/07PwrP1W+tnM69Zn/hNvEGP+gsf/RUVFZfjTUp7b4ga/F5441P/wBox0Vj7LRHzh5zoP8AyC4v+uVPm/1341X0D/jxt/8ArgKsTf678a+2xP8AFP3DA/7pTJaKIO9EMNcp0ElFFFZrczI6KJ+1FaTAk/5ZVHViH/VeRmo5oazAr0VJUfke9BmR/wDLWpKPI96KAI7v+P8AGtT4EQ+d4Et/+u11/wCjawrz/VD6V0PwOPleBLMn/ntL/wCja48xb/s6p8jtyj/ezE+M3/IUuT/1Ld1/6Niql8YDPDFJOP8AlloP/tWKtH4wQ/6dJ/010G6j/wDIsVVvi3AdSit9L8jzbi/037ND/wB/Yoq9LKal8JhkcWZU7VcQz9hP+CHvwfn8Efsg6P441Wx8rUPG+pS69ef9cpZfKtf/ACFFX3ZZ/ueleV/sx/D2x+G/wq8P+ALGDy49G0e1sof+2UUVemecIYv38/lx1+3ZDBUcHdn4NneJ+tYw1PP9qPP9q4/xJ8YPhX4P8yfxJ8RtJsvK/wBd52pRVxd5+2/+zLZ/81i02X/rj+8ox2Z4Kj/EqniUsLXrHsE01V4ZvOlzXkcP7cn7Nl5FmD4j23/fmWtTTf2nfgRr0v8AoPxN03/ttN5VeYuIcmf/AC9NvqGL/wCfZ6ZP2qnN/rvxrP03xJoevQ+foeq21zH/AMsfJmq553nZx/rK76WKoVtUctSk6W5xf7QtmNS+BnjSxgg8zzfCt/H5X/brLWH+x94kuPGH7NPw/wDFU8/myX/gnS5P/JXyv/aVdh8TpoIfh9rk8/8Aq/7BuvOh/wC3WWvL/wDgnLZzw/sZfDPz/wDoSbD/ANq08RU9kejS/gnvsP8Aqfwqeq8P+qT6VchhoVP9yecMm/1P4V8rf8FILP8A4nPwX/f/APNYLX/0luq+rJoP+WAr5P8A+CpcOuTeEvh3/wAIr5f9sf8ACyIv7N87/nr/AGfdVy1alqNQ9/han7XPaZHpsPkxR+RXP/EL4q+APh7a/bvFWuRRSf8ALG0h/eSy/wDbKvjf4b/Gz406B4z0/XP+ExvpPD+vXkWi+JJtQ/5hd/8A89Yq+4Ph78B/A/g/UP7Unsf7W1T/AJbatqH72WWvl3n9GjSP6OnVo4Vez9ofP/xT+LXxN1jXvB/x38OfBbUtN0fwH4qivbzXNWm8qWWwl/dXX7r/AK5S1+lHhXUoNT0uOew/e28sMUkP/XKvn/x54Og8bfD7VPA99BH5eqaPLbTf9tYq6T/gn78Q9V8efss+F9V1z/kKaXDLousRf9PVhL9ll/8AaVa5Lnf1ut7OZ+PcdYa/+0HvEM3nS5rwf4nQ/wDCq/25vAfxGsbGX7H480e68Max/wBdYv8ASrX/ANq16J8ZviF/wrH4Vap44gg82Swh/cxf9Na/Of8AaK+Kmq6xdW8Hx3+P3in7Z5322GHQ4f3Wly19ZVw9WpR9pTPgMtw3tT9YNNm8+KP/AKa1cg718L/sH/tIfEbwr4tvPgf8YvH8ut6fdab9t8K+J9Rm/eyxf88pa+sIfjx8JPN/0j4maJ+6/wBd/wATKKs8FiPa0tRZjgquF2I/2rv2b/B37WnwR1z4H+N7GKS31Szl+xzf8+t1/wAspa/nf17wTrnwx+0fDLxzB5eueHPHkWk6l50P/PK6/wBbX9Hnhv42/CTxJdR2Oh/EbSbm4/55Q3kXmy1+Qf8AwXU+AM/wx/bS8J/FTw5YRf2P8S7yw+2eVD/y/wBrL/8AGq+p4bxFHC5iVlcK1XGUj5/+M2peT4o/cf8ALLw3f/8Ao2tjxhN9k+COqTf88vDcv/oqsP42Q+d4ouJ/I/5gN1/6NrU+J032L4GaxB/q/wDiQy/+iq/VsViqH1Kof1HSX/CMfO+gzQf8J5cW8HmfuvCtrHVj4cceCY/+2slU9Bmgh+IOqT+fH5cXhu1qx4K1Kw034fx+ffReZ9juv3NfxZxO08zqWP5Y4kwtatm9SxntCf8AhV+if9PU0X/o2tGD934N8UTn/oMX9Zd7r2lnwJoEBvv9V9l86GpNN1n7Z4J1zRILG5luLq8upIf3P/PWWuFWVKdzzaWSY2qv4Z6f+yvo/wDbHiO81y4HlR6Xo8VlD/11/wBbLXongO8+2f8ACSeP9Vn/AHcupS+TL/062teZ/BrxsPAfwrk0r+w9Sk1iUyyf6n/lrWiPG+qj4Yx+AdD8HXv2iW08ua7l/wDItfJ5h7XFVpn6FlPD+No4T3KZ2/wymh0f4c3HjfVT5dxqc11qs3/XL/ll/wCQo6j0KznPwSvJ77zftGqabdajef8AXWWuX8VeMPG+veCJPB2leFra2j8mKPzZpv8AllFUfir4k/EWHwPqEE9jpNtHFpssf7of9Mq82lhq9Sr7T+eZ7dPIMxXs6nszh4v3OqeA4P8AnlpssnH/AFyr0CH/AFP4V5/DCf7Z8F4/6A8v/oqu/s/9UfpXRxJf92fs/CdJ0cIVPFP/ACALz/r0l/8ARVcRpw8nwn4IgH/P5a/+ipa7jxT/AMi5ef8AXnLXD2X7nw54I/7CVr/6Klrt4f8A9yq/10DOv98pnfQ/6pPpS0kP+qT6UtfJYn+Me1T/AIAV5x8SB/xcTS/3Esn/ABKLr/Uw/wDTWvS+YYa8v+J2va54U+IGn6r4csftNx/Y8v7mX/rrXv8AC3/Ix0PJz/8A5FyNTwRNrnhX4gWfir/hFrm5t4tNurab/ll/ra6jR/HnjDTfFmqarB4Pj8jVPKkh868/55RV5XN8WvFV55kE+qx2Un/TWGiHWPFWpf67xvLJ/wBcq+lxOGrYp/vD4nEZRl+LXtKlQ6zxheeNrnxLd60bm2h/tCUzeX6Y/df+06K5PyZv+XnxFcl+/wC+orNZbjDn/wBW8jDR/wDkFx/9casVHoP/ACC4v+uVPm/13417WJ/inrYH/dKZLB3qSo6K4ToJKKjqSgzCftUdSVHQBJDN5VSVSh/1341dg70GZXn7VH5/tUl5/rR9ajoAKKj/AOWtSVmBS1H/AFX4V0PwU/5Jzp84/wCmv/o2uf1P/j2kroPgf/yTrT/+uMv/AKNrPNf+RQzuyj/ezH+Nn7nzP+wPddP+2VdJ8PfCs/jb9qr4T+DrH979v8SaXHND/wA9YvtUUtcv8cv+Pryf+oFdf+0q0NG+LWq/A343eA/jhY6V9tk8JTRaj9k/56/va9LJFbCYe5y5tUftcRY/dT9pb9ovxx+zr8NNP8VeB/hlHrdxrOvRWUM0s3lRWEt1L5UUsteb/wDCmfj98TZZNV+P37Rmry+b/wAwPwz/AKNaxV8//Fr/AIKz/An9pH4I6X8ObC31LQPFH/CbaDLDpOoQ/wCt8q6i/wBVLX25pupQajdSTwQf8tpf/RtfK+NXiHm/DOUU4ZefDcOZBhMXWqVMZTPN9H/Yy/Z50j9/P4Aj1K4/5bTatNLcyy11mm/CX4c6PF5GleANIjj/AOvOKusmvIM1HD+9r+Ksx8SeL8w1qYmofcYbI8tpfw6ZhzeA/CsvXw5Zf+AcVZevfBP4V69FJ/avgjTZY5f+mNdhTJseteTT424kpVueGJqHTUyzB/8APs8e1n9lfStNm+3fCvx/r/hK8/5Y/wBn3nmRf9+qsQ/tUfGL9mmL/jJqxj1/w3F/zOWiQ/8AHr/18xV6p/yyrzv9qHwTfePfgb4k8OaX/wAfEum+ZaY/5ayxfva/YuAPGbifA5nSw+Jqe0ps8DNuF8pxVGp+7Os/aQ/aE8K/8Mb+MPip4V1T7Tb3XhW6j0e7h/5ayy/uov8A0bXoH7NPgmf4b/Bbwf4HuP8AWaN4bsLKaH/rlaxV8x/D3w38Rv28PBHhO+1XQ9I8LfDu11iK9vNJtJv3t1dWsv8Aqpf+eX72KvszTYfJi/1Ff6BcPZus7wSq1D8ZzPBf2fStTNmH/U/hVuGbyqz4Zq5f4hfHj4SfB+wkvvH/AI/srH/pj5373/v1XrYnF4egv3jPApUq9Y7iaaDzq+Q/+CqHirQrPS/h3pV944j0iSLx5FezSxfvbmKL7JL/AKqL/trVzxh+1r8cPjx/xI/2bPCsvh/S5f8AXeLNch/e+V/0yirj7L4MfCX4HWFx8Yfjf4il1fVf+XzxD4hm83yv+uVfkPGHihkeVv6thantKp91wnkGY0cX9YqHzv8AD3w34V/4XJqGlar8JNb03wX4ys/L03UPEP8Aqvt//PXyv+mteqfBPUv2hdY17WPAGq/Fu2srzw5N5UNpNpvmfarX/llLXP8A7Sv7eH7OfjX4a3ng7Q9K1LUrgfvNNu7SHyvKli/5a14XP/wUU8Y2fjLR/HFj4B0221Cws5dO1e71C8/4+oq/H/7e4nz+r7T2fsz9i/h0f4Z9EeJP2iv2vYfirrnwd8K2XhK5g0GGL7Z4h/e/upf+eXlf89az/hvB+0n8PYtc/sP4/fYbfXtel1a8tNO0f91FdS/63yv+/VfI+m/tpfFTwrqmsT/8JH4b+0azrEupXk3k+bL+9qO8/bq+LepReRB4/sYo5Yf9TaaPX7lwVicuy/L/AGmYVP3h8LneBzfMKvs6dP8Adn2J420H40/EOwksfFX7SfiiSzv/ACvOtIfKii/dVJqXhvxwItQ/4Q7xVZW0es2f2LXv7Rs/M+1RV8J69+0h8W9eljng+JvimXzf3XlWln5dY83ir4m3kvnz33jK5/6azal5Vfb1OOcjo0bUzyaXBWY9D9ENY8E+FdYtdPsdcgiuY7CGKOH995VV7P4e/B3R/M8jQtNi/wCe3mzV+e803xi1KXyJ/wC0vL/6a69LVj+x/H95F5E8Ef8A211KWuWlx/kWF/5dnTT4GzF/xD7w1jQfB1n8UPhXYeAPsOm6pf8AxO0aOa7tLzyv9F83zZf/ACFFXef8F/tH0rxH+yX4X+JtlrltbSeF/Hlhc/a4povNitZfNir814PB/wARprq3vvPsYpLWbzLOb7ZL+6lq54j0b41eMPC8nhXxjrttqWnyzf8AHpd3kskVeLjfEPCVa3+z/uzuwvBdajWVQ4fUvG2laxLJ/avxpubn/rjWfqWveANSi+w6r441e+jl/wBdD50tWPjx8N/Cvw90HR5/C3hy2j1i/vPL8n/ll/01rh7yXxHo8kcOq+HP+Pr/AI8xaV5dTijN8VS51iP4h9xiOI8HlNH6tiDpNMu/gtZy/wDIrXNzJ/q/3tXP+Er+H9nF/oPw5ll/7Y1j+FdHn8Sazef8JHPc6bZ2Gj/bZoof9bLLXQeMPhvoem2FvB5+pW1za+JLXTryGWb/AFvm18+sPWxeMVO/8Q8DE51w6/3ns6YQ+PLGGLyLH4c20Uf/ACxqS8+J3iPyv9B8OWUUlGgfD3Q/EkuqQfbrm2+waxLbQ+VN/wAsqr+MPhvqvhXw3ea5Y+KpJZLWHzPKmhr7mp4WcRPB/XPZ/uzycFxnw7Wxv1amgl+JHxFvIo/31lF/2xqObxh4/mi/5GKOP/rjDXACHxFeWI1U65L5ksPmeVFUc9nrcFlb31jqsv2ivgauBpUavs2fr2FyjMKtD2lKkdveav4qml/f+I7n/tjXP+MNX8/R7z/io7mSSKGX/ltWfrE3ir7DJ9tnj8v/AJbV9CeMIfg7F8NNU0rSoNN8yLR/3MUUP73zfKrKoqOF9nM+czvEZhlP7vEHn+mzf8VH4Tgz/wAweWT/AMhV6BB3rg4ZoB4o8L/9i3L/AOioq7yH/U/hXzXE/wDEpnv8OVfa4Qz/ABrN5Phy8/685a4uz/faN4E4/wCW0X/pLXY+Pf3XhPUJ/wDpzlrjh+50/wACQf8ATaL/ANJa7uG/+RdVM82/3ymegQ/6n8KsVHD/AKn8Kkr47Ffxz36X+7hNNXmHxB8ib4lafj/oD3X/AKNr0uftXmHxCm/4unZ/9giX/wBG19Bwt/yMDxM//wCRcZWsXljZyxwX9l9pkl/1MPk+b5tY+p6DoflefY6Ve2Un/XHyopf3tampWd9qXiiODSv3dx/Y915M3/TWtTUodcs/AV5/wkc/mf6rya/UcoSq42kqh+Q5jn6wuY08OfTmgfBn4Y/2Nbf8Ubbf6oUVv6R/yC7f/rkKK/oKOQcOtL92fUKsmj4w0H/kFxf9cqtzf678aoaD/wAguL/rlVyv5lxP8U7cD/uZJB3og71HViuY6QqOpKjoM6m4UUVHWgElWIO9U6sQzVmZkc/aq8/arF5/rR9aj0zTNV17WbPw54c0qW+1DVLyKy020h/1t1dSy+VFFWtKl7Z+zB1PYr2lQjor9A/F/wDwRq/Yt+FnxV8L/sofHb/gq3D4X+N/inRrWSy8H/8ACFR3OkWuqS/6q1luf+WXmy/8spfKllr4k+IPwY+J3w4+OfjD9nKfwre+JPEngjXrrStY/wCEO0e6vYpfKl8r7V5UUXm+VXbUyjF0qWh4mHz/AC6rVOP1L/jwf/rjXQfBOH/i32lk/wDLWH/2rWHr2meK4da/4V/P4A8RxeJLr/U+GZvDl1/acv8A27eV5tdj4E8N+Ofh94K0iz8f/DLxb4f/AHP2f7X4h8K39lbSy/8APLzZYvKrixuCxf8AZNT92e1lOZZd/aNP94cl8cvIhk8//qD3X/o2Ksv4qYmEZz/zAYv/AEbFWj8cYp7zU7ewggkluLrTpbezhii8ySWWWWLyoo6j8b+DPiPq3i698GaX8M/EdzrFpoUQvNEg8LXRvrXypYv9ZbeV5sX/AG1rpymlWeXUwzXE0KWY1PaVNDr5ZobPxHoeqiCP/QPFVhL/AOTUVftp4PmH2X/ttLX4kTaX46+IPg2XW/hl8MfFviOASxSRah4f8K397bebF+9/1kUXlV+ongj9u/8AZ00LT9Ms/EXji58y/s7C5vLu00i6ubaw+1f6r7TcxReVa+bL5v8Ara/JvFThvPc3yOnTw2H9o/aBSzLKKNX+IfR4x3NSWf2cHg15p8H/ANrL4E/HLxXJ4J+HPiO9ub/7HLe2f2vQrq2jv7WKXypZbaSWLyrqLzf+eVXPix+0n8LPg5r+n+G/GH9tXOqarDLcWen+H/C19q1z5UX/AC18u1ill8qv5IrcGcSrN/7L+rVPavX2fkd317Cex9r7T92ehzQ1H++8qvJIf26P2dNS8Ox61pOq61eyy3t1bf2Jp/hDVLnU7WWL/W+bYxRfaYvK82L/AFsX/LWqd3/wUG/Zfint9Ig8Va1c6zLNLFN4T0/whfXOuWvlfvf3tjFF9qi/7axf8ta7afhjx3e31Kp2+A5ameZb/wA/D2Pz/ao5v3vtXnnw4/an+DvxN8UR+DtE/t/SdUmhllsofFfgq/0n7V5X+t8r7VFF5v8A2yrH1j9uL9nzQL24bVdV1qPT7WbypvE3/CFap/ZEX/TX+0vK+zeV/wBNfNrWl4d8a0cZ7OngqntKeoPMstrLn9oRzfDj4w/AH4gah8TP2bJo77TNUvPtOveA7v8A1Usv/PW2/wCeVdXoP7cnxi1Kw8iD9kLxBbah/q/9L1KLyqwPF/7YvwX8L6/ceHLf/hKNfktYYvtl34O8FaprdtF/y18r7TaxSxebWd4a/aW8Q/tN+LovhX+wp4d0n4h+LItButa1j+0Jbq30zRrCL/llcyRRSyxXUssXlRRf89a/ofgfiHxXymhSwkMFUn7TrU0R8Vm2V8O1v3ntDU17xh+3r8bJfsN7rmifDvS5f9dDpMP2m6li/wCuv/LKtD4e/so/DLwTdf8ACR6rBc+INYl/12ra3N9plqx+zh8bNK+PHwqs/H0GlSabdxebba9ol3DLFLpd/F+6urWXzf8AnlLXmnxs/a/+Png/9njxB+2H8JfgTb6t8INB1KXRbzxjLLdfbvtXlS/8TCO2ii8qWxiuvLill82vJzDPvFHjvN6mVYan7OpT/iHRh8Dw7lWDp4g+j/scFnF+4/5Zf8sa+EP+Cp/x+0rUvEdn8HoJ/Ms9B/03V4Yv+Wsv/LKKvQIv2hPjR+zVfaF/wvDxt4s+I+n+NvgP4c8e6deaT8MpZP7Lv7/zZZdP8zT4vKii/wCmstfnvefEnXf2hvjJcap/ZWt6/J9rl1HUbTw9o91qVzLL/wAsv3cUXm+VF+6rt4T8J+I8r4hqYjNP3nJtU/r+rnp4bP8ALatL3DY/4VnZa7LHqniK+vZLib955Xnfuoqf/wAKm8ERcf8ACOxy/wDXaug0HxJY6xdXmlYubbULD93qWnajZy211a/9dYpf3sVEGr3E+qXGh6F4O8Sa3cWsPmXkXh7wrdal9l/55eb9kil8qv0f2eZfW/q1On759RSxOX/U/rHtP3ZTs/BPhyzlzBodtF/2xq5Do9jZ/wDHvYW3/fmifxVBpk8lh4k0PW9JvIfK/wCJfreg3VlfS+b/AKryraWLzZqj17xtD4PtY774j+FfFHhezl/dw6j4m8H3+m2ssv8Azy827i8rzaullue/vP3Zn/a+Wfu+eoXIbP8A6YRVJ9j9v1rD1T4jwaNY6ffX/gDxjbf2zNFFoIu/CF/bf2pdS/6qK2lli/fSy16B8cvgP+0l+yl8VdP+Dv7TPgGy0DVNe8Nxa1oM2nzSyW11FL/rbXzZYov9Ki/5axU6uS5wqPtHTBZ3lDrezp1Dn/sft+tENnBNL/qKj1LWIdN8uCCxvb28upvLs9P0nTZb26uv+uUUX72WsvxL48n8KaZcC/8AB2v6brHk/wDEn0nxD4burKW/l/1UXlRSxRSy/vfKi/df89a5sNlOZYul7SnTOjE5vl2Fq8lSodB5NvnyMVY8qH0rsP2wf2RvGP7EXjf4P+FfEfxM8Y61rHxG8Ey614k0nxB4PisrHRpfKi/0W2uYv9bLFLLL5sX/ACy/dVz/AMOPhB8Yf2mvi9pf7M37Oul2174z8RwyyWc2oebHY6XaxRfvbq5liil8qL/llXRiMhxeExdPD/xKlQ48PneXYrLqmI/59nzh8VNevfG3xntx9il/sfS7SWPTbvyf3Ut15v73yqxtdNxD4o0T/plNL/6Kr6F1H9lLxH8Q/gZ8WNUhsvEfhLxR+zdZ6Nbax8OLXQftMup69fahLa3X+t/e/vfKili8r/nrXzv8Qf7V8KeNtIsPGXhzW9AuPJlk/s7xDoN1ZXPlf89fKli/1VfZ1MpxdJUv3Z+A8WYmtmGYe3pk815P/aeuQQQeb/xTf/tWKus8YajZax/aGq2X723uvHml+TN/2yqX4b6L4l8H+Px4s+I3gDX9A0vWdINlZ6h4m8OXVlbXV1JL+6ijkli8uWWun/aWm0rQfC3h+efyra3/AOEwsJZvJhrPBYl5fnuGhUpnNl1Or/Z9T2pw/hXxJ/wjcPiTVZ/Dl7c6f/wlV1513af6qKqfxI8Y+Kry18SeHLHSrKWzsLP99N53/TKuhnl1bwF8B/Edj8VPhz410C31TxTLcw3fiHwhf2UUsUssXlfvZYvKrf8A2hP2OP2jP2Xvgbof7Rfj74R3OneAPjTZyx+G5ZftUt9YSxRf6LFfReV+6luvM/dRV/XlPizCYbhv6v7T+IRhOHaNHG08b7Q8L0H994cjP/TGlAU6fb7jjA4qxoPh/wAZxR3HgWDwPr/9uWNpLJqOiHQrr7dYRRf62WW28rzYoq+h/wBl39gyx+O37APxg/bt8VeKPGOk6P8ADqHHhuLw/wCEP7Sj12Xyu0kv+qjil8rzZf8AllzX8qYvLcXi8yqM/suPH3DuU5Rhp1KntP3Z8769DANL/f16z8R/h9BpvhLWJ7Hw5c/Z5NH8z+0Ptn/TL/nlXYW/7Ahu/wDgkpqH/BSXxx4n8a2b/wBux6b4V8Paf4Q8yxvrb91/xMLm5l/1Vr5vmxeb/wBMqf8AE3EPwX1T/sD/APtKvm81w1bL6VJT61D84444sy7ib2f1P/l2eR2cOfFnhf8A7FuX/wBpV6BB3rgLOU/8Jr4fgz/zLl1/7Srv6+f4n2pHucL/APIuMf4g8+CdUH/PLTZa5ObM0XgP/tl/6S11HxN/deCdTn/6dJa5vrdeB4B/zx8zP/brXpZBpltQ1zb/AHymd5D/AKn8KsVXh/1P4Uef7V8Zif4x79L/AHcJv30Wa8r+JH/JU9P/AOwPJ/6Nr1SvK/iD/wAlT0//ALA8v/o2voOFv98PEzv/AHQp6bMP+Fo6X/zz/s26rf8Aif8A8iRqP/XGucs/+Soaf/2Dbqug+Kv/ACT7Ua/RsD/yMsOfzZxM/wDjI6Z9RWFmRYwf9e0X/otaKZpM1x/ZFlxL/wAeUP8A6AtFf0rD4EfoS2PjjQf+QXF/1yq5VPQf+QXF/wBcquV/LWJ/in0uW/7mFSQd6Kkg71zHYFRz9qSb/XfjTJ+1BmSVHRRB3oAKkg71HP2qSgzEm/1341s/Cvxhofw3+Mngf4i+Kp/L0vQfG2l6jqU0X/LK1iuopZax5+1V5h50Xkf8s61w1T2Vb2hliqXtqHsz7r/bu/4JP/to/tLf8FNfFB+C3wkl8SeF/jR4l/4Svwf8SLTzZPD1rpdz+9825vov9VLF/wA8v+/VVP8Aglx+x18aPAfxP/av8DW37ZPjXwDYfCHSJbf4hQ/AfTYrnU/Fnlfav+PKW7/0mL/VS/8ATX/rlXy14P8A2uf2yfhv8No/gx8Of2yfiZ4f8IRwS20PhTSfFUsdtFay/wCtii/55Vznwt+JnxS+BPi3/hYvwK+MHijwV4k+yS283iHwzq8ttc3Ucn+sill/5a19R/a1J/AfC1cgzBUuQ/ZjTdTF9+2Z/wAE4PFP/CO+P7K4ufCviiTzvixL9p8TXUX2T91Lqcvm/wCtl/1v/bWvje0/bG/aL/bG/wCCZX7afiv9oT4matr50/4j+Dbzw3p+q3vmxaP9q1CXzYrb/nlF5UcX7r/plXyP8Qv2wP21/FPjLQ/jF4o/bJ+IereK/BsN1J4V8Qah4k8y50vzYv3vlS/9Naz/AIVzeKoPhVeeDtK+JniOy8P+LYbC98YeHrTUvLtdZltZfNiluYv+WvlVnis1wlLCc9QeA4czGrWTgc38bLyfTdZt9Vg/d3FhZy3NnN/01il/dV+1f7QPxj+Fnw2/Yz+Kf/BdPwR470aPxH8XvgHo/hDwtFpEEkd1a67L+6uh5n7394Jf+ev/AD6V+KHx4/4/0P8A1DbqvT/2m/21Z/ix+wt8HP2B/DfwrvPC+ifDES6zr13d6vFc/wBvaxcy/wDH1H/zyi/ey/uveubIsRR+p+0Pa4iymvVrU6dM+4Ne+J37aGg/s1/8E/Phl+wVq3iPRPCGqeFdPl1i6+GU/lx6z4i+1RfbrW+8r91L+682WWKX/pr5tdd8T/hfqHin4gf8FOvAHwQ8GfaLi28d+A9SGieHrP8AemKKX7VdSxRRf9tZZa+Afgn8av2tPgzeR/C39kr9p/x94FPizXYseH/Ceuy21tJfy/uvN8uvsXwT+wfe/smftBeF9c8OfHfx/wCCdc8b6DLb6l488HeJPs19f6p5vm3UVzLL5vm+b/ra6ZZzhHQdR/8ALs+fxmQ4vCVvZ1D2D4beA/G/wz1L9kTwh8RfDt7pOsWn7O3ih5tO1CHy5YvN1qwli83/ALZSRV6X4R+Ms/7Ov7aPij4/WWix6jJ4I/Ze8T61/Z8svl/avss0V15Xm/8AbKsn4efAG+0f4lp8WfiL+0J8TPiH4gsdCl0rSLv4heI/tv2C1llill8r91F/rZYov+/VSfHf9l/w38dtQ/tW/wDiL4s8OXEug3Wg6xL4O177D/aml3X+tsLn91L5sUtfytnniLw5R8T6eYe0qKFOn7N+51PrMNkuMeR/Vzxr9i/UvHsP7Mv7XXje/wD2hdb0P4meO9Z0HxFrvjz4eeCv7W8Q6Zpep2kV1L9mtYruK68qKWXyvN82vV/CmqeJLT/gtZ8HNd8OeEPGt94zsP2R9Ztptc+IXhuLTdY8W39r5vlXV1FFL/y1/d/62rPin9lfwbqWteH/ABV8O/HnizwD4g8OaP8A2VpvibwJrH2K++weV5X2WWXypfNi/wCuteea78HfjB+zv+0Pof7VHwl8PeLPi74ol8H+I/DviPW/E/xBi/tfzb61iitbrzbr915UX7391F5VfrXDnjTwZnVWnh51fZ1P+nmn/APlMbwvmWFpe0PE/wBrzxH+2Tqf/BF28+Lf7VfiPxvL4wP7TR/4Q/VfFZli1OwsbrSpf7TtbaX/AFsVr5v2mL/nl+6/55V9/Salb6h+1R4TtvDXjD4o+KPhnbfAOK3034O+BPhxHc+ENZsLq18r7Vc332v7LL/1y8qKWvEPgZ+y54il0vwn4+/an+NHjb4meONC0H7PZ/8ACbeKZdSsdBlli8q6+zRf6r/plVnSP2Obfw3o1x8M/B37S/xi8P8AgC6mlkm+HGh+O5bbSPKll82WKKKL97FF/wBcpa5cR448F4bNqmG/59/8vOQ0/wBWM3+qU6h4h/wS9+EvxR8Hf8E1fhR8ftU/ad/aL1vw5rPxfFj4V+DvwMitbKOK6+3yxS/2ldf63ypefN82WLrXqXgqfxv4D/4OPfjZe/CzxVq2m/294c1O3m8P6dN5dtdS2vhDT7q2llii/wBbLFLc1uaD+x7p/wAN9V1C4/Z0+PfxQ+ENhrHlSaj4f+Gfir+zdNupYovK83yvKl/e+VTIP2FvDcPiST4m/wDC9PihL8Q5de/tb/haP/CYf8VD5v2SK18r7T5XleV5UUUX+qr04eNXC79n/Ev/ACezf3nN/q7mBnf8E2oNK1L9lDR9ch8VX2t65ql5dXvjbUNWm/0qXWZZf9K+0+b/AMtfN/dV4v8AtODx98Nv+CR/x7+D3h34meMbLwZpf7RUWk6iLS8luYtL0GXSvtX2T/lr5Vr9qki/df8ATWvsD4KfBPQ/g14XuPDmh+Ita1qS/wBYutW1jW/EGpfab6/urqX97LLLXmf7RX7Jfwr1nRvHnirXfjF4/wDCXhfxbZ/afiP4Z8M+Kvs2keI4ov8AlrcxeV/zy/dfuq/IOB/EXIsD4l42v7Sp7PEf+lnt5jkuLq5TTp/8+zLsv2zP2i/B/wC37/wT0/Zd8A+PdR0TwXqHwT8JXPiTSdIvfKj1n7VYeV5V9F/y1ii+zfuv+uteTf8ABL27sNI+BP7d1x4A+KuueBPGEPxU+zzeIfAXg/8AtvxLYaN9quvNltraGWKXyvN/5axf6qviTR/EXxL8YfHzQPF/hz9oPx1Hf+BNNtbbwt4gm17zb7QbC2/dWNrbS+V+68qKu88B2fjD4S+KI/iN8JPjP4x8L+LIvtXneMfD+sfZtTuvtUvm3UUsv/LXzZa/qHEZ/l9Kj7SoeHhchxeL/d0z6L/4KnXK3P7VXwrstS0vx0dTi+AVjFr3if4g6FFpup+KJoruWKO/uYopf3svlf8APWtT9gXxp8fPA37Hf7ZnjD9mLSNWm8Zw+HPDcdnLool+3WttJ5sdzdxeV/y1itvMl/7ZV88avqXjHxh4ouPH3xN+I3iTxl4kv4fKvPEPizWJb65li/55fvf9VF/0yirY+HH7UPxv/Z2+GfxY+GXwQ0rX9N1z4l3nhyTR/iF4e8SRWUvhz7DdebL+6/1svm189gc2y7FZ59Ypn1OJyXGYDhz6vU/nPWP2rfBX7TPxH+JH/BOTw78Rvin4g8E/Gzxb4curLWPG+uWcVzq9r/p/+gS3MU3+tl8qX/lr/wA9a+hP2qPB+reDf2H/ANu74Z+MPG3x9+Jl/wCHfDdrHqPjv42+V/Y8l/8AupZYtDtYvKii/wBZFL5scX/PKvz7+IWm+I/jL4jvPH3xo+Jni3xj4ouoYov+Es8Ta9Lc30UUUvmxeVL/AMsvK/6ZV0vxH+LX7WHxl8C6h8Lfi1+3B8Y/EnhjWLP7Fq/h/VvGHm211F/zyli8qvYp8V5Sq1Q8Spwhm7o02et/8Fs/2g/ip8QPB3wY/Zz8OeK77w5pfwh+DPhzx7pmoaVd/wCk3Osy6f8A6LL5v/LL7L5X/LL/AJ7Un/BWHxh8RvF/7aPw7g+JvirW7nT7X9nzw5c+D7TVppfs0t1dWv8Ap11F/wA9ZfN8rza+fNS0HVfEl1JqvxG8f6/4tuJdBtdF87xNqX2mWLS7X91Faxf9MovNqfUV8e+Iz4ch+Inxn8a+LNP8J6dLZ+EdK8Tav9pi0e2l/wCWVt/36irzcbxZl2KwlSmj08DwnmOExdOoz6A/4Jn+LvGHhH42/HDxF8JdLstS+Jlh+ztf3Pwx06UxSXUt/wDa/wB79hj/AOevlf8APKuQ/aW1P9pPxV/wQb8P/FX9ovx74x1vxRa/tLeZ8OPGPjGaX+3ItL/s/wA3zbaWb97FF9qil/79V5nNZ6rZ+I9L8ceFfGOreG/EGg3n2nQfEPh68+zX1hL/ANMpaT4p/EH4l/GTVLCy/aD+N3j/AOKGoGzlt9ItPFmsfbZbXzf9b9m/55ebSyniPLsLl9On/wAvC864YzLFYupiKf8ADPo39vXw3+1R+1/+1V8F/A+h+N9S1K30H9mnw5q32vVtRlkjsLrU4v8ASrr/AKa3UvlRV6R+yZ+xbf8A7H//AAUC/Z48f6H8YvElzqnijxrdaL4qMOpfZrbU7X+yrq68qSL/AJ5ebF/qq8//AGNJ/i38B7WTxl8cPhx8TPFHiC60e10Wz1bVtS+2/ZdLtf8Aj1tYov8AllFF5teo/HLUfjf+1bo2n+HPhz8F9f8ADeqaNrEWo+G/GP8AbH9m32jXUX/LWKWvz7P+OatDi/DzhD93/wAvDPBYKssoqYeZ5N+yn8fvj98OfhX+3f8AGODx9rY+Kl9eaNp2varrZmivtGv7rWdQsIvK/dfuvKtfs3lVS+Mnjqb4meKf+CWPxB/ag8Yx+JLjUL3VLfxX4h8ZTxS/b4otUtIovtMk3+t/7a1D4b/Yn+LXiTwFrH7RfiL9pj4h+Orzxbr1rJ8U/D11r3/Ixf2ZL5UX2mXyv3vleVFXjf8AwU9/Zjn8CQ/CjVfDnjjxjr/w/ubPVLfwr4T8Wal5tt4cluv3ssVt/wA8v+WX/fqv0bA8e5FjMZ9Xp1LnzmJyDF0sJ7T2Z92ft6av4wvP2ev22pviL42+MXj62mtIv7N0PW/hj/Zvh7wHdWxiltpbG5lupfN/deV+9ir899W8ReIvC/jn4T+KfDvgkeI9U0v4p+Hbmz8PmaKP+1JYrqLyrTzZf3X72uOn/aF/bK8eaXZ/DL47/tCfEPxb4DsIYvsfhPXPGEsttFLF/qvNi/5axeV/yylrP+OV7f8AxO8JWfhy38Oy/utSiuJv33lf6qoznMqGKzfDezOHDZTmNXCc/sz9PP8AgqHqXxb+KX7JH7UninQfFfxC0DTtT/4Ry5+I3wd+NuhSyf8ACJSyyxfvfD19FdS2v73/AJaxRebFXzJ+2N8T/jtrH/BN/wD4J+WfiLx74s1Hw3qHim/k8SXeoXktzFf39rqtrFYfaZf+esUX2ryv+uVfN3jb9pb9uf4qfCv/AIVn8af2mviZ4y0eK8tZIfD+ueMPMsZYov8AVebF/wAta5vxh4p+Pnjb4a3HwDn8X+J4vhzFqX9o6R8OZfEn/Eotr7/nr5f/AF1lP5195DH5dRwmuIPTpcJ5u8J7RUz9N9G/Z8+P3hz/AILbftp/GLWvhXrVt4TuvgP4okh8TTWf+i3UV1YWv2bypf8Alr5v2aX/AL9V8cfsVfGD4x+B/wDggp+0h4b8G/FvXtOs/wDhMfCelWdrDqUvlWtrqf8Ax/RRZ/1Xm/8ALXyq8zsv2tP+CnUPw1j+Fdx+2/8AEz+w/wCx/wCyf7E/4TCX7L9l8ryvK/65eVXnGj6F8cNB+Gmo/Bzw54+1Ky8J6/eWtzr3hm01L/Qb+W1/49pZIv8AplXzmI4jy5Vf4h9HhuAs3dH2lTkPqDxl8aPjFof/AAbt6P8ADmx+KWvSaXdftHyeHJrOXU5pf+JNFp8V1FYf9MraKX/llXFfFSb/AIsZqn/YH/8AaVeN6xoPx+1j4aR/B2f4jal/wicWvf21D4Zm1L/Qf7U8ryvtXlf89fKrpfHnxH8YTfCrVNK1XwtbRZ03yzL9rr5jPq9LMPq9Sn/z8NMRkNTAe0p0zD00z/8ACydIH/PLwtL/AO0q9Dh/fRYrg9Nh/wCLq28Gf9V4V/8Aatd5B3r5bih/vKZ9/wALq2DOf+Jv/Igap/15y1z95n+2fBfkf88Zf/RUVdB8WZj/AMIJqf8A151z95/yMfg+eD/njL/6KiruyT/kUVDbMf8AfKZ3EP8AqfwqSo/+WVSQd6+RxP8AGPepbEleV/EKEf8ACybP/sEf+1a9QrzPx5puuax8SrOx0MxxSRaRLJN5v/XWvc4W0xjPFzupfBmPpn/JS9MP/UNuq6T4nfvvA+oQQf8APH1rLs/hj4xh8T2fiKC+tvMtYZY/K/661sax4P8AHGvaNJpP26yi83/lrX22GzLB0cypVHU2Pw/OuHMxxeb06tOmfS+k6lcf2PZf6PL/AMeUP/oC0V5NpPxJ+MVlpdvZefpv7mIJ09KK/bV4l8OpW9ofarLcZb+GeI6DD/xK7f8A641cqnoP/IKj+lXP+WtfitT+KduC/wBzpklSef7VHRWR0hUc/apKjoAKKKP+Wta+yCpuE/apKjqSuaoZkc01bPw1+Enxh+Nvim78DfBf4aaj4s1ix0i61q80/RfL8yGwtf8AWzfvZaxq9b/4J2fGyy/Z2/b9+EnxU1rUBa6R/wAJT/ZPiOYiL/jxv4vstz/rf9V/rf8AW105b7Gri/Z1DhzKpi6OEqVMOcBefBn9oWz/AGeNM/a2n/Z78Uf8Kz1nWP7J03xjFDFJbTXXmyxeV/rfNi/exeV+9r3H9mr/AIJaePvi/wDEr48fAj9pL4F+MNJ+JHgP4D3XifwH4Ss9Si+1Sap5v+i/urWWXzfN/wCeXtX6raX8ef8AgnNffHKL/giTYeKvB8Xw78HeCNL8WaB4s1fXrG4tpdZtdViv5bXzPN8qWXyvKl/7+18H/Bj9tEeLv2yv2/8A9p7Q/ipHoF/qfwT8RxeA9Wm1KKyuv9Fl8q1+zGL/AJa/uv8AllX2VLLsHSqn57UzXMsVS/eVD4x/aX/ZF/a1/ZQ8MafN+1B8A9f8FR67DLbaPear9lkiv5Yv9bFFLayy/va9MuP2J/25/gd8CYPjH8VP2LfHWkeD9L0G1vdR8QSw2sv2W1l/5epIopfNii/7ZVua78ZfCujf8Ee/2bL3xZ4w/tG48JftW6pq2paSdSiub+Kwi8qWT915vm/89K/SP4//ABs+CusXHxv/AG9fhj4r+DMWgfEH4Nf2doXxB8T/ABl1S51PVLS5tZYv7Ki0P/mHyxS/9Mv9bL/11rmxOVZdil7OodGG4izLC+z9mfj58cf2Xf2rv+GaE/bSvv2dvEdr8LL/AE2L7H4wmmtfs00V1LFFFN/rfN/ey/8ATLvWn47/AOCdX7fZ+EFx+0lN+x74wj8Gf8I5a6j/AMJBNDF+5sPN837X9m837V5X/bKvWP2+v2kPFcv/AATU/Y5/Z78OfFSK+8J2Pwml17xT4Z0m8il/4mdrf/uvtUUX/PKL/llLX6X63+0j8D/iP8TNc/4KL/CvW/gxH4b1T4Kf2bpvjzx38Yb+O+tfNi8qXRf+Ef8A9VaS+b/0yp4bLsJSo+zpnTV4jzaq/aH54f8ABMHwT4Vh8ReMP25/iNZXNz4P+F+jy3Om/ZIfNlluvK/eyxV9c/Hb9qfQf2l/hjo3wAb9m/x1oXxT8ZWlrr3wa8NH7BLfa7F+9li1CxuYbr7N5X7qXzfNlilrt/8Aglr+zfY/D79gHwX8MvFXg6XTZNZ8H+Z4k0+7h8uXzbqL975v/PKr/wCzJ428H/B/9hbWPjB8Y9B1O++K/wCx5/b3wu8E6lLP5kUsup/ZP7Mlj/1v73ypbGL97/qq9ChlFLDYTVfxDycwzuvisX7Soecfs9/tXfHX4weDri88EfsU/EfxRrPhe8l0X4g/2TDYW1to+qRS+VLayS3d1FFLL/1y82tXxr+3gPBWqap4In/Zu8fXHi/wvoN/r/xC8HQ2drHfeF9Ltf8AW3Vz5t15UsXlfvf3Xm14bpvwa+OPxI/YH0f9gLXPG/huL4kfDT4p6zq3xO+H3xC8VRaJF4otdY837DrVtcyy+VdxWssvm/8AXWKvUNf8Q/CTxH/wUM1z4Jar+0XoEtt4j/Yzl+EEPxSu5ZZNDuvFn2X97F9u/wBV/wBNf9bX5Zm/g/wZj8X9YxGG/ef4z1aXFGY+xtTOu8H/ALdHhXx54m0iHQ/hN4s/4RPXvFUvhzR/Hk1naxaZdapFa/avsv8ArfN/1X/TKvQ/iR8Q7f4eafZw2XhzUtf1zWbz7F4b8M6JD5t9ql1/zyi/z5VfP/hr4Mj9nD9m74CfCTxj8VPB2r+LNY/aWutevdE8J+KbXUpbCKXRZbWLzJYpf33/AB7eb/21ruf2xfFfjj4d+Ovg78VfAHjfRfBWoaL8TI5R428V6dLe6Ro/m2ssX+nRRfvfKl83yvN/deV5tfinFnhpwxl/GmXYDD6U6n8Q+gy7OsxzDKMRUqf8uzQ1/wDaV8bfCm2t9b/ag/Zo8c/DTR7+WW30jW9fhsLm21O//wCfCOXT7qX/AEqX/llFL/rak8Y/HD43/DbRdQ8SfFr9g34u+F/D9hZy3OpeILqysbn+z4v+fqW2tbqW6ii/6a+V+6ryH/gqj8Pvhmv7JOhR3M2geF9dl/aJttW8R+A/gn8TZNX0PWNGiillvvEkemRfvNPk8r97+68qWLzK+hPF9t+z18PtB+Pnj/4EW3wH0z4Z6z+zJf2PhzxjF4u/tLxp4oupdKlMUUst3deb5X/TKWLzZf3Vfr2G8GOBaVf2tOkv/A3/AJnzf+s2b+x9kfB37FXxF8Hfs++Lvhv8Y9c+HPxU0iT4l/Cua91eXxBqP9rReO9Ul1CKKKXTLaGWWX/lr5X73yq9g/an/ZU+NPxG8LfGT9t/9ov4HfEv4ZyfDXQPCUfwstdW8RxRx/b/AO0Jft8stta3Uv8Ayyki/wBbXmvgT41fDP4YeOP+CaPxv8R+MrKXw58NPhxLJ47urW8ik/sWKW/8rzbn97+6/wBbFXs/xC+Dmu/A39lf9rf4h/Fv9qTwN4yk+KGpaEfDlxofjyHUrnXvK1qS6/tTyvNzF/ot1bWvlf63/RP+eXlV9djOHeHaOJq5gqf7z2fszz6WY4x0/Z+0Pp3xh428OfDHwFeeP/GGq/ZtPsLPzJpf9b/mWWWvlD/go34p/bR8R/s+6xpc/wCwN8UPC/h+P/TfEmq6hDYSyxWH/PX7Na3Ut1FF/wBsv3Veuft9Qwal+xp4og1WykubPybCTWPskPmyxWEV/a/aZYvK/e/uovMl82Kut1S1/Z88Dav8ZPHvwAHwCtvhfrP7Nd9ZaD47Pjc6j458UXUthL5cUst1deb5X/XX96f3Qr8U8JfD3h3HV8TmOIp+0qU6n7s+izrNsZhVTp0/+fZ+ZXwr/wCCd37Oni/4l/sEeGtdm8WfY/2mdIv7n4pxQ+I5Y/tUsV1LFF5X/PKsfwV4a0rwTHrngDSp7mXT9B8Yazp2m/a7zzJfstrfyxRfvf8ArlFXunwO+JXw7tfi3/wSpuZ/H+hxR6F4bv49fll1eEf2XL9rl/4+f+eP/bSvF9Pks9W8R+ML2ymjuILr4heI5YZYh5kcsX9q3VfuvFeGo/2dY5uFKtepmFzs/hr+zt+1n8Z/DMfjz4H/ALKnjDxZ4YkvJLe08TafNYW1tdSx/wCt8v7VdRebUHwA/YOn/bq8cfHT4ZX/AMOfG3/Cx/hp8JpdR8FeDvtcum39rr32ryoormKavo7/AIJ/fD34IeKf2Ifhff8Awk0T4H6/8S9L+L/mfEeH48+KZfsvg21illl+12Omy3UUXm+V5X+q/wCetbPgXXdA+J3/AAVv/b/8OfDP9pPwt4O1Txv8MrXTvCHja78VRW1tFdSxQxDyrnzf/RVaZRkOXYWjTr06Y83z/MsTWqYc+Q/iF8N/j98AdU0Pwp+0Z+z14o8E6p4js/M8OWmofZbmXWfKlii/0b7JLL5svmyxfuq6D4kfs0/tlfBPwZefE740fsi+NfCfhfS4YpNY8Q6h9gli0+KX/VSyxxXUssUX/bKvV9W8beAf+Ce/gb9jX4S/HD4uaX4k1f4afGDU/G/jvSPB2sDWx4X0G5/dRRySw/u/3Xm/8s/SX8ex0H4ZX3wH+KH7WH7bHxw/an8C6/4b+IHw317SfCuraT42i1K+8by6xLFLpn+gxS+bF9li8q1/exf9cv3VOpw7k9Ws6lgp8T5xSo06Z8aXmu+PtMk8F2WqfBHxRbXPxLtLW4+G9nKLXPiKK6uvssX2b97+6/e/89fKr1P9jv8AY/8A2jv29Pjl4z/Z0+HOnS/DzXPh1pt1/wAJrd+JrOK5lsNUi/1Vh5Xm/wDLWX/lr/yyr1/4G/s4aJ+1l4T/AGGfjx8Of2ivhvoun/BvR9L0X4m6d4m8YRadfaPdaZqkV/L/AKNN+8l83yvK/wC2v/PKuc/ZN8Y/DOy/4Ll/GTxUPiL4b0X/AIS2b4jaToPizUNYitraW6lii+zf6TWVPhzI6X7z2Zn/AKz5vV9pB1D5z0K88Uw2uoaH4+0P+zfEnhzUrrRfEmn/AOs+y39rL5V1F/39r1DwT+yv+1d8Pv2EPFn/AAVq8N/2Rc6BLNdWX/CMzWcX9pRaD5Xlf21bXX2r91L5sv8AqvK82vDPCWj+IfC3hqD4PafpNjD4nsfEsvhTUpILyO5tZNUil8qW6+0xfu5YpZf3vm1798QvhPpfgL/gjn8d/wBly2+Jei3Os/Dr9o+PxR4q8NS+JIrK+1PRv7LtIvNitpf9bH5v/omvOyrLcuWb1Kc6Z7+bZrjP7Cp1KdQ+hv2bv2XvjF+xd4x07xF+zN+yt8XviZ4P+IHwZ8L69qV5p+vWt9HFr0sUst95f9oSxf8APWL/AFXm16fr37WmufELwvJB+x58HvEfxQ8Uf2PLezaT4e8qP+wf9bF/p0t1LF5UsUv/ACy/1v7qvCta+PNvL/wVD/Y08WQ/H6y/4Rbwb4I8EWU8MGuxGxsJb7StV+3+ZJ5vlxeb9mi83zf+mVc3+wP4z8D3Pwc/ar/ZY8ZaHoup6n8VvipqfiLwVoniv4hTeHNI8ZaZbahJDcxRavaS/wCs/wCmX/LWufPvD7h7Oc1p42v/ABF/5OfG4LOsZhqNSmfS37D3iO+8NeFJf2cfiL4K8R+FPiB4RiivPGHhrxXZ+Xcxy3MssvnRSxebFLFL/wA9Ypa5v9qH9mr4jf8ABTf4jax+xd8D/sWi3Hw10eLxXrHjHUIYpIor+WKX7DpVtF5sX+t8qXzZf+WVdNous3Pir/goFpelaLqfgHUdL+H3wItvDE3/AArTXrnV7HRpP7QilisJLmX/AJefKpnjjSPAPhr/AIKD+G9em1PQPDGueN/gd428OWfibW72LTYrq/8AKtfssUtyf+Wv+tr8dyjKspyrxgqYNfw6lPn/AO3z6ipmOMq8Pe0Pz0+E/wDwTT+Jvx3/AGN7v9ov4Y/B7xZ4l+OGg/tBy+FPEmiaRrEX2W10u20+WW6/5a+VF+98r975tc94f/Ze8U6p+1np/wCy7+1R+yJ8TL7V4/DeqajqXw48M6la2Wr/ALq1821u/Nll8qW1i/e/8ta05vHeqfCX/gg34o+AVj8RbXTfEN1+1RLpvjDw/pPiSKWW/tYtKl83/VS/vbX7VFFL5v8Aqq+rfA/xk+G0v/BY34GeONU+Lfh+4t/+GKIrfUtVuteikj+3/wBizZill83/AFv+Nf0tPKsHVrU8R7P+GfL4bNsZRo1Kf/Pw+KP2Of2Yv2yv2nfgPYfE74D/ALLPi3xrodhP/ZN34g0+awjj+3xeV5sX726il/5aRVb1j4SfHbQPjQf2X9c+AXiO2+JYvIreHwH/AGb5mpyyyxebF/qv3XleV/y183yqk8OfGC40D/g3q8KfDHwt8S/sN5f/ALR+qS6xounax5dzdWsenxSxSyRf63yvNi/8hV9d65+058HvAX/BwDpfxF8SfHfSdJsPEf7OGmeGLPx7LrEUlrpesXWi/upZbnzf3X72KvOxmQ5diqvPM9rD8T55hMJTX/Ls+Vfjx+zR+1t+yx4Ts/iL+0/+y/4o8DeGLrWItKh8QarLYS232qXzfKi/dXUv/PKWtPWP2NP23/Cvw9u/jH4q/Yv8dWPhOx07+1dR1ub7L/oth/rftUlt5v2qKL/lr/qq9Q/bc/ZX+LX7Lv8AwQc/4Q74ufFTRPGOuaz+1Da6j53hjxTFq8UX/Evuv+WsXm/vZfK83yv+mtfTXxC1Dwr8Uv2P/Hvxy+N3x5+Fcurah+zrdW2mfGz4PfEOXQNT8RS/ZTFbaLqWiSy/vesUX73j95J/qayq8O5RR1sbU+NM3rf8vD4l/wCCav7IX7In7Y3xy0P9mX43/ssePda8Qa8b691L4p+D/in5drYWv72WK6l0z7L+6ii/dxf62vn/AOIP+h/D/wAQaVPe+Z/ZepXWnQ3f/PWKK68qKX/yFXrn7Ovx9/aJ+A/7Fnxc0T4Sa74T0DTNe8SeGNF8batNq/2bxVLay2vlfZbG28r/AFX/AD1l82vK/i1Zwab8NNQgsYPLjihi8mKvJzbFex+r0+T4z1shw9fF4upiHU/dkej/APJVLj/sW7X/ANG12FcHpt5/xd64g/6ly1/9G13lfFcT6VqZ9/kv8I5/4qf8iHqn/XpLWPeQQf8ACUeE/wDrzl/9FRVsfFv/AJEPVP8ArzrLvP8AkaPCf/Xndf8AoqKvRyX/AJFFQzzb/kY0zrIO9SVHB3qSvjcT/GPep/wAH+uri5pv+LyRwf8AUty/+ja7Qf6r8P6Vx/k+d8ZI5/8AqA/+1a9vJdKlT/r2eVmP8I6zyPeiGGpP+WVSV4bq1bnRRpUbB5HvRSv1/Cis/anT7JHiWg/8guL/AK5VcrP0GH/QI60K/WsT/FPhcFT/ANkpklEHeo6sVzVTQjn7VHUk/ao6AD/lrRRRR7UzCpKjooAJ+1Z93p9lq9q+l3tjHJBL/wAspauT9qj8j3oV6LuG69mzE/4Vl4I+y/Yv+EdtvL87zM1Y1DwJ4P1e2ggvNEjkjtYfKhx/yyrXhhorq+tYz/n4cv1DB0v+XZyHiTwf4d06K81Ox0SOKfyf9bXd+Cfg/wDDmHS9P1X/AIRW2luPJikmlm/561y/jD9zoNxz/wAsa9Q8HjyfDlmf+nOKubMsdjKWX3p1DtynLMHWxfv0zzD4keCvDvha+uJ/DuiR2T3Og3XneV/y1/exV7x/wTl/Y08EfH79vTS4NV8LW1z4f8L2cWtaxZyw+ZFdS/8ALKL/AL+14t8Zf+P7H/UIl/8ARsVfqR/wQf8AhXB/whvjT44eRH5mveJPsVnN/wBOtr/9tr6DIMTWrUaXtDwOJMNg8IqlqZ+imj2fk2vnz18x+Ff2Sv2oJ/FWqfB/x/4p8AXPwk1T4zXXxB167tIb/wD4SHxHL/rbHT77zf3X2W1/dRf9crSKvqz/AFNr5Aog71+sfVlVo04H4hWxP748c/aV/wCCfP7G37XPifT/ABd+0X8CtN8UanYWn2Oz1C7vbqKWKLzf9V+6li82vnv9pz/gjR8F9Y+HVn4e/Zz8EWWm2mlzRXM/gm7ml/szVPK/6a+b5sUv/TWvuf8A5ZVH5HvXFjcDhMfS9nMMFmVXAPU/Nf4A/Aj9iD9mr4q6frmu/so23w38aWH/AB6ahqM11c23m/8ATKWWXyq+pfF+hfDL47/DrUPBHiiystf0DWLPy7u1l/eRyxV7f4q+Hvg74hWH9h+OPCllqVv5P+qu4fNrxvXv+Cdfwys/9O+FfjjW/CVxL5snlWl55sX/AH6r+WvELwT4ix+Zf2jgsRUqVIfw/f8AgP0vJONct9j7KpTPPPgz+wh+x5+ztruoeI/hL8ENO0m81TTZdOvJfPllkltZf9bF+9llrj5/+CTP/BPCaWS+/wCGX9J8zzvM/wCQndf/AB2vZ7P9kX9ozQYo4LH9oyK9t/8AV+bd6b+9qSb9j744al/yFf2k7mKP/ltFaabX5fS4G8Z1i6k/rNT/AMDme3/bXC3sTzzwJ+wX+xf8JofEF54P+AXhzTh4ns5bbWP3PmxXUXm+b5XlSy/uov8ArlXk/iX9k7/glJ8INYt/EUPwR0WXVLC88yzs9PvLq5l83/rl5tfUdn/wT38D6l++8f8AxT8Ua3/0ym1Ly4q9A8B/su/AH4Tf6d4W+HOmxXH/AC2u5v3ktfdZB4XeIuKqOpjcbUs9/wB5M8nE8RZFS/hUz87P+Chv7ZfxM1LwbB8HtL+Hdz4a0fxlDL9r1DUZfLufsEX+t/dV8HfCX9nD4PeJbDUPFWreB7b7PqGpSyaPD50v7q1r3D/gpB+0JfftLftI+IL7wrP5Vnf6l/winhWb/pwi/wCPqWq+g6PY6PYW+lWI/wBHtYfKhr7mnldPgvLvqeEqan1OS4ahnXs8RiKZyH/DL/wKEc9xP8M7IG5/1vMv+Yq7Tw54W8O+CtHt/D3h3S47KwiP7q0iNW6kr5vE5vmOLpezqVD7GllmXYT95TpnKeNv2ffg/wCO9Yk8ReKfCFve6hL/AK6X97WdN+yv8AvsEdl/wrOy8uL/AKbS+bXoH72o4f3tarPMzo0VTp1TmqZRltV+0qUzm/CHwa+FngWwvLLwt4IsrKO/h8u8z+982L/trVTw5+zt8HvCusR+IvDvgiytruGbzIbvzpa7OftUdZ/25nH/AD9LWU5a/wDl2cZ4q/Z3+DHjDXrjxF4j8A2Ul5dczS+fLT5vgf8ACybwnH4Im8EWX2C1m+0w2n73/W12FRzTUf27nH/P0P7Iy7/n0YFn4E8HeBPCkel+HYI9Fs9L/wBNhmi/5ZSxfvfNr6g8H/sm+Of2qPC+h/tCftCfsNaD461O/wBOi+x6t/acttdS2v8Ayy82L/VV4l8KvhXqvx++N3hv4H6T5v2fVLz7TrE0X/LrYRf62v208B6DY+G/DlnpWlQRRWdrDFbQxf8ATKKvu+EshrcS0qlSpUqU3/jPheMM2oZVhPq/sz4I+DX/AARR+EvjjWpL/wCMf7Onhzwn4TuruK4/4Q7Sr2WX7fdReb5UtzL5vm/8tZf3UVdp42/YA/Y28SWMf7N3ir4I6dfeGPDF59p8OaV+9j+yxS/88pfN82vuPyevn189/tLXn/CH/tGeC77/AJd/Eem3+k/9vUX72L/2rXfx9wpjMq4dqVcFiKntKf8AfPzTJc1WLzb95/DKHwI+BPwQ/Zw8Hf8ACEfBH4dWXhfS5ZvMmtNPh/1sv/PWWX/Wy18if8Fs/Ffw68a+DPCn7Pmt6LZarql1q/8AaP70/vbGKP8A+O19D/tK/tZfDr9nDwnJrniPVYrnVJYf+JbpMP8ArZZa/LP4n/ELxV8YfiNqnxT8b33mapqk3/gLF/yyiir+UeAshz7E8SVM+zGpUvTP2fDYFYuj9Xp/wzg9O+Cvwm0jU49T0vwTZRyRReXEM96iHwC+D00XkTeCLby5JvMFdYfJ7Ufuq/bamd5jU2q1D7GlkeUUqXs/Z0zn7P4KfCzTr7+1LHwRbRyeV5fk+TWr8MvC3gn4KfEfQPiNonwY8J+KbfQtY/tG98HeLNO+06ZrMXleVLFL5v8A0yll8r/nlLV+ijDcQZtRq+09oGJ4fyitQ9n7M9Y+PP7VHgj4ufALw3+yX8A/2KdF+DHw80bxrJ4v1ezi8Vf2vc6zrPlSxRfvfKi8qKLzZP8AyFXg9n8DvhZpusR65ZeD7b7QJvM8397/AK2ukg71JV43ijNsVV5/aWOfBcJ5PhaXJ7MxNX+GfgnV/ESeKNV8O29zfx/6q6zWV8cZs/D/AFAH/pl/6NirsP8AlrXF/HH/AJEi4/66xf8Ao2oy7FV8XmNL2tQ6MRhcHg6FSdKmV9N/5LTqP/Yt2v8A6NruK4vTYf8Ai8mqDH/MHij/APItdpXRxR/vVM58k/hVDnPiz+98E6pb/wDTpVa8/feMvD//AEys7r/2lVn4p/ufAl/Pgf6ry6ivIf8Ai4Ojwf8ALP8As26/9pV3ZT/yKKgZj/yMKZ0cP+qT6VLUdFfG1T3FsSDr+FcfD/yWGT/sA/8AtWutkmzHiuSh/wCSuyf9i3/7Vr28mX7yp/17PIxv8JHYVJB3qOiGbyq+fq7no4YPI96KPP8AaioNjxfQf+QXF/1yq5B3qnoP/ILi/wCuVXK/XcT/ABT86wX+6UySpP8AllVepIO9cx0hUdSVHWhmFFFFHs2AUUUUAJN/rvxpn/LWpKJ+1ZgRQ/678aX/AJa1JUdFUDn/ABfMP+EdvP8ArlXqnhP/AJAFn/15xV5X4u/5F2f/AK4V6p4a/wCQBb/9cYq4sy/5FJ6OS3/tA4D4yymKXUJx/rLbw5LJ/wCTUVfuH/wSp+G8Hwr/AGMfAeh+R5VxdaDFe3n/AF1uv3tfh38VLP8AtLxHJpX/AD9aP9n/AO/t1FX9DnwN0eDwp4E0fw5B+6+waba23/fqKKvtuEqXtcJSPheOsT7KrUPTPO/dUQzVlzan3xXN/Ej48fCv4M6DJ4j+J3jix0i3i/57Tfvf+/VfrNFO2h+H1WdxNqUH+oo8/wBq+G/id/wWA8Ofb7jQ/wBnr4Sat4puP+ghqEP2a1rxfxh+2l+3r8SJZIP+E/0jwbp/nf6nSbPzZfK/6616GC4Xz3NX/s+HF7Wj/wAvD9QNS17StB/f32uW1t/12m8uvO/G37bH7Mvw3/f+MfjToltJF+78r7Z5stfl3eeD/EfjCWS++Jvxb8UeILiX/XTS6xLHFUmm/DfwBpv7+Dw5bSSf89pf3tfe4Hwi4ixf8T92c9THYSlsfeF5/wAFev2SYbq4g0K+1fUvK/5bWmmy+VLXH+Jf+CxmlXkUn/CufgDr99/zx/tH91Xy3BZ2MNr5EFjHFH/1xqSGb91X2OB8EFS/3iocVTN6R7hqX/BVb9qLUvLn8K/BXw/Y/wDLT/S9Srzf9pb/AIKoftbWfw0vND/4RzQLK48R/wDEps/snm+b+9/5a1y9eB/GbXp/Enx9j0qA/u/CWg/aYfO/d+bdS1w8Y+F+X8N5FUxCqHr5BjauYZjTps5P4b6DBqXxBvNV8/zbPw5D/Z1nN/09f8tZa9Qh8iGvP/hXNY+D/h9Zwa5fW1teSzS3N5D53/LWWugm+JHg6GXyDrkfmf8ATH97X+fvEuDzPMMxfs6R/UmUVsHhMHa50n+tqSb91XH/APCyND83/QYL65k/6Y2ctWNN8SeMdel/4lXwy1uX/rrD5VedguB+JMX/AA8MzWpnmW0f4lQ6j7Zb+h/Oo/Nh9az7PRvjFqUvkQfDKWL/AKbXd5FUn/CB/Hea6/ceFdNij/6bXlerT8KOM6r/AHeGqHFU4qyKl/y9Lk15Bmo/tnv+lH/CmfjjedNc0Sy/7+yVJD+zr8RryL/ia/FS2i/69LOvfw3gXx1ivgwxw1OO+HaX/L0jnvf+eFV7zUoIbWS+vp/Kji/eVoQ/sr380v8Ap3xi1eX/AK5QxVYvP2V9DvIo4NU8ca3c2/8Ay2i/5619Tgfo2cZ1X+8pniYnxMyOltUPWP8Agmb8fvgf8E9e1T4jfGnStXsdU16aK203UZbP/RbWw/8AttfqR8MfjN8Mvino1vrnw58ZWOpWX/TpNX5X2dnY2dhHpXkRyW8UPlwxVn6Po/ir4e6zH4x+BHjG+8LaxF/z6f8AHrL/ANdYq/onKPAzMcgyen7P+IfjOd8Y0uIMZ+8P2U/tLzua+X/+Cumg+Mbz9jfWPH/w51yXTdc8G3kWtWeoxf62KKKXypf/ACFLXnf7K/8AwVE+2a/Z/CT9qHSovDfiCWHy9N1uKb/Qb/8A7a/8spa+mPj9oNj8Wv2ffGng6Dy7mPVPCt/bf+SsvlV8DxVw/Xo0KuHxFMzyx+yxtOpTPwk1K91XXr+TxF4j8R32rahdfvJru7m82krP8HzTzeDdL+3f8fEVnFHNL/01i/dVcg71/ImZU/qmMqUj+u8jp0fqVKpTLHn+1SVHB3qSvEue5VSJKKjg70f8taRmSQzVJ/y1qOpKAVRXJK4/4vxed4S/f/8AP5a/+ja6yuX+LX7nw5H76la/+ja9bJf+RjTOHG/wahHZ+RN8WtUn/wCeWm2tdZ5/tXH6P/yVTxD/ANcbWus/5ZV6XEn+90zhyj+FUOb+ME2fAd5+/wD9b5X/AKNqO9Hk/EvS4P8Anlpt1R8X/wDkQrj/AK6xf+jaZqX/ACVW0g/6g91J/wCRa7sqX/Cb95zY3/fKZ1fn+1FH/LKivinue/S2CuTg/wCStXH/AGAYv/R1dRXLxf8AJV7v/sAxf+ja93Kf4tT/AK9nlZl/y7Os8/2qSo6K8F7nbhdkSv1/CioqKDY8b0H/AJBlv/1xq5/y1oor9ZxP8U/Pst/3SmSQd6k8/wBqKKyOkrTf678aWiiipuAT9qKKKDMKKKKADz/aiiigCOib/U/hRRRU3MzA8a/8i7ef9cq9T0H/AI8bb/rjFRRXn5t/yLT2sl/inH+JIfO+L/h+x/56zWEf/lQir9uPip+298Hf2e5bjwrrs8mpa5F/qdJ0+HzJaKK/Q+CFelSPzjj7+LUPn/4kft+ftNfE6KSx8D6HZeDdPl/5e5v3t1Xi954Vg1i/k1zxxqt74g1D/n71abzKKK/t3gzhXJMRRTnSufgmPrVKHwM0P+uEHlR/88YqMj1oor9zwGTZdhKS9nTSPmqmIqvqFSQd6KK7TbeiFSef7UUUGQhnxF0rA8R/DH4f+K9T/tzxF4ctrm8/1fmmiiuLMcswWYYNwrwuj0cFiKtCreDsSWfwl+GVn5Zg8DWX/bWHzK0LPwT4Osv+PHwrZRSf9edFFfJ4fgDg56/UofcelU4kzhf8vDUhhsYR+4sYo/8AtjVjzvJm/cUUV6lLhPIaD9yikfO1M9zOtV9+ow8797R5HvRRXpRyvAU1pBFVMfif5ix/rarzeRRRWSwtFVtEOpOTI/3ENHn+1FFd9kjjDz/ao/P9qKKdkFIw/iRps/jyws/hloelfbtY8R3kVlo8P/PL/prX6ieCf+Ec+D/wg0/Q/GPiOOKz0vR4rK8u7ub/AKZeVRRX8yeM6VG/IfoGRfwkfhnNoP8AwjeqapofnxyR2uvX/wBjmi/55fav3VE01FFf5xcQa5lUP6/4Z/5FFMj8/wBqsQzfuqKK8M92psSef7UT9qKKzMwqTz/aiigA8/2rl/i1N/xIbP8A6a6xa/8Ao2iivTyf/kZUjmxv+51CPw3/AMlL8ST/APTG1/8Aatdh/wAtaKK9LiP/AHumeZlH8Gocf8Zv33hLn/n8i/8ARtR3kxh+Mlvn/oA3X/o2iivQyv8A5FP/AIGcWM/5GB1nnfuqPP8Aaiivinue/hdkAmycYrj4Zv8Ai7V5/wBgGL/0bRRXt5T/ABKn/Xs83G/wzsP9V5eKkoorxKp6NH+AMfr+FFFFZln/2Q==" alt="homer" width="960">
</div>
</div>
<div class="sect2">
<h3 id="breakout"><a class="link" href="#breakout">breakout</a></h3>
<div class="paragraph">
<p>Okay, let’s see what the distribution code for <code>breakout</code> itself does.  Go ahead and execute</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">cd ~/Dropbox/pset3/breakout</code></pre>
</div>
</div>
<div class="paragraph">
<p>followed by</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">make breakout</code></pre>
</div>
</div>
<div class="paragraph">
<p>or, more simply,</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">make</code></pre>
</div>
</div>
<div class="paragraph">
<p>to compile the distro.  Then execute</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">./breakout</code></pre>
</div>
</div>
<div class="paragraph">
<p>to run the program as is.  A window like the below should appear.</p>
</div>
<div class="paragraph">
<p><span class="image"><img src="data:image/png;base64,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AFBKWAAoJSwAlBIWAEoJCwClhAWAUsICQClhAaCUsABQSlgAKCUsAJQSFgBKCQsApYQFgFLCAkApYQGglLAAUEpYACglLACUEhYASgkLAKWEBYBSwgJAKWEBoJSwAFBKWAAoJSwAlBIWAEoJCwClhAWAUsICQClhAaCUsABQSlgAKCUsAJQSFgBKCQsApYQFgFLCAkApYQGglLAAUEpYACglLACUEhYASgkLAKWEBYBSwgJAKWEBoJSwAFBKWAAoJSwAlBIWAEoJCwClhAWAUsICQClhAaCUsABQSlgAKCUsAJQSFgBKCQsApYQFgFLCAkApYQGglLAAUEpYACglLACUEhYASgkLAKWEBYBSwgJAKWEBoJSwAFBKWAAoJSwAlBIWAEoJCwClhAWAUsICQClhAaCUsABQSlgAKCUsAJQSFgBKCQsApYQFgFLCAkApYQGglLAAUEpYACglLACUEhYASgkLAKWEBYBSwgJAKWEBoJSwAFBKWAAoJSwAlBIWAEoJCwClhAWAUsICQClhAaCUsABQSlgAKCUsAJQSFgBKCQsApYQFgFLCAkApYQGglLAAUEpYACglLACUEhYASgkLAKWEBYBSwgJAKWEBoJSwAFBKWAAoJSwAlBIWAEoJCwClhAWAUsICQClhAaCUsABQSlgAKCUsAJQSFgBKCQsApYQFgFLCAkApYQGglLAAUEpYACglLACUEhYASgkLAKWEBYBSwgJAKWEBoJSwAFBKWAAoJSwAlBIWAEoJCwClhAWAUsICQClhAaCUsABQSlgAKCUsAJQSFgBKCQsApYQFgFLCAkApYQGglLAAUEpYACglLACUEhYASgkLAKWEBYBSwgJAKWEBoJSwAFBKWAAoJSwAlBIWAEoJCwClhAWAUsICQClhAaCUsABQSlgAKCUsAJQSFgBKCQsApYQFgFLCAkApYQGglLAAUEpYACglLACUEhYASgkLAKWEBYBSwgJAKWEBoJSwAFBKWAAoJSwAlBIWAEoJCwClhAWAUsICQClhAaCUsABQSlgAKCUsAJQSFgBKCQsApYQFgFLCAkApYQGglLAAUEpYACglLACUEhYASgkLAKWEBYBSwgJAKWEBoJSwAFBKWAAoJSwAlBIWAEoJCwClhAWAUsICQClhAaCUsABQSlgAKCUsAJQSFgBKCQsApYQFgFLCAkApYQGglLAAUEpYACglLACUEhYASgkLAKWEBYBSwgJAKWEBoJSwAFBKWAAoJSwAlBIWAEoJCwClhAWAUsICQClhAaCUsABQSlgAKCUsAJQSFgBKCQsApYQFgFLCAkApYQGglLAAUEpYACglLACUEhYASgkLAKWEBYBSwgJAKWEBoJSwAFBKWAAoJSwAlBIWAEoJCwClhAWAUsICQClhAaCUsABQSlgAKCUsAJQSFgBKCQsApYQFgFLCAkApYQGglLAAUEpYACglLACUEhYASgkLAKWEBYBSwgJAKWEBoJSwAFBKWAAoJSwAlBIWAEoJCwClhAWAUsICQClhAaCUsABQSlgAKCUsAJQSFgBKCQsApYQFgFLCAkApYQGglLAAUEpYACglLACUEhYASgkLAKWEBYBSwgJAKWEBoJSwAFBKWAAoJSwAlBIWAEoJCwClhAWAUsICQClhAaCUsABQSlgAKCUsAJQSFgBKCQsApYQFgFLCAkApYQGglLAAUEpYACglLACUEhYASgkLAKWEBYBSwgJAKWEBoJSwAFBKWAAoJSwAlBIWAEoJCwClhAWAUsICQClhAaCUsABQSlgAKCUsAJQSFgBKCQsApYQFgFLCAkApYQGglLAAUEpYACglLACUEhYASgkLAKWEBYBSwgJAKWEBoJSwAFBKWAAoJSwAlBIWAEoJCwClhAWAUsICQClhAaCUsABQSlgAKCUsAJQSFgBKCQsApYQFgFLCAkApYQGglLAAUEpYACglLAA8d43eqT+7bWEBoJawAFBKWAAoJSwAlBIWAEoJCwClhAWAUsICQClhAaCUsABQSlgAKCUsAJTqO/qLpW/73X/4CN121b4A8Hxw+AMlnyUzFgBKTc1Ynsus4zmWDYDnmed4Jer/AngAYfdg1ePSAAAAAElFTkSuQmCC" alt="distribution code’s GUI"></span></p>
</div>
<div class="paragraph">
<p>Hm, not much of a game.  Yet!</p>
</div>
<div class="paragraph">
<p>Now try out the staff’s solution by executing the below.</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="bash language-bash">~cs50/pset3/breakout</code></pre>
</div>
</div>
<div class="paragraph">
<p>A window like the below should appear.</p>
</div>
<div class="paragraph">
<p><span class="image"><img src="data:image/png;base64,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" alt="staff’s solution"></span></p>
</div>
<div class="paragraph">
<p>Wow! Go ahead and click somewhere inside that window in order to play.  (You might need to enlarge your appliance’s window in order to see the entirety of the game’s window.) The goal, quite simply, is to bounce the ball off of the paddle so as to hit bricks with it.  If you break all the bricks, you win!  But if you miss the ball three times, you lose!  To quit the game, hit control-c back in the terminal window.</p>
</div>
<div class="paragraph">
<p>Nice.  Let’s make your implementation look more like that one.  But, first, a tour!</p>
</div>
<div class="paragraph">
<p>Open up <code>breakout.c</code> with <code>gedit</code> and take a moment to scroll through it to get a sense of what lies ahead. Let’s walk through it from top to bottom.</p>
</div>
<div class="ulist">
<ul>
<li>
<p>Atop the file you’ll see some familiar header files.  We’ve also included some header files from SPL.</p>
</li>
<li>
<p>Next up are some constants, values that you don’t need to change, but because the code we’ve written (and that you’ll write) needs to know these values in a few places, we’ve factored them out as constants so that we or you could, theoretically, change them in one convenient location.  By contrast, hard-coding the same number (pejoratively known as a "magic number") into your code in multiple places is considered bad practice, since you’d have to remember to change it, potentially, in all of those places.</p>
</li>
<li>
<p>Below those constants are a bunch of prototypes for functions that are defined below <code>main</code>.  More on each of those soon.</p>
</li>
<li>
<p>Next up is our old friend, <code>main</code>.  It looks like the first thing that <code>main</code> does is "seed" that so-called PRNG with the current time.  (See <code>man srand48</code> and <code>man 2 time</code> if curious.)  Again, to seed a PRNG simply means to initialize it in such a way that the numbers it will eventually spit out will appear to be random.  It’s deliberate, then, that we’re initializing the PRNG with the current time: time’s always changing.  Were we instead to initialize the PRNG with some hard-coded value, it’d always spit out the same sequence of "random" numbers.</p>
<div class="paragraph">
<p>After that call to <code>srand48</code>, it looks like <code>main</code> calls <code>newGWindow</code>, passing in a desired <code>WIDTH</code> and <code>HEIGHT</code>.  That function "instantiates" (i.e., creates) a new graphical window, returning some sort of reference thereto.  (It’s technically a pointer, but that detail, and the accompanying <code>*</code>, is, again, hidden from us by SPL.)  That function’s return value is apparently stored in a variable called <code>window</code> whose type is <code>GWindow</code>, which happens to be declared in a <code>gwindow.h</code> header file that you may have glimpsed earlier.</p>
</div>
<div class="paragraph">
<p>Next, <code>main</code> calls <code>initBricks</code>, a function written partly by us (and, soon, mostly by you!) that instantiates a grid of bricks atop the game’s window.</p>
</div>
<div class="paragraph">
<p>Then <code>main</code> calls <code>initBall</code>, which instantiates the ball that will be used to play Breakout.  Passed into that function is <code>window</code> so that the function knows where to "place" (i.e., draw) the ball. The function returns a <code>GOval</code> (graphical oval) whose width and height will simply be equal (ergo a circular ball).</p>
</div>
<div class="paragraph">
<p>Called by <code>main</code> next is <code>initPaddle</code>, which instantiates the game’s paddle; it returns a <code>GRect</code> (graphical rectangle).</p>
</div>
<div class="paragraph">
<p>Then <code>main</code> calls <code>initScoreboard</code>, which instantiates the game’s scoreboard, which is simply a <code>GLabel</code> (graphical label).</p>
</div>
<div class="paragraph">
<p>Below all those function calls are a few definitions of variables, namely <code>bricks</code>, <code>lives</code>, and <code>points</code>. Below those is a loop, which is meant to iterate again and again so long as the user has lives left to live and bricks left to break.  Of course, there’s not much code in that loop now!</p>
</div>
<div class="paragraph">
<p>Below the loop is a call to <code>waitForClick</code>, a function that does exactly that so that the window doesn’t close until the user intends.</p>
</div>
<div class="paragraph">
<p>Not too bad, right?  Let’s next take a closer look at those functions.</p>
</div>
</li>
<li>
<p>In <code>initBricks</code>, you’ll eventually write code that instantiates a grid of bricks in the window.  Those constants we saw earlier, <code>ROWS</code> and <code>COLS</code>, represent that grid’s dimensions.  How to draw a grid of bricks on the screen?  Well, odds are you’ll want to employ a pair of <code>for</code> loops, one nested inside of the other.  And within that innermost loop, you’ll likely want to instantiate a <code>GRect</code> of some width and height (and color!) to represent a brick.</p>
</li>
<li>
<p>In <code>initBall</code>, you’ll eventually write code that instantiates a ball (that is, a circle, or really a <code>GOval</code>) and somehow center it in the window.</p>
</li>
<li>
<p>In <code>initPaddle</code>, you’ll eventually write code that instantiates a paddle (just a <code>GRect</code>) that’s somehow centered in the bottom-middle of the game’s window.</p>
</li>
<li>
<p>Finally, in <code>initScoreboard</code>, you’ll eventually write code that instantiates a scoreboard as, quite simply, a <code>GLabel</code> whose value is a number (well, technically, a <code>char*</code>, which we once knew as a <code>string</code>).</p>
</li>
<li>
<p>Now, we’ve already implemented <code>updateScoreboard</code> for you.  All that function does, given a <code>GWindow</code>, a <code>GLabel</code>, and an <code>int</code>, is convert the <code>int</code> to a <code>string</code> (okay, <code>char*</code>) using a function called <code>sprintf</code>, after which it sets the label to that value and then re-centers the label (in case the <code>int</code> has more digits than some previous <code>int</code>).  Why did we allocate an array of size <code>12</code> for our representation of that <code>int</code> as a <code>string</code>?  No worries if the reason’s non-obvious, but give some though as to how wide the most positive (or most negative!) <code>int</code> might be.  You’re welcome to change this function, but you’re not expected to.</p>
</li>
<li>
<p>Last up is <code>detectCollision</code>, another function that we’ve written for you.  (Phew!)  This one’s a bit more involved, so do spend some time reading through it.  This function’s purpose in life, given the ball as a <code>GOval</code>, is to determine whether that ball has collided with (i.e., is overlapping) some other object (well, <code>GObject</code>) in the game.  (A <code>GRect</code>, <code>GOval</code>, or <code>GLabel</code> can also be thought of and treated as a <code>GObject</code>, per <a href="http://cdn.cs50.net/2013/fall/lectures/5/m/src5m/spl/doc/gobjects.html">http://cdn.cs50.net/2013/fall/lectures/5/m/src5m/spl/doc/gobjects.html</a>.)  To do so, it cuts some corners (figuratively but also kind of literally) by checking whether any of the ball’s "corners," as defined by the ball’s "bounding box", per the below (wherein <em>x</em> and <em>y</em> represent coordinates, and <em>r</em> represents the ball’s radius) are touching some other <code>GObject</code> (which might be a brick or a paddle or even something else).</p>
<div class="paragraph">
<p><span class="image"><img src="data:image/png;base64,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" alt="ball’s bounding box"></span></p>
</div>
</li>
</ul>
</div>
<div class="paragraph">
<p>Alright, ready to break out Breakout?</p>
</div>
<div class="paragraph">
<p>If you’re like me, odds are you’ll find it easiest to implement Breakout via some baby steps, each of which will get you closer and closer to a great outcome.  Rather than try to implement the whole game at once, allow me to suggest that you proceed as follows:</p>
</div>
<div class="olist arabic">
<ol class="arabic">
<li>
<p>Try out the staff’s solution again (via <code>~cs50/pset3/breakout/breakout</code>) to remind yourself how our implementation behaves.  Yours doesn’t need to be identical.  In fact, all the better if you personalize yours.  But playing with our implementation should help guide you toward yours.</p>
</li>
<li>
<p>Implement <code>initPaddle</code>.  Per the function’s return value, your paddle should be implemented as a <code>GRect</code>.  Odds are you’ll first want to decide on a width and height for your paddle, perhaps declaring them both atop <code>breakout.c</code> with constants.  Then calculate coordinates (<em>x</em> and <em>y</em>) for your paddle, keeping in mind that it should be initially aligned in the bottom-middle of your game’s window.  We leave it to you to decide exactly where.  Odds are some arithmetic involving the window’s width and height and the paddle’s width and height will help you center it.  Keep in mind that <em>x</em> and <em>y</em> refer to a <code>GRect</code>'s top-left corner, not its own middle.  Your paddle’s size and location doesn’t need to match the staff’s precisely, but it should be perfectly centered, near the window’s bottom.  You’re welcome to choose a color for it too, for which <code>setColor</code> and <code>setFilled</code> might be of interest.  Finally, instantiate your paddle with <code>newGRect</code>.  (Take note of that function’s prototype at <a href="http://cdn.cs50.net/2014/fall/psets/3/pset3/spl/doc/gobjects.html">http://cdn.cs50.net/2014/fall/psets/3/pset3/spl/doc/gobjects.html</a>.)  Then return the <code>GRect</code> returned by <code>newGRect</code> (rather than <code>NULL</code>, which the distribution code returns only so that the program will compile without <code>initPaddle</code> fully implemented).</p>
</li>
<li>
<p>Now, <code>initPaddle</code>'s purpose in life is only to instantiate and return a paddle (i.e., <code>GRect</code>).  It shouldn’t handle any of the paddle’s movement.  For that, turn your attention to the <code>TODO</code> up in <code>main</code>.  Proceed to replace that <code>TODO</code> with some lines of code that respond to a user’s mouse movements in such a way that the paddle follows the movements, but only along its (horizontal) x-axis.  Look back at <code>cursor.c</code> for inspiration, but keep in mind that <code>cursor.c</code> allowed that circle to move along a (vertical) y-axis as well, which we don’t want for Breakout, else the paddle could move anywhere (which might be cool but not exactly Breakout).</p>
</li>
<li>
<p>Now turn your attention to the <code>TODO</code> in <code>initBricks</code>.  Implement that function in such a way that it instantiates a grid of bricks (with <code>ROWS</code> rows and <code>COLS</code> columns), with each such brick implemented as a <code>GRect</code>.  Drawing a <code>GRect</code> (or even a bunch of them) isn’t all that different from drawing a <code>GOval</code> (or circle).  Odds are, though, you’ll want to instantiate them within a <code>for</code> loop that’s within a <code>for</code> loop.  (Think back to <code>mario</code>, perhaps!)  Be sure to leave a bit of a gap between adjacent bricks, just like we did; exactly how many pixels is up to you.  And we leave it to you to select your bricks' colors.</p>
</li>
<li>
<p>Now implement <code>initBall</code>, whose purpose in life is to instantiate a ball in the window’s center.  (Another opportunity for a bit of arithmetic!)  Per the function’s prototype, be sure to return a <code>GOval</code>.</p>
</li>
<li>
<p>Then, back in <code>main</code>, where there used to be a <code>TODO</code>, proceed to write some additional code (within that same <code>while</code> loop) that compels that ball to move.  Here, too, take baby steps.  Look to <code>bounce.c</code> first for ideas on how to make the ball bounce back and forth between your window’s edges.  (Not the ultimate goal, but it’s a step toward it!)  Then figure out how to make the ball bounce up and down instead of left and right.  (Closer!)  Then figure out how to make the ball move at an angle.  Then, utilize <code>drand48</code> to make the ball’s initial velocity random, at least along its (horizontal) x-axis.  Note that, per its <code>man</code> page, <code>drand48</code> returns "nonnegative double-precision floating-point values uniformly distributed between [0.0, 1.0)."  In other words, it returns a <code>double</code> between 0.0 (inclusive) and 1.0 (exclusive).  If you want your velocity to be faster than that, simply add some constant to it and/or multiply it by some constant!</p>
<div class="paragraph">
<p>Ultimately, be sure that the ball still bounces off edges, including the window’s bottom for now.</p>
</div>
</li>
<li>
<p>When ready, add some additional code to <code>main</code> (still somewhere inside of that <code>while</code> loop) that compels the ball to bounce off of the paddle if it collides with it on its way downward.  Odds are you’ll want to call that function we wrote, <code>detectCollision</code>, inside that loop in order to detect whether the ball’s collided with something so that, if so, you can somehow handle such an event.  Of course, the ball could collide with the paddle or with any one of those bricks.  Keep in mind, then, that <code>detectCollision</code> could return any such <code>GObject</code>; it’s left to you to determine what has been struck.  Know, then, that if you store its return value, as with</p>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="c language-c">GObject object = detectCollision(window, ball);</code></pre>
</div>
</div>
<div class="paragraph">
<p>you can determine whether that <code>object</code> is your game’s paddle, as with the below.</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="c language-c"><span class="keyword">if</span> (object == paddle)
{
    <span class="comment">// TODO</span>
}</code></pre>
</div>
</div>
<div class="paragraph">
<p>More generally, you can determine if that <code>object</code> is a <code>GRect</code> with:</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="c language-c"><span class="keyword">if</span> (strcmp(getType(object), <span class="string"><span class="delimiter">"</span><span class="content">GRect</span><span class="delimiter">"</span></span>) == <span class="integer">0</span>)
{
    <span class="comment">// TODO</span>
}</code></pre>
</div>
</div>
<div class="paragraph">
<p>Once it comes time to add a <code>GLabel</code> to your game (for its scoreboard), you can similarly determine if that <code>object</code> is <code>GLabel</code>, in which case it might be a collision you want to ignore. (Unless you want your scoreboard to be something the ball can bounce off of.  Ours isn’t.)</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="c language-c"><span class="keyword">if</span> (strcmp(getType(object), <span class="string"><span class="delimiter">"</span><span class="content">GLabel</span><span class="delimiter">"</span></span>) == <span class="integer">0</span>)
{
    <span class="comment">// TODO</span>
}</code></pre>
</div>
</div>
</li>
<li>
<p>Once you have the ball bouncing off the paddle (and window’s edges), focus your attention again on that <code>while</code> loop in <code>main</code> and figure out how to detect if the ball’s hit a brick and how to remove that brick from the grid if so.  Odds are you’ll find <code>removeGWindow</code> of interest, per <a href="http://cdn.cs50.net/2014/fall/psets/3/pset3/spl/doc/gwindow.html">http://cdn.cs50.net/2014/fall/psets/3/pset3/spl/doc/gwindow.html</a>.  <strong>SPL’s documentation incorrectly refers to that function as <code>remove</code>, but it’s indeed <code>removeGWindow</code> you want, whose prototype, to be clear, is the below.</strong></p>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code class="c language-c"><span class="directive">void</span> removeGWindow(GWindow gw, GObject gobj);</code></pre>
</div>
</div>
</li>
<li>
<p>Now decide how to determine whether the ball has zoomed past the paddle and struck the window’s bottom edge, in which case the user should lose a life and gameplay should probably pause until the user clicks the mouse button, as in the staff’s implementation.  Odds are detecting this situation isn’t all that different from the code you already wrote for bouncing; you just don’t want to bounce off that bottom edge anymore!</p>
</li>
<li>
<p>Lastly, implement <code>initScoreboard</code> in such a way that the function instantiates and positions a <code>GLabel</code> somewhere in your game’s window.  Then, enhance <code>main</code> in such a way that the text of that <code>GLabel</code> is updated with the user’s score anytime the user breaks a brick.  Indeed, be sure that your program keeps track of how many lives remain and how many bricks remain, the latter of which is inversely related to how many points you should give the user for each brick broken; our solution awards one point per brick, but you’re welcome to offer different rewards.  A user’s game should end (i.e., the ball should stop moving) after a user runs out of lives or after all bricks are broken.  We leave it to you to decide what to do in both cases, if anything more!</p>
</li>
</ol>
</div>
<div class="paragraph">
<p>Because this game expects a human to play, no <code>check50</code> for this one!  Best to invite some friends to find bugs!</p>
</div>
</div>
</div>
</div>
<div class="sect1">
<h2 id="how_to_submit"><a class="link" href="#how_to_submit">How to Submit</a></h2>
<div class="sectionbody">
<div class="sect2">
<h3 id="step_1_of_2"><a class="link" href="#step_1_of_2">Step 1 of 2</a></h3>
<div class="paragraph">
<p>When ready to submit, open up a Terminal window and navigate your way to <code>~/Dropbox</code>.  Create a ZIP (i.e., compressed) file containing your entire <code>pset3</code> directory by executing the below.  Incidentally, <code>-r</code> means "recursive," which in this case means to ZIP up everything inside of <code>pset3</code>, including any subdirectories (or even subsubdirectories!).</p>
</div>
<div class="listingblock">
<div class="content">
<pre class="CodeRay"><code>zip -r pset3.zip pset3</code></pre>
</div>
</div>
<div class="paragraph">
<p>If you type <code>ls</code> thereafter, you should see that you have a new file called <code>pset3.zip</code> in <code>~/Dropbox</code>.  (If you realize later that you need to make a change to some file and re-ZIP everything, you can delete the ZIP file you already made with <code>rm pset3.zip</code>, then create a new ZIP file as before.)
* Once done creating your ZIP file, open up Chrome <em>inside</em> of the appliance (not on your own computer) and visit <a href="http://cs50.edx.org/submit">cs50.edx.org/submit</a>, logging in if prompted.
* Click <strong>Submit</strong> toward the window’s top-left corner.
* Under <strong>Problem Set 3</strong> on the screen that appears, click <strong>Upload New Submission</strong>.
* On the screen that appears, click <strong>Add files…</strong>.  A window entitled <strong>Open Files</strong> should appear.
* Navigate your way to <code>pset3.zip</code>, as by clicking <strong>jharvard</strong>, then double-clicking <strong>Dropbox</strong>.  Once you find <code>pset3.zip</code>, click it once to select it, then click <strong>Open</strong>.
* Click <strong>Start upload</strong> to upload your ZIP file to CS50’s servers.
* On the screen that appears, you should see a window with <strong>No File Selected</strong>.  If you move your mouse toward the window’s lefthand side, you should see a list of the files you uploaded.  Click each to confirm the contents of each.  (No need to click any other buttons or icons.)  If confident that you submitted the files you intended, consider your source code submitted!  If you’d like to re-submit different (or modified) files, simply return to <a href="http://cs50.edx.org/submit">cs50.edx.org/submit</a> and repeat these steps.  You may re-submit as many times as you’d like; we’ll grade your most recent submission, so long as it’s before the deadline.</p>
</div>
</div>
<div class="sect2">
<h3 id="step_2_of_2"><a class="link" href="#step_2_of_2">Step 2 of 2</a></h3>
<div class="paragraph">
<p>Head to <a href="http://cs50.edx.org/2015/psets/3/">http://cs50.edx.org/2015/psets/3/</a> where a short form awaits.  Once you have submitted that form (as well as your source code), you are done!</p>
</div>
<div class="paragraph">
<p>This was Problem Set 3.</p>
</div>
</div>
</div>
</div>
        </div>
