/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Facebook/FBPaymentsPurchaseInfoViewControlling.h>

@class FBPaymentsPurchaseInfoExtensionController, FBUserSession, NSArray, NSString;

@interface FBPaymentsPurchaseInfoTableViewController : UITableViewController <FBPaymentsPurchaseInfoViewControlling> {

	FBPaymentsPurchaseInfoExtensionController* _purchaseInfoExtnesionController;
	FBUserSession* _session;
	NSArray* _displayedExtensions;
	BOOL _hasExtensionsFinishedInitialLoading;
	NSArray* _activatedPurchaseInfoExtensions;

}

@property (nonatomic,copy) NSArray * activatedPurchaseInfoExtensions;              //@synthesize activatedPurchaseInfoExtensions=_activatedPurchaseInfoExtensions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_reloadFromExtensions;
-(void)reloadDataFromExtensions;
-(id)initWithSession:(id)arg1 purchaseInfoExtensionController:(id)arg2 ;
-(NSArray *)activatedPurchaseInfoExtensions;
-(void)setActivatedPurchaseInfoExtensions:(NSArray *)arg1 ;
-(void)_updateDisplayedPurchaseInfoExtensions;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
@end

