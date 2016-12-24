/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCollectionViewUpdateListener.h>

@protocol FBFeedViewStateLoggerDataSourceInfoProviding;
@class FBFeedViewStateInfo, NSMutableArray, NSString;

@interface FBFeedViewStateLogger : NSObject <FBCollectionViewUpdateListener> {

	id<FBFeedViewStateLoggerDataSourceInfoProviding> _feedDataSource;
	/*^block*/id _shimmeringStoriesActiveFetcher;
	FBFeedViewStateInfo* _beforeUpdateInfo;
	NSMutableArray* _deletes;
	NSMutableArray* _inserts;
	NSMutableArray* _reloads;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionViewWillBeginSingleUpdate:(id)arg1 ;
-(void)collectionViewDidEndSingleUpdate:(id)arg1 ;
-(void)collectionView:(id)arg1 willInsertItemsAtIndexPaths:(id)arg2 ;
-(void)collectionView:(id)arg1 willDeleteItemsAtIndexPaths:(id)arg2 ;
-(void)collectionView:(id)arg1 willReloadItemsAtIndexPaths:(id)arg2 ;
-(void)collectionViewWillBeginUpdates:(id)arg1 ;
-(void)collectionViewDidEndUpdates:(id)arg1 ;
-(id)initWithFeedDataSource:(id)arg1 shimmeringStoriesActiveFetcher:(/*^block*/id)arg2 ;
-(void)saveStateBeforeUpdateForCollectionView:(id)arg1 ;
-(void)logStateAfterUpdateForCollectionView:(id)arg1 ;
@end
