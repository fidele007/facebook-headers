/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBQueriedFeedUnitFieldsProtocol;
@class FBMemModelObject, NSString, FBUserSession;

@interface FBPermalinkBugReporter : NSObject {

	FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol> _story;
	NSString* _storyGraphQLID;
	NSString* _storyLegacyAPIPostID;
	FBUserSession* _session;
	BOOL _permalinkVisible;
	FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol> _downloadedStory;

}

@property (nonatomic,retain) FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol> downloadedStory;              //@synthesize downloadedStory=_downloadedStory - In the implementation block
@property (assign,nonatomic) BOOL permalinkVisible;                                                           //@synthesize permalinkVisible=_permalinkVisible - In the implementation block
-(id)initWithStory:(id)arg1 storyGraphQLID:(id)arg2 storyLegacyAPIPostID:(id)arg3 session:(id)arg4 ;
-(void)setPermalinkVisible:(BOOL)arg1 ;
-(void)setDownloadedStory:(FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol>)arg1 ;
-(void)_includePermalinkDebugInfo:(id)arg1 ;
-(void)_appendInfoForStory:(id)arg1 toString:(id)arg2 debugIdentifier:(id)arg3 ;
-(FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol>)downloadedStory;
-(BOOL)permalinkVisible;
-(void)dealloc;
@end

