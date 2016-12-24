/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBProfileVideoUploadDelegate;
@class NSString, FBProfileVideoOptimisticVideoStorage, FBProfileVideoPublisher, FBUserSession;

@interface FBProfileVideoUploader : NSObject {

	NSString* _profileVideoMediaID;
	id<FBProfileVideoUploadDelegate> _delegate;
	FBProfileVideoOptimisticVideoStorage* _profileVideoStorage;
	FBProfileVideoPublisher* _publisher;
	FBUserSession* _session;
	NSString* _targetID;
	unsigned long long _profileVideoHostType;
	NSString* _composerSessionID;

}

@property (nonatomic,copy) NSString * profileVideoMediaID;                                            //@synthesize profileVideoMediaID=_profileVideoMediaID - In the implementation block
@property (assign,nonatomic,__weak) id<FBProfileVideoUploadDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBProfileVideoOptimisticVideoStorage * profileVideoStorage;              //@synthesize profileVideoStorage=_profileVideoStorage - In the implementation block
@property (nonatomic,retain) FBProfileVideoPublisher * publisher;                                     //@synthesize publisher=_publisher - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                                 //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSString * targetID;                                                       //@synthesize targetID=_targetID - In the implementation block
@property (assign,nonatomic) unsigned long long profileVideoHostType;                                 //@synthesize profileVideoHostType=_profileVideoHostType - In the implementation block
@property (nonatomic,copy) NSString * composerSessionID;                                              //@synthesize composerSessionID=_composerSessionID - In the implementation block
-(NSString *)composerSessionID;
-(void)setComposerSessionID:(NSString *)arg1 ;
-(id)initWithSession:(id)arg1 targetID:(id)arg2 profileVideoHostType:(unsigned long long)arg3 delegate:(id)arg4 ;
-(void)uploadProfileVideo:(id)arg1 profilePhotoMethod:(unsigned long long)arg2 profileVideoLogger:(id)arg3 profileMediaDeeplinkAttachment:(id)arg4 stickerFrameID:(id)arg5 expirationTime:(unsigned long long)arg6 ;
-(NSString *)profileVideoMediaID;
-(void)setProfileVideoHostType:(unsigned long long)arg1 ;
-(void)setupBackgroundingNotificationHandlers;
-(void)setProfileVideoMediaID:(NSString *)arg1 ;
-(void)_handleUploadError:(id)arg1 step:(id)arg2 profileVideoLogger:(id)arg3 ;
-(FBProfileVideoOptimisticVideoStorage *)profileVideoStorage;
-(unsigned long long)profileVideoHostType;
-(void)_persistProfileVideoIDforNotification;
-(void)_beginUploadProfileVideo:(id)arg1 profilePhotoPublishMethodType:(unsigned long long)arg2 profileVideoLogger:(id)arg3 profileMediaDeeplinkAttachment:(id)arg4 expirationTime:(unsigned long long)arg5 stickerFrameID:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)setProfileVideoStorage:(FBProfileVideoOptimisticVideoStorage *)arg1 ;
-(void)setDelegate:(id<FBProfileVideoUploadDelegate>)arg1 ;
-(void)dealloc;
-(id<FBProfileVideoUploadDelegate>)delegate;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)setTargetID:(NSString *)arg1 ;
-(NSString *)targetID;
-(void)setPublisher:(FBProfileVideoPublisher *)arg1 ;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
-(FBProfileVideoPublisher *)publisher;
@end

