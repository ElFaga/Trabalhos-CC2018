Linha 1:                     Delphi 7
Linha 2:                  Release Notes
Linha 3: 
Linha 4: 
Linha 5: =======================================================
Linha 6: 
Linha 7: This file contains important supplementary and late-
Linha 8: breaking information that may not appear in the main
Linha 9: product documentation. We recommend that you read this
Linha 10: file in its entirety.
Linha 11: 
Linha 12: For information on new features in this release, choose
Linha 13: "What's New" in the online Help contents.
Linha 14: 
Linha 15: 
Linha 16: =======================================================
Linha 17: CONTENTS
Linha 18: 
Linha 19: * OTHER RELEASE NOTES INCLUDED WITH THIS PRODUCT
Linha 20: * NOTES AND ISSUES:
Linha 21: * ABOUT EDITING THE REGISTRY
Linha 22: * PRODUCT INFORMATION ON THE WEB
Linha 23: 
Linha 24: 
Linha 25: =======================================================
Linha 26: OTHER RELEASE NOTES INCLUDED WITH THIS PRODUCT
Linha 27: 
Linha 28: * INSTALL contains system requirements and product
Linha 29:   installation information.
Linha 30: 
Linha 31: * DEPLOY contains information about redistributing your
Linha 32:   applications.
Linha 33: 
Linha 34: * LICENSE contains information on licensing allowances
Linha 35:   and limitations for this product and other Borland
Linha 36:   software that is bundled with it.
Linha 37: 
Linha 38:     The three files listed above, along with this file,
Linha 39:     are installed in your main product directory
Linha 40:     (default: C:\Program Files\Borland\Delphi7).
Linha 41: 
Linha 42: =======================================================
Linha 43: NOTES AND ISSUES
Linha 44: 
Linha 45: Deprecated Components
Linha 46: 
Linha 47:     Borland is deprecating the use of TSQLClientDataSet
Linha 48:     and TBDEClientDataSet. Borland recommends that you
Linha 49:     use TSimpleDataSet for simple, two-tier
Linha 50:     applications. TSQLClientDataSet and
Linha 51:     TBDEClientDataSet are no longer displayed on the
Linha 52:     Component palette. If you require backward
Linha 53:     compatibility, you can still access
Linha 54:     TSQLClientDataSet and TBDEClientDataSet in the
Linha 55:     Demos directory (by default, C:\Program
Linha 56:     Files\Borland\Delphi7\Demos).
Linha 57: 
Linha 58: 
Linha 59:     Borland is deprecating the use of the TServerSocket
Linha 60:     and TClientSocket from the unit ScktComp. It is
Linha 61:     recommended that you use the Indy components for
Linha 62:     socket operations. The TServerSocket and
Linha 63:     TClientSocket will no longer be installed on the
Linha 64:     component palette by default. If you require the
Linha 65:     use of these components then you can install
Linha 66:     the design time package named dclsockets70.bpl,
Linha 67:     found in your bin directory. For deployment with
Linha 68:     runtime packages, you will need to deploy rtl70.bpl
Linha 69:     and any other required packages.
Linha 70: 
Linha 71: 
Linha 72: Changes in StrUtils
Linha 73: -------------------
Linha 74: 
Linha 75: The StrUtils unit contains three sets of changes, all
Linha 76: relating to
Linha 77: multi-byte character set (MBCS) support.
Linha 78: 
Linha 79:    * Previously, LeftStr, RightStr, and MidStr each
Linha 80:      took and returned AnsiString values, and did not
Linha 81:      support MBCS strings. Each of these functions has
Linha 82:      been replaced by a pair of overloaded functions,
Linha 83:      one that takes and returns AnsiString, and one
Linha 84:      that takes and returns WideString. The new
Linha 85:      functions correctly handle MBCS strings. This
Linha 86:      change breaks code that uses these functions to
Linha 87:      store and retrieve byte values in AnsiStrings.
Linha 88:      Such code should use the new byte-level functions
Linha 89:      described below.
Linha 90: 
Linha 91:    * New functions LeftBStr, RightBStr, and MidBStr
Linha 92:      provide the byte-level manipulation previously
Linha 93:      provided by LeftStr, RightStr, and MidStr.
Linha 94: 
Linha 95:    * New functions AnsiLeftStr, AnsiRightStr, and
Linha 96:      AnsiMidStr are the same as the new AnsiStr
Linha 97:      LeftStr, RightStr, and MidStr functions, except
Linha 98:      that they are not overloaded with equivalent
Linha 99:      WideString functions.
Linha 100: 
Linha 101: 
Linha 102: XP Themes
Linha 103: ---------
Linha 104: 
Linha 105: This build does not include a manifest for your
Linha 106: projects. To tell your applications to use version 6.0
Linha 107: of comctl32.dll you need to create and edit the
Linha 108: manifest yourself.
Linha 109: 
Linha 110: There are two ways to do this:
Linha 111: 
Linha 112: 1. With a stand-alone manifest file added to the same
Linha 113:    directory of the executable.
Linha 114: 
Linha 115: 2. With a manifest included in the executable as a
Linha 116:    resource.
Linha 117: 
Linha 118: 
Linha 119: For the stand-alone manifest follow these steps:
Linha 120: 
Linha 121: I) Using Notepad create a file called
Linha 122:    "Project1.exe.manifest" and add the following lines:
Linha 123: 
Linha 124: <?xml version="1.0" encoding="UTF-8" standalone="yes"?>
Linha 125: <assembly xmlns="urn:schemas-microsoft-com:asm.v1"
Linha 126: manifestVersion="1.0">
Linha 127: <assemblyIdentity
Linha 128: processorArchitecture="*"
Linha 129: version="1.0.0.0"
Linha 130: type="win32"
Linha 131: name="Project1"/>
Linha 132: <description>Project1 Description</description>
Linha 133: <dependency>
Linha 134: <dependentAssembly>
Linha 135: <assemblyIdentity
Linha 136: type="win32"
Linha 137: name="Microsoft.Windows.Common-Controls"
Linha 138: version="6.0.0.0"
Linha 139: publicKeyToken="6595b64144ccf1df"
Linha 140: language="*"
Linha 141: processorArchitecture="*"   />
Linha 142: </dependentAssembly>
Linha 143: </dependency>
Linha 144: </assembly>
Linha 145: 
Linha 146: II) Save the file and place it in the same directory as
Linha 147:     the application executable.
Linha 148: 
Linha 149: If you don't like the idea of having the manifest as a
Linha 150: separated file you can include it into your executable
Linha 151: as a resource.
Linha 152: 
Linha 153: I) Create a resource file (again using Notepad)
Linha 154:    containing the following line:
Linha 155: 
Linha 156:    1 24 "Project1.exe.Manifest"
Linha 157: 
Linha 158: II) Compile the resource file with brcc32.exe with the
Linha 159:     following command:
Linha 160: 
Linha 161:    C:\Project1> brcc32 WindowsXP.RC
Linha 162: 
Linha 163: III) Now add the following line to your project's main
Linha 164:      form:
Linha 165: 
Linha 166:    {$R WindowsXP.RES}
Linha 167: 
Linha 168: 
Linha 169: NOTE: To automatically configure XP Themes in your
Linha 170:       project you can use the XP Application Wizard
Linha 171:       demo. For more information see the readme file in
Linha 172: 
Linha 173:        Demos\ToolsAPI\XPAppWiz
Linha 174: 
Linha 175: 
Linha 176: .NET compiler warnings
Linha 177: ----------------------
Linha 178: 
Linha 179: The Delphi 7 dcc32 compiler now supports three
Linha 180: additional compiler warnings:  Unsafe_Type,
Linha 181: Unsafe_Code, and Unsafe_Cast.  These warnings are
Linha 182: disabled by default, but can be enabled with source
Linha 183: code compiler directives {$WARN UNSAFE_CODE ON},
Linha 184: compiler command line switches (dcc32 -W+UNSAFE_CODE),
Linha 185: and in Project|Options.
Linha 186: 
Linha 187: NOTE: There is no space before or after the "+" in the
Linha 188:       command line switch)
Linha 189: 
Linha 190: "Unsafe" in all three messages refers to types or
Linha 191: operations which static code analysis cannot prove to
Linha 192: not overwrite memory.  For example, data types that
Linha 193: carry bounds information at runtime such as Delphi
Linha 194: Strings or dynamic arrays can be bounds-checked at
Linha 195: runtime, and tracked in static analysis, to ensure that
Linha 196: memory accesses are within the limits of the allocated
Linha 197: data.  Data types that do not carry bounds information
Linha 198: at compile time or runtime (such as PChar) cannot be
Linha 199: proven safe.  Unsafe doesn't necessarily mean the code
Linha 200: is broken or flawed, it simply means that it uses
Linha 201: programming techniques that cannot be verified as safe
Linha 202: by static code analysis.  In a secured execution
Linha 203: environment such as .NET, such code is assumed to be
Linha 204: unsafe and a potential security risk.
Linha 205: 
Linha 206: Delphi 7 developers can use these new warnings to
Linha 207: identify data types, code or programming techniques
Linha 208: that may be difficult to port to a managed code
Linha 209: environment such as .NET.  These messages are not
Linha 210: specific to the .NET platform.  The warnings are
Linha 211: conservative - some things we warn about in D7 we might
Linha 212: actually be able to support in Delphi for .NET, but
Linha 213: we're not sure yet.  The warnings are not complete -
Linha 214: there may be problematic types or code situations for
Linha 215: which the Delphi 7 compiler does not issue an unsafe
Linha 216: warning.
Linha 217: 
Linha 218: Unsafe_Type:  Types such as PChar, untyped pointer,
Linha 219: untyped var and out parameters, file of <type>, 6 byte
Linha 220: reals (Real48), variant records (records containing
Linha 221: overlapping fields) and old-style objects
Linha 222: 
Linha 223: ("TMyObject = object").
Linha 224: 
Linha 225:   * "old" object type
Linha 226: 
Linha 227:        c = object
Linha 228:          i: Integer;
Linha 229:          procedure p;
Linha 230:        end;
Linha 231: 
Linha 232: Unsafe_Code:  absolute variables, Addr(), Ptr(), Hi(),
Linha 233: Lo(), Swap() standard procedures, BlockRead and
Linha 234: BlockWrite, the Fail() standard procedure, GetMem(),
Linha 235: FreeMem(), and ReallocMem()
Linha 236: 
Linha 237:   * inline assembler blocks (asm end)
Linha 238:   * @ operator
Linha 239:   * modifying string index elements, e.g
Linha 240: 
Linha 241:       s := 'Hoho';
Linha 242:       s[2] := 'a'; // <-- "Unsafe code 'String index to
Linha 243:       var param'"
Linha 244: 
Linha 245: Unsafe_Cast:  Casting an object instance to a type that
Linha 246: is not an ancestor or descendent of the instance type,
Linha 247: casting a record type to anything else
Linha 248: 
Linha 249: 
Linha 250: Change to VCL SubComponents streaming
Linha 251: -------------------------------------
Linha 252: 
Linha 253: In Delphi 7, we corrected a problem where the csLoading
Linha 254: flag was never set for subcomponents, nor was the
Linha 255: subcomponent's Loaded method called. When a component that
Linha 256: has subcomponents is streamed, the subcomponents will have
Linha 257: their csLoading flag set and their Loaded method called.
Linha 258: This change creates a complication for any subcomponent
Linha 259: properties that are writable. If you allow your
Linha 260: subcomponent property to be assigned to an external
Linha 261: component reference then you cannot free your subcomponent
Linha 262: until it's owner's Loaded method is called otherwise the
Linha 263: streaming system will attempt to call the subcomponent's
Linha 264: Loaded method after the subcomponent has been freed.
Linha 265: 
Linha 266: Apache
Linha 267: ------
Linha 268: 
Linha 269: Support for Apache 2 is for the 2.0.39 version. It will
Linha 270: work with later versions as long as they are binary
Linha 271: compatible.
Linha 272: 
Linha 273: NOTE: Due to a known bug with Apache 1.3.22, do not
Linha 274:       develop CGI programs or shared objects for this
Linha 275:       version.
Linha 276: 
Linha 277:       See http://bugs.apache.org/index.cgi/full/8538
Linha 278: 
Linha 279: 
Linha 280: UDDI Registry entries
Linha 281: ---------------------
Linha 282: 
Linha 283: Some UDDI Registry entries contain an Accesspoint URL with
Linha 284: a bookmark tag at the end. When accessed these services
Linha 285: often generate the error message 'Method not allowed
Linha 286: (405)'.
Linha 287: 
Linha 288: Workaround:
Linha 289: 
Linha 290: Remove the tag from url in the global function
Linha 291: that returns the Interface:
Linha 292: 
Linha 293:      const
Linha 294: //        defURL = 'http://someservice/somewhere#tag';
Linha 295: //        is changed to
Linha 296: 
Linha 297:         defURL = 'http://someservice/somewhere';
Linha 298: 
Linha 299: 
Linha 300: Japanese Input system on Windows XP
Linha 301: -----------------------------------
Linha 302: 
Linha 303: The MS IME2002 Japanese input system included with
Linha 304: Windows XP can cause the Debugger in the IDE to
Linha 305: stall.
Linha 306: 
Linha 307: Workaround:
Linha 308: 
Linha 309: Remove Microsoft IME Character Code Dictionary from
Linha 310: your system dictionaries list. Simply un-checking this
Linha 311: option from the dictionary list will not solve the
Linha 312: problem. To remove this dictionary:
Linha 313: 
Linha 314: 1) Open the IME Toolbar.
Linha 315: 2) Select Tools|Properties and click on the Dictionary
Linha 316:    tab.
Linha 317: 3) Select "Microsoft IME Character Code Dictionary"
Linha 318:    from the System dictionaries listbox
Linha 319: 4) Click Remove.
Linha 320: 
Linha 321: 
Linha 322: Database
Linha 323: --------
Linha 324: * The provided DB2 driver is certified for DB2 version
Linha 325:   7 only. The client version and server version must
Linha 326:   match. BDE also supports DB2 version 7 only.
Linha 327: 
Linha 328: * The Oracle driver provided for dbExpress components
Linha 329:   is certified for Oracle 9i. BDE and ADO have been
Linha 330:   certified with Oracle 8.1.7 and 8.1.6. In all cases,
Linha 331:   the client version and server version must be the
Linha 332:   same.
Linha 333: 
Linha 334: * Oracle 9i types - ORACLE 9i types TIMESTAMP
Linha 335:   (introduced for JDK 1.3.1 compliance) and other types
Linha 336:   like XMLType, Temp tables, etc. are not yet
Linha 337:   supported. Use "DATE" instead.
Linha 338: 
Linha 339: * The Borland Database Engine CAB file (BDEINST.CAB) is
Linha 340:   no longer digitally signed. This CAB file is provided
Linha 341:   for backward compatibility. For new applications, we
Linha 342:   recommend deploying BDE with the BDE merge modules.
Linha 343: 
Linha 344: InterBase version support, Dialect 3 features
Linha 345: ---------------------------------------------
Linha 346: 
Linha 347: Delphi 7 supports InterBase 6.5. The client version and
Linha 348: server version must be the same.
Linha 349: 
Linha 350: Currently, the driver does not support the ARRAY type.
Linha 351: 
Linha 352: To use the new InterBase 6.5 Dialect 3 features in BDE,
Linha 353: add an entry to your Windows registry under
Linha 354: 
Linha 355:  HKEY_LOCAL_MACHINE\SOFTWARE\Borland\Database Engine
Linha 356:  \Settings\Drivers\Intrbase\Db Open\SQLDIALECT
Linha 357: 
Linha 358: and set the String Value to "3".
Linha 359: 
Linha 360: When an InterBase alias is created, the new entry will
Linha 361: be available in the .CFG file.
Linha 362: 
Linha 363: To use InterBase 5.6, SQLDIALECT can be set to "1"
Linha 364: (existing IB aliases which do not have the SQLDIALECT
Linha 365: entry default to SQLDIALECT=1 or to the registry
Linha 366: setting when the SQLDIALECT entry is added to the
Linha 367: registry).
Linha 368: 
Linha 369: 
Linha 370: InterBase 6.5 implementation note
Linha 371: ---------------------------------
Linha 372: 
Linha 373: If you are using a WebSnap application with InterBase
Linha 374: 6.5, a local database connection is not recommended.
Linha 375: Instead, use a client/server connection specified by a
Linha 376: protocol-specific prefix to the path to the database.
Linha 377: 
Linha 378: Examples:
Linha 379: 
Linha 380: Local connection (not recommended):
Linha 381:     C:\PathTo\Database\DBName.gdb
Linha 382: 
Linha 383: TCP/IP connection on Windows:
Linha 384:     saturn:C:\PathTo\Database\DBName.gdb
Linha 385: 
Linha 386: TCP/IP connection on UNIX:
Linha 387:     jupiter:/usr/PathTo/Database/DBName.gdb
Linha 388: 
Linha 389: NetBEUI connection:
Linha 390:     \\venus\C:\PathTo\Database\DBName.gdb
Linha 391: 
Linha 392: IPX/SPX connection:
Linha 393:     mars@vol2:\PathTo\Database\DBName.gdb
Linha 394: 
Linha 395: If the WebSnap application is on the same machine as
Linha 396: the server, you can use localhost:
Linha 397: 
Linha 398:     localhost:C:\PathTo\Database\DBName.gdb
Linha 399: 
Linha 400: 
Linha 401: INTERBASE driver behavioral difference:
Linha 402: ---------------------------------------
Linha 403: 
Linha 404: NUMERIC data type mapping.
Linha 405: 
Linha 406: 
Linha 407:    The dbExpress driver for INTERBASE  now maps NUMERIC
Linha 408:    data types to fldBCD instead of fldINT16, fldINT32,
Linha 409:    fldFLOAT.
Linha 410: 
Linha 411: 
Linha 412: dbExpress
Linha 413: ---------
Linha 414: 
Linha 415: TSQLDataSet now has DefaultRowsetSize = 20 (Oracle
Linha 416: only). To use a different RowSetSize, add the
Linha 417: RowSetSize property manually (e.g., "RowsetSize = 200")
Linha 418: into dbxconnections.ini, for existing connections, or
Linha 419: into dbxdrivers.ini to have the RowSetSize property
Linha 420: included in new connections. RowsetSize can also be
Linha 421: modified in code, as shown here:
Linha 422: 
Linha 423:     "SQLConnection1.Params.Values['RowsetSize'] :=
Linha 424:     '200'"
Linha 425: 
Linha 426: 
Linha 427: dbExpress now includes MySQL 3.23.49 support with a new
Linha 428: driver (dbexpmysql.dll). To use the new driver, specify
Linha 429: 
Linha 430:     LibraryName = "dbexpmysql.dll"
Linha 431: 
Linha 432: in the Object Inspector or in dbxdrivers.ini.
Linha 433: 
Linha 434: 
Linha 435: dbExpress components and MySQL transactions
Linha 436: -------------------------------------------
Linha 437: 
Linha 438: MySQL doesn't support more than one active statement
Linha 439: per connection. To perform multiple SQL requests with a
Linha 440: single TSQLConnection the dbExpress components clone
Linha 441: connection. There is a bug in maintaining state
Linha 442: information on the no.of active statements with respect
Linha 443: to a TSQLConnection. This might cause serious failures
Linha 444: in transaction as the transaction might be started on
Linha 445: one connection and commit or rollback might be
Linha 446: happening on another connection.
Linha 447: 
Linha 448: Workaround:
Linha 449: 
Linha 450: Before you start a MySQL transaction make sure
Linha 451: TSQLConnection.ActiveStatements is 0. If it's not 0 then
Linha 452: close the TSQLConnection and reopen it and that should
Linha 453: clear it. All your transaction activity should then go
Linha 454: on a single connection.
Linha 455: 
Linha 456: DB2 notes for dbExpress
Linha 457: -----------------------
Linha 458: 
Linha 459: The provided DB2 driver is certified for DB2 version 7.
Linha 460: The client version and server version must be the
Linha 461: same. BDE also supports DB2 version 7.
Linha 462: 
Linha 463: Because of a known DB2 bug, the DB2 client returns only
Linha 464: one record at a time when a request for a block fetch
Linha 465: is made, even with RowsetSize option > 1.
Linha 466: 
Linha 467: Timestamp issues
Linha 468: ----------------
Linha 469: 
Linha 470: The dbExpress DB2 driver rounds the TIMESTAMP
Linha 471: fractional value and there could be some precision lost
Linha 472: depending upon the data retrieved. When you apply back
Linha 473: changes the old value will not match the one on the
Linha 474: server and ApplyUpdates() will fail.
Linha 475: 
Linha 476: Workaround:
Linha 477: 
Linha 478: Make sure DB2 TIMESTAMP is not part of indexed columns
Linha 479: and set the DataSetProvider Update mode to WhereKey
Linha 480: instead of WhereAll.
Linha 481: 
Linha 482: 
Linha 483: Informix BLOB/CLOB fields (dbExpress)
Linha 484: -------------------------------------
Linha 485: 
Linha 486: A new global variable, InformixLob, is available to
Linha 487: allow you to work with Informix BLOB and CLOB fields.
Linha 488: 
Linha 489: The variable is required because Informix BLOB
Linha 490: (fldBLOB, fldstHBINARY) and CLOB (fldBLOB, fldstHMEMO)
Linha 491: fields are mapped as ftOraBlob and ftOraClob,
Linha 492: respectively, and the DataSnap resolver performs
Linha 493: special query generation when resolving Oracle
Linha 494: BLOB/CLOB fields, but not when resolving Informix
Linha 495: BLOB/CLOBs. To address this issue, set InformixLob
Linha 496: to True when using Informix BLOB/CLOBs, and switch it
Linha 497: back to False (the default) when using Oracle
Linha 498: BLOB/CLOBs.
Linha 499: 
Linha 500: 
Linha 501: NOTE: The new Informix driver (dbexpinf.dll) has been
Linha 502:       tested with Informix version 9.2.1 client/server
Linha 503:       and 9.2.1 client with SE server.
Linha 504: 
Linha 505: MSSQL driver - Known issues
Linha 506: ---------------------------
Linha 507: 
Linha 508: 1) Connection with a Blank Password/OS Authentication:
Linha 509: 
Linha 510:    With the current MSSQL driver you can't connect using a
Linha 511:    blank password or with OS Authentication = True.
Linha 512: 
Linha 513:    A patch will be made available soon at Borland's support
Linha 514:    download site.
Linha 515: 
Linha 516: 
Linha 517: 2) Master detail:
Linha 518: 
Linha 519:    a) When trying to open a master-detail as a nested
Linha 520:       dataset and if the detail link field is an INTEGER
Linha 521:       type and defined NOT NULL you will get a SQL Error
Linha 522:       "SQL State:HY000, SQL Error Code: 0, Invalid Input
Linha 523:       parameter values. Check the status values for
Linha 524:       details"
Linha 525: 
Linha 526:       A patch will be made available soon at Borland's
Linha 527:       support download site.
Linha 528: 
Linha 529:    b) ApplyUpdates() on a master-detail with
Linha 530:       "poFetchDetailsOnDemand" = True causes a SQL error
Linha 531:       "Cannot create new connection because in manual or
Linha 532:       distributed transaction mode". Workaround:
Linha 533: 
Linha 534:       poFetchDetailsOnDemand = False (default)
Linha 535: 
Linha 536: 
Linha 537: 
Linha 538: dbExpress MSSQL driver BLOB access
Linha 539: -----------------------------------
Linha 540: 
Linha 541: dbExpress MSSQL uses ISequentialStream (OLEDB
Linha 542: interface) to access blobs from SQL Server. MS OLEDB
Linha 543: provider (SQLOLEDB) doesn't support accessing more than
Linha 544: one in a SELECT using ISequentialStream. So, if you are
Linha 545: projecting more than one blob column in your queries
Linha 546: the dbExpress driver will not use the ISequentialStream
Linha 547: to access blobs. Instead, it will bind huge buffers to
Linha 548: get the blob data. The buffer size is determined by the
Linha 549: BlobSize entry in dbxconnections.ini. Make sure to set
Linha 550: it to an appropriate size to improve performance when
Linha 551: more than one blob column is projected.
Linha 552: 
Linha 553: 
Linha 554: MySQL limitation (dbExpress)
Linha 555: ----------------------------
Linha 556: 
Linha 557: MySQL can't filter with FLOAT fields in the WHERE
Linha 558: clause. Since this limitation prevents updates with
Linha 559: TClientDataset and TDataSetProvider, use DOUBLE
Linha 560: instead. For more information, see the MySQL
Linha 561: documentation.
Linha 562: 
Linha 563: 
Linha 564: Huge Text in MySQL (dbExpress)
Linha 565: ------------------------------
Linha 566: 
Linha 567: MySQL Server has a startup parameter called max-
Linha 568: allowed-packet that, by default, is set to 1 megabyte
Linha 569: for most MySQL servers. Increase the value of max-
Linha 570: allowed-packet if you encounter difficulty writing
Linha 571: large amounts of data (such as large strings) to MySQL.
Linha 572: 
Linha 573: 
Linha 574: Oracle notes for dbExpress
Linha 575: --------------------------
Linha 576: 
Linha 577: When qualifying a table name with a user name, you must
Linha 578: use quotes around the table name when CommandType is
Linha 579: set to ctTable.
Linha 580: 
Linha 581: Oracle LONG and LONG RAW fields (dbExpress)
Linha 582: -------------------------------------------
Linha 583: 
Linha 584: When using Oracle, the size of LONG and LONG RAW fields
Linha 585: cannot be determined without fetching the whole field.
Linha 586: So if BLOB SIZE is set to -1, LONG and LONG RAW fields
Linha 587: are truncated to 64K. Recommendation: Set BLOB SIZE to
Linha 588: your best estimate of the blob size.
Linha 589: 
Linha 590: Configuring driver files  (dbExpress)
Linha 591: -------------------------------------
Linha 592: The Oracle driver now supports Trim Char, Multiple
Linha 593: Transaction and OS Authentication. You need to add
Linha 594: these settings to your dbxdrivers for new aliases
Linha 595: and/or update dbxconnections in order to include these
Linha 596: settings for old aliases.
Linha 597: 
Linha 598: 
Linha 599: Please append the following at the end of dbxdrivers
Linha 600: file if you are using a driver file from an earlier
Linha 601: version of Delphi:
Linha 602: 
Linha 603:     [Multiple Transaction]
Linha 604:     False=0
Linha 605:     True=1
Linha 606: 
Linha 607:     [Trim Char]
Linha 608:     False=0
Linha 609:     True=1
Linha 610: 
Linha 611:     [OS Authentication]
Linha 612:     False=0
Linha 613:     True=1
Linha 614: 
Linha 615: Add the following under the [Oracle] section in
Linha 616: dbxdrivers and under your existent Oracle alias.
Linha 617: 
Linha 618:     OS Authentication=False
Linha 619:     Multiple Transaction=False
Linha 620:     Trim Char=False
Linha 621: 
Linha 622: 
Linha 623: Oracle OS authentication  (dbExpress)
Linha 624: -------------------------------------
Linha 625: 
Linha 626: To get the correct list of tables and other schema
Linha 627: objects in the dbExpress components, set the User_Name
Linha 628: to OPS$XXX, where XXX is the OS Authenticated user.
Linha 629: 
Linha 630: 
Linha 631: =======================================================
Linha 632: ABOUT EDITING THE WINDOWS REGISTRY
Linha 633: 
Linha 634: Warning:
Linha 635:     Registry edits are performed at your own risk.
Linha 636:     Several items in this document and in other parts
Linha 637:     of the documentation that accompany this product
Linha 638:     describe how to edit your Windows registry. In most
Linha 639:     cases, we recommend that you use the Microsoft
Linha 640:     Regedit tool to perform your editing. Whatever tool
Linha 641:     you use, however, you should, before making any
Linha 642:     edits, make backups of your registry and thoroughly
Linha 643:     familiarize yourself with the editing tool and the
Linha 644:     registry editing process. The registry is a
Linha 645:     critical component of your operating system, and
Linha 646:     any mistakes made while editing it can cause your
Linha 647:     machine to stop functioning.
Linha 648: 
Linha 649: 
Linha 650: =======================================================
Linha 651: PRODUCT INFORMATION ON THE WEB
Linha 652: 
Linha 653: In addition to numerous private sites that offer
Linha 654: information, instruction, and samples, the following
Linha 655: Borland Web-based resources provide a continuous stream
Linha 656: of news, product information, updates, code, and other
Linha 657: materials. You can connect to many of these resources
Linha 658: directly from the Help menu.
Linha 659: 
Linha 660: Delphi Direct [Help|Delphi Direct]
Linha 661: ----------------------------------
Linha 662: 
Linha 663: This IDE add-in resource provides an automatically
Linha 664: updated list of links to the latest news, downloads,
Linha 665: and other information about Delphi and Borland.
Linha 666: 
Linha 667: Code Central
Linha 668: ------------
Linha 669: 
Linha 670: The CodeCentral Repository is a free, searchable
Linha 671: database of code, tips, and other materials of interest
Linha 672: to developers. For details and registration
Linha 673: information, visit
Linha 674: 
Linha 675:  http://codecentral.borland.com/
Linha 676: 
Linha 677: 
Linha 678: The Borland Web site
Linha 679: --------------------
Linha 680: 
Linha 681: Borland Software Corporation home page:
Linha 682:   http://www.borland.com
Linha 683:   [IDE: Help|Borland Home Page]
Linha 684: 
Linha 685: Delphi home page:
Linha 686:   http://www.borland.com/delphi/
Linha 687:   [IDE: Help|Delphi Home Page]
Linha 688: 
Linha 689: Delphi developer support:
Linha 690:   http://www.borland.com/devsupport/delphi/
Linha 691:   [IDE: Help|Delphi Developer Support]
Linha 692: 
Linha 693: Delphi updates and other downloads:
Linha 694:   http://www.borland.com/devsupport/delphi/downloads/
Linha 695: 
Linha 696: Delphi documentation site:
Linha 697:   http://www.borland.com/techpubs/delphi
Linha 698: 
Linha 699: Newsgroups:
Linha 700:   http://www.borland.com/newsgroups/
Linha 701: 
Linha 702: Worldwide offices and distributors:
Linha 703:   http://www.borland.com/bww/
Linha 704: 
Linha 705: FTP site (anonymous access):
Linha 706:   ftp.borland.com
Linha 707: 
Linha 708: 
Linha 709: =======================================================
Linha 710: Copyright (c) 2002 Borland Software Corporation.
Linha 711: All rights reserved.