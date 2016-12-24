/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBTableViewController.h>

@protocol FBPageSectionsReorderTabControllerDelegate;
@class NSArray, FBMemPage, FBUserSession, UIView;

@interface FBPageSectionsReorderTabViewController : FBTableViewController {

	NSArray* _tabs;
	FBMemPage* _page;
	FBUserSession* _session;
	UIView* _headerDescriptionView;
	NSArray* _oldTabs;
	id<FBPageSectionsReorderTabControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPageSectionsReorderTabControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)fb_showNavBarSearchField;
-(id)initWithPage:(id)arg1 session:(id)arg2 ;
-(BOOL)fb_hideNavBarRightButton;
-(void)didTapDoneButton:(id)arg1 ;
-(void)performTabReorderMutation;
-(void)_handleTabReorderMutationSuccess;
-(void)_handleTabReorderMutationFailure;
-(void)_showAlertWithTitle:(id)arg1 description:(id)arg2 ;
-(void)setDelegate:(id<FBPageSectionsReorderTabControllerDelegate>)arg1 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(id<FBPageSectionsReorderTabControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end
