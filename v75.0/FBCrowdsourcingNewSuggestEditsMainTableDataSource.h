/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCrowdsourcingNewSuggestEditsHeaderTableCellDelegate.h>
#import <Facebook/FBCrowdsourcingNewSuggestEditsFieldTableViewCellDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol FBCrowdsourcingNewSuggestEditsMainTableDataSourceDelegate;
@class FBCrowdsourcingEditsModel, NSMutableArray, UIImage, CLLocation, NSNumber, NSString;

@interface FBCrowdsourcingNewSuggestEditsMainTableDataSource : NSObject <FBCrowdsourcingNewSuggestEditsHeaderTableCellDelegate, FBCrowdsourcingNewSuggestEditsFieldTableViewCellDelegate, UITableViewDataSource, UITableViewDelegate> {

	FBCrowdsourcingEditsModel* _model;
	BOOL _showNoFieldsNote;
	NSMutableArray* _combinedCategories;
	UIImage* _displayImage;
	CLLocation* _cityLocation;
	NSNumber* _pendingEditsCount;
	id<FBCrowdsourcingNewSuggestEditsMainTableDataSourceDelegate> _delegate;

}

@property (nonatomic,copy) NSMutableArray * combinedCategories;                                                          //@synthesize combinedCategories=_combinedCategories - In the implementation block
@property (nonatomic,retain) UIImage * displayImage;                                                                     //@synthesize displayImage=_displayImage - In the implementation block
@property (nonatomic,copy) CLLocation * cityLocation;                                                                    //@synthesize cityLocation=_cityLocation - In the implementation block
@property (assign,nonatomic) BOOL showNoFieldsNote;                                                                      //@synthesize showNoFieldsNote=_showNoFieldsNote - In the implementation block
@property (nonatomic,retain) NSNumber * pendingEditsCount;                                                               //@synthesize pendingEditsCount=_pendingEditsCount - In the implementation block
@property (assign,nonatomic,__weak) id<FBCrowdsourcingNewSuggestEditsMainTableDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDisplayImage:(UIImage *)arg1 ;
-(void)_didTapCameraButton:(id)arg1 ;
-(id)_tableView:(id)arg1 cellForLocationSectionRowAtIndexItem:(long long)arg2 ;
-(void)textFieldCellDidEditText;
-(void)textFieldCellDidClearText;
-(void)contactSectionTextFieldDidEndEditing:(id)arg1 ;
-(void)locationSectionTextFieldDidEndEditing:(id)arg1 ;
-(void)nameViewDidBeginEditingText;
-(void)nameViewDidChangeText:(id)arg1 ;
-(long long)_contactSectionTotalRows;
-(id)_tableView:(id)arg1 cellForContactSectionRowAtIndexPathItem:(long long)arg2 ;
-(id)_tableView:(id)arg1 cellForCategorySectionRowAtIndexPathItem:(long long)arg2 ;
-(id)_tableView:(id)arg1 cellForHoursSectionRowAtIndexItem:(long long)arg2 ;
-(BOOL)sectionHasCrowdsourceableFields:(long long)arg1 ;
-(BOOL)showNoFieldsNote;
-(NSNumber *)pendingEditsCount;
-(void)_didTapPendingEditsButton:(id)arg1 ;
-(CLLocation *)cityLocation;
-(void)_locationSectionRowDidTapAccessory:(id)arg1 ;
-(void)_contactSectionRowDidTapAccessory:(id)arg1 ;
-(void)setCombinedCategories:(NSMutableArray *)arg1 ;
-(void)setCityLocation:(CLLocation *)arg1 ;
-(NSMutableArray *)combinedCategories;
-(void)setShowNoFieldsNote:(BOOL)arg1 ;
-(void)setPendingEditsCount:(NSNumber *)arg1 ;
-(void)setDelegate:(id<FBCrowdsourcingNewSuggestEditsMainTableDataSourceDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<FBCrowdsourcingNewSuggestEditsMainTableDataSourceDelegate>)delegate;
-(id)initWithModel:(id)arg1 ;
-(UIImage *)displayImage;
@end

