/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPhotoCustomOverlayButtonProvider.h>

@protocol FBIntentHandler;
@class NSString, FBUserSession, NSDate, UIButton;

@interface FBStickerOverlayCallToActionButtonProvider : NSObject <FBPhotoCustomOverlayButtonProvider> {

	NSString* _stickerId;
	FBUserSession* _session;
	id<FBIntentHandler> _intentHandler;
	NSDate* _defaultExpirationTime;
	NSString* _categoryId;
	unsigned long long _ctaType;
	NSString* _title;
	NSString* _frameUri;
	NSString* _analyticsModule;
	NSString* _sourceMediaID;
	UIButton* _customOverlayButton;

}

@property (nonatomic,retain) UIButton * customOverlayButton;              //@synthesize customOverlayButton=_customOverlayButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStickerId:(id)arg1 frameUri:(id)arg2 intentHandler:(id)arg3 session:(id)arg4 defaultExpirationTime:(id)arg5 ctaType:(unsigned long long)arg6 sourceMediaID:(id)arg7 categoryId:(id)arg8 title:(id)arg9 analyticsModule:(id)arg10 ;
-(UIButton *)customOverlayButton;
-(void)_startProfilePictureUpdateFlow;
-(void)setCustomOverlayButton:(UIButton *)arg1 ;
@end

