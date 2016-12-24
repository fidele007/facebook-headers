/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class FBCommerceProductContext, FBCommerceProductSection;

@interface FBCommerceProductSaveButtonComponent : CKCompositeComponent {

	FBCommerceProductContext* _context;
	FBCommerceProductSection* _section;
	unsigned long long _saveButtonState;

}

@property (nonatomic,copy,readonly) FBCommerceProductContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) FBCommerceProductSection * section;              //@synthesize section=_section - In the implementation block
@property (nonatomic,readonly) unsigned long long saveButtonState;                   //@synthesize saveButtonState=_saveButtonState - In the implementation block
+(id)newWithSection:(id)arg1 context:(id)arg2 ;
+(id)_getProductItemToSave:(id)arg1 ;
+(unsigned long long)_getSaveStateFrom:(id)arg1 ;
-(unsigned long long)saveButtonState;
-(FBCommerceProductSection *)section;
-(FBCommerceProductContext *)context;
@end

