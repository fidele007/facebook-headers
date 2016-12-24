/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBBackgroundDeallocatedObject.h>
#import <Facebook/CKComponentProvider.h>
#import <Facebook/FBRichStoryBlockController.h>

@class ASComponentHostingNode, FBRichStoryBlock, NSDictionary, FBRichStoryBlockDisplayContext, FBUserSession, NSString;

@interface FBNAComponentHostingBlockController : FBBackgroundDeallocatedObject <CKComponentProvider, FBRichStoryBlockController> {

	BOOL _componentHostingNodeLoaded;
	ASComponentHostingNode* _componentHostingNode;
	FBRichStoryBlock* _storyBlock;
	NSDictionary* _presentationAttributes;
	FBRichStoryBlockDisplayContext* _displayContext;
	FBUserSession* _session;

}

@property (nonatomic,retain) FBRichStoryBlock * storyBlock;                                  //@synthesize storyBlock=_storyBlock - In the implementation block
@property (nonatomic,readonly) ASComponentHostingNode * componentHostingNode;                //@synthesize componentHostingNode=_componentHostingNode - In the implementation block
@property (nonatomic,readonly) BOOL componentHostingNodeLoaded;                              //@synthesize componentHostingNodeLoaded=_componentHostingNodeLoaded - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * presentationAttributes;                   //@synthesize presentationAttributes=_presentationAttributes - In the implementation block
@property (nonatomic,readonly) FBRichStoryBlockDisplayContext * displayContext;              //@synthesize displayContext=_displayContext - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                      //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
+(BOOL)blockControllerCanRenderStoryBlock:(id)arg1 presentationAttributes:(id)arg2 ;
+(id)blockControllerForStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
+(id)layoutForStoryBlock:(id)arg1 constrainingSize:(CGSize)arg2 presentationAttributes:(id)arg3 displayContext:(id)arg4 ;
+(id)componentForStoryBlock:(id)arg1 presentationAttributes:(id)arg2 displayContext:(id)arg3 session:(id)arg4 ;
-(id)richStoryRenderable;
-(FBRichStoryBlockDisplayContext *)displayContext;
-(FBRichStoryBlock *)storyBlock;
-(id)_currentComponentContext;
-(void)setStoryBlock:(FBRichStoryBlock *)arg1 ;
-(id)_currentComponentModel;
-(BOOL)componentHostingNodeLoaded;
-(ASComponentHostingNode *)componentHostingNode;
-(void)updateWithStoryBlock:(id)arg1 updateMode:(unsigned long long)arg2 ;
-(id)initWithStoryBlock:(id)arg1 presentationAttributes:(id)arg2 displayContext:(id)arg3 session:(id)arg4 ;
-(FBUserSession *)session;
-(NSDictionary *)presentationAttributes;
@end

