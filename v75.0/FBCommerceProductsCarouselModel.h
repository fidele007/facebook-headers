/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface FBCommerceProductsCarouselModel : NSObject {

	NSArray* _products;
	NSString* _title;
	NSString* _pageID;

}

@property (nonatomic,copy,readonly) NSArray * products;              //@synthesize products=_products - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageID;               //@synthesize pageID=_pageID - In the implementation block
-(id)initWithProducts:(id)arg1 title:(id)arg2 pageID:(id)arg3 ;
-(NSString *)title;
-(NSString *)pageID;
-(NSArray *)products;
@end
