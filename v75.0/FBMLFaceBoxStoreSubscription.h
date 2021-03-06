/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMLFaceBoxStoreListener;
@class FBMLFaceBoxStore, SRQueueDispatcher;

@interface FBMLFaceBoxStoreSubscription : NSObject {

	FBMLFaceBoxStore* _faceboxStore;
	id<FBMLFaceBoxStoreListener> _listener;
	SRQueueDispatcher* _performer;

}

@property (assign,nonatomic,__weak) id<FBMLFaceBoxStoreListener> listener;              //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) SRQueueDispatcher * performer;                             //@synthesize performer=_performer - In the implementation block
@property (nonatomic,__weak,readonly) FBMLFaceBoxStore * faceboxStore;                  //@synthesize faceboxStore=_faceboxStore - In the implementation block
-(void)setPerformer:(SRQueueDispatcher *)arg1 ;
-(SRQueueDispatcher *)performer;
-(FBMLFaceBoxStore *)faceboxStore;
-(id<FBMLFaceBoxStoreListener>)listener;
-(void)setListener:(id<FBMLFaceBoxStoreListener>)arg1 ;
@end

