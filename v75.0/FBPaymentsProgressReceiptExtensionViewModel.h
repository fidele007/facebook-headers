/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface FBPaymentsProgressReceiptExtensionViewModel : FBValueObject <NSCopying> {

	NSArray* _availableSteps;
	NSString* _currentStepTitle;
	NSArray* _actionDescriptors;

}

@property (nonatomic,copy,readonly) NSArray * availableSteps;                 //@synthesize availableSteps=_availableSteps - In the implementation block
@property (nonatomic,copy,readonly) NSString * currentStepTitle;              //@synthesize currentStepTitle=_currentStepTitle - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actionDescriptors;              //@synthesize actionDescriptors=_actionDescriptors - In the implementation block
-(id)initWithAvailableSteps:(id)arg1 currentStepTitle:(id)arg2 actionDescriptors:(id)arg3 ;
-(NSArray *)availableSteps;
-(NSString *)currentStepTitle;
-(NSArray *)actionDescriptors;
@end

