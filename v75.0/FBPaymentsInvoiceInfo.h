/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIImage;

@interface FBPaymentsInvoiceInfo : FBValueObject <NSCopying> {

	NSString* _buyerID;
	NSString* _buyerDisplayName;
	UIImage* _buyerProfileImage;
	NSString* _sellerID;
	NSString* _clientType;

}

@property (nonatomic,copy,readonly) NSString * buyerID;                       //@synthesize buyerID=_buyerID - In the implementation block
@property (nonatomic,copy,readonly) NSString * buyerDisplayName;              //@synthesize buyerDisplayName=_buyerDisplayName - In the implementation block
@property (nonatomic,copy,readonly) UIImage * buyerProfileImage;              //@synthesize buyerProfileImage=_buyerProfileImage - In the implementation block
@property (nonatomic,copy,readonly) NSString * sellerID;                      //@synthesize sellerID=_sellerID - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientType;                    //@synthesize clientType=_clientType - In the implementation block
-(id)initWithBuyerID:(id)arg1 buyerDisplayName:(id)arg2 buyerProfileImage:(id)arg3 sellerID:(id)arg4 clientType:(id)arg5 ;
-(NSString *)buyerID;
-(NSString *)sellerID;
-(NSString *)buyerDisplayName;
-(UIImage *)buyerProfileImage;
-(NSString *)clientType;
@end

