/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKStatefulViewComponent.h>

@protocol FBMediaAttachmentProtocol;
@class FBComposerAttachmentRenderingData, FBComposerMediaAttachmentComponentState, FBComposerViewToolbox;

@interface FBComposerMediaAttachmentComponent : CKStatefulViewComponent {

	id<FBMediaAttachmentProtocol> _attachment;
	FBComposerAttachmentRenderingData* _renderingData;
	FBComposerMediaAttachmentComponentState* _state;
	FBComposerViewToolbox* _toolbox;

}

@property (nonatomic,readonly) id<FBMediaAttachmentProtocol> attachment;                       //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,readonly) FBComposerAttachmentRenderingData * renderingData;              //@synthesize renderingData=_renderingData - In the implementation block
@property (nonatomic,readonly) FBComposerMediaAttachmentComponentState * state;                //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) FBComposerViewToolbox * toolbox;                                //@synthesize toolbox=_toolbox - In the implementation block
+(id)newWithAttachment:(id)arg1 renderingData:(id)arg2 toolbox:(id)arg3 ;
-(FBComposerViewToolbox *)toolbox;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 restrictedToSize:(const CKComponentSize*)arg2 relativeToParentSize:(CGSize)arg3 ;
-(FBComposerAttachmentRenderingData *)renderingData;
-(FBComposerMediaAttachmentComponentState *)state;
-(id<FBMediaAttachmentProtocol>)attachment;
@end
