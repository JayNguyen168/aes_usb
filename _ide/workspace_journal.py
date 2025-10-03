# 2025-10-03T17:58:58.900648800
import vitis

client = vitis.create_client()
client.set_workspace(path="USB_CDC_Ultra96v2")

comp = client.get_component(name="aes_demo")
comp.build()

