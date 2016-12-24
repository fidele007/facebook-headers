/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBNearbyPlacesAdvancedFiltersViewControllerDelegate.h>
#import <Facebook/FBNearbyPlacesStaticFilterBarDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol FBNearbyPlacesFilterBarControllerDelegate;
@class FBUserSession, FBNearbyPlacesAdvancedFiltersModelController, FBNearbyPlacesLoggerHelper, FBNearbyPlacesHScrollFilterBarDataSource, FBNearbyPlacesStaticFilterBar, FBNearbyPlacesHScrollFilterBar, NSString;

@interface FBNearbyPlacesFilterBarController : NSObject <FBNearbyPlacesAdvancedFiltersViewControllerDelegate, FBNearbyPlacesStaticFilterBarDelegate, UICollectionViewDelegate> {

	FBUserSession* _session;
	FBNearbyPlacesAdvancedFiltersModelController* _filtersModelController;
	FBNearbyPlacesLoggerHelper* _nearbyPlacesLoggerHelper;
	FBNearbyPlacesHScrollFilterBarDataSource* _hScrollDataSource;
	unsigned long long _resultListDisplayMode;
	FBNearbyPlacesStaticFilterBar* _staticFilterBar;
	FBNearbyPlacesHScrollFilterBar* _hScrollFilterBar;
	id<FBNearbyPlacesFilterBarControllerDelegate> _delegate;
	unsigned long long _mode;

}

@property (assign,nonatomic,__weak) id<FBNearbyPlacesFilterBarControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                                    //@synthesize mode=_mode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 loggerHelper:(id)arg2 resultListDisplayMode:(unsigned long long)arg3 ;
-(id)buildFilterBarIfAppropriate;
-(void)updateForResultListData:(id)arg1 ;
-(unsigned long long)_filtersBarStyle;
-(id)_buildStaticFilterBar;
-(id)_buildHScrollFilterBar;
-(void)_showFiltersViewController:(id)arg1 ;
-(void)_showFullFiltersMenu;
-(void)_applyFiltersWithFilterState:(id)arg1 ;
-(void)_showFiltersMenuForFilterSection:(id)arg1 ;
-(void)_showExtrasFiltersMenu;
-(void)filtersViewController:(id)arg1 didApplyFiltersModelFromController:(id)arg2 ;
-(void)didTapFilterBar:(id)arg1 ;
-(void)setDelegate:(id<FBNearbyPlacesFilterBarControllerDelegate>)arg1 ;
-(id<FBNearbyPlacesFilterBarControllerDelegate>)delegate;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
@end

