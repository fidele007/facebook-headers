/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
#import <Facebook/Facebook-Structs.h>
@class NSOperationQueue, AVCaptureDevice;

@interface FBPMCameraCaptureTime : NSObject {

	NSOperationQueue* _queue;
	time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > _startPeriod;
	time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > _lastInterrupted;
	duration<long long, std::__1::ratio<1, 1000000000> > _interruptTotalForLastPeriod;
	AVCaptureDevice* _capturingDevice;
	id<NSObject> _startObserver;
	id<NSObject> _stopObserver;
	id<NSObject> _errorObserver;
	id<NSObject> _onInterruptedObserver;
	id<NSObject> _onInterruptEndedObserver;
	id<NSObject> _onInputAdded;
	id<NSObject> _onInputRemoved;
	Video _model;
	double _energy;

}

@property (assign) double energy;              //@synthesize energy=_energy - In the implementation block
+(id)sharedInstanceWithModelConfig:(Video)arg1 ;
-(id)initWithModelConfig:(Video)arg1 ;
-(void)_onStartRunning:(id)arg1 ;
-(void)_onStopRunning:(id)arg1 ;
-(void)_onError:(id)arg1 ;
-(void)_onInterrupted:(id)arg1 ;
-(void)_onInterruptEnded:(id)arg1 ;
-(void)_onInputAdded:(id)arg1 ;
-(void)_onInputRemoved:(id)arg1 ;
-(void)_reset:(time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > >)arg1 device:(id)arg2 ;
-(void)_endCaptureSession:(time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > >)arg1 sessionPreset:(id)arg2 ;
-(void)_updateEnergyWithFPS:(int)arg1 sessionPreset:(id)arg2 position:(long long)arg3 time:(long long)arg4 ;
-(void)setEnergy:(double)arg1 ;
-(BOOL)_updateCameraTime:(time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > >)arg1 sessionPreset:(id)arg2 ;
-(void)dealloc;
-(double)energy;
@end

