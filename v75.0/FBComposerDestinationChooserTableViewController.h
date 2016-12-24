/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UITableViewController.h>

@protocol FBComposerDestinationChooserDelegate;
@class FBComposerDestinationOption, FBUserSession, NSArray, NSString;

@interface FBComposerDestinationChooserTableViewController : UITableViewController {

	FBComposerDestinationOption* _selectedOptionIndexPath;
	FBUserSession* _session;
	NSArray* _userPages;
	BOOL _selectionAlreadyHandled;
	unsigned long long _destinationChoosingType;
	NSString* _title;
	id<FBComposerDestinationChooserDelegate> _delegate;
	NSArray* _dataSource;

}

@property (assign,nonatomic,__weak) id<FBComposerDestinationChooserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * dataSource;                                                  //@synthesize dataSource=_dataSource - In the implementation block
-(id)analyticsModule;
-(id)initWithSession:(id)arg1 delegate:(id)arg2 destinationChoosingType:(unsigned long long)arg3 title:(id)arg4 ;
-(void)setTableHeight:(double)arg1 ;
-(void)setDataSource:(NSArray *)arg1 ;
-(void)setDelegate:(id<FBComposerDestinationChooserDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(NSArray *)dataSource;
-(id<FBComposerDestinationChooserDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(CGSize)preferredContentSize;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CGSize)contentSizeForViewInPopover;
-(void)viewDidLoad;
-(void)setSelectedOption:(id)arg1 ;
@end
