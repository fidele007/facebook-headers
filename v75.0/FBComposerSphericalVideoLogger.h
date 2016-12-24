/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, NSString, NSMutableDictionary;

@interface FBComposerSphericalVideoLogger : NSObject {

	FBUserSession* _session;
	NSString* _module;
	NSMutableDictionary* _assets;
	NSString* _currentAsset;
	double _currentPitch;
	double _currentYaw;
	NSString* _sourceType;
	NSString* _composerSessionID;

}

@property (nonatomic,copy,readonly) NSString * composerSessionID;              //@synthesize composerSessionID=_composerSessionID - In the implementation block
-(NSString *)composerSessionID;
-(void)_logEvent:(id)arg1 extra:(id)arg2 ;
-(void)deleteVideo:(id)arg1 ;
-(void)startEditing:(id)arg1 ;
-(void)confirmEditing;
-(void)dragVideoPreviewWithPitch:(double)arg1 yaw:(double)arg2 ;
-(void)confirmPost;
-(void)cancelPost;
-(void)setComposerSessionID:(id)arg1 sourceType:(id)arg2 ;
-(id)_addAttributeWithName:(id)arg1 value:(id)arg2 toExtraData:(id)arg3 ;
-(void)createThumbnail:(id)arg1 ;
-(void)_reset;
-(id)initWithSession:(id)arg1 ;
-(void)cancelEditing;
@end
