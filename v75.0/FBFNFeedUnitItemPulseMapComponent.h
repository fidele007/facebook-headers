/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FIGCardContentHScrollChildCompliant.h>

@class FBMemFriendLocationFeedUnitItem, FBFeedToolbox, FBAnalyticsInfo, NSString;

@interface FBFNFeedUnitItemPulseMapComponent : CKCompositeComponent <FIGCardContentHScrollChildCompliant> {

	FBMemFriendLocationFeedUnitItem* _item;
	FBFeedToolbox* _toolbox;
	FBAnalyticsInfo* _analyticsInfo;
	BOOL _isFirstItem;
	BOOL _isLastItem;
	NSString* _feedUnitCacheId;
	NSString* _indexString;
	NSString* _storyId;
	NSString* _feedType;
	long long _locationCategory;
	NSString* _locationCategoryString;

}
+(id)newWithItem:(id)arg1 feedUnitCacheId:(id)arg2 isFirstItem:(BOOL)arg3 isLastItem:(BOOL)arg4 indexString:(id)arg5 toolbox:(id)arg6 feedType:(id)arg7 ;
-(void)becameFullyVisible;
-(void)didTapMap:(id)arg1 ;
-(void)didTapProfilePictureInMap:(id)arg1 ;
-(void)didTapOpenPage:(id)arg1 ;
-(void)didTapFriendCard:(id)arg1 ;
-(id)impressionUniqueIdentifier;
-(void)openNearbyFriends:(id)arg1 ;
@end

