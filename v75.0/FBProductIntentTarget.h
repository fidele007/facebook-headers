/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBIntentTarget.h>

@class NSString, FBMemProductItem;

@interface FBProductIntentTarget : FBIntentTarget {

	NSString* _productID;
	NSString* _attachmentID;

}

@property (nonatomic,readonly) FBMemProductItem * product; 
@property (nonatomic,copy,readonly) NSString * productID;                 //@synthesize productID=_productID - In the implementation block
@property (nonatomic,copy,readonly) NSString * attachmentID;              //@synthesize attachmentID=_attachmentID - In the implementation block
+(id)productTargetWithProductID:(id)arg1 attachmentID:(id)arg2 ;
+(id)productTargetWithProduct:(id)arg1 attachmentID:(id)arg2 ;
+(id)productDetailsComponentsUrlWithProductID:(id)arg1 attachmentID:(id)arg2 ;
-(id)fallbackURLs;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)productID;
-(NSString *)attachmentID;
-(FBMemProductItem *)product;
@end

