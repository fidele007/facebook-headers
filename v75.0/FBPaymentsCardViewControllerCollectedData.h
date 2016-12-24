/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString, NSError;

@interface FBPaymentsCardViewControllerCollectedData : FBValueObject <NSCopying> {

	long long _operationType;
	NSDictionary* _textInputStates;
	NSString* _cardAssociation;
	NSError* _error;

}

@property (nonatomic,readonly) long long operationType;                          //@synthesize operationType=_operationType - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * textInputStates;              //@synthesize textInputStates=_textInputStates - In the implementation block
@property (nonatomic,copy,readonly) NSString * cardAssociation;                  //@synthesize cardAssociation=_cardAssociation - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                             //@synthesize error=_error - In the implementation block
-(NSString *)cardAssociation;
-(id)initWithOperationType:(long long)arg1 textInputStates:(id)arg2 cardAssociation:(id)arg3 error:(id)arg4 ;
-(NSDictionary *)textInputStates;
-(long long)operationType;
-(NSError *)error;
@end

