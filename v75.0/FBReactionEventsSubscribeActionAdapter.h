/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBReactionBaseActionAdapter.h>

@class FBReactionHeaderInlineActionView, FBConsistentLookasideCacheObservationHandle, FBUserSession, FBMemPage, FBReactionContext;

@interface FBReactionEventsSubscribeActionAdapter : FBReactionBaseActionAdapter {

	FBReactionHeaderInlineActionView* _actionView;
	FBConsistentLookasideCacheObservationHandle* _clcHandle;
	FBUserSession* _session;
	FBMemPage* _page;
	FBReactionContext* _context;

}

@property (nonatomic,retain) FBUserSession * session;                  //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) FBMemPage * page;                         //@synthesize page=_page - In the implementation block
@property (nonatomic,retain) FBReactionContext * context;              //@synthesize context=_context - In the implementation block
-(void)performActionWithExtras:(id)arg1 ;
-(id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 action:(id)arg4 ;
-(BOOL)_isSubscribed;
-(BOOL)performMagicTap;
-(void)didUpdateConsistentFieldOnPage:(id)arg1 ;
-(void)_actionViewTapped:(id)arg1 ;
-(void)_updateButtonText;
-(void)_subscribeToPageEventsTapped;
-(FBReactionContext *)context;
-(void)setContext:(FBReactionContext *)arg1 ;
-(FBMemPage *)page;
-(void)setPage:(FBMemPage *)arg1 ;
-(id)actionView;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end
