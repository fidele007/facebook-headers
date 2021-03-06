/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Facebook/FBPlatformDebugOpenURLViewControllerDelegate.h>

@protocol FBPlatformDebugActionHandling;
@class NSArray, NSString;

@interface FBPlatformDebugViewController : UITableViewController <FBPlatformDebugOpenURLViewControllerDelegate> {

	NSArray* _configuration;
	NSString* _appBridgeURLScheme;
	id<FBPlatformDebugActionHandling> _debugActionHandler;
	NSString* _version;

}

@property (nonatomic,copy,readonly) NSString * appBridgeURLScheme;                              //@synthesize appBridgeURLScheme=_appBridgeURLScheme - In the implementation block
@property (nonatomic,retain) id<FBPlatformDebugActionHandling> debugActionHandler;              //@synthesize debugActionHandler=_debugActionHandler - In the implementation block
@property (nonatomic,copy,readonly) NSString * version;                                         //@synthesize version=_version - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(BOOL)fb_showNavBarSearchField;
-(BOOL)fb_showAuxiliaryViewController;
-(id)initWithAppBridgeURLScheme:(id)arg1 version:(id)arg2 ;
-(void)setDebugActionHandler:(id<FBPlatformDebugActionHandling>)arg1 ;
-(void)platformDebugOpenURLViewControllerDidFinish:(id)arg1 ;
-(void)_debugSharingLink;
-(void)_debugSharingPhotos;
-(void)_debugSharingVideo;
-(void)_debugSharingOpenGraph;
-(void)_debugAppRequests;
-(void)_debugAppInvites;
-(void)_debugOGLike;
-(void)_debugPageLike;
-(void)_debugWebViewInstallFbrpcAL;
-(void)_debugWebViewOpenFbrpcAL;
-(void)_debugWebViewInstallFbrpcDL;
-(void)_debugWebViewOpenFbrpcDL;
-(id)_itemForIndexPath:(id)arg1 ;
-(id)_groupForSection:(long long)arg1 ;
-(id<FBPlatformDebugActionHandling>)debugActionHandler;
-(NSString *)appBridgeURLScheme;
-(id)_squareTestImage:(int)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(NSString *)version;
@end

