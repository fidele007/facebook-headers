/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:02 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class CKTextComponentLayer, CKHighlightOverlayLayer;

@interface CKTextComponentLayerHighlighter : NSObject {

	CKTextComponentLayer* _textComponentLayer;
	CKHighlightOverlayLayer* _highlightOverlayLayer;
	NSRange _highlightedRange;

}

@property (assign,nonatomic) NSRange highlightedRange;              //@synthesize highlightedRange=_highlightedRange - In the implementation block
-(NSRange)highlightedRange;
-(void)setHighlightedRange:(NSRange)arg1 ;
-(id)initWithTextComponentLayer:(id)arg1 ;
-(void)layoutHighlight;
@end

