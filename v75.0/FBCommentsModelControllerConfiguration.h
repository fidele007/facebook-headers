/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBCommentsStreamFetchLimit;

@interface FBCommentsModelControllerConfiguration : FBValueObject <NSCopying> {

	BOOL _shouldFetchCommentInteractors;
	BOOL _shouldFetchFriendCommenters;
	BOOL _shouldFetchInterestingRepliers;
	BOOL _shouldPollForNewComments;
	BOOL _liveCommentsEnabled;
	BOOL _shouldUseDefaultActor;
	BOOL _feedbackIncludeReactionsOnCommentAuthor;
	BOOL _feedbackIncludeReactionsForComment;
	BOOL _fetchAvailableCommentOrderings;
	BOOL _fetchFriendResharers;
	BOOL _fetchResharePreviews;
	BOOL _dispatchOffMainQueue;
	NSString* _feedbackID;
	NSString* _feedbackDeduplicationID;
	NSString* _focusedCommentID;
	NSString* _viewerActsAsPageID;
	FBCommentsStreamFetchLimit* _fetchLimit;
	unsigned long long _commentOrdering;
	unsigned long long _accurateShareCountUnderEqualTo;

}

@property (nonatomic,copy,readonly) NSString * feedbackID;                                     //@synthesize feedbackID=_feedbackID - In the implementation block
@property (nonatomic,copy,readonly) NSString * feedbackDeduplicationID;                        //@synthesize feedbackDeduplicationID=_feedbackDeduplicationID - In the implementation block
@property (nonatomic,copy,readonly) NSString * focusedCommentID;                               //@synthesize focusedCommentID=_focusedCommentID - In the implementation block
@property (nonatomic,copy,readonly) NSString * viewerActsAsPageID;                             //@synthesize viewerActsAsPageID=_viewerActsAsPageID - In the implementation block
@property (nonatomic,copy,readonly) FBCommentsStreamFetchLimit * fetchLimit;                   //@synthesize fetchLimit=_fetchLimit - In the implementation block
@property (nonatomic,readonly) unsigned long long commentOrdering;                             //@synthesize commentOrdering=_commentOrdering - In the implementation block
@property (nonatomic,readonly) BOOL shouldFetchCommentInteractors;                             //@synthesize shouldFetchCommentInteractors=_shouldFetchCommentInteractors - In the implementation block
@property (nonatomic,readonly) BOOL shouldFetchFriendCommenters;                               //@synthesize shouldFetchFriendCommenters=_shouldFetchFriendCommenters - In the implementation block
@property (nonatomic,readonly) BOOL shouldFetchInterestingRepliers;                            //@synthesize shouldFetchInterestingRepliers=_shouldFetchInterestingRepliers - In the implementation block
@property (nonatomic,readonly) BOOL shouldPollForNewComments;                                  //@synthesize shouldPollForNewComments=_shouldPollForNewComments - In the implementation block
@property (nonatomic,readonly) BOOL liveCommentsEnabled;                                       //@synthesize liveCommentsEnabled=_liveCommentsEnabled - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseDefaultActor;                                     //@synthesize shouldUseDefaultActor=_shouldUseDefaultActor - In the implementation block
@property (nonatomic,readonly) BOOL feedbackIncludeReactionsOnCommentAuthor;                   //@synthesize feedbackIncludeReactionsOnCommentAuthor=_feedbackIncludeReactionsOnCommentAuthor - In the implementation block
@property (nonatomic,readonly) BOOL feedbackIncludeReactionsForComment;                        //@synthesize feedbackIncludeReactionsForComment=_feedbackIncludeReactionsForComment - In the implementation block
@property (nonatomic,readonly) BOOL fetchAvailableCommentOrderings;                            //@synthesize fetchAvailableCommentOrderings=_fetchAvailableCommentOrderings - In the implementation block
@property (nonatomic,readonly) BOOL fetchFriendResharers;                                      //@synthesize fetchFriendResharers=_fetchFriendResharers - In the implementation block
@property (nonatomic,readonly) BOOL fetchResharePreviews;                                      //@synthesize fetchResharePreviews=_fetchResharePreviews - In the implementation block
@property (nonatomic,readonly) BOOL dispatchOffMainQueue;                                      //@synthesize dispatchOffMainQueue=_dispatchOffMainQueue - In the implementation block
@property (nonatomic,readonly) unsigned long long accurateShareCountUnderEqualTo;              //@synthesize accurateShareCountUnderEqualTo=_accurateShareCountUnderEqualTo - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(unsigned long long)accurateShareCountUnderEqualTo;
-(NSString *)feedbackID;
-(NSString *)focusedCommentID;
-(id)initWithFeedbackID:(id)arg1 feedbackDeduplicationID:(id)arg2 focusedCommentID:(id)arg3 viewerActsAsPageID:(id)arg4 fetchLimit:(id)arg5 commentOrdering:(unsigned long long)arg6 shouldFetchCommentInteractors:(BOOL)arg7 shouldFetchFriendCommenters:(BOOL)arg8 shouldFetchInterestingRepliers:(BOOL)arg9 shouldPollForNewComments:(BOOL)arg10 liveCommentsEnabled:(BOOL)arg11 shouldUseDefaultActor:(BOOL)arg12 feedbackIncludeReactionsOnCommentAuthor:(BOOL)arg13 feedbackIncludeReactionsForComment:(BOOL)arg14 fetchAvailableCommentOrderings:(BOOL)arg15 fetchFriendResharers:(BOOL)arg16 fetchResharePreviews:(BOOL)arg17 dispatchOffMainQueue:(BOOL)arg18 accurateShareCountUnderEqualTo:(unsigned long long)arg19 ;
-(unsigned long long)commentOrdering;
-(BOOL)liveCommentsEnabled;
-(NSString *)feedbackDeduplicationID;
-(NSString *)viewerActsAsPageID;
-(BOOL)shouldFetchCommentInteractors;
-(BOOL)shouldFetchFriendCommenters;
-(BOOL)shouldFetchInterestingRepliers;
-(BOOL)shouldPollForNewComments;
-(BOOL)shouldUseDefaultActor;
-(BOOL)feedbackIncludeReactionsOnCommentAuthor;
-(BOOL)feedbackIncludeReactionsForComment;
-(BOOL)fetchAvailableCommentOrderings;
-(BOOL)fetchFriendResharers;
-(BOOL)fetchResharePreviews;
-(BOOL)dispatchOffMainQueue;
-(FBCommentsStreamFetchLimit *)fetchLimit;
@end

