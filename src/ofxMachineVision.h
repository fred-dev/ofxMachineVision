#pragma once

/**
 \file      ofxMachineVision.h
 \brief     Include this file in your project to have access to the namespace ofxMachineVision.
 \author    Elliot Woods

 Only Device::Blocking and Grabber::Simple have been implemented so far.
 Awaiting:
 - Device::Polling
 - Device::Callback
 - Grabber::Callback
 - Grabber::Blocking
*/

#include "ofxMachineVision/Device/Blocking.h"
#include "ofxMachineVision/Grabber/Simple.h"
#include "ofxMachineVision/Stream/Recorder.h"

namespace ofxMachineVision {
	/**
	\brief A simple class for wrapping camera drivers
	e.g. usage : ofxMachineVision::SimpleGrabber<ofxXimea::Device> grabber
	this will give you an instance of ofxMachineVision::Grabber::Simple which
	holds an instance of ofxXimea::Device
	*/
	template<class DeviceClass>
	class SimpleGrabber : public Grabber::Simple {
	public:
		SimpleGrabber() : Grabber::Simple(DevicePtr(new DeviceClass())) {
		}
	};
}