/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBWebAppActionViewDelegate.h>
#import <Facebook/FBWebAppActionViewSimpleDelegate.h>

@protocol FBWebAppLinkBannerViewControllerDelegate;
@class NSString;

@interface FBWebAppLinkBannerViewController : UIViewController <FBWebAppActionViewDelegate, FBWebAppActionViewSimpleDelegate> {

	unsigned long long _displayState;
	id<FBWebAppLinkBannerViewControllerDelegate> _delegate;
	NSString* _appName;
	NSString* _displayStyle;

}

@property (nonatomic,copy) NSString * appName;                                                          //@synthesize appName=_appName - In the implementation block
@property (nonatomic,copy) NSString * displayStyle;                                                     //@synthesize displayStyle=_displayStyle - In the implementation block
@property (nonatomic,readonly) unsigned long long displayState;                                         //@synthesize displayState=_displayState - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebAppLinkBannerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)displayState;
-(void)webAppActionView:(id)arg1 didTapDismissButton:(id)arg2 ;
-(void)webAppActionView:(id)arg1 didTapActionButton:(id)arg2 ;
-(void)webAppActionViewSimpleDidTapAction:(id)arg1 ;
-(id)initWithDisplayState:(unsigned long long)arg1 appName:(id)arg2 displayStyle:(id)arg3 ;
-(void)setDelegate:(id<FBWebAppLinkBannerViewControllerDelegate>)arg1 ;
-(id<FBWebAppLinkBannerViewControllerDelegate>)delegate;
-(void)loadView;
-(void)setDisplayStyle:(NSString *)arg1 ;
-(NSString *)displayStyle;
-(void)setAppName:(NSString *)arg1 ;
-(NSString *)appName;
@end

