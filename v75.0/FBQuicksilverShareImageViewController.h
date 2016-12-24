/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBModalContentViewController.h>
#import <Facebook/FBPopoverControllerDelegate.h>
#import <Facebook/FBQuicksilverScoreShareDataProvider.h>

@protocol FBQuicksilverShareOptionsConfiguration;
@class NSString, UIImage, NSNumber, FBQuicksilverGameInfo, UIImageView, FBPopoverActionSheet;

@interface FBQuicksilverShareImageViewController : UIViewController <FBModalContentViewController, FBPopoverControllerDelegate, FBQuicksilverScoreShareDataProvider> {

	FBQuicksilverGameInfo* _gameInfo;
	NSNumber* _score;
	UIImage* _image;
	UIImageView* _imageView;
	FBPopoverActionSheet* _sharePopoverActionSheet;
	id<FBQuicksilverShareOptionsConfiguration> _configuration;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * gameName; 
@property (nonatomic,copy,readonly) UIImage * image; 
@property (nonatomic,readonly) NSNumber * score; 
-(void)fb_popoverControllerDidDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(id)headerViewForModalContainerViewController:(id)arg1 ;
-(id)initWithGameInfo:(id)arg1 score:(id)arg2 image:(id)arg3 configuration:(id)arg4 ;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(UIImage *)image;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSNumber *)score;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)gameName;
@end
