/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/NTNativeTemplateComponent.h>
#import <Facebook/NTHasComponentAttributes.h>

@class NSDictionary, CKComponent, NTNativeTemplateBaseContext, NSString;

@interface NTNativeTemplateFormComponent : NTNativeTemplateComponent <NTHasComponentAttributes> {

	NSDictionary* _genericHelpers;
	CKComponent* _contentComponent;
	CKComponentLayout* _layout;
	NTNativeTemplateBaseContext* _context;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithModel:(id)arg1 context:(id)arg2 ;
+(id)childModelNames;
+(void)_fillInKeyValuePairs:(id)arg1 forLayout:(CKComponentLayout*)arg2 ;
-(id)viewForAnimation;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 restrictedToSize:(const CKComponentSize*)arg2 relativeToParentSize:(CGSize)arg3 ;
-(void)didTapView;
-(id)formData;
-(void)didLongPressView:(id)arg1 gestureRecognizer:(id)arg2 ;
@end

