
require stream,2.8.8
require tdkGen10500, 1.0.1


iocshLoad("$(tdkGen10500_DIR)/tdkGen10500.iocsh", "connection_name=CoilsPS-01, IP_addr=127.0.0.1, secsub=ISrc-010, disdevidx=PwrC-CoilPS-01")
iocshLoad("$(tdkGen10500_DIR)/tdkGen10500.iocsh", "connection_name=CoilsPS-01, IP_addr=127.0.0.1, secsub=ISrc-010, disdevidx=PwrC-CoilPS-02")
iocshLoad("$(tdkGen10500_DIR)/tdkGen10500.iocsh", "connection_name=CoilsPS-01, IP_addr=127.0.0.1, secsub=ISrc-010, disdevidx=PwrC-CoilPS-03")


#drvAsynIPPortConfigure("CoilsPS-01", "10.10.1.31:8003")
#drvAsynIPPortConfigure("CoilsPS-02", "10.10.1.32:8003")
#drvAsynIPPortConfigure("CoilsPS-03", "10.10.1.33:8003")


