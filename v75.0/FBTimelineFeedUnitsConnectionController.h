/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBGQLConnectionFlatteningAdapter, FBGraphQLConnectionController, FBProfileSectionIndexAdapter, FBUserSession, NSString;

@interface FBTimelineFeedUnitsConnectionController : NSObject {

	FBGQLConnectionFlatteningAdapter* _adapter;
	FBGraphQLConnectionController* _connectionController;
	FBProfileSectionIndexAdapter* _indexAdapter;
	FBUserSession* _session;
	BOOL _shouldOmitUnseenStories;
	NSString* _targetPersonID;

}
-(void)loadTimelineFeedUnits:(BOOL)arg1 ;
-(void)clearOnPTR;
-(id)initWithTargetPersonID:(id)arg1 sectionStartIndex:(unsigned long long)arg2 shouldOmitUnseenStories:(BOOL)arg3 session:(id)arg4 writeInterface:(id)arg5 delegate:(id)arg6 ;
-(id)connection;
@end

