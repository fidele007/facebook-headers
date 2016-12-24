/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@protocol FBSearchInputContextProtocol;
@class FBSearchComponentModel;

@interface FBGraphSearchNullStateModuleComponent : CKCompositeComponent {

	FBSearchComponentModel* _model;
	id<FBSearchInputContextProtocol> _context;

}

@property (nonatomic,readonly) FBSearchComponentModel * model;                        //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) id<FBSearchInputContextProtocol> context;              //@synthesize context=_context - In the implementation block
+(id)newWithModel:(id)arg1 context:(id)arg2 ;
+(id)headerModelFromCombinedEndpointModule:(id)arg1 index:(unsigned long long)arg2 parentModel:(id)arg3 suppressAccessoryText:(BOOL)arg4 ;
-(id<FBSearchInputContextProtocol>)context;
-(FBSearchComponentModel *)model;
@end

