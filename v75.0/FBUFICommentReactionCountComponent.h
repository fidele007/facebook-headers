/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBUFICommentToolbox;

@interface FBUFICommentReactionCountComponent : CKCompositeComponent {

	FBUFICommentReactionCountComponentGraphQL* _feedback;
	FBUFICommentToolbox* _toolbox;

}
+(id)newWithFeedback:(const FBUFICommentReactionCountComponentGraphQL*)arg1 reactionDataProvider:(id)arg2 theme:(unsigned long long)arg3 toolbox:(id)arg4 ;
-(void)didTapReactionCountButton:(id)arg1 ;
@end

