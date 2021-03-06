/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBPaymentsKitCardTextInputState : FBValueObject <NSCopying> {

	NSString* _text;
	NSString* _numericalDigits;
	NSString* _formattedText;
	long long _validationResult;

}

@property (nonatomic,copy,readonly) NSString * text;                         //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSString * numericalDigits;              //@synthesize numericalDigits=_numericalDigits - In the implementation block
@property (nonatomic,copy,readonly) NSString * formattedText;                //@synthesize formattedText=_formattedText - In the implementation block
@property (nonatomic,readonly) long long validationResult;                   //@synthesize validationResult=_validationResult - In the implementation block
-(NSString *)numericalDigits;
-(long long)validationResult;
-(id)initWithText:(id)arg1 numericalDigits:(id)arg2 formattedText:(id)arg3 validationResult:(long long)arg4 ;
-(NSString *)text;
-(NSString *)formattedText;
@end

