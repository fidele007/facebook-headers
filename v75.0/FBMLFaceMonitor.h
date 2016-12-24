/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/SRAssetsIndexerListener.h>

@class SRAssetsIndexer, FBMLFaceBoxStore, FBMLFaceRecognizer, FBMLFaceMonitorConfig, SRQueueDispatcher, SRAssetsIndexerSubscription, NSMutableSet, NSString;

@interface FBMLFaceMonitor : NSObject <SRAssetsIndexerListener> {

	SRAssetsIndexer* _assetsIndexer;
	FBMLFaceBoxStore* _faceBoxStore;
	FBMLFaceRecognizer* _faceRecognizer;
	FBMLFaceMonitorConfig* _config;
	SRQueueDispatcher* _serialQueue;
	SRAssetsIndexerSubscription* _assetsIndexerSubscription;
	BOOL _started;
	NSMutableSet* _processedAssetIdentifiers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAssetsIndexer:(id)arg1 faceBoxStore:(id)arg2 faceRecognizer:(id)arg3 config:(id)arg4 ;
-(void)_processAssetIdentifiers:(id)arg1 ;
-(unsigned long long)isAssetProcessable:(id)arg1 ;
-(void)assetsIndexer:(id)arg1 didUpdateAssetIdentifiers:(id)arg2 ;
-(void)start;
@end

