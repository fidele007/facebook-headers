/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBHScrollImpressionLogging.h>

@class FBMemPlaceListUserCreatedRecommendation, FBMemCommentPlaceInfo, FBMemComment, FBUFICommentToolbox;

@interface FBCommentPlaceInfoAttachmentHScrollConfirmedLightweightRecComponent : CKCompositeComponent <FBHScrollImpressionLogging> {

	FBMemPlaceListUserCreatedRecommendation* _recommendation;
	FBMemCommentPlaceInfo* _commentPlaceInfo;
	FBMemComment* _comment;
	FBUFICommentToolbox* _toolbox;

}
+(id)newWithRecommendation:(id)arg1 comment:(id)arg2 commentPlaceInfo:(id)arg3 scrollIndex:(unsigned long long)arg4 theme:(unsigned long long)arg5 toolbox:(id)arg6 attributes:(const unordered_map<CKComponentViewAttribute, CKBoxedValue, std::__1::hash<CKComponentViewAttribute>, std::__1::equal_to<CKComponentViewAttribute>, std::__1::allocator<std::__1::pair<const CKComponentViewAttribute, CKBoxedValue> > >*)arg7 ;
-(void)didTapEditLightweightRecButton:(id)arg1 ;
-(void)didXOutConfirmedLightweightRecButton:(id)arg1 ;
@end
