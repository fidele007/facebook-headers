/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Facebook/FBCollectionInfoRequestAskButtonCellDelegate.h>
#import <Facebook/FBCollectionInfoRequestAskTextViewCellDelegate.h>
#import <Facebook/FBPresentableViewController.h>

@protocol FBCollectionInfoRequestAskTableViewControllerDelegate;
@class UITableView, UIView, UILabel, FBMemPerson, NSString;

@interface FBCollectionInfoRequestAskTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, FBCollectionInfoRequestAskButtonCellDelegate, FBCollectionInfoRequestAskTextViewCellDelegate, FBPresentableViewController> {

	UITableView* _tableView;
	UIView* _cachedHeaderView;
	UIView* _cachedFooterView;
	UILabel* _cachedFooterLabel;
	FBMemPerson* _person;
	id<FBCollectionInfoRequestAskTableViewControllerDelegate> _infoRequestAskTableViewControllerDelegate;

}

@property (nonatomic,readonly) UITableView * tableView; 
@property (nonatomic,readonly) FBMemPerson * person;                                                                                                  //@synthesize person=_person - In the implementation block
@property (assign,nonatomic,__weak) id<FBCollectionInfoRequestAskTableViewControllerDelegate> infoRequestAskTableViewControllerDelegate;              //@synthesize infoRequestAskTableViewControllerDelegate=_infoRequestAskTableViewControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long preferredPresentationMethod; 
@property (nonatomic,readonly) unsigned long long preferredPresentationOptions; 
-(BOOL)fb_showNavBarSearchField;
-(unsigned long long)preferredPresentationMethod;
-(unsigned long long)preferredPresentationOptions;
-(void)infoRequestAskButtonCell:(id)arg1 handleButtonTapped:(id)arg2 ;
-(void)setInfoRequestAskTableViewControllerDelegate:(id<FBCollectionInfoRequestAskTableViewControllerDelegate>)arg1 ;
-(id)_identifierAtIndexPath:(id)arg1 ;
-(id)_shortNameOrFullNameFromPerson:(id)arg1 ;
-(id)_cachedFooterLabel;
-(id)_messageTextViewCell;
-(id)_sendRequestButtonCell;
-(id)_indexPathForIdentifier:(id)arg1 ;
-(id)_footerTextForPerson:(id)arg1 ;
-(void)infoRequestAskTextViewCell:(id)arg1 handleTextChanged:(id)arg2 ;
-(id<FBCollectionInfoRequestAskTableViewControllerDelegate>)infoRequestAskTableViewControllerDelegate;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(id)_backgroundColor;
-(UITableView *)tableView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(FBMemPerson *)person;
-(id)initWithPerson:(id)arg1 ;
-(void)_cancelButtonTapped:(id)arg1 ;
@end

