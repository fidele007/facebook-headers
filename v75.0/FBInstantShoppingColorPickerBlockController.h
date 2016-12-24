/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBInstantShoppingColorPickerNodeDelegate.h>
#import <Facebook/FBRichStoryBlockController.h>
#import <Facebook/FBFocusableBlockController.h>

@class FBInstantShoppingColorPickerNode, FBMemInstantShoppingColorSelectorElement, FBUserSession, FBRichStoryBlockDisplayContext, FBCanvasElementLogger, NSString;

@interface FBInstantShoppingColorPickerBlockController : NSObject <FBInstantShoppingColorPickerNodeDelegate, FBRichStoryBlockController, FBFocusableBlockController> {

	FBInstantShoppingColorPickerNode* _renderable;
	FBMemInstantShoppingColorSelectorElement* _element;
	FBUserSession* _session;
	FBRichStoryBlockDisplayContext* _displayContext;
	FBCanvasElementLogger* _logger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)blockControllerCanRenderStoryBlock:(id)arg1 presentationAttributes:(id)arg2 ;
+(id)blockControllerForStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
+(id)layoutForStoryBlock:(id)arg1 constrainingSize:(CGSize)arg2 presentationAttributes:(id)arg3 displayContext:(id)arg4 ;
-(id)richStoryRenderable;
-(void)didGainInteractiveFocus;
-(id)initWithStoryBlock:(id)arg1 session:(id)arg2 displayContext:(id)arg3 ;
-(CGRect)contentFrameForFramesetter:(id)arg1 ;
-(void)didTapColorAtIndex:(unsigned long long)arg1 ;
@end

