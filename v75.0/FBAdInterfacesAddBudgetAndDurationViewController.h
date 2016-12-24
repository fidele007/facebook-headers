/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAdInterfacesBaseEditViewController.h>

@protocol FBAdInterfacesBudgetEstimatesFetcherProtocol, FBAdInterfacesAddBudgetAndDurationViewControllerDelegate;
@class FBAdInterfacesPromotionDataModel, FBAdInterfacesBudget;

@interface FBAdInterfacesAddBudgetAndDurationViewController : FBAdInterfacesBaseEditViewController {

	id<FBAdInterfacesBudgetEstimatesFetcherProtocol> _budgetEstimatesFetcher;
	BOOL _fetchingBudgetEstimations;
	id<FBAdInterfacesAddBudgetAndDurationViewControllerDelegate> _delegate;
	FBAdInterfacesPromotionDataModel* _dataModel;
	FBAdInterfacesBudget* _selectedBudget;
	FBAdInterfacesBudget* _customBudget;
	unsigned long long _selectedDuration;

}

@property (assign,nonatomic,__weak) id<FBAdInterfacesAddBudgetAndDurationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) FBAdInterfacesPromotionDataModel * dataModel;                                                //@synthesize dataModel=_dataModel - In the implementation block
@property (nonatomic,copy) FBAdInterfacesBudget * selectedBudget;                                                       //@synthesize selectedBudget=_selectedBudget - In the implementation block
@property (nonatomic,copy) FBAdInterfacesBudget * customBudget;                                                         //@synthesize customBudget=_customBudget - In the implementation block
@property (assign,nonatomic) unsigned long long selectedDuration;                                                       //@synthesize selectedDuration=_selectedDuration - In the implementation block
@property (assign,nonatomic) BOOL fetchingBudgetEstimations;                                                            //@synthesize fetchingBudgetEstimations=_fetchingBudgetEstimations - In the implementation block
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(BOOL)shouldShowFooter;
-(void)didTapSave;
-(FBAdInterfacesPromotionDataModel *)dataModel;
-(unsigned long long)selectedDuration;
-(FBAdInterfacesBudget *)customBudget;
-(void)setFetchingBudgetEstimations:(BOOL)arg1 ;
-(id)initWithDataModel:(id)arg1 budgetEstimatesFetcher:(id)arg2 delegate:(id)arg3 ;
-(BOOL)fetchingBudgetEstimations;
-(BOOL)wereChangesMade;
-(BOOL)isCommitButtonEnabled;
-(void)setDataModel:(FBAdInterfacesPromotionDataModel *)arg1 ;
-(id)footerDataModel;
-(void)setCustomBudget:(FBAdInterfacesBudget *)arg1 ;
-(void)setSelectedBudget:(FBAdInterfacesBudget *)arg1 ;
-(void)budgetPickerComponent:(id)arg1 didSelectBudget:(id)arg2 ;
-(FBAdInterfacesBudget *)selectedBudget;
-(void)scheduleComponent:(id)arg1 didSelectDuration:(id)arg2 ;
-(void)setSelectedDuration:(unsigned long long)arg1 ;
-(void)setDelegate:(id<FBAdInterfacesAddBudgetAndDurationViewControllerDelegate>)arg1 ;
-(id<FBAdInterfacesAddBudgetAndDurationViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(unsigned long long)sectionCount;
-(BOOL)shouldShowDoneButton;
@end

