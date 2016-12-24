/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSectionComponentToolbox.h>

@protocol FBFundraiserBeneficiaryPickerDelegate;
@class FBFundraiserLogger;

@interface FBFundraiserCreateFlowSectionComponentToolbox : FBSectionComponentToolbox {

	id<FBFundraiserBeneficiaryPickerDelegate> _beneficiaryPickerDelegate;
	FBFundraiserLogger* _analyticsLogger;

}

@property (nonatomic,__weak,readonly) id<FBFundraiserBeneficiaryPickerDelegate> beneficiaryPickerDelegate;              //@synthesize beneficiaryPickerDelegate=_beneficiaryPickerDelegate - In the implementation block
@property (nonatomic,readonly) FBFundraiserLogger * analyticsLogger;                                                    //@synthesize analyticsLogger=_analyticsLogger - In the implementation block
-(FBFundraiserLogger *)analyticsLogger;
-(id<FBFundraiserBeneficiaryPickerDelegate>)beneficiaryPickerDelegate;
-(id)initWithAnalyticsLogger:(id)arg1 beneficiaryPickerDelegate:(id)arg2 sectionComponentContext:(id)arg3 ;
@end
