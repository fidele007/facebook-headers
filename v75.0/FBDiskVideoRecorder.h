/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Facebook/Facebook-Structs.h>
@class NSURL, NSObject, NSError, NSArray, NSFileManager;

@interface FBDiskVideoRecorder : NSObject {

	SCD_Struct_FB289 _config;
	NSURL* _tempDirectory;
	shared_ptr<facebook::videostreaming::SimpleVideoRecorder>* _currentRecorder;
	NSObject*<OS_dispatch_queue> _encodingQueue;
	vector<std::__1::shared_ptr<facebook::videostreaming::SimpleVideoRecorder>, std::__1::allocator<std::__1::shared_ptr<facebook::videostreaming::SimpleVideoRecorder> > >* _recorders;
	vector<FB::Functional::PromiseEither<NSError *, FBManagedFileURL *>, std::__1::allocator<FB::Functional::PromiseEither<NSError *, FBManagedFileURL *> > >* _recordFinishPromises;
	SCD_Struct_FB100 _durationUntilThresholdReached;
	SCD_Struct_FB100 _recordingDuration;
	SCD_Struct_FB100 _nextAvailableSpaceCheck;
	NSError* _processingError;
	NSArray* _metadata;
	BOOL _paused;
	BOOL _discontinuity;
	SCD_Struct_FB100 _lastVideoSampleEndTimestamp;
	SCD_Struct_FB100 _lastAudioSampleEndTimestamp;
	SCD_Struct_FB100 _timeOffset;
	NSFileManager* _fm;

}
-(void)processVideo:(opaqueCMSampleBufferRef)arg1 ;
-(void)processAudio:(opaqueCMSampleBufferRef)arg1 ;
-(void)onInterruption;
-(id)initWithTempDirectory:(id)arg1 metadata:(id)arg2 encodingQueue:(id)arg3 config:(SCD_Struct_FB638)arg4 ;
-(void)onBackground:(id)arg1 ;
-(shared_ptr<facebook::videostreaming::SimpleVideoRecorder>*)currentRecorder;
-(void)cleanupImpl;
-(void)processBuffer:(opaqueCMSampleBufferRef)arg1 audio:(BOOL)arg2 ;
-(void)pauseRecordingImpl;
-(void)onInterruptionImpl;
-(void)updateLastPTS:(CMSampleBufferSmartPtr*)arg1 isAudio:(BOOL)arg2 ;
-(void)checkAvailableDiskSpaceIfNeeded;
-(void)processBufferImpl:(CMSampleBufferSmartPtr*)arg1 audio:(BOOL)arg2 ;
-(void)checkAvailableDiskSpace;
-(shared_ptr<facebook::videostreaming::SimpleVideoRecorder>*)createNewRecorder;
-(id)generateRecorderOutputPath:(unsigned long long)arg1 ;
-(PromiseEither<NSError *, NSArray<FBManagedFileURL *> *>*)finishRecording;
-(id)initWithTempDirectory:(id)arg1 metadata:(id)arg2 config:(SCD_Struct_FB638)arg3 ;
-(void)dealloc;
-(void)cleanup;
-(void)pauseRecording;
-(void)resumeRecording;
-(void)_handleSessionRuntimeError:(id)arg1 ;
@end

