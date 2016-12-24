/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBFeedAwesomizerProfileListCarSortSheetViewControllerProtocol.h>

@protocol FBFeedAwesomizerProfileListCartSortSheetPadViewControllerDelegate;
@class CKComponentHostingView, NSString;

@interface FBFeedAwesomizerProfileListCardSortSheetPadViewController : UIViewController <FBFeedAwesomizerProfileListCarSortSheetViewControllerProtocol> {

	CKComponentHostingView* _sortSheetView;
	id<FBFeedAwesomizerProfileListCartSortSheetPadViewControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sortTapAction:(id)arg1 sortMode:(id)arg2 ;
-(void)filterTapAction:(id)arg1 filterMode:(id)arg2 ;
-(void)dismissSortSheet;
-(id)initWithModel:(id)arg1 componentProvider:(Class)arg2 delegate:(id)arg3 ;
-(void)loadView;
-(BOOL)accessibilityPerformEscape;
-(void)updateModel:(id)arg1 ;
@end

