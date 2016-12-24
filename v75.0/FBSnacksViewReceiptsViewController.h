/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol FBSnacksViewReceiptsViewControllerDelegate;
@class FBUserSession, UITableView, NSMutableArray, NSMutableSet, NSString;

@interface FBSnacksViewReceiptsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	BOOL _showUnseenIndicators;
	FBUserSession* _session;
	UITableView* _receiptTable;
	NSMutableArray* _seenByPersons;
	NSMutableSet* _unseenSeenByPersons;
	id<FBSnacksViewReceiptsViewControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_hideFriend:(id)arg1 ;
-(id)initWithThread:(id)arg1 showUnseenIndicators:(BOOL)arg2 session:(id)arg3 delegate:(id)arg4 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
@end

