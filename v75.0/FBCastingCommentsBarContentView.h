/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class FBUserSession, FBScenePath, NSString, FBProfilePictureWithBadgeView, FBRichTextView;

@interface FBCastingCommentsBarContentView : UIView {

	FBUserSession* _session;
	FBScenePath* _scenePath;
	NSString* _broadcasterID;
	unsigned long long _style;
	FBProfilePictureWithBadgeView* _actorView;
	FBRichTextView* _contentLabel;

}
-(id)initWithSession:(id)arg1 scenePath:(id)arg2 broadcasterID:(id)arg3 style:(unsigned long long)arg4 ;
-(void)displayEvent:(id)arg1 ;
-(void)layoutSubviews;
@end

