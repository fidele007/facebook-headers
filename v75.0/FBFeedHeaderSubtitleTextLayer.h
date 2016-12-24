/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBAsyncLayer.h>

@protocol FBFeedHeaderSubtitleSequenceGenerator;
@class FBRichTextHighlightLayer;

@interface FBFeedHeaderSubtitleTextLayer : FBAsyncLayer {

	FBRichTextHighlightLayer* _highlightLayer;
	NSRange _highlightedRange;
	mutex _highlightedRangeLock;
	mutex _useExperimentalLayoutLogicLock;
	mutex _subtitleSequenceGeneratorLock;
	mutex _maximumNumberOfLinesLock;
	mutex _postIsInPermalinkLock;
	mutex _isFIGEnabledLock;
	id<FBFeedHeaderSubtitleSequenceGenerator> _subtitleSequenceGenerator;
	BOOL _useExperimentalLayoutLogic;
	unsigned long long _maximumNumberOfLines;
	BOOL _postIsInPermalink;
	BOOL _isFIGEnabled;

}

@property (retain) id<FBFeedHeaderSubtitleSequenceGenerator> subtitleSequenceGenerator; 
@property (assign) BOOL useExperimentalLayoutLogic; 
@property (assign) unsigned long long maximumNumberOfLines; 
@property (assign) BOOL postIsInPermalink; 
@property (assign) BOOL isFIGEnabled; 
@property (assign,nonatomic) NSRange highlightedRange; 
@property (nonatomic,readonly) CGRect highlightedRect; 
+(void)drawInContext:(CGContextRef)arg1 parameters:(id)arg2 ;
+(id)defaultValueForKey:(id)arg1 ;
-(id)textCheckingResultAtPoint:(CGPoint)arg1 ;
-(unsigned long long)textIndexAtPoint:(CGPoint)arg1 ;
-(id<FBFeedHeaderSubtitleSequenceGenerator>)subtitleSequenceGenerator;
-(BOOL)useExperimentalLayoutLogic;
-(BOOL)postIsInPermalink;
-(BOOL)isFIGEnabled;
-(void)setSubtitleSequenceGenerator:(id<FBFeedHeaderSubtitleSequenceGenerator>)arg1 ;
-(void)setUseExperimentalLayoutLogic:(BOOL)arg1 ;
-(void)setPostIsInPermalink:(BOOL)arg1 ;
-(NSRange)highlightedRange;
-(void)setHighlightedRange:(NSRange)arg1 ;
-(void)setIsFIGEnabled:(BOOL)arg1 ;
-(CGRect)highlightedRect;
-(id)drawParameters;
-(void)setNeedsDisplayOnBoundsChange:(BOOL)arg1 ;
-(void)dealloc;
-(id)state;
-(void)setMaximumNumberOfLines:(unsigned long long)arg1 ;
-(void)layoutSublayers;
-(unsigned long long)maximumNumberOfLines;
@end

