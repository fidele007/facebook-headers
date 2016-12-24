/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/CKComponentProvider.h>

@class CKComponentHostingView, FBUserSession, FBMemComment, NSString;

@interface FBCommentComposerReplyBannerView : UIView <CKComponentProvider> {

	CKComponentHostingView* _hostingView;
	CKTypedComponentAction<> _tapBannerAction;
	CKTypedComponentAction<> _tapDismissBannerAction;
	FBUserSession* _session;
	FBMemComment* _comment;

}

@property (nonatomic,retain) FBMemComment * comment;                //@synthesize comment=_comment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(id)initWithComment:(id)arg1 session:(id)arg2 tapBannerAction:(CKTypedComponentAction<>)arg3 tapDismissBannerAction:(CKTypedComponentAction<>)arg4 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(FBMemComment *)comment;
-(void)setComment:(FBMemComment *)arg1 ;
@end

