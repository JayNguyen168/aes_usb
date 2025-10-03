# 2025-10-02T23:36:58.127870800
import vitis

client = vitis.create_client()
client.set_workspace(path="USB_CDC_Ultra96v2")

comp = client.get_component(name="aes_demo")
comp.build()

comp.build()

comp.build()

comp.build()

