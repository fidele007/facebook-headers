/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol FBPageSectionsAddTabControllerDelegate;
@class FBMemPage, FBUserSession, NSArray, FBPageSectionsAddTabView, NSString;

@interface FBPageSectionsAddViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	FBMemPage* _page;
	FBUserSession* _session;
	NSArray* _sectionOptions;
	FBPageSectionsAddTabView* _tabView;
	BOOL _showCreateTabUI;
	id<FBPageSectionsAddTabControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPageSectionsAddTabControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)fb_showNavBarSearchField;
-(BOOL)fb_hideNavBarRightButton;
-(id)_cellWithSubtitleStyleForTableView:(id)arg1 ;
-(void)_removeSelfFromNavigationStack;
-(void)_addTabToPage:(id)arg1 ;
-(void)_handleMutationSuccess;
-(id)initWithPage:(id)arg1 session:(id)arg2 sectionOptions:(id)arg3 ;
-(void)setDelegate:(id<FBPageSectionsAddTabControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<FBPageSectionsAddTabControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end

