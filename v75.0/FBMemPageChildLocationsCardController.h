/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMemPageCardController.h>
#import <Facebook/FBMemPageChildLocationsCardCellDelegate.h>
#import <Facebook/FBCardViewProvider.h>

@class FBMemPageChildLocationsCardCell, FBPageChildLocationsViewModel, NSString;

@interface FBMemPageChildLocationsCardController : FBMemPageCardController <FBMemPageChildLocationsCardCellDelegate, FBCardViewProvider> {

	FBMemPageChildLocationsCardCell* _cardCell;
	FBPageChildLocationsViewModel* _viewModel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView*<FBPageCardProtocol> cardView; 
-(void)configureWithPage:(id)arg1 ;
-(void)_showAllNearbyLocationsListForCurrentPage;
-(void)childLocationsCardCellDidTapOnMapView;
-(void)childLocationsCardCell:(id)arg1 didTapOnOpenPageWithFBID:(id)arg2 ;
-(void)childLocationsCardCellDidTapOnShowMoreLocations;
-(void)dealloc;
-(UIView*<FBPageCardProtocol>)cardView;
@end
