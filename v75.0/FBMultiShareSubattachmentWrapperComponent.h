/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBHScrollImpressionLogging.h>

@protocol FBMultiShareAttachmentRenderingComponent;
@class CKComponent;

@interface FBMultiShareSubattachmentWrapperComponent : CKCompositeComponent <FBHScrollImpressionLogging> {

	CKComponent*<FBMultiShareAttachmentRenderingComponent> _subattachment;

}
+(id)newWithAttachment:(id)arg1 parentStory:(id)arg2 index:(unsigned long long)arg3 toolbox:(id)arg4 becameFullyVisibleAction:(CKTypedComponentAction<>)arg5 tapAttachmentAction:(CKTypedComponentAction<>)arg6 haveFooter:(BOOL)arg7 ;
-(void)becameFullyVisible;
@end

