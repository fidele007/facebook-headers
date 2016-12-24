/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface FBAdPaymentsPrepayDisclaimerViewModel : FBValueObject <NSCopying> {

	NSString* _headerText;
	NSArray* _lineItemsText;
	NSArray* _lineItemsImage;

}

@property (nonatomic,copy,readonly) NSString * headerText;                 //@synthesize headerText=_headerText - In the implementation block
@property (nonatomic,copy,readonly) NSArray * lineItemsText;               //@synthesize lineItemsText=_lineItemsText - In the implementation block
@property (nonatomic,copy,readonly) NSArray * lineItemsImage;              //@synthesize lineItemsImage=_lineItemsImage - In the implementation block
-(NSArray *)lineItemsText;
-(NSArray *)lineItemsImage;
-(id)initWithHeaderText:(id)arg1 lineItemsText:(id)arg2 lineItemsImage:(id)arg3 ;
-(NSString *)headerText;
@end
