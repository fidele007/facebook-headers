/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBNavigationCoordinator;
#import <Facebook/Facebook-Structs.h>
@class FBSearchResultsFiltersViewController, FBPopoverController;

@interface FBSearchResultsFiltersPresenter : NSObject {

	id<FBNavigationCoordinator> _navigationCoordinator;
	FBSearchResultsFiltersViewController* _filtersViewController;
	FBPopoverController* _filtersPopoverController;

}

@property (nonatomic,readonly) FBPopoverController * filtersPopoverController; 
-(void)dismissFiltersViewController;
-(id)initWithNavigationCoordinator:(id)arg1 ;
-(void)presentPopoverFiltersViewController:(id)arg1 inView:(id)arg2 atOrigin:(CGPoint)arg3 ;
-(void)presentFiltersViewController:(id)arg1 ;
-(FBPopoverController *)filtersPopoverController;
@end

