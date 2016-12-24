/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class FBFundraiserCreateFlowToolbox, FBMemCurrencyAmount;

@interface FBFundraiserGoalAmountComponent : CKCompositeComponent {

	FBFundraiserCreateFlowToolbox* _toolbox;
	FBMemCurrencyAmount* _goalAmount;

}
+(id)newWithGoalAmount:(id)arg1 canChangeCurrency:(BOOL)arg2 isEnabled:(BOOL)arg3 toolbox:(id)arg4 ;
-(void)didBeginEditingGoalAmount:(id)arg1 ;
-(void)didEndEditingGoalAmount:(id)arg1 ;
-(void)goalChanged:(id)arg1 context:(id)arg2 ;
@end

