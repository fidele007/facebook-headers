/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBReactionAttachmentsComponent.h>

@protocol FBQueriedReactionUnitFieldsProtocol;
@class FBReactionContext, FBMemModelObject, FBPhotoComponent;

@interface FBReactionSingleLargePhotoAttachmentComponent : CKCompositeComponent <FBReactionAttachmentsComponent> {

	FBReactionContext* _context;
	FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> _unit;
	FBPhotoComponent* _photoComponent;

}

@property (nonatomic,readonly) FBReactionContext * context;                                              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol> unit;              //@synthesize unit=_unit - In the implementation block
@property (nonatomic,readonly) FBPhotoComponent * photoComponent;                                        //@synthesize photoComponent=_photoComponent - In the implementation block
+(BOOL)hasBottomBorderForAttachmentsConnection:(id)arg1 ;
+(id)newWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 ;
-(FBPhotoComponent *)photoComponent;
-(FBReactionContext *)context;
-(FBMemModelObject*<FBQueriedReactionUnitFieldsProtocol>)unit;
@end
