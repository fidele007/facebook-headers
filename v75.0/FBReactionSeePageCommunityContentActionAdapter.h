/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBReactionBaseActionAdapter.h>

@protocol FBQueriedReactionStoryActionFieldsProtocol;
@class FBMemModelObject, FBUserSession, FBReactionSessionInfo;

@interface FBReactionSeePageCommunityContentActionAdapter : FBReactionBaseActionAdapter {

	FBMemModelObject*<FBQueriedReactionStoryActionFieldsProtocol> _action;
	FBUserSession* _session;
	FBReactionSessionInfo* _reactionSessionInfo;

}

@property (nonatomic,retain) FBUserSession * session;                                    //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) FBReactionSessionInfo * reactionSessionInfo;              //@synthesize reactionSessionInfo=_reactionSessionInfo - In the implementation block
-(void)performActionWithExtras:(id)arg1 ;
-(id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 action:(id)arg4 ;
-(FBReactionSessionInfo *)reactionSessionInfo;
-(BOOL)performMagicTap;
-(void)actionViewTapped;
-(void)_openCommunityTab;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end

