/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBRichStoryEntityBlock.h>
#import <Facebook/FBCanvasPhotoBlockProtocol.h>

@class NSString, FBMemInstantShoppingDocumentPhotoElement, FBCanvasPhotoBlock, FBRichStoryAnnotationBlock;

@interface FBCanvasFeedPhotoBlock : FBRichStoryEntityBlock <FBCanvasPhotoBlockProtocol> {

	FBCanvasPhotoBlock* _canvasPhotoBlock;
	FBRichStoryAnnotationBlock* _ufiBlock;
	FBRichStoryAnnotationBlock* _textBlock;

}

@property (nonatomic,readonly) FBRichStoryAnnotationBlock * ufiBlock;                           //@synthesize ufiBlock=_ufiBlock - In the implementation block
@property (nonatomic,readonly) FBRichStoryAnnotationBlock * textBlock;                          //@synthesize textBlock=_textBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL fitToHeight; 
@property (nonatomic,readonly) BOOL tapToExpand; 
@property (nonatomic,readonly) BOOL showInteractionHint; 
@property (nonatomic,readonly) BOOL showGrayOverlay; 
@property (nonatomic,copy,readonly) NSString * previewPayload; 
@property (nonatomic,copy,readonly) NSString * loggingToken; 
@property (nonatomic,readonly) FBMemInstantShoppingDocumentPhotoElement * element; 
+(id)blockWithID:(id)arg1 annotations:(id)arg2 photo:(id)arg3 previewPayload:(id)arg4 ufiBlock:(id)arg5 textOverlay:(id)arg6 loggingToken:(id)arg7 ;
-(NSString *)previewPayload;
-(FBRichStoryAnnotationBlock *)ufiBlock;
-(BOOL)tapToExpand;
-(BOOL)showInteractionHint;
-(BOOL)showGrayOverlay;
-(NSString *)loggingToken;
-(FBRichStoryAnnotationBlock *)textBlock;
-(FBMemInstantShoppingDocumentPhotoElement *)element;
-(BOOL)fitToHeight;
@end
