/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/SRAssetsIndexerListener.h>
#import <Facebook/FBMLFaceBoxStoreListener.h>
#import <Facebook/FBMLFaceRecognizerListener.h>

@class SRAssetsIndexer, FBMLFaceBoxStore, FBMLFaceRecognizer, FBMLFaceMonitor, FBMLNativeBridge, SRQueueDispatcher, SRAssetsIndexerSubscription, FBMLFaceBoxStoreSubscription, FBMLFaceRecognizerSubscription, NSMutableSet, NSDate, NSString;

@interface FBMLLocalAssetPusher : NSObject <SRAssetsIndexerListener, FBMLFaceBoxStoreListener, FBMLFaceRecognizerListener> {

	SRAssetsIndexer* _indexer;
	FBMLFaceBoxStore* _faceBoxStore;
	FBMLFaceRecognizer* _faceRecognizer;
	FBMLFaceMonitor* _faceMonitor;
	FBMLNativeBridge* _nativeBridge;
	SRQueueDispatcher* _workQueue;
	SRAssetsIndexerSubscription* _indexerSubscription;
	FBMLFaceBoxStoreSubscription* _faceBoxSubscription;
	FBMLFaceRecognizerSubscription* _faceRecognizerSubscription;
	NSMutableSet* _dirtyAssetIdentifiers;
	NSDate* _lastAssetFlushDate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAssetsIndexer:(id)arg1 faceBoxStore:(id)arg2 faceRecognizer:(id)arg3 faceMonitor:(id)arg4 nativeBridge:(id)arg5 ;
-(void)faceBoxStoreSubscription:(id)arg1 didDetectFaceInAssetIdentifiers:(id)arg2 ;
-(void)assetsIndexer:(id)arg1 didUpdateAssetIdentifiers:(id)arg2 ;
-(void)_pushAllAssets;
-(void)_pushAssetsWithIdentifiers:(id)arg1 ;
-(void)_markAssetIdentifiersDirty:(id)arg1 ;
-(void)_flushAssetsIfNecessary;
-(void)faceRecognizerSubscription:(id)arg1 didProcessAssetIdentifiers:(id)arg2 ;
@end

