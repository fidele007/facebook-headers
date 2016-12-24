/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class FBCommerceProductContext, FBCommerceProductSection, NSArray;

@interface FBCommerceProductDetailsUserInteractionsComponent : CKCompositeComponent {

	FBCommerceProductContext* _context;
	FBCommerceProductSection* _section;
	NSArray* _images;
	NSArray* _variants;

}

@property (nonatomic,copy,readonly) FBCommerceProductContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) FBCommerceProductSection * section;              //@synthesize section=_section - In the implementation block
@property (nonatomic,copy,readonly) NSArray * images;                                //@synthesize images=_images - In the implementation block
@property (nonatomic,copy,readonly) NSArray * variants;                              //@synthesize variants=_variants - In the implementation block
+(id)newWithSection:(id)arg1 context:(id)arg2 ;
-(void)_openPhoto:(long long)arg1 ;
-(void)checkOutTapped:(id)arg1 ;
-(void)didTapOnImage:(id)arg1 index:(id)arg2 ;
-(void)quantityTapped:(id)arg1 ;
-(FBCommerceProductSection *)section;
-(NSArray *)images;
-(FBCommerceProductContext *)context;
-(NSArray *)variants;
@end

