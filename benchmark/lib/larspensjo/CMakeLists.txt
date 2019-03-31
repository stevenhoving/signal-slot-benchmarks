add_library(larspensjo INTERFACE)
add_library(larspensjo::SimpleSignal ALIAS larspensjo)

target_include_directories(larspensjo
 INTERFACE
   SimpleSignal
)