evan@evan-VirtualBox:~/3560/quiz2/3560Quiz2$ make all
g++ -c college.cc
g++ -c collegemain.cc
g++ -c course.cc
g++ college.o collegemain.o course.o -o myexe.out
doxygen -g doxygenconfig


Configuration file `doxygenconfig' created.

Now edit the configuration file and enter

  doxygen doxygenconfig

to generate the documentation for your project

doxygen doxygenconfig
Searching for include files...
Searching for example files...
Searching for images...
Searching for dot files...
Searching for msc files...
Searching for dia files...
Searching for files to exclude
Searching INPUT for files to process...
Searching for files in directory /home/evan/3560/quiz2/3560Quiz2
Reading and parsing tag files
Parsing files
Preprocessing /home/evan/3560/quiz2/3560Quiz2/college.cc...
Parsing file /home/evan/3560/quiz2/3560Quiz2/college.cc...
Preprocessing /home/evan/3560/quiz2/3560Quiz2/college.h...
Parsing file /home/evan/3560/quiz2/3560Quiz2/college.h...
Preprocessing /home/evan/3560/quiz2/3560Quiz2/collegemain.cc...
Parsing file /home/evan/3560/quiz2/3560Quiz2/collegemain.cc...
Preprocessing /home/evan/3560/quiz2/3560Quiz2/course.cc...
Parsing file /home/evan/3560/quiz2/3560Quiz2/course.cc...
Preprocessing /home/evan/3560/quiz2/3560Quiz2/course.h...
Parsing file /home/evan/3560/quiz2/3560Quiz2/course.h...
Preprocessing /home/evan/3560/quiz2/3560Quiz2/node.h...
Parsing file /home/evan/3560/quiz2/3560Quiz2/node.h...
Reading /home/evan/3560/quiz2/3560Quiz2/README.md...
Preprocessing /home/evan/3560/quiz2/3560Quiz2/tarray.h...
Parsing file /home/evan/3560/quiz2/3560Quiz2/tarray.h...
Building group list...
Building directory list...
Building namespace list...
Building file list...
Building class list...
Associating documentation with classes...
Computing nesting relations for classes...
Building example list...
Searching for enumerations...
Searching for documented typedefs...
Searching for members imported via using declarations...
Searching for included using directives...
Searching for documented variables...
Building interface member list...
Building member list...
Searching for friends...
Searching for documented defines...
Computing class inheritance relations...
Computing class usage relations...
Flushing cached template relations that have become invalid...
Computing class relations...
/home/evan/3560/quiz2/3560Quiz2/tarray.h:14: warning: Compound Tarray is not documented.
/home/evan/3560/quiz2/3560Quiz2/node.h:12: warning: Compound node is not documented.
/home/evan/3560/quiz2/3560Quiz2/course.h:16: warning: Compound course is not documented.
/home/evan/3560/quiz2/3560Quiz2/college.h:20: warning: Compound College is not documented.
Add enum values to enums...
Searching for member function documentation...
Creating members for template instances...
Building page list...
Search for main page...
Computing page relations...
Determining the scope of groups...
Sorting lists...
Freeing entry tree
Determining which enums are documented
Computing member relations...
Building full member lists recursively...
Adding members to member groups.
Computing member references...
Inheriting documentation...
Generating disk names...
Adding source references...
Adding xrefitems...
Sorting member lists...
Computing dependencies between directories...
Generating citations page...
Counting data structures...
Resolving user defined references...
Finding anchors and sections in the documentation...
Transferring function references...
Combining using relations...
Adding members to index pages...
Generating style sheet...
Generating search indices...
Generating example documentation...
Generating file sources...
Generating code for file college.h...
Generating code for file course.h...
Generating code for file node.h...
Generating code for file tarray.h...
Generating file documentation...
Generating docs for file college.cc...
Generating docs for file college.h...
Generating docs for file collegemain.cc...
/home/evan/3560/quiz2/3560Quiz2/collegemain.cc:26: warning: Member menu() (function) of file collegemain.cc is not documented.
/home/evan/3560/quiz2/3560Quiz2/collegemain.cc:28: warning: Member main() (function) of file collegemain.cc is not documented.
Generating docs for file course.cc...
/home/evan/3560/quiz2/3560Quiz2/course.cc:83: warning: Member operator>>(istream &ins, course &c) (function) of file course.cc is not documented.
/home/evan/3560/quiz2/3560Quiz2/course.cc:88: warning: Member operator<<(ostream &outs, const course &c) (function) of file course.cc is not documented.
Generating docs for file course.h...
/home/evan/3560/quiz2/3560Quiz2/course.h:51: warning: Member operator>>(std::istream &ins, course &c) (function) of file course.h is not documented.
/home/evan/3560/quiz2/3560Quiz2/course.h:52: warning: Member operator<<(std::ostream &outs, const course &c) (function) of file course.h is not documented.
Generating docs for file node.h...
Generating docs for file tarray.h...
Generating page documentation...
Generating docs for page md_README...
Generating group documentation...
Generating class documentation...
Generating docs for compound College...
/home/evan/3560/quiz2/3560Quiz2/college.h:22: warning: Member College(std::string s) (function) of class College is not documented.
/home/evan/3560/quiz2/3560Quiz2/college.h:24: warning: Member College(const College &other) (function) of class College is not documented.
/home/evan/3560/quiz2/3560Quiz2/college.h:40: warning: Member display(std::ostream &outs) (function) of class College is not documented.
/home/evan/3560/quiz2/3560Quiz2/college.h:41: warning: Member hours() (function) of class College is not documented.
/home/evan/3560/quiz2/3560Quiz2/college.h:42: warning: Member gpa() (function) of class College is not documented.
/home/evan/3560/quiz2/3560Quiz2/college.h:43: warning: Member save(std::ostream &outs) (function) of class College is not documented.
/home/evan/3560/quiz2/3560Quiz2/college.h:44: warning: Member load(std::istream &ins) (function) of class College is not documented.
/home/evan/3560/quiz2/3560Quiz2/college.h:30: warning: argument 'in' of command @param is not found in the argument list of College::add(course &c)
/home/evan/3560/quiz2/3560Quiz2/college.h:25: warning: argument 'in' of command @param is not found in the argument list of College::operator=(const College &other)
/home/evan/3560/quiz2/3560Quiz2/college.h:35: warning: argument 'in' of command @param is not found in the argument list of College::remove(std::string coursename)
Generating docs for compound course...
/home/evan/3560/quiz2/3560Quiz2/course.h:20: warning: Member input(std::istream &ins) (function) of class course is not documented.
/home/evan/3560/quiz2/3560Quiz2/course.h:21: warning: Member output(std::ostream &outs) const (function) of class course is not documented.
/home/evan/3560/quiz2/3560Quiz2/course.h:23: warning: Member get_course_number() const (function) of class course is not documented.
/home/evan/3560/quiz2/3560Quiz2/course.h:26: warning: Member get_grade() const (function) of class course is not documented.
/home/evan/3560/quiz2/3560Quiz2/course.h:29: warning: Member get_hours() const (function) of class course is not documented.
/home/evan/3560/quiz2/3560Quiz2/course.h:34: warning: Member set_course(std::string num, std::string grad, double hrs) (function) of class course is not documented.
/home/evan/3560/quiz2/3560Quiz2/course.h:37: warning: Member operator<(const course &c) const (function) of class course is not documented.
/home/evan/3560/quiz2/3560Quiz2/course.h:38: warning: Member operator<=(const course &c) const (function) of class course is not documented.
/home/evan/3560/quiz2/3560Quiz2/course.h:39: warning: Member operator>(const course &c) const (function) of class course is not documented.
/home/evan/3560/quiz2/3560Quiz2/course.h:40: warning: Member operator>=(const course &c) const (function) of class course is not documented.
/home/evan/3560/quiz2/3560Quiz2/course.h:41: warning: Member operator==(const course &c) const (function) of class course is not documented.
/home/evan/3560/quiz2/3560Quiz2/course.h:42: warning: Member operator!=(const course &c) const (function) of class course is not documented.
Generating docs for compound node...
/home/evan/3560/quiz2/3560Quiz2/node.h:14: warning: Member value_type (typedef) of class node is not documented.
/home/evan/3560/quiz2/3560Quiz2/node.h:16: warning: Member node(value_type d=value_type(), node *l=NULL) (function) of class node is not documented.
/home/evan/3560/quiz2/3560Quiz2/node.h:20: warning: Member set_data(value_type d) (function) of class node is not documented.
/home/evan/3560/quiz2/3560Quiz2/node.h:22: warning: Member set_link(node *l) (function) of class node is not documented.
/home/evan/3560/quiz2/3560Quiz2/node.h:26: warning: Member data() const (function) of class node is not documented.
/home/evan/3560/quiz2/3560Quiz2/node.h:28: warning: Member link() (function) of class node is not documented.
/home/evan/3560/quiz2/3560Quiz2/node.h:30: warning: Member link() const (function) of class node is not documented.
Generating docs for compound Tarray...
/home/evan/3560/quiz2/3560Quiz2/tarray.h:22: warning: Member add(T item) (function) of class Tarray is not documented.
/home/evan/3560/quiz2/3560Quiz2/tarray.h:27: warning: Member start() (function) of class Tarray is not documented.
/home/evan/3560/quiz2/3560Quiz2/tarray.h:30: warning: Member is_item() const (function) of class Tarray is not documented.
/home/evan/3560/quiz2/3560Quiz2/tarray.h:33: warning: Member advance() (function) of class Tarray is not documented.
/home/evan/3560/quiz2/3560Quiz2/tarray.h:36: warning: Member current() const (function) of class Tarray is not documented.
/home/evan/3560/quiz2/3560Quiz2/tarray.h:39: warning: Member remove_current() (function) of class Tarray is not documented.
Generating namespace index...
Generating graph info page...
Generating directory documentation...
Generating index page...
Generating page index...
Generating module index...
Generating namespace index...
Generating namespace member index...
Generating annotated compound index...
Generating alphabetical compound index...
Generating hierarchical class index...
Generating graphical class hierarchy...
Generating member index...
Generating file index...
Generating file member index...
Generating example index...
finalizing index lists...
writing tag file...
Running dot...
Generating dot graphs using 3 parallel threads...
Running dot for graph 1/21
Running dot for graph 2/21
Running dot for graph 3/21
sh: 1: dot: not found
error: Problems running dot: exit code=127, command='dot', arguments='"/home/evan/3560/quiz2/3560Quiz2/html/college_8cc__incl.dot" -Tpng -o "/home/evan/3560/quiz2/3560Quiz2/html/college_8cc__incl.png"'
sh: 1: dot: not found
error: Problems running dot: exit code=127, command='dot', arguments='"/home/evan/3560/quiz2/3560Quiz2/html/college_8h__incl.dot" -Tpng -o "/home/evan/3560/quiz2/3560Quiz2/html/college_8h__incl.png"'
sh: 1: dot: not found
error: Problems running dot: exit code=127, command='dot', arguments='"/home/evan/3560/quiz2/3560Quiz2/latex/college_8cc__incl.dot" -Tpdf -o "/home/evan/3560/quiz2/3560Quiz2/latex/college_8cc__incl.pdf"'
sh: 1: sh: 1: sh: 1: dot: not found
dot: not found
error: Problems running dot: exit code=127, command='dot', arguments='"/home/evan/3560/quiz2/3560Quiz2/latex/college_8h__dep__incl.dot" -Tpdf -o "/home/evan/3560/quiz2/3560Quiz2/latex/college_8h__dep__incl.pdf"'
dot: not found
error: Problems running dot: exit code=127, command='dot', arguments='"/home/evan/3560/quiz2/3560Quiz2/html/college_8h__dep__incl.dot" -Tpng -o "/home/evan/3560/quiz2/3560Quiz2/html/college_8h__dep__incl.png"'
error: Problems running dot: exit code=127, command='dot', arguments='"/home/evan/3560/quiz2/3560Quiz2/latex/college_8h__incl.dot" -Tpdf -o "/home/evan/3560/quiz2/3560Quiz2/latex/college_8h__incl.pdf"'
sh: 1: dot: not found
error: Problems running dot: exit code=127, command='dot', arguments='"/home/evan/3560/quiz2/3560Quiz2/latex/collegemain_8cc__incl.dot" -Tpdf -o "/home/evan/3560/quiz2/3560Quiz2/latex/collegemain_8cc__incl.pdf"'
sh: 1: sh: 1: dot: not found
error: Problems running dot: exit code=127, command='dot', arguments='"/home/evan/3560/quiz2/3560Quiz2/html/course_8cc__incl.dot" -Tpng -o "/home/evan/3560/quiz2/3560Quiz2/html/course_8cc__incl.png"'
sh: 1: dot: not found
dot: not found
error: Problems running dot: exit code=127, command='dot', arguments='"/home/evan/3560/quiz2/3560Quiz2/latex/course_8cc__incl.dot" -Tpdf -o "/home/evan/3560/quiz2/3560Quiz2/latex/course_8cc__incl.pdf"'
error: Problems running dot: exit code=127, command='dot', arguments='"/home/evan/3560/quiz2/3560Quiz2/html/collegemain_8cc__incl.dot" -Tpng -o "/home/evan/3560/quiz2/3560Quiz2/html/collegemain_8cc__incl.png"'
sh: 1: sh: 1: dot: not found
error: Problems running dot: exit code=127, command='dot', arguments='"/home/evan/3560/quiz2/3560Quiz2/html/course_8h__incl.dot" -Tpng -o "/home/evan/3560/quiz2/3560Quiz2/html/course_8h__incl.png"'
sh: 1: dot: not found
error: Problems running dot: exit code=127, command='dot', arguments='"/home/evan/3560/quiz2/3560Quiz2/html/course_8h__dep__incl.dot" -Tpng -o "/home/evan/3560/quiz2/3560Quiz2/html/course_8h__dep__incl.png"'
dot: not found
error: Problems running dot: exit code=127, command='dot', arguments='"/home/evan/3560/quiz2/3560Quiz2/latex/course_8h__incl.dot" -Tpdf -o "/home/evan/3560/quiz2/3560Quiz2/latex/course_8h__incl.pdf"'
sh: 1: dot: not found
sh: 1: dot: not found
error: Problems running dot: exit code=127, command='dot', arguments='"/home/evan/3560/quiz2/3560Quiz2/latex/node_8h__incl.dot" -Tpdf -o "/home/evan/3560/quiz2/3560Quiz2/latex/node_8h__incl.pdf"'
error: Problems running dot: exit code=127, command='dot', arguments='"/home/evan/3560/quiz2/3560Quiz2/latex/course_8h__dep__incl.dot" -Tpdf -o "/home/evan/3560/quiz2/3560Quiz2/latex/course_8h__dep__incl.pdf"'
sh: 1: dot: not found
error: Problems running dot: exit code=127, command='dot', arguments='"/home/evan/3560/quiz2/3560Quiz2/html/node_8h__incl.dot" -Tpng -o "/home/evan/3560/quiz2/3560Quiz2/html/node_8h__incl.png"'
sh: 1: dot: not found
sh: 1: dot: not found
error: Problems running dot: exit code=127, command='dot', arguments='"/home/evan/3560/quiz2/3560Quiz2/html/node_8h__dep__incl.dot" -Tpng -o "/home/evan/3560/quiz2/3560Quiz2/html/node_8h__dep__incl.png"'
error: Problems running dot: exit code=127, command='dot', arguments='"/home/evan/3560/quiz2/3560Quiz2/latex/node_8h__dep__incl.dot" -Tpdf -o "/home/evan/3560/quiz2/3560Quiz2/latex/node_8h__dep__incl.pdf"'
sh: 1: dot: not found
error: Problems running dot: exit code=127, command='dot', arguments='"/home/evan/3560/quiz2/3560Quiz2/latex/tarray_8h__incl.dot" -Tpdf -o "/home/evan/3560/quiz2/3560Quiz2/latex/tarray_8h__incl.pdf"'
sh: 1: dot: not found
error: Problems running dot: exit code=127, command='dot', arguments='"/home/evan/3560/quiz2/3560Quiz2/html/graph_legend.dot" -Tpng -o "/home/evan/3560/quiz2/3560Quiz2/html/graph_legend.png"'
sh: 1: dot: not found
error: Problems running dot: exit code=127, command='dot', arguments='"/home/evan/3560/quiz2/3560Quiz2/html/tarray_8h__incl.dot" -Tpng -o "/home/evan/3560/quiz2/3560Quiz2/html/tarray_8h__incl.png"'
Running dot for graph 4/21
Running dot for graph 5/21
Running dot for graph 6/21
Running dot for graph 7/21
Running dot for graph 8/21
Running dot for graph 9/21
Running dot for graph 10/21
Running dot for graph 11/21
Running dot for graph 12/21
Running dot for graph 13/21
Running dot for graph 14/21
Running dot for graph 15/21
Running dot for graph 16/21
Running dot for graph 17/21
Running dot for graph 18/21
Running dot for graph 19/21
Running dot for graph 20/21
Running dot for graph 21/21
Patching output file 1/14
error: problems opening map file /home/evan/3560/quiz2/3560Quiz2/html/college_8cc__incl.map for inclusion in the docs!
If you installed Graphviz/dot after a previous failing run, 
try deleting the output directory and rerun doxygen.
Patching output file 2/14
error: problem writing FIG 0 figure!
lookup cache used 64/65536 hits=322 misses=66
finished...
tar -cvf quiz2.tar html
html/
html/graph_legend.dot
html/functions.html
html/college_8h.html
html/closed.png
html/collegemain_8cc__incl.dot
html/dynsections.js
html/tarray_8h__incl.dot
html/jquery.js
html/class_tarray.html
html/node_8h__dep__incl.dot
html/tab_h.png
html/course_8h__incl.dot
html/course_8h__incl.md5
html/menu.js
html/node_8h.html
html/doxygen.css
html/files.html
html/sync_off.png
html/course_8h__dep__incl.md5
html/node_8h__incl.dot
html/college_8h__dep__incl.md5
html/graph_legend.md5
html/college_8cc.html
html/doxygen.png
html/college_8cc__incl.md5
html/classCollege-members.html
html/classTarray.html
html/nav_g.png
html/classcourse.html
html/classnode.html
html/class_college.html
html/nav_f.png
html/classCollege.html
html/graph_legend.html
html/bdwn.png
html/splitbar.png
html/md_README.html
html/course_8cc.html
html/node_8h__incl.md5
html/college_8h__dep__incl.dot
html/classcourse-members.html
html/classes.html
html/pages.html
html/tarray_8h_source.html
html/index.html
html/open.png
html/tabs.css
html/tarray_8h.html
html/tarray_8h__incl.md5
html/collegemain_8cc__incl.md5
html/class_tarray-members.html
html/classTarray-members.html
html/collegemain_8cc.html
html/class_college-members.html
html/functions_func.html
html/college_8h__incl.md5
html/sync_on.png
html/course_8h_source.html
html/doxygen.svg
html/classnode-members.html
html/node_8h_source.html
html/bc_s.png
html/folderclosed.png
html/folderopen.png
html/college_8h_source.html
html/tab_s.png
html/college_8h__incl.dot
html/course_8h.html
html/course_8cc__incl.md5
html/course_8cc__incl.dot
html/menudata.js
html/search/
html/search/search_r.png
html/search/search.js
html/search/all_1.js
html/search/search_l.png
html/search/files_1.html
html/search/searchdata.js
html/search/files_2.html
html/search/search.css
html/search/classes_2.html
html/search/all_2.html
html/search/files_0.html
html/search/all_0.js
html/search/all_0.html
html/search/files_2.js
html/search/functions_3.html
html/search/search_m.png
html/search/files_0.js
html/search/all_5.html
html/search/all_5.js
html/search/pages_0.html
html/search/functions_1.html
html/search/classes_1.js
html/search/all_3.html
html/search/classes_0.html
html/search/all_6.html
html/search/nomatches.html
html/search/functions_2.js
html/search/pages_0.js
html/search/classes_1.html
html/search/mag_sel.png
html/search/functions_0.html
html/search/all_6.js
html/search/classes_0.js
html/search/functions_1.js
html/search/functions_3.js
html/search/functions_2.html
html/search/mag_sel.svg
html/search/all_4.js
html/search/all_3.js
html/search/files_1.js
html/search/all_2.js
html/search/close.png
html/search/classes_2.js
html/search/close.svg
html/search/all_1.html
html/search/all_4.html
html/search/functions_0.js
html/node_8h__dep__incl.md5
html/doc.png
html/nav_h.png
html/course_8h__dep__incl.dot
html/tab_a.png
html/college_8cc__incl.dot
html/tab_b.png
html/annotated.html

