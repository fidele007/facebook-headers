/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBRichStoryFrameSetterProvider;
#import <Facebook/Facebook-Structs.h>
@class NSPredicate, FBRichStoryViewModel, FBRichStoryPresentationState, FBRichStoryBlockDisplayContext, NSDictionary, NSSet;

@interface FBNAPinnableBlockRegistry : NSObject {

	NSPredicate* _heightConstraintPredicate;
	NSPredicate* _intersectionPredicate;
	id<FBRichStoryFrameSetterProvider> _frameSetterProvider;
	FBRichStoryViewModel* _viewModel;
	FBRichStoryPresentationState* _presentationState;
	FBRichStoryBlockDisplayContext* _displayContext;
	NSDictionary* _blocksDictionary;

}

@property (nonatomic,readonly) NSPredicate * heightConstraintPredicate;                                    //@synthesize heightConstraintPredicate=_heightConstraintPredicate - In the implementation block
@property (nonatomic,readonly) NSPredicate * intersectionPredicate;                                        //@synthesize intersectionPredicate=_intersectionPredicate - In the implementation block
@property (nonatomic,copy) NSDictionary * blocksDictionary;                                                //@synthesize blocksDictionary=_blocksDictionary - In the implementation block
@property (nonatomic,__weak,readonly) id<FBRichStoryFrameSetterProvider> frameSetterProvider;              //@synthesize frameSetterProvider=_frameSetterProvider - In the implementation block
@property (nonatomic,readonly) FBRichStoryViewModel * viewModel;                                           //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) FBRichStoryPresentationState * presentationState;                           //@synthesize presentationState=_presentationState - In the implementation block
@property (nonatomic,readonly) FBRichStoryBlockDisplayContext * displayContext;                            //@synthesize displayContext=_displayContext - In the implementation block
@property (nonatomic,copy,readonly) NSSet * pinnableBlocks; 
-(FBRichStoryBlockDisplayContext *)displayContext;
-(id)initWithFrameSetterProvider:(id)arg1 storyViewModel:(id)arg2 presentationState:(id)arg3 displayContext:(id)arg4 ;
-(void)reloadPinnableBlocks;
-(void)setBlocksDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)blocksDictionary;
-(id<FBRichStoryFrameSetterProvider>)frameSetterProvider;
-(NSSet *)pinnableBlocks;
-(NSPredicate *)heightConstraintPredicate;
-(NSPredicate *)intersectionPredicate;
-(id)pinnableBlocksWithinFrame:(CGRect)arg1 ;
-(FBRichStoryViewModel *)viewModel;
-(FBRichStoryPresentationState *)presentationState;
@end

