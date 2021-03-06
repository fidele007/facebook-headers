/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBEventsComposerCategoriesViewControllerDelegate.h>
#import <Facebook/FBEventsComposerFieldControllerProtocol.h>
#import <UIKit/UITableViewDataSource.h>

@protocol FBEventsComposerFieldControllerDelegate;
@class FBUserSession, FBEventAnalyticTracker, NSMutableArray, NSMutableDictionary, NSString, FBItemCollectionViewCell, FBEventsComposerCategoriesViewController, NSDate;

@interface FBEventsComposerCategoryFieldController : NSObject <FBEventsComposerCategoriesViewControllerDelegate, FBEventsComposerFieldControllerProtocol, UITableViewDataSource> {

	FBUserSession* _session;
	FBEventAnalyticTracker* _tracker;
	NSMutableArray* _categoryGroupLabels;
	NSMutableDictionary* _categoryGroupLabelToCategories;
	NSString* _initialCategoryLabel;
	NSString* _selectedCategoryLabel;
	NSString* _selectedCategoryName;
	FBItemCollectionViewCell* _categoryCell;
	FBEventsComposerCategoriesViewController* _categoryGroupsViewController;
	FBEventsComposerCategoriesViewController* _categoriesViewController;
	id<FBEventsComposerFieldControllerDelegate> _delegate;
	unsigned long long _fieldType;
	NSDate* _fieldValue;

}

@property (assign,nonatomic,__weak) id<FBEventsComposerFieldControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long fieldType;                                             //@synthesize fieldType=_fieldType - In the implementation block
@property (nonatomic,retain) NSDate * fieldValue;                                                      //@synthesize fieldValue=_fieldValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)loggingData;
-(void)didCancelWithCategoriesViewController:(id)arg1 ;
-(void)categoriesViewController:(id)arg1 didFinishWithPickedIndexPath:(id)arg2 ;
-(BOOL)hasChanged;
-(void)_configureCategory;
-(void)configureCategoryTableViewCell:(id)arg1 withGroupLabel:(id)arg2 categories:(id)arg3 ;
-(id)_joinedCategories:(id)arg1 ;
-(id)partialEventCreateInputDataSet;
-(id)partialEventEditInputDataSet;
-(id)initWithCategoryLabel:(id)arg1 categoryGroupLabels:(id)arg2 categoryGroupLabelToCategories:(id)arg3 session:(id)arg4 tracker:(id)arg5 ;
-(double)heightForItemCellInCollectionView:(id)arg1 ;
-(void)didSelectCellAtIndexPath:(id)arg1 collectionView:(id)arg2 ;
-(id)cellForItemAtIndexPath:(id)arg1 collectionView:(id)arg2 ;
-(void)registerCellsWithCollectionView:(id)arg1 ;
-(void)setDelegate:(id<FBEventsComposerFieldControllerDelegate>)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<FBEventsComposerFieldControllerDelegate>)delegate;
-(void)setFieldValue:(NSDate *)arg1 ;
-(NSDate *)fieldValue;
-(unsigned long long)fieldType;
-(void)setFieldType:(unsigned long long)arg1 ;
@end

