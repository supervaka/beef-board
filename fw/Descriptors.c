// Copyright 2021 Dean Camera (dean [at] fourwalledcubicle [dot] com)
// Copyright 2023 supervaka, HWXLR8

#include "Descriptors.h"

// HID class report descriptor. This is a special descriptor
// constructed with values from the USBIF HID class specification to
// describe the reports and capabilities of the HID device. This
// descriptor is parsed by the host and its contents used to determine
// what data (and in what encoding) the device will send, and what it
// may be sent back from the host. Refer to the HID specification for
// more details on HID report descriptors.

const USB_Descriptor_HIDReport_Datatype_t PROGMEM JoystickReport[] = {
  // Use the HID class driver's standard Joystick report.
  // Min X/Y/Z Axis values: -128
  // Max X/Y/Z Axis values:  127
  // Min physical X/Y/Z Axis values (used to determine resolution): -1
  // Max physical X/Y/Z Axis values (used to determine resolution):  1
  // Buttons: 16

HID_DESCRIPTOR_JOYSTICK(-128, 127, -1, 1, 16)
    HID_RI_USAGE_PAGE(8, 0x0A),
    HID_RI_USAGE(8, 1),
    HID_RI_COLLECTION(8, 0x02),
    	HID_RI_USAGE_PAGE(8, 0x08),
    	HID_RI_USAGE(8, 0x4B),
    	HID_RI_REPORT_SIZE(8, 1),
    	HID_RI_REPORT_COUNT(8, 1),
    	HID_RI_OUTPUT(8, HID_IOF_DATA | HID_IOF_VARIABLE | HID_IOF_ABSOLUTE | HID_IOF_NON_VOLATILE),
    HID_RI_END_COLLECTION(0),
    HID_RI_USAGE(8, 2),
    HID_RI_COLLECTION(8, 0x02),
    	HID_RI_USAGE_PAGE(8, 0x08),
    	HID_RI_USAGE(8, 0x4B),
    	HID_RI_REPORT_SIZE(8, 1),
    	HID_RI_REPORT_COUNT(8, 1),
    	HID_RI_OUTPUT(8, HID_IOF_DATA | HID_IOF_VARIABLE | HID_IOF_ABSOLUTE | HID_IOF_NON_VOLATILE),
    HID_RI_END_COLLECTION(0),
    HID_RI_USAGE(8, 3),
    HID_RI_COLLECTION(8, 0x02),
    	HID_RI_USAGE_PAGE(8, 0x08),
    	HID_RI_USAGE(8, 0x4B),
    	HID_RI_REPORT_SIZE(8, 1),
    	HID_RI_REPORT_COUNT(8, 1),
    	HID_RI_OUTPUT(8, HID_IOF_DATA | HID_IOF_VARIABLE | HID_IOF_ABSOLUTE | HID_IOF_NON_VOLATILE),
    HID_RI_END_COLLECTION(0),
    HID_RI_USAGE(8, 4),
    HID_RI_COLLECTION(8, 0x02),
    	HID_RI_USAGE_PAGE(8, 0x08),
    	HID_RI_USAGE(8, 0x4B),
    	HID_RI_REPORT_SIZE(8, 1),
    	HID_RI_REPORT_COUNT(8, 1),
    	HID_RI_OUTPUT(8, HID_IOF_DATA | HID_IOF_VARIABLE | HID_IOF_ABSOLUTE | HID_IOF_NON_VOLATILE),
    HID_RI_END_COLLECTION(0),
    HID_RI_USAGE(8, 5),
    HID_RI_COLLECTION(8, 0x02),
    	HID_RI_USAGE_PAGE(8, 0x08),
    	HID_RI_USAGE(8, 0x4B),
    	HID_RI_REPORT_SIZE(8, 1),
    	HID_RI_REPORT_COUNT(8, 1),
    	HID_RI_OUTPUT(8, HID_IOF_DATA | HID_IOF_VARIABLE | HID_IOF_ABSOLUTE | HID_IOF_NON_VOLATILE),
    HID_RI_END_COLLECTION(0),
    HID_RI_USAGE(8, 6),
    HID_RI_COLLECTION(8, 0x02),
    	HID_RI_USAGE_PAGE(8, 0x08),
    	HID_RI_USAGE(8, 0x4B),
    	HID_RI_REPORT_SIZE(8, 1),
    	HID_RI_REPORT_COUNT(8, 1),
    	HID_RI_OUTPUT(8, HID_IOF_DATA | HID_IOF_VARIABLE | HID_IOF_ABSOLUTE | HID_IOF_NON_VOLATILE),
    HID_RI_END_COLLECTION(0),
    HID_RI_USAGE(8, 7),
    HID_RI_COLLECTION(8, 0x02),
    	HID_RI_USAGE_PAGE(8, 0x08),
    	HID_RI_USAGE(8, 0x4B),
    	HID_RI_REPORT_SIZE(8, 1),
    	HID_RI_REPORT_COUNT(8, 1),
    	HID_RI_OUTPUT(8, HID_IOF_DATA | HID_IOF_VARIABLE | HID_IOF_ABSOLUTE | HID_IOF_NON_VOLATILE),
    HID_RI_END_COLLECTION(0),
    HID_RI_USAGE(8, 8),
    HID_RI_COLLECTION(8, 0x02),
    	HID_RI_USAGE_PAGE(8, 0x08),
    	HID_RI_USAGE(8, 0x4B),
    	HID_RI_REPORT_SIZE(8, 1),
    	HID_RI_REPORT_COUNT(8, 1),
    	HID_RI_OUTPUT(8, HID_IOF_DATA | HID_IOF_VARIABLE | HID_IOF_ABSOLUTE | HID_IOF_NON_VOLATILE),
    HID_RI_END_COLLECTION(0),
    HID_RI_USAGE(8, 9),
    HID_RI_COLLECTION(8, 0x02),
    	HID_RI_USAGE_PAGE(8, 0x08),
    	HID_RI_USAGE(8, 0x4B),
    	HID_RI_REPORT_SIZE(8, 1),
    	HID_RI_REPORT_COUNT(8, 1),
    	HID_RI_OUTPUT(8, HID_IOF_DATA | HID_IOF_VARIABLE | HID_IOF_ABSOLUTE | HID_IOF_NON_VOLATILE),
    HID_RI_END_COLLECTION(0),
	HID_RI_USAGE(8, 10),
    HID_RI_COLLECTION(8, 0x02),
    	HID_RI_USAGE_PAGE(8, 0x08),
    	HID_RI_USAGE(8, 0x4B),
    	HID_RI_REPORT_SIZE(8, 1),
    	HID_RI_REPORT_COUNT(8, 1),
    	HID_RI_OUTPUT(8, HID_IOF_DATA | HID_IOF_VARIABLE | HID_IOF_ABSOLUTE | HID_IOF_NON_VOLATILE),
    HID_RI_END_COLLECTION(0),
	HID_RI_USAGE(8, 11),
    HID_RI_COLLECTION(8, 0x02),
    	HID_RI_USAGE_PAGE(8, 0x08),
    	HID_RI_USAGE(8, 0x4B),
    	HID_RI_REPORT_SIZE(8, 1),
    	HID_RI_REPORT_COUNT(8, 1),
    	HID_RI_OUTPUT(8, HID_IOF_DATA | HID_IOF_VARIABLE | HID_IOF_ABSOLUTE | HID_IOF_NON_VOLATILE),
    HID_RI_END_COLLECTION(0),
	HID_RI_USAGE(8, 12),
    HID_RI_COLLECTION(8, 0x02),
    	HID_RI_USAGE_PAGE(8, 0x08),
    	HID_RI_USAGE(8, 0x4B),
    	HID_RI_REPORT_SIZE(8, 1),
    	HID_RI_REPORT_COUNT(8, 1),
    	HID_RI_OUTPUT(8, HID_IOF_DATA | HID_IOF_VARIABLE | HID_IOF_ABSOLUTE | HID_IOF_NON_VOLATILE),
    HID_RI_END_COLLECTION(0),
	HID_RI_USAGE(8, 13),
    HID_RI_COLLECTION(8, 0x02),
    	HID_RI_USAGE_PAGE(8, 0x08),
    	HID_RI_USAGE(8, 0x4B),
    	HID_RI_REPORT_SIZE(8, 1),
    	HID_RI_REPORT_COUNT(8, 1),
    	HID_RI_OUTPUT(8, HID_IOF_DATA | HID_IOF_VARIABLE | HID_IOF_ABSOLUTE | HID_IOF_NON_VOLATILE),
    HID_RI_END_COLLECTION(0),
	HID_RI_USAGE(8, 14),
    HID_RI_COLLECTION(8, 0x02),
    	HID_RI_USAGE_PAGE(8, 0x08),
    	HID_RI_USAGE(8, 0x4B),
    	HID_RI_REPORT_SIZE(8, 1),
    	HID_RI_REPORT_COUNT(8, 1),
    	HID_RI_OUTPUT(8, HID_IOF_DATA | HID_IOF_VARIABLE | HID_IOF_ABSOLUTE | HID_IOF_NON_VOLATILE),
    HID_RI_END_COLLECTION(0),
	HID_RI_USAGE(8, 15),
    HID_RI_COLLECTION(8, 0x02),
    	HID_RI_USAGE_PAGE(8, 0x08),
    	HID_RI_USAGE(8, 0x4B),
    	HID_RI_REPORT_SIZE(8, 1),
    	HID_RI_REPORT_COUNT(8, 1),
    	HID_RI_OUTPUT(8, HID_IOF_DATA | HID_IOF_VARIABLE | HID_IOF_ABSOLUTE | HID_IOF_NON_VOLATILE),
    HID_RI_END_COLLECTION(0),
	HID_RI_USAGE(8, 16),
    HID_RI_COLLECTION(8, 0x02),
    	HID_RI_USAGE_PAGE(8, 0x08),
    	HID_RI_USAGE(8, 0x4B),
    	HID_RI_REPORT_SIZE(8, 1),
    	HID_RI_REPORT_COUNT(8, 1),
    	HID_RI_OUTPUT(8, HID_IOF_DATA | HID_IOF_VARIABLE | HID_IOF_ABSOLUTE | HID_IOF_NON_VOLATILE),
    HID_RI_END_COLLECTION(0),
    HID_RI_REPORT_SIZE(8, 8),
	HID_RI_REPORT_COUNT(8, 2),
	HID_RI_OUTPUT(8, HID_IOF_CONSTANT),
HID_RI_END_COLLECTION(0),
};

// Device descriptor structure. This descriptor, located in FLASH
// memory, describes the overall device characteristics, including the
// supported USB version, control endpoint size and the number of
// device configurations. The descriptor is read out by the USB host
// when the enumeration process begins.
const USB_Descriptor_Device_t PROGMEM DeviceDescriptor = {
  .Header = {.Size = sizeof(USB_Descriptor_Device_t), .Type = DTYPE_Device},
  .USBSpecification = VERSION_BCD(1,1,0),
  .Class = USB_CSCP_NoDeviceClass,
  .SubClass = USB_CSCP_NoDeviceSubclass,
  .Protocol = USB_CSCP_NoDeviceProtocol,
  .Endpoint0Size = FIXED_CONTROL_ENDPOINT_SIZE,
  // official konami infinitas controller VID/PID
  .VendorID = 0x1CCF,
  .ProductID = 0x8048,
  .ReleaseNumber = VERSION_BCD(0,0,1),
  .ManufacturerStrIndex = STRING_ID_Manufacturer,
  .ProductStrIndex = STRING_ID_Product,
  .SerialNumStrIndex = NO_DESCRIPTOR,
  .NumberOfConfigurations = FIXED_NUM_CONFIGURATIONS
};

// Configuration descriptor structure. This descriptor, located in
// FLASH memory, describes the usage of the device in one of its
// supported configurations, including information about any device
// interfaces and endpoints. The descriptor is read out by the USB
// host during the enumeration process when selecting a configuration
// so that the host may correctly communicate with the USB device.

const USB_Descriptor_Configuration_t PROGMEM ConfigurationDescriptor = {
  .Config = {
    .Header = {.Size = sizeof(USB_Descriptor_Configuration_Header_t), .Type = DTYPE_Configuration},
    .TotalConfigurationSize = sizeof(USB_Descriptor_Configuration_t),
    .TotalInterfaces = 1,
    .ConfigurationNumber = 1,
    .ConfigurationStrIndex = NO_DESCRIPTOR,
    .ConfigAttributes = (USB_CONFIG_ATTR_RESERVED | USB_CONFIG_ATTR_SELFPOWERED),
    .MaxPowerConsumption = USB_CONFIG_POWER_MA(500)
  },
  .HID_Interface = {
    .Header = {.Size = sizeof(USB_Descriptor_Interface_t), .Type = DTYPE_Interface},
    .InterfaceNumber = INTERFACE_ID_Joystick,
    .AlternateSetting = 0x00,
    .TotalEndpoints = 2,
    .Class = HID_CSCP_HIDClass,
    .SubClass = HID_CSCP_NonBootSubclass,
    .Protocol = HID_CSCP_NonBootProtocol,
    .InterfaceStrIndex = NO_DESCRIPTOR
  },
  .HID_JoystickHID = {
    .Header = {.Size = sizeof(USB_HID_Descriptor_HID_t), .Type = HID_DTYPE_HID},
    .HIDSpec = VERSION_BCD(1,1,1),
    .CountryCode = 0x00,
    .TotalReportDescriptors = 1,
    .HIDReportType = HID_DTYPE_Report,
    .HIDReportLength = sizeof(JoystickReport)
  },
  .HID_ReportINEndpoint = {
    .Header = {.Size = sizeof(USB_Descriptor_Endpoint_t), .Type = DTYPE_Endpoint},
    .EndpointAddress = JOYSTICK_IN_EPADDR,
    .Attributes = (EP_TYPE_INTERRUPT | ENDPOINT_ATTR_NO_SYNC | ENDPOINT_USAGE_DATA),
    .EndpointSize = JOYSTICK_EPSIZE,
    .PollingIntervalMS = 0x01
  },
  .HID_ReportOUTEndpoint = {
    .Header = {.Size = sizeof(USB_Descriptor_Endpoint_t), .Type = DTYPE_Endpoint},
    .EndpointAddress = JOYSTICK_OUT_EPADDR,
    .Attributes = (EP_TYPE_INTERRUPT | ENDPOINT_ATTR_NO_SYNC | ENDPOINT_USAGE_DATA),
    .EndpointSize = JOYSTICK_EPSIZE,
    .PollingIntervalMS = 0x01
  }
};

// Language descriptor structure. This descriptor, located in FLASH
// memory, is returned when the host requests the string descriptor
// with index 0 (the first index). It is actually an array of 16-bit
// integers, which indicate via the language ID table available at
// USB.org what languages the device supports for its string
// descriptors.
const USB_Descriptor_String_t PROGMEM LanguageString = USB_STRING_DESCRIPTOR_ARRAY(LANGUAGE_ID_ENG);

// Manufacturer descriptor string. This is a Unicode string containing
// the manufacturer's details in human readable form, and is read out
// upon request by the host when the appropriate string ID is
// requested, listed in the Device Descriptor.
const USB_Descriptor_String_t PROGMEM ManufacturerString = USB_STRING_DESCRIPTOR(L"SEGV");

// Product descriptor string. This is a Unicode string containing the
// product's details in human readable form, and is read out upon
// request by the host when the appropriate string ID is requested,
// listed in the Device Descriptor.
const USB_Descriptor_String_t PROGMEM ProductString = USB_STRING_DESCRIPTOR(L"BEEF BOARD");

// This function is called by the library when in device mode, and
// must be overridden (see library "USB Descriptors" documentation) by
// the application code so that the address and size of a requested
// descriptor can be given to the USB library. When the device
// receives a Get Descriptor request on the control endpoint, this
// function is called so that the descriptor details can be passed
// back and the appropriate descriptor sent back to the USB host.
uint16_t CALLBACK_USB_GetDescriptor(const uint16_t wValue,
                                    const uint16_t wIndex,
                                    const void** const DescriptorAddress) {
  const uint8_t DescriptorType = (wValue >> 8);
  const uint8_t DescriptorNumber = (wValue & 0xFF);

  const void* Address = NULL;
  uint16_t Size = NO_DESCRIPTOR;

  switch (DescriptorType) {
  case DTYPE_Device:
    Address = &DeviceDescriptor;
    Size = sizeof(USB_Descriptor_Device_t);
    break;
  case DTYPE_Configuration:
    Address = &ConfigurationDescriptor;
    Size = sizeof(USB_Descriptor_Configuration_t);
    break;
  case DTYPE_String:
    switch (DescriptorNumber) {
    case STRING_ID_Language:
      Address = &LanguageString;
      Size    = pgm_read_byte(&LanguageString.Header.Size);
      break;
    case STRING_ID_Manufacturer:
      Address = &ManufacturerString;
      Size    = pgm_read_byte(&ManufacturerString.Header.Size);
      break;
    case STRING_ID_Product:
      Address = &ProductString;
      Size    = pgm_read_byte(&ProductString.Header.Size);
      break;
    }
    break;
  case HID_DTYPE_HID:
    Address = &ConfigurationDescriptor.HID_JoystickHID;
    Size    = sizeof(USB_HID_Descriptor_HID_t);
    break;
  case HID_DTYPE_Report:
    Address = &JoystickReport;
    Size    = sizeof(JoystickReport);
    break;
  }
  *DescriptorAddress = Address;
  return Size;
}
