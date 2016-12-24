/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBMPFilter.h>
#import <Facebook/FBMPPermissiveOutput.h>
#import <Facebook/FBMPGraphMoveTrackingFilter.h>
#import <Facebook/FBMPFilterToVideoEditsFilterConfig.h>

@protocol OS_dispatch_queue, FBMPConsumerPort;
@class FBVideoProcessorFilterConfig, FBMPBaseConsumerPort, FBMPBaseProducerPort, NSObject, FBVideoProcessor, NSString;

@interface FBMPVideoProcessorFilter : NSObject <FBMPFilter, FBMPPermissiveOutput, FBMPGraphMoveTrackingFilter, FBMPFilterToVideoEditsFilterConfig> {

	FBVideoProcessorFilterConfig* _config;
	unsigned long long _filterIndex;
	FBMPBaseConsumerPort* _videoDataPort;
	FBMPBaseProducerPort* _producerPort;
	mutex _mutex;
	NSObject*<OS_dispatch_queue> _processorQueue;
	FBVideoProcessor* _processor;
	/*^block*/id _consumerCallback;
	id<FBMPConsumerPort> _filterCommandConsumerPort;

}

@property (nonatomic,readonly) id<FBMPConsumerPort> filterCommandConsumerPort;              //@synthesize filterCommandConsumerPort=_filterCommandConsumerPort - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)consumerPorts;
-(id)videoEditsFilterConfig;
-(void)sessionWillStart:(id)arg1 ;
-(void)sessionWillStop:(id)arg1 ;
-(void)sessionConnectedPort:(id)arg1 context:(id)arg2 ;
-(void)sessionDisconnectedPort:(id)arg1 context:(id)arg2 ;
-(id)producerPorts;
-(id)initWithFilterConfig:(id)arg1 consumeCallback:(/*^block*/id)arg2 ;
-(void)sendFilterCommands:(id)arg1 ;
-(id)initWithFilterConfig:(id)arg1 ;
-(BOOL)allowsConnectionsWithConsumerPortMapping:(id)arg1 ;
-(void)processVideoData:(id)arg1 metadata:(FBMPDataMetadata)arg2 ;
-(void)processFilterCommandData:(id)arg1 ;
-(void)processFilterData:(id)arg1 metadata:(FBMPDataMetadata)arg2 ;
-(void)_performOnProcessorQueue:(/*^block*/id)arg1 ;
-(void)willDisconnectToMove;
-(void)didReconnectToMove;
-(id<FBMPConsumerPort>)filterCommandConsumerPort;
@end

