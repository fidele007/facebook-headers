/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating, FBCrowdsourcingDuplicatesControllerDelegate;
@class FBCrowdsourcingDuplicatesViewController, FBCrowdsourcingDuplicatesModel, FBCrowdsourcingDuplicatesOriginalPlaceComponentController, FBCrowdsourcingDuplicatesSectionComponentController, UIViewController;

@interface FBCrowdsourcingDuplicatesController : NSObject {

	FBCrowdsourcingDuplicatesViewController* _viewController;
	id<FBServiceTransactionMutating> _token;
	FBCrowdsourcingDuplicatesModel* _model;
	FBCrowdsourcingDuplicatesOriginalPlaceComponentController* _originalPlaceComponentController;
	FBCrowdsourcingDuplicatesSectionComponentController* _listComponentController;
	id<FBCrowdsourcingDuplicatesControllerDelegate> _delegate;

}

@property (nonatomic,readonly) UIViewController * viewController;                                          //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic,__weak) id<FBCrowdsourcingDuplicatesControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithPlaceID:(id)arg1 placeName:(id)arg2 possibleDuplicates:(id)arg3 orderedDuplicateIDs:(id)arg4 suggestedSource:(unsigned long long)arg5 fromEntryPoint:(unsigned long long)arg6 session:(id)arg7 ;
-(void)initModelWithPlaceID:(id)arg1 placeName:(id)arg2 possibleDuplicates:(id)arg3 ;
-(void)fetchDetails;
-(id)getOriginalPlace;
-(id)getPossibleDuplicateModels;
-(id)getComponentControllers;
-(void)cancel;
-(void)setDelegate:(id<FBCrowdsourcingDuplicatesControllerDelegate>)arg1 ;
-(id<FBCrowdsourcingDuplicatesControllerDelegate>)delegate;
-(UIViewController *)viewController;
-(void)save;
@end
