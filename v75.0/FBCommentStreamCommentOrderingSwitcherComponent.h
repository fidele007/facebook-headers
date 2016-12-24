/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class FBMemFeedback, FBUFICommentToolbox;

@interface FBCommentStreamCommentOrderingSwitcherComponent : CKCompositeComponent {

	FBMemFeedback* _feedback;
	FBUFICommentToolbox* _toolbox;

}

@property (nonatomic,readonly) FBMemFeedback * feedback;                   //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,readonly) FBUFICommentToolbox * toolbox;              //@synthesize toolbox=_toolbox - In the implementation block
+(id)newWithFeedback:(id)arg1 layoutDefinition:(id)arg2 toolbox:(id)arg3 ;
-(FBUFICommentToolbox *)toolbox;
-(FBMemFeedback *)feedback;
@end

