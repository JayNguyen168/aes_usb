# 2025-10-02T18:02:29.136214100
import vitis

client = vitis.create_client()
client.set_workspace(path="USB_CDC_Ultra96v2")

platform = client.get_component(name="usb_mass_storage")
status = platform.build()

comp = client.get_component(name="xusb_intr_example")
comp.build()

comp = client.create_app_component(name="aes_demo",platform = "$COMPONENT_LOCATION/../usb_mass_storage/export/usb_mass_storage/usb_mass_storage.xpfm",domain = "standalone_psu_cortexa53_0")

comp = client.get_component(name="aes_demo")
comp.build()

