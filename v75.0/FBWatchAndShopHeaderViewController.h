/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBWatchAndMoreHeaderControlling.h>
#import <Facebook/FBWatchAndMoreViewControllerDelegate.h>

@protocol FBWatchAndMoreHeaderViewControllerDelegate;
@class NSString, FBUserSession;

@interface FBWatchAndShopHeaderViewController : UIViewController <FBWatchAndMoreHeaderControlling, FBWatchAndMoreViewControllerDelegate> {

	NSString* _color;
	NSString* _logoUrl;
	FBUserSession* _session;
	unsigned long long _headerState;
	id<FBWatchAndMoreHeaderViewControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long headerState;                                              //@synthesize headerState=_headerState - In the implementation block
@property (assign,nonatomic,__weak) id<FBWatchAndMoreHeaderViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithColor:(id)arg1 withLogoUrl:(id)arg2 withSession:(id)arg3 ;
-(void)_didTapXoutButton:(id)arg1 ;
-(unsigned long long)headerState;
-(void)setHeaderState:(unsigned long long)arg1 ;
-(void)setDelegate:(id<FBWatchAndMoreHeaderViewControllerDelegate>)arg1 ;
-(id<FBWatchAndMoreHeaderViewControllerDelegate>)delegate;
-(void)loadView;
-(CGSize)preferredContentSize;
@end
