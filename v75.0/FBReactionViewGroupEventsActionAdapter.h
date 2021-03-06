/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBReactionBaseActionAdapter.h>

@class UIControl, FBReactionContext, FBUserSession;

@interface FBReactionViewGroupEventsActionAdapter : FBReactionBaseActionAdapter {

	UIControl* _actionView;
	FBReactionContext* _reactionContext;
	FBUserSession* _session;
	unsigned long long _renderIdiom;

}

@property (nonatomic,retain) FBUserSession * session;                     //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) unsigned long long renderIdiom;              //@synthesize renderIdiom=_renderIdiom - In the implementation block
+(double)threadsafeActionViewHeightForUnit:(id)arg1 action:(id)arg2 constrainedSize:(CGSize)arg3 ;
-(void)performActionWithExtras:(id)arg1 ;
-(id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 action:(id)arg4 ;
-(BOOL)performMagicTap;
-(void)setRenderIdiom:(unsigned long long)arg1 ;
-(unsigned long long)renderIdiom;
-(id)_localLoggingExtras;
-(void)actionViewTapped:(id)arg1 ;
-(void)openEventsURL;
-(id)actionView;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end

