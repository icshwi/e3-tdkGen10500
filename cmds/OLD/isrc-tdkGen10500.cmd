require stream,2.8.8
require tdkGen10500, 1.0.1


drvAsynIPPortConfigure("CoilsPS-01", "10.10.1.31:8003")
drvAsynIPPortConfigure("CoilsPS-02", "10.10.1.32:8003")
drvAsynIPPortConfigure("CoilsPS-03", "10.10.1.33:8003")

dbLoadRecords("tdkGen10500.db")
