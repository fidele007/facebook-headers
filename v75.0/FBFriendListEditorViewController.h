/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBTableViewController.h>
#import <Facebook/FBPresentableViewController.h>

@protocol FBServiceTransactionMutating;
@class FBMemPerson, FBUserSession, NSMutableArray, NSArray, FBMemFriendList, NSString;

@interface FBFriendListEditorViewController : FBTableViewController <FBPresentableViewController> {

	FBMemPerson* _target;
	FBUserSession* _session;
	unsigned long long _closeFriendsAndAcquaintancesSectionIndex;
	unsigned long long _othersSectionIndex;
	id<FBServiceTransactionMutating> _token;
	NSMutableArray* _memberFriendLists;
	NSArray* _friendLists;
	FBMemFriendList* _closeFriendsList;
	FBMemFriendList* _acquaintancesList;

}

@property (nonatomic,retain) NSMutableArray * memberFriendLists;                             //@synthesize memberFriendLists=_memberFriendLists - In the implementation block
@property (nonatomic,copy) NSArray * friendLists;                                            //@synthesize friendLists=_friendLists - In the implementation block
@property (nonatomic,retain) FBMemFriendList * closeFriendsList;                             //@synthesize closeFriendsList=_closeFriendsList - In the implementation block
@property (nonatomic,retain) FBMemFriendList * acquaintancesList;                            //@synthesize acquaintancesList=_acquaintancesList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long preferredPresentationMethod; 
@property (nonatomic,readonly) unsigned long long preferredPresentationOptions; 
-(id)analyticsModule;
-(BOOL)fb_showNavBarSearchField;
-(id)cellIdentifierAtIndexPath:(id)arg1 ;
-(unsigned long long)preferredPresentationMethod;
-(unsigned long long)preferredPresentationOptions;
-(void)_loadFinishedWithResponse:(id)arg1 andError:(id)arg2 ;
-(NSArray *)friendLists;
-(id)initWithTarget:(id)arg1 session:(id)arg2 ;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 ;
-(id)newCellWithIdentifier:(id)arg1 ;
-(void)_syncFriendListData;
-(void)setCloseFriendsList:(FBMemFriendList *)arg1 ;
-(void)setAcquaintancesList:(FBMemFriendList *)arg1 ;
-(void)setFriendLists:(NSArray *)arg1 ;
-(void)setMemberFriendLists:(NSMutableArray *)arg1 ;
-(void)showFriendLists:(id)arg1 ;
-(id)friendListAtIndexPath:(id)arg1 ;
-(void)addToList:(id)arg1 ;
-(void)removeFromList:(id)arg1 ;
-(unsigned long long)indexOfList:(id)arg1 ;
-(NSMutableArray *)memberFriendLists;
-(FBMemFriendList *)closeFriendsList;
-(FBMemFriendList *)acquaintancesList;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CGSize)contentSizeForViewInPopover;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_done:(id)arg1 ;
-(id)errorTitle;
@end

