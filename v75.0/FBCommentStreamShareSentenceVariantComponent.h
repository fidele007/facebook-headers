/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKComponent.h>

@class FBCommentStreamContainerLayoutDefinition, FBUFICommentToolbox, FBCommentStreamShareSentenceVariantSequenceGenerator;

@interface FBCommentStreamShareSentenceVariantComponent : CKComponent {

	FBProfileScrollingBehavior _options;
	FBCommentStreamContainerLayoutDefinition* _layoutDefinition;
	FBUFICommentToolbox* _toolbox;
	FBCommentStreamShareSentenceVariantSequenceGenerator* _generator;

}
+(id)newWithPayload:(id)arg1 options:(FBProfileScrollingBehavior)arg2 layoutDefinition:(id)arg3 toolbox:(id)arg4 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
@end

