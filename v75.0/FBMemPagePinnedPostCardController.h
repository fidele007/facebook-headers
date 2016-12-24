/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMemPageCardController.h>
#import <Facebook/FBCardViewProvider.h>

@protocol FBPageCardProtocol;
@class FBMemPagePinnedPostCardCell, NSString, FBConsistentLookasideCacheObservationHandle, FBFeedToolbox, UITableViewCell;

@interface FBMemPagePinnedPostCardController : FBMemPageCardController <FBCardViewProvider> {

	FBMemPagePinnedPostCardCell* _cardCell;
	NSString* _pinnedUnitCacheID;
	FBConsistentLookasideCacheObservationHandle* _fieldsObservationHandle;
	FBFeedToolbox* _pinnedPostToolbox;
	UITableViewCell*<FBPageCardProtocol> _pinnedPostPlaceHolderCell;

}

@property (nonatomic,retain) FBFeedToolbox * pinnedPostToolbox;                                           //@synthesize pinnedPostToolbox=_pinnedPostToolbox - In the implementation block
@property (nonatomic,retain) UITableViewCell*<FBPageCardProtocol> pinnedPostPlaceHolderCell;              //@synthesize pinnedPostPlaceHolderCell=_pinnedPostPlaceHolderCell - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView*<FBPageCardProtocol> cardView; 
-(void)configureWithPage:(id)arg1 ;
-(UITableViewCell*<FBPageCardProtocol>)pinnedPostPlaceHolderCell;
-(FBFeedToolbox *)pinnedPostToolbox;
-(void)_configureCardCellWithViewModel:(id)arg1 ;
-(void)_handleDidDeletePinPostNotification;
-(void)setPinnedPostToolbox:(FBFeedToolbox *)arg1 ;
-(void)setPinnedPostPlaceHolderCell:(UITableViewCell*<FBPageCardProtocol>)arg1 ;
-(void)dealloc;
-(UIView*<FBPageCardProtocol>)cardView;
@end
