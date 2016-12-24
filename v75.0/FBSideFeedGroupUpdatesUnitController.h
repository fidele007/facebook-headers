/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBSideFeedUnitController.h>
#import <Facebook/FBSideFeedUnitCollectionViewControllerDelegate.h>

@class NSMutableDictionary, NSString, FBSideFeedUnitCollectionViewController, NSArray;

@interface FBSideFeedGroupUpdatesUnitController : FBSideFeedUnitController <FBSideFeedUnitCollectionViewControllerDelegate> {

	NSMutableDictionary* _impressionHistory;
	NSMutableDictionary* _clickHistory;
	NSString* _presentingGroupID;
	FBSideFeedUnitCollectionViewController* _unitCollectionViewController;
	NSArray* _groupsWithUpdates;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)numberOfGroupsToFetch;
-(id)getUnitNameForAnalytics;
-(id)trackingStringForItemPosition:(unsigned long long)arg1 ;
-(id)graphQLIDForItemPosition:(unsigned long long)arg1 ;
-(BOOL)validateModel;
-(void)logAnalyticsEvent:(id)arg1 itemPosition:(unsigned long long)arg2 history:(id)arg3 ;
-(id)uniqueIDForItemAtIndex:(unsigned long long)arg1 ;
-(void)configureCell:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(void)didChangeHeightAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)didSelectCellWithIndex:(unsigned long long)arg1 ;
-(void)visibleRectDidChangeInContentView:(CGRect)arg1 ;
-(void)_resetLoggingHistory;
-(id)initWithSession:(id)arg1 presentingGroupID:(id)arg2 ;
-(void)_seeMoreButtonTapped:(id)arg1 ;
-(id)_groupAtIndex:(unsigned long long)arg1 ;
-(void)loadView;
-(unsigned long long)numberOfItems;
-(CGSize)sizeForItemAtIndex:(unsigned long long)arg1 ;
@end

