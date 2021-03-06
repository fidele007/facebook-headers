/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBObjectVisibilityTrackerDelegate.h>

@protocol FBReactionVisibilityTrackerAdapterIndexer;
@class UIScrollView, FBReactionSessionInfo, NSString;

@interface FBReactionVisibilityTrackerDelegate : NSObject <FBObjectVisibilityTrackerDelegate> {

	UIScrollView* _containerView;
	FBReactionSessionInfo* _reactionSessionInfo;
	id<FBReactionVisibilityTrackerAdapterIndexer> _indexer;

}

@property (assign,nonatomic,__weak) id<FBReactionVisibilityTrackerAdapterIndexer> indexer;              //@synthesize indexer=_indexer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithContainerView:(id)arg1 reactionSessionInfo:(id)arg2 ;
-(id)objectVisibilityTracker:(id)arg1 visibilityKeysForObject:(id)arg2 ;
-(id)objectVisibilityTracker:(id)arg1 visibilityStateForObject:(id)arg2 withPreviousVisibilityState:(id)arg3 forVisibilityKey:(id)arg4 ;
-(BOOL)objectVisibilityTracker:(id)arg1 isObjectVisible:(id)arg2 withVisibilityState:(id)arg3 forVisibilityKey:(id)arg4 ;
-(BOOL)objectVisibilityTracker:(id)arg1 shouldTrackObjectAgainAfterPreviouslyMeetingVisibilityThreshold:(id)arg2 forVisibilityKey:(id)arg3 ;
-(void)objectVisibilityTracker:(id)arg1 stoppedTrackingObjectWithoutMeetingVisibilityThreshold:(id)arg2 withLastVisibilityState:(id)arg3 forVisibilityKey:(id)arg4 ;
-(void)objectVisibilityTracker:(id)arg1 stoppedTrackingObjectAfterMeetingVisibilityThreshold:(id)arg2 withLastVisibilityState:(id)arg3 forVisibilityKey:(id)arg4 ;
-(void)setIndexer:(id<FBReactionVisibilityTrackerAdapterIndexer>)arg1 ;
-(id<FBReactionVisibilityTrackerAdapterIndexer>)indexer;
@end

