//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGenerator.exe
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UWP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGenerator - Invoke the following command with a valid 
//   Introspection XML file and a writable output directory:
//     AllJoynCodeGenerator -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#pragma once

namespace com { namespace honeywell { namespace Thermostat { namespace LyricAsa3demo { namespace MainInterface {

// This class, and the associated EventArgs classes, exist for the benefit of JavaScript developers who
// do not have the ability to implement IMainInterfaceService. Instead, MainInterfaceServiceEventAdapter
// provides the Interface implementation and exposes a set of compatible events to the developer.
public ref class MainInterfaceServiceEventAdapter sealed : [Windows::Foundation::Metadata::Default] IMainInterfaceService
{
public:
    // Method Invocation Events
    event Windows::Foundation::TypedEventHandler<MainInterfaceServiceEventAdapter^, MainInterfaceSetTemperatureCalledEventArgs^>^ SetTemperatureCalled 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<MainInterfaceServiceEventAdapter^, MainInterfaceSetTemperatureCalledEventArgs^>^ handler) 
        { 
            return _SetTemperatureCalled += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<MainInterfaceServiceEventAdapter^>(sender), safe_cast<MainInterfaceSetTemperatureCalledEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _SetTemperatureCalled -= token; 
        } 
    internal: 
        void raise(MainInterfaceServiceEventAdapter^ sender, MainInterfaceSetTemperatureCalledEventArgs^ args) 
        { 
            _SetTemperatureCalled(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<MainInterfaceServiceEventAdapter^, MainInterfaceSetTemperature68CalledEventArgs^>^ SetTemperature68Called 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<MainInterfaceServiceEventAdapter^, MainInterfaceSetTemperature68CalledEventArgs^>^ handler) 
        { 
            return _SetTemperature68Called += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<MainInterfaceServiceEventAdapter^>(sender), safe_cast<MainInterfaceSetTemperature68CalledEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _SetTemperature68Called -= token; 
        } 
    internal: 
        void raise(MainInterfaceServiceEventAdapter^ sender, MainInterfaceSetTemperature68CalledEventArgs^ args) 
        { 
            _SetTemperature68Called(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<MainInterfaceServiceEventAdapter^, MainInterfaceSetTemperature70CalledEventArgs^>^ SetTemperature70Called 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<MainInterfaceServiceEventAdapter^, MainInterfaceSetTemperature70CalledEventArgs^>^ handler) 
        { 
            return _SetTemperature70Called += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<MainInterfaceServiceEventAdapter^>(sender), safe_cast<MainInterfaceSetTemperature70CalledEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _SetTemperature70Called -= token; 
        } 
    internal: 
        void raise(MainInterfaceServiceEventAdapter^ sender, MainInterfaceSetTemperature70CalledEventArgs^ args) 
        { 
            _SetTemperature70Called(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<MainInterfaceServiceEventAdapter^, MainInterfaceSetTemperature72CalledEventArgs^>^ SetTemperature72Called 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<MainInterfaceServiceEventAdapter^, MainInterfaceSetTemperature72CalledEventArgs^>^ handler) 
        { 
            return _SetTemperature72Called += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<MainInterfaceServiceEventAdapter^>(sender), safe_cast<MainInterfaceSetTemperature72CalledEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _SetTemperature72Called -= token; 
        } 
    internal: 
        void raise(MainInterfaceServiceEventAdapter^ sender, MainInterfaceSetTemperature72CalledEventArgs^ args) 
        { 
            _SetTemperature72Called(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<MainInterfaceServiceEventAdapter^, MainInterfaceSetTemperature74CalledEventArgs^>^ SetTemperature74Called 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<MainInterfaceServiceEventAdapter^, MainInterfaceSetTemperature74CalledEventArgs^>^ handler) 
        { 
            return _SetTemperature74Called += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<MainInterfaceServiceEventAdapter^>(sender), safe_cast<MainInterfaceSetTemperature74CalledEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _SetTemperature74Called -= token; 
        } 
    internal: 
        void raise(MainInterfaceServiceEventAdapter^ sender, MainInterfaceSetTemperature74CalledEventArgs^ args) 
        { 
            _SetTemperature74Called(sender, args);
        } 
    }

    // Property Read Events
    // Property Write Events
    // IMainInterfaceService Implementation
    virtual Windows::Foundation::IAsyncOperation<MainInterfaceSetTemperatureResult^>^ SetTemperatureAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ double interfaceMemberTargetTemperatureTemperatureScale, _In_ int16 interfaceMemberInputArg);
    virtual Windows::Foundation::IAsyncOperation<MainInterfaceSetTemperature68Result^>^ SetTemperature68Async(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<MainInterfaceSetTemperature70Result^>^ SetTemperature70Async(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<MainInterfaceSetTemperature72Result^>^ SetTemperature72Async(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<MainInterfaceSetTemperature74Result^>^ SetTemperature74Async(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);



private:
    event Windows::Foundation::EventHandler<Platform::Object^>^ _SetTemperatureCalled;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _SetTemperature68Called;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _SetTemperature70Called;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _SetTemperature72Called;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _SetTemperature74Called;
};

} } } } } 
