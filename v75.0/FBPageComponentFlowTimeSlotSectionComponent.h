/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBPageComponentFlowComponentContext, FBMemTimeSlotPickerFormField;

@interface FBPageComponentFlowTimeSlotSectionComponent : CKCompositeComponent {

	FBPageComponentFlowComponentContext* _context;
	FBMemTimeSlotPickerFormField* _model;

}

@property (nonatomic,retain) FBPageComponentFlowComponentContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) FBMemTimeSlotPickerFormField * model;                       //@synthesize model=_model - In the implementation block
+(id)newWithModel:(id)arg1 context:(id)arg2 ;
-(vector<CKComponentAnimation, std::__1::allocator<CKComponentAnimation> >*)animationsOnInitialMount;
-(FBPageComponentFlowComponentContext *)context;
-(FBMemTimeSlotPickerFormField *)model;
-(void)setContext:(FBPageComponentFlowComponentContext *)arg1 ;
-(void)setModel:(FBMemTimeSlotPickerFormField *)arg1 ;
@end

