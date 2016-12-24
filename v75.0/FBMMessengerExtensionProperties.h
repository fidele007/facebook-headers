/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface FBMMessengerExtensionProperties : FBValueObject <NSCoding, NSCopying> {

	BOOL _isStructuredMenuTypeMessageHidden;
	NSString* _resumeShoppingURLString;
	NSString* _resumeShoppingBannerText;
	NSString* _paymentPrivacyPolicyURLString;
	NSArray* _horizontalCTAs;
	NSString* _shoppingCartURLString;
	long long _shoppingCartItemCount;

}

@property (nonatomic,copy,readonly) NSString * resumeShoppingURLString;                    //@synthesize resumeShoppingURLString=_resumeShoppingURLString - In the implementation block
@property (nonatomic,copy,readonly) NSString * resumeShoppingBannerText;                   //@synthesize resumeShoppingBannerText=_resumeShoppingBannerText - In the implementation block
@property (nonatomic,copy,readonly) NSString * paymentPrivacyPolicyURLString;              //@synthesize paymentPrivacyPolicyURLString=_paymentPrivacyPolicyURLString - In the implementation block
@property (nonatomic,copy,readonly) NSArray * horizontalCTAs;                              //@synthesize horizontalCTAs=_horizontalCTAs - In the implementation block
@property (nonatomic,readonly) BOOL isStructuredMenuTypeMessageHidden;                     //@synthesize isStructuredMenuTypeMessageHidden=_isStructuredMenuTypeMessageHidden - In the implementation block
@property (nonatomic,copy,readonly) NSString * shoppingCartURLString;                      //@synthesize shoppingCartURLString=_shoppingCartURLString - In the implementation block
@property (nonatomic,readonly) long long shoppingCartItemCount;                            //@synthesize shoppingCartItemCount=_shoppingCartItemCount - In the implementation block
-(id)initWithResumeShoppingURLString:(id)arg1 resumeShoppingBannerText:(id)arg2 paymentPrivacyPolicyURLString:(id)arg3 horizontalCTAs:(id)arg4 isStructuredMenuTypeMessageHidden:(BOOL)arg5 shoppingCartURLString:(id)arg6 shoppingCartItemCount:(long long)arg7 ;
-(NSString *)resumeShoppingURLString;
-(NSString *)resumeShoppingBannerText;
-(NSString *)paymentPrivacyPolicyURLString;
-(NSArray *)horizontalCTAs;
-(NSString *)shoppingCartURLString;
-(long long)shoppingCartItemCount;
-(BOOL)isStructuredMenuTypeMessageHidden;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

