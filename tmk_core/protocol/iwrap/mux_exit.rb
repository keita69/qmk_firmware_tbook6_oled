#
# Rescue from Bluegiga iWRAP MUX mode
#    6.75 of iWRAP5_User_Guid.pdf
#
[0xBF, 0xFF, 0x00, 0x11, 0x53, 0x45, 0x54, 0x20, 0x43, 0x4f, 0x4e, 0x54, 0x52, 0x4f, 0x4c, 0x20, 0x4d, 0x55, 0x58, 0x20, 0x30, 0x00].each do |x| 
  print x.chr
end
