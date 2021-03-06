/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCollectionViewUpdateIndexPathListener.h>
#import <Facebook/FBCollectionViewUpdateTrackingIndexPathProvider.h>
#import <Facebook/FBScrollPositionRestoringScrollViewListener.h>
#import <Facebook/FBScrollPositionRestoringScrollViewRestorationIndexPathProvider.h>

@protocol FBFeedViewScrollPositionRestorationDataSource;
@class NSIndexPath, NSString;

@interface FBFeedViewScrollPositionRestorationIndexPathProvider : NSObject <FBCollectionViewUpdateIndexPathListener, FBCollectionViewUpdateTrackingIndexPathProvider, FBScrollPositionRestoringScrollViewListener, FBScrollPositionRestoringScrollViewRestorationIndexPathProvider> {

	id<FBFeedViewScrollPositionRestorationDataSource> _feedDataSource;
	NSIndexPath* _cachedRestorationIndexPath;
	BOOL _restorationEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithFeedDataSource:(id)arg1 session:(id)arg2 ;
-(id)indexPathForScrollPositionRestorationInScrollView:(id)arg1 ;
-(void)scrollPositionRestorationEnabledDidChange:(BOOL)arg1 ;
-(void)feedViewDidStartScrolling;
-(void)feedViewDidScrollToTop;
-(id)initWithFeedDataSource:(id)arg1 session:(id)arg2 ;
-(BOOL)shouldUseCachedRestorationIndexPathForScrollView:(id)arg1 ;
-(void)collectionViewWillEndUpdates:(id)arg1 withIndexPath:(id)arg2 movingTo:(id)arg3 ;
-(id)indexPathToTrackAcrossUpdateForCollectionView:(id)arg1 ;
@end

