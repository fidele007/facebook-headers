/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class FBLocationAccessManager, UIImageView, UILabel, UIButton;

@interface FBLocalNewsLocationServiceUnavailableViewController : UIViewController {

	FBLocationAccessManager* _locationAccessManager;
	UIImageView* _LocationServiceImageView;
	UILabel* _enableLocationServiceLabel;
	UIButton* _enableLocationServiceButton;

}
-(void)_configureLocationServiceImageView;
-(void)_configureLocationServiceLabel;
-(void)_configureEnableLocationServiceButton;
-(void)_didTapEnableLocationServiceButton;
-(id)initWithLocationAccessManager:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
@end

