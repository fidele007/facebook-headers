/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBAdInterfacesPromotion, NSArray, NSSet, FBAdInterfacesBudget;

@interface FBAdInterfacesEditPromotionResponse : FBValueObject <NSCopying> {

	FBAdInterfacesPromotion* _promotion;
	NSArray* _budgetRecommendations;
	NSSet* _editedFields;
	FBAdInterfacesBudget* _defaultBudget;

}

@property (nonatomic,copy,readonly) FBAdInterfacesPromotion * promotion;               //@synthesize promotion=_promotion - In the implementation block
@property (nonatomic,copy,readonly) NSArray * budgetRecommendations;                   //@synthesize budgetRecommendations=_budgetRecommendations - In the implementation block
@property (nonatomic,copy,readonly) NSSet * editedFields;                              //@synthesize editedFields=_editedFields - In the implementation block
@property (nonatomic,copy,readonly) FBAdInterfacesBudget * defaultBudget;              //@synthesize defaultBudget=_defaultBudget - In the implementation block
-(FBAdInterfacesPromotion *)promotion;
-(NSArray *)budgetRecommendations;
-(id)initWithPromotion:(id)arg1 budgetRecommendations:(id)arg2 editedFields:(id)arg3 defaultBudget:(id)arg4 ;
-(NSSet *)editedFields;
-(FBAdInterfacesBudget *)defaultBudget;
@end
