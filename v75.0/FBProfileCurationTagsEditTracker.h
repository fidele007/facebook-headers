/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, NSMutableSet;

@interface FBProfileCurationTagsEditTracker : NSObject {

	FBUserSession* _session;
	NSMutableSet* _addedTags;
	NSMutableSet* _removedTags;

}
-(BOOL)shouldSendMutationCall;
-(void)sendTagsEditMutationWithReferrerID:(id)arg1 referrerType:(id)arg2 successBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(void)sendTagsEditMutationWithAddedTagsIDs:(id)arg1 removedTagsIDs:(id)arg2 referrerID:(id)arg3 referrerType:(id)arg4 successBlock:(/*^block*/id)arg5 failureBlock:(/*^block*/id)arg6 ;
-(void)didSelectTagWithTagID:(id)arg1 ;
-(void)didUnselectTagWithTagID:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

