/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/MNAudioRecording.h>

@protocol MNAudioRecordingDelegate;
@class NSURL, NSString, AVAudioRecorder;

@interface MNAVAudioRecorder : NSObject <MNAudioRecording> {

	AVAudioRecorder* _recorder;
	BOOL _usingAacExtension;
	BOOL _meteringEnabled;
	BOOL _recording;
	double _currentTime;
	NSURL* _url;
	id<MNAudioRecordingDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isMeteringEnabled,nonatomic) BOOL meteringEnabled;              //@synthesize meteringEnabled=_meteringEnabled - In the implementation block
@property (getter=isRecording,nonatomic,readonly) BOOL recording;                        //@synthesize recording=_recording - In the implementation block
@property (nonatomic,readonly) double currentTime;                                       //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                              //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) id<MNAudioRecordingDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * fileExtension; 
@property (nonatomic,copy,readonly) NSString * fileMimeType; 
-(BOOL)meteringEnabled;
-(id)initWithURL:(id)arg1 error:(id*)arg2 usingAacExtension:(BOOL)arg3 ;
-(NSString *)fileMimeType;
-(void)setDelegate:(id<MNAudioRecordingDelegate>)arg1 ;
-(void)dealloc;
-(id<MNAudioRecordingDelegate>)delegate;
-(NSURL *)url;
-(void)stop;
-(BOOL)isMeteringEnabled;
-(BOOL)prepareToRecord;
-(NSString *)fileExtension;
-(double)currentTime;
-(BOOL)record;
-(BOOL)isRecording;
-(void)setMeteringEnabled:(BOOL)arg1 ;
-(void)updateMeters;
-(float)averagePowerForChannel:(unsigned long long)arg1 ;
@end
