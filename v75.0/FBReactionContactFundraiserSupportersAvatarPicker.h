/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAvatarPickerController.h>
#import <Facebook/FBEmbeddedTab.h>

@protocol FBFundraiserAvatarPickerControllerDelegate;
@class UIScrollView, UIView;

@interface FBReactionContactFundraiserSupportersAvatarPicker : FBAvatarPickerController <FBEmbeddedTab> {

	id<FBFundraiserAvatarPickerControllerDelegate> _childTabDelegate;

}

@property (assign,nonatomic,__weak) id<FBFundraiserAvatarPickerControllerDelegate> childTabDelegate;              //@synthesize childTabDelegate=_childTabDelegate - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,retain) UIView * secondaryStickyHeaderView; 
-(void)refreshData;
-(void)didSelectAvatar:(id)arg1 atIndexPath:(id)arg2 ;
-(void)didUnselectAvatar:(id)arg1 atIndexPath:(id)arg2 ;
-(id<FBFundraiserAvatarPickerControllerDelegate>)childTabDelegate;
-(void)setChildTabDelegate:(id<FBFundraiserAvatarPickerControllerDelegate>)arg1 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(UIScrollView *)scrollView;
@end

