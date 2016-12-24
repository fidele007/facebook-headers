/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/CKComponentHostingViewDelegate.h>

@class FBUserSession, CKComponentHostingView, NSString;

@interface FBComponentViewController : UIViewController <CKComponentHostingViewDelegate> {

	FBUserSession* _session;
	FBComponentViewControllerConfiguration _configuration;
	/*function pointer*/void* _componentContextFunction;
	/*function pointer*/void* _componentProviderFunction;
	CKComponentHostingView* _hostingView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
+(id)newWithSession:(id)arg1 configuration:(FBComponentViewControllerConfiguration)arg2 componentContextFunction:(/*function pointer*/void*)arg3 componentProviderFunction:(/*function pointer*/void*)arg4 ;
-(void)componentHostingViewDidInvalidateSize:(id)arg1 ;
-(id)initWithSession:(id)arg1 configuration:(FBComponentViewControllerConfiguration)arg2 componentContextFunction:(/*function pointer*/void*)arg3 componentProviderFunction:(/*function pointer*/void*)arg4 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end
