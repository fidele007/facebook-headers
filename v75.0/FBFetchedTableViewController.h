/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBTableViewController.h>
#import <Facebook/FBViewControllerKeyboardDelegate.h>
#import <Facebook/FBBaseFetchedResultsDataSourceDelegate.h>

@protocol FBBaseFetchedResultsDataSource;
@class NSString;

@interface FBFetchedTableViewController : FBTableViewController <FBViewControllerKeyboardDelegate, FBBaseFetchedResultsDataSourceDelegate> {

	BOOL _didFetchData;
	id<FBBaseFetchedResultsDataSource> _fetchedResultsDataSource;
	BOOL _fetchResultsBeforeDisplay;
	BOOL _isKeyboardDocked;
	double _prevKeyboardAppearHeight;
	BOOL _isInPopover;

}

@property (assign,nonatomic) BOOL fetchResultsBeforeDisplay;                                           //@synthesize fetchResultsBeforeDisplay=_fetchResultsBeforeDisplay - In the implementation block
@property (assign,nonatomic) BOOL isInPopover;                                                         //@synthesize isInPopover=_isInPopover - In the implementation block
@property (nonatomic,retain) id<FBBaseFetchedResultsDataSource> fetchedResultsDataSource;              //@synthesize fetchedResultsDataSource=_fetchedResultsDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFetchResultsBeforeDisplay:(BOOL)arg1 ;
-(void)setFetchedResultsDataSource:(id<FBBaseFetchedResultsDataSource>)arg1 ;
-(id<FBBaseFetchedResultsDataSource>)fetchedResultsDataSource;
-(void)updateTableViewInsetsWithOffsetY:(double)arg1 ;
-(void)keyboardWillAppearInto:(CGRect)arg1 from:(CGRect)arg2 curve:(long long)arg3 duration:(double)arg4 ;
-(void)keyboardWillDisappearInto:(CGRect)arg1 from:(CGRect)arg2 curve:(long long)arg3 duration:(double)arg4 ;
-(void)keyboardWillChangeFrame:(CGRect)arg1 from:(CGRect)arg2 curve:(long long)arg3 duration:(double)arg4 ;
-(void)keyboardDidChangeFrame:(CGRect)arg1 from:(CGRect)arg2 curve:(long long)arg3 duration:(double)arg4 ;
-(void)fetchedResultsDataSourceDidUpdateTableView:(id)arg1 ;
-(BOOL)fetchResultsBeforeDisplay;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setIsInPopover:(BOOL)arg1 ;
-(void)fetchData;
-(BOOL)isInPopover;
@end

