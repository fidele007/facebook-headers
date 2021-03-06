/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBMenuContentViewDelegate.h>

@class FBPopoverMenu, FBMenuContentView, NSArray, NSString;

@interface FBMenuContentViewController : UIViewController <FBMenuContentViewDelegate> {

	FBPopoverMenu* _popoverMenu;
	FBMenuContentView* _contentView;
	NSArray* _menuItems;

}

@property (nonatomic,copy) NSArray * menuItems;                     //@synthesize menuItems=_menuItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)contentView:(id)arg1 tappedButton:(id)arg2 ;
-(id)initWithPopoverMenu:(id)arg1 ;
-(void)loadView;
-(CGSize)contentSizeForViewInPopover;
-(void)setMenuItems:(NSArray *)arg1 ;
-(NSArray *)menuItems;
@end

