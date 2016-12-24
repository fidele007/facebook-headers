/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBReactionBaseActionAdapter.h>

@class FBReactionHeaderInlineActionView, FBUserSession;

@interface FBReactionAddPhotosAtPlaceActionAdapter : FBReactionBaseActionAdapter {

	FBReactionHeaderInlineActionView* _actionView;
	FBUserSession* _session;
	unsigned long long _renderIdiom;

}

@property (nonatomic,retain) FBUserSession * session;                     //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) unsigned long long renderIdiom;              //@synthesize renderIdiom=_renderIdiom - In the implementation block
-(void)performActionWithExtras:(id)arg1 ;
-(id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 action:(id)arg4 ;
-(BOOL)performMagicTap;
-(void)setRenderIdiom:(unsigned long long)arg1 ;
-(id)_commonLoggingExtras;
-(unsigned long long)renderIdiom;
-(void)_composeActionTapped;
-(void)_performAction;
-(id)actionView;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end
