/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@interface FBAdInterfacesBudgetPickerComponent : CKCompositeComponent {

	CKTypedComponentAction<> _selectionChangeAction;

}
+(id)newWithBudgetRecommendations:(id)arg1 customBudget:(id)arg2 minDailyBudget:(id)arg3 minTotalBudget:(id)arg4 maxDailyBudget:(id)arg5 maxTotalBudget:(id)arg6 selectedBudget:(id)arg7 baseBudgetValue:(unsigned long long)arg8 isDaily:(BOOL)arg9 invalidEstimates:(BOOL)arg10 suppressErrorMessages:(BOOL)arg11 estimateStyle:(unsigned long long)arg12 selectionChangeAction:(CKTypedComponentAction<>)arg13 customBudgetCommittedAction:(CKTypedComponentAction<>)arg14 ;
-(void)optionSelected:(id)arg1 withBudget:(id)arg2 ;
-(void)customBudgetChanged:(id)arg1 withBudget:(id)arg2 ;
@end

