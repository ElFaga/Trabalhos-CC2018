                        Delphi 7
                    Delphi 7




============================================================================================================



eaking information that may not appear in the main
eaking information that may not appear in the main

is
is

 in its entirety.
 in its entirety.

 new features in this release, choose
 new features in this release, choose

s.
s.

=====================================================
=====================================================

UCT
UCT

ES AND ISSUES:
ES AND ISSUES:

THE REGISTRY
THE REGISTRY

RMATION ON THE WEB
RMATION ON THE WEB

=====================================
=====================================

PRODUCT
PRODUCT

L contains system requirements and product
L contains system requirements and product

ns information about redistributing your
ns information about redistributing your

ation on licensing allowances
ation on licensing allowances

uct and other Borland
uct and other Borland

led with it.
led with it.

 files listed above, along with this file,
 files listed above, along with this file,

tory
tory

efault: C:\Program Files\Borland\Delphi7).
efault: C:\Program Files\Borland\Delphi7).

============
============

ES
ES

recated Components
recated Components

ecating the use of TSQLClientDataSet
ecating the use of TSQLClientDataSet

ommends that you
ommends that you

aSet for simple, two-tier
aSet for simple, two-tier

tDataSet and
tDataSet and

DataSet are no longer displayed on the
DataSet are no longer displayed on the

ckward
ckward

atibility, you can still access
atibility, you can still access

entDataSet in the
entDataSet in the

 (by default, C:\Program
 (by default, C:\Program

Demos).
Demos).

land is deprecating the use of the TServerSocket
land is deprecating the use of the TServerSocket

s
s

 recommended that you use the Indy components for
 recommended that you use the Indy components for

lientSocket will no longer be installed on the
lientSocket will no longer be installed on the

 the
 the

e of these components then you can install
e of these components then you can install

70.bpl,
70.bpl,

 in your bin directory. For deployment with
 in your bin directory. For deployment with

 rtl70.bpl
 rtl70.bpl

other required packages.
other required packages.

---------------
---------------

t contains three sets of changes, all
t contains three sets of changes, all

BCS) support.
BCS) support.

y, LeftStr, RightStr, and MidStr each
y, LeftStr, RightStr, and MidStr each

s, and did not
s, and did not

S strings. Each of these functions has
S strings. Each of these functions has

ed functions,
ed functions,

akes and returns AnsiString, and one
akes and returns AnsiString, and one

. The new
. The new

ons correctly handle MBCS strings. This
ons correctly handle MBCS strings. This

unctions to
unctions to

d retrieve byte values in AnsiStrings.
d retrieve byte values in AnsiStrings.

evel functions
evel functions

elow.
elow.

ew functions LeftBStr, RightBStr, and MidBStr
ew functions LeftBStr, RightBStr, and MidBStr

usly
usly

rovided by LeftStr, RightStr, and MidStr.
rovided by LeftStr, RightStr, and MidStr.

tr, and
tr, and

MidStr are the same as the new AnsiStr
MidStr are the same as the new AnsiStr

ions, except
ions, except

 are not overloaded with equivalent
 are not overloaded with equivalent

s
s

------
------

ild does not include a manifest for your
ild does not include a manifest for your

 version 6.0
 version 6.0

l you need to create and edit the
l you need to create and edit the

ays to do this:
ays to do this:

alone manifest file added to the same
alone manifest file added to the same

h a manifest included in the executable as a
h a manifest included in the executable as a

llow these steps:
llow these steps:

reate a file called
reate a file called

fest" and add the following lines:
fest" and add the following lines:

" standalone="yes"?>
" standalone="yes"?>

chemas-microsoft-com:asm.v1"
chemas-microsoft-com:asm.v1"

lyIdentity
lyIdentity

hitecture="*"
hitecture="*"

0"
0"

="win32"
="win32"

ect1"/>
ect1"/>

ion>Project1 Description</description>
ion>Project1 Description</description>

lyIdentity
lyIdentity




me="Microsoft.Windows.Common-Controls"
me="Microsoft.Windows.Common-Controls"

4144ccf1df"
4144ccf1df"

processorArchitecture="*"   />
processorArchitecture="*"   />

y>
y>

sembly>
sembly>

 the file and place it in the same directory as
 the file and place it in the same directory as

e the idea of having the manifest as a
e the idea of having the manifest as a

our executable
our executable

I) Create a resource file (again using Notepad)
I) Create a resource file (again using Notepad)

ct1.exe.Manifest"
ct1.exe.Manifest"

source file with brcc32.exe with the
source file with brcc32.exe with the

> brcc32 WindowsXP.RC
> brcc32 WindowsXP.RC

wing line to your project's main
wing line to your project's main




OTE: To automatically configure XP Themes in your
OTE: To automatically configure XP Themes in your




    demo. For more information see the readme file in
    demo. For more information see the readme file in

s
s

-------------------
-------------------

ompiler now supports three
ompiler now supports three

:  Unsafe_Type,
:  Unsafe_Type,

Unsafe_Cast.  These warnings are
Unsafe_Cast.  These warnings are

abled with source
abled with source

tives {$WARN UNSAFE_CODE ON},
tives {$WARN UNSAFE_CODE ON},

(dcc32 -W+UNSAFE_CODE),
(dcc32 -W+UNSAFE_CODE),

NOTE: There is no space before or after the "+" in theNOTE: There is no space before or after the "+" in the
ages refers to types or
ages refers to types or

ode analysis cannot prove to
ode analysis cannot prove to

mple, data types that
mple, data types that

n at runtime such as Delphi
n at runtime such as Delphi

 be bounds-checked at
 be bounds-checked at

 static analysis, to ensure that
 static analysis, to ensure that

its of the allocated
its of the allocated

 do not carry bounds information
 do not carry bounds information

s PChar) cannot be
s PChar) cannot be

 doesn't necessarily mean the code
 doesn't necessarily mean the code

 that it uses
 that it uses

hniques that cannot be verified as safe
hniques that cannot be verified as safe

ecution
ecution

nt such as .NET, such code is assumed to be
nt such as .NET, such code is assumed to be

 7 developers can use these new warnings to
 7 developers can use these new warnings to

niques
niques

 be difficult to port to a managed code
 be difficult to port to a managed code

 are not
 are not

o the .NET platform.  The warnings are
o the .NET platform.  The warnings are

 in D7 we might
 in D7 we might

to support in Delphi for .NET, but
to support in Delphi for .NET, but

e not complete -
e not complete -

ematic types or code situations for
ematic types or code situations for

issue an unsafe
issue an unsafe

Type:  Types such as PChar, untyped pointer,
Type:  Types such as PChar, untyped pointer,

, 6 byte
, 6 byte

l48), variant records (records containing
l48), variant records (records containing

("TMyObject = object").
("TMyObject = object").

      c = object
      c = object

r;
r;

     procedure p;
     procedure p;

_Code:  absolute variables, Addr(), Ptr(), Hi(),
_Code:  absolute variables, Addr(), Ptr(), Hi(),

ockWrite, the Fail() standard procedure, GetMem(),
ockWrite, the Fail() standard procedure, GetMem(),

ocks (asm end)
ocks (asm end)

 * modifying string index elements, e.g
 * modifying string index elements, e.g

 <-- "Unsafe code 'String index to
 <-- "Unsafe code 'String index to

ting an object instance to a type that
ting an object instance to a type that

instance type,
instance type,

 type to anything else
 type to anything else

nents streaming
nents streaming

--------------------
--------------------

cted a problem where the csLoading
cted a problem where the csLoading

, nor was the
, nor was the

Loaded method called. When a component that
Loaded method called. When a component that

nts will have
nts will have

 flag set and their Loaded method called.
 flag set and their Loaded method called.

subcomponent
subcomponent

t are writable. If you allow your
t are writable. If you allow your

d to an external
d to an external

e then you cannot free your subcomponent
e then you cannot free your subcomponent

 otherwise the
 otherwise the

 will attempt to call the subcomponent's
 will attempt to call the subcomponent's

een freed.
een freed.

--
--

port for Apache 2 is for the 2.0.39 version. It will
port for Apache 2 is for the 2.0.39 version. It will

mpatible.
mpatible.

to a known bug with Apache 1.3.22, do not
to a known bug with Apache 1.3.22, do not

s for this
s for this

n.
n.

   See http://bugs.apache.org/index.cgi/full/8538
   See http://bugs.apache.org/index.cgi/full/8538

 UDDI Registry entries contain an Accesspoint URL with UDDI Registry entries contain an Accesspoint URL with
s
s

en generate the error message 'Method not allowed
en generate the error message 'Method not allowed

e global function
e global function

terface:
terface:

t
t

       defURL = 'http://someservice/somewhere#tag';
       defURL = 'http://someservice/somewhere#tag';

eservice/somewhere';
eservice/somewhere';

m on Windows XP
m on Windows XP

------------------
------------------

nese input system included with
nese input system included with

 in the IDE to
 in the IDE to

nd:
nd:

ve Microsoft IME Character Code Dictionary from
ve Microsoft IME Character Code Dictionary from

 this
 this

from the dictionary list will not solve the
from the dictionary list will not solve the

the IME Toolbar.
the IME Toolbar.

operties and click on the Dictionary
operties and click on the Dictionary

cter Code Dictionary"
cter Code Dictionary"

ionaries listbox
ionaries listbox




tabase
tabase




The provided DB2 driver is certified for DB2 version
The provided DB2 driver is certified for DB2 version

 match. BDE also supports DB2 version 7 only.
 match. BDE also supports DB2 version 7 only.

ponents
ponents

ified for Oracle 9i. BDE and ADO have been
ified for Oracle 9i. BDE and ADO have been

all cases,
all cases,

 version and server version must be the
 version and server version must be the

pes TIMESTAMP
pes TIMESTAMP

or JDK 1.3.1 compliance) and other types
or JDK 1.3.1 compliance) and other types

yet
yet

ported. Use "DATE" instead.
ported. Use "DATE" instead.

e CAB file (BDEINST.CAB) is
e CAB file (BDEINST.CAB) is

 This CAB file is provided
 This CAB file is provided

. For new applications, we
. For new applications, we

th the BDE merge modules.
th the BDE merge modules.

 Dialect 3 features
 Dialect 3 features

------------------------
------------------------

se 6.5. The client version and
se 6.5. The client version and




urrently, the driver does not support the ARRAY type.
urrently, the driver does not support the ARRAY type.

,
,

 an entry to your Windows registry under
 an entry to your Windows registry under

base Engine
base Engine

ivers\Intrbase\Db Open\SQLDIALECT
ivers\Intrbase\Db Open\SQLDIALECT

When an InterBase alias is created, the new entry willWhen an InterBase alias is created, the new entry will
SQLDIALECT can be set to "1"
SQLDIALECT can be set to "1"

not have the SQLDIALECT
not have the SQLDIALECT

CT=1 or to the registry
CT=1 or to the registry

CT entry is added to the
CT entry is added to the

 implementation note
 implementation note

-----------
-----------

sing a WebSnap application with InterBase
sing a WebSnap application with InterBase

ommended.
ommended.

e a client/server connection specified by a
e a client/server connection specified by a

atabase.
atabase.




ocal connection (not recommended):
ocal connection (not recommended):

CP/IP connection on Windows:
CP/IP connection on Windows:

DBName.gdb
DBName.gdb

ection on UNIX:
ection on UNIX:

PathTo/Database/DBName.gdb
PathTo/Database/DBName.gdb

enus\C:\PathTo\Database\DBName.gdb
enus\C:\PathTo\Database\DBName.gdb

PathTo\Database\DBName.gdb
PathTo\Database\DBName.gdb

is on the same machine as
is on the same machine as

alhost:
alhost:

lhost:C:\PathTo\Database\DBName.gdb
lhost:C:\PathTo\Database\DBName.gdb

nce:
nce:

---------------------------------
---------------------------------

e dbExpress driver for INTERBASE  now maps NUMERIC
e dbExpress driver for INTERBASE  now maps NUMERIC

2,
2,

ldFLOAT.
ldFLOAT.

s
s

------
------

aSet now has DefaultRowsetSize = 20 (Oracle
aSet now has DefaultRowsetSize = 20 (Oracle




wSetSize property manually (e.g., "RowsetSize = 200")
wSetSize property manually (e.g., "RowsetSize = 200")

nto dbxdrivers.ini to have the RowSetSize property
nto dbxdrivers.ini to have the RowSetSize property

modified in code, as shown here:
modified in code, as shown here:

['RowsetSize'] :=
['RowsetSize'] :=

ess now includes MySQL 3.23.49 support with a new
ess now includes MySQL 3.23.49 support with a new

cify
cify

ibraryName = "dbexpmysql.dll"
ibraryName = "dbexpmysql.dll"

dbxdrivers.ini.
dbxdrivers.ini.

nents and MySQL transactions
nents and MySQL transactions

-------------
-------------

support more than one active statement
support more than one active statement

requests with a
requests with a

tion the dbExpress components clone
tion the dbExpress components clone

ning state
ning state

on the no.of active statements with respect
on the no.of active statements with respect

 failures
 failures

ion as the transaction might be started on
ion as the transaction might be started on

be
be

ening on another connection.
ening on another connection.

 a MySQL transaction make sure
 a MySQL transaction make sure

is 0. If it's not 0 then
is 0. If it's not 0 then

nd reopen it and that should
nd reopen it and that should

 activity should then go
 activity should then go

B2 notes for dbExpress
B2 notes for dbExpress




e provided DB2 driver is certified for DB2 version 7.
e provided DB2 driver is certified for DB2 version 7.

 BDE also supports DB2 version 7.
 BDE also supports DB2 version 7.

2 client returns only
2 client returns only

en a request for a block fetch
en a request for a block fetch

tion > 1.
tion > 1.

issues
issues

--------
--------

ress DB2 driver rounds the TIMESTAMP
ress DB2 driver rounds the TIMESTAMP

me precision lost
me precision lost

data retrieved. When you apply back
data retrieved. When you apply back

the one on the
the one on the

Updates() will fail.
Updates() will fail.

e DB2 TIMESTAMP is not part of indexed columns
e DB2 TIMESTAMP is not part of indexed columns

Key
Key

ad of WhereAll.
ad of WhereAll.

LOB fields (dbExpress)
LOB fields (dbExpress)

-------------
-------------

ariable, InformixLob, is available to
ariable, InformixLob, is available to

d CLOB fields.
d CLOB fields.

 required because Informix BLOB
 required because Informix BLOB

(fldBLOB, fldstHMEMO)
(fldBLOB, fldstHMEMO)

OraBlob and ftOraClob,
OraBlob and ftOraClob,

taSnap resolver performs
taSnap resolver performs

hen resolving Oracle
hen resolving Oracle

not when resolving Informix
not when resolving Informix

ssue, set InformixLob
ssue, set InformixLob

rmix BLOB/CLOBs, and switch it
rmix BLOB/CLOBs, and switch it

 using Oracle
 using Oracle

OTE: The new Informix driver (dbexpinf.dll) has been
OTE: The new Informix driver (dbexpinf.dll) has been




    and 9.2.1 client with SE server.
    and 9.2.1 client with SE server.

------------------
------------------

a Blank Password/OS Authentication:
a Blank Password/OS Authentication:

 can't connect using a
 can't connect using a

h OS Authentication = True.
h OS Authentication = True.

lable soon at Borland's support
lable soon at Borland's support

ail:
ail:

 When trying to open a master-detail as a nested
 When trying to open a master-detail as a nested

NTEGER
NTEGER

pe and defined NOT NULL you will get a SQL Error
pe and defined NOT NULL you will get a SQL Error

 Input
 Input

rameter values. Check the status values for
rameter values. Check the status values for

ailable soon at Borland's
ailable soon at Borland's

.
.

 b) ApplyUpdates() on a master-detail with
 b) ApplyUpdates() on a master-detail with

 a SQL error
 a SQL error

create new connection because in manual or
create new connection because in manual or

und:
und:

 poFetchDetailsOnDemand = False (default)
 poFetchDetailsOnDemand = False (default)

------------------------------
------------------------------

lStream (OLEDB
lStream (OLEDB

cess blobs from SQL Server. MS OLEDB
cess blobs from SQL Server. MS OLEDB

cessing more than
cessing more than

ng ISequentialStream. So, if you are
ng ISequentialStream. So, if you are

n your queries
n your queries

iver will not use the ISequentialStream
iver will not use the ISequentialStream

ge buffers to
ge buffers to

ta. The buffer size is determined by the
ta. The buffer size is determined by the

 sure to set
 sure to set

priate size to improve performance when
priate size to improve performance when




SQL limitation (dbExpress)
SQL limitation (dbExpress)




ySQL can't filter with FLOAT fields in the WHERE
ySQL can't filter with FLOAT fields in the WHERE

h
h

ientDataset and TDataSetProvider, use DOUBLE
ientDataset and TDataSetProvider, use DOUBLE

ocumentation.
ocumentation.

MySQL (dbExpress)
MySQL (dbExpress)

-----------
-----------

 has a startup parameter called max-
 has a startup parameter called max-

t to 1 megabyte
t to 1 megabyte

rvers. Increase the value of max-
rvers. Increase the value of max-

ficulty writing
ficulty writing

data (such as large strings) to MySQL.
data (such as large strings) to MySQL.

---------------
---------------

a table name with a user name, you must
a table name with a user name, you must

mandType is
mandType is

e.
e.

cle LONG and LONG RAW fields (dbExpress)
cle LONG and LONG RAW fields (dbExpress)

-
-

en using Oracle, the size of LONG and LONG RAW fields
en using Oracle, the size of LONG and LONG RAW fields

So if BLOB SIZE is set to -1, LONG and LONG RAW fieldsSo if BLOB SIZE is set to -1, LONG and LONG RAW fields



ur best estimate of the blob size.
ur best estimate of the blob size.

s)
s)

---------------------------------
---------------------------------

 Char, Multiple
 Char, Multiple

S Authentication. You need to add
S Authentication. You need to add

or new aliases
or new aliases

xconnections in order to include these
xconnections in order to include these

d the following at the end of dbxdrivers
d the following at the end of dbxdrivers

n earlier
n earlier

Delphi:
Delphi:

tiple Transaction]
tiple Transaction]

=1
=1

 [Trim Char]
 [Trim Char]

  True=1
  True=1

uthentication]
uthentication]

True=1
True=1

 following under the [Oracle] section in
 following under the [Oracle] section in

alias.
alias.

Authentication=False
Authentication=False

on=False
on=False

har=False
har=False

 authentication  (dbExpress)
 authentication  (dbExpress)

-------
-------

he correct list of tables and other schema
he correct list of tables and other schema

 User_Name
 User_Name

where XXX is the OS Authenticated user.
where XXX is the OS Authenticated user.

================
================

WINDOWS REGISTRY
WINDOWS REGISTRY

stry edits are performed at your own risk.
stry edits are performed at your own risk.

her parts
her parts

documentation that accompany this product
documentation that accompany this product

try. In most
try. In most

recommend that you use the Microsoft
recommend that you use the Microsoft

ng. Whatever tool
ng. Whatever tool

r, you should, before making any
r, you should, before making any

gistry and thoroughly
gistry and thoroughly

f with the editing tool and the
f with the editing tool and the

 registry is a
 registry is a

ponent of your operating system, and
ponent of your operating system, and

 can cause your
 can cause your

op functioning.
op functioning.

========================================
========================================

n to numerous private sites that offer
n to numerous private sites that offer

he following
he following

sed resources provide a continuous stream
sed resources provide a continuous stream

, and other
, and other

u can connect to many of these resources
u can connect to many of these resources

t [Help|Delphi Direct]
t [Help|Delphi Direct]

----------
----------

d-in resource provides an automatically
d-in resource provides an automatically

 downloads,
 downloads,

ormation about Delphi and Borland.
ormation about Delphi and Borland.

Central Repository is a free, searchable
Central Repository is a free, searchable

s of interest
s of interest

For details and registration
For details and registration

decentral.borland.com/
decentral.borland.com/

-------------------
-------------------

poration home page:
poration home page:

com
com

E: Help|Borland Home Page]
E: Help|Borland Home Page]

www.borland.com/delphi/
www.borland.com/delphi/

Page]
Page]

 developer support:
 developer support:

com/devsupport/delphi/
com/devsupport/delphi/

loper Support]
loper Support]

and other downloads:
and other downloads:

om/devsupport/delphi/downloads/
om/devsupport/delphi/downloads/

p://www.borland.com/techpubs/delphi
p://www.borland.com/techpubs/delphi

/newsgroups/
/newsgroups/

ices and distributors:
ices and distributors:

/bww/
/bww/

te (anonymous access):
te (anonymous access):

===================================================
===================================================

rights reserved.rights reserved.
