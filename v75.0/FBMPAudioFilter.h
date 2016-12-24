/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBMPFilter.h>
#import <Facebook/FBMPPermissiveOutput.h>

@protocol FBAudioProcessor;
@class FBMPBaseConsumerPort, FBMPBaseProducerPort, NSNumber, NSString;

@interface FBMPAudioFilter : NSObject <FBMPFilter, FBMPPermissiveOutput> {

	FBMPBaseConsumerPort* _audioDataPort;
	FBMPBaseProducerPort* _producerPort;
	BOOL _filterInitialized;
	BOOL _isMonoCanonical;
	NSNumber* _lastSampleRate;
	opaqueCMFormatDescriptionRef _audioDescriptionRef;
	int _channelCount;
	int _sampleRate;
	unsigned long long _audioDataCounter;
	double _currentTimestamp;
	id<FBAudioProcessor> _audioProcessor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)consumerPorts;
-(void)sessionWillStart:(id)arg1 ;
-(void)sessionWillStop:(id)arg1 ;
-(void)sessionConnectedPort:(id)arg1 context:(id)arg2 ;
-(void)sessionDisconnectedPort:(id)arg1 context:(id)arg2 ;
-(id)producerPorts;
-(void)_processAudioData:(id)arg1 metadata:(FBMPDataMetadata)arg2 ;
-(void)_produceAudioSamples:(const short*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)_canProcessAudioBuffer;
-(void)_processAudioSample:(opaqueCMSampleBufferRef)arg1 ;
-(void)_processAudioSamples:(short*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)allowsConnectionsWithConsumerPortMapping:(id)arg1 ;
-(id)initWithAudioProcessor:(id)arg1 ;
-(void)dealloc;
-(void)_reset;
@end
