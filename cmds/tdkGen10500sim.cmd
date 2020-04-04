#require streamdevice, 2.7.1
#require tdkgen10500, nsenaud
require stream,2.8.8
require tdkGen10500, 1.0.1


#drvAsynIPPortConfigure("CoilsPS-01", "127.0.0.1:8003")
#drvAsynIPPortConfigure("CoilsPS-02", "127.0.0.1:8003")
drvAsynIPPortConfigure("CoilsPS-03", "127.0.0.1:8003")
#pwd
#dbLoadRecords("./cmds/test.db")
#dbLoadRecords("./db/tdkGen10500.db")
dbLoadRecords("tdkGen10500.db")
