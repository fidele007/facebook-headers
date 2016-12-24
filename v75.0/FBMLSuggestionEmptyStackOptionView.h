/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBMLOptionContentViewResponder.h>

@protocol FBMLSuggestionEmptyStackOptionViewResponder;
@class FBMLOptionContentView, FBMLBubbleWrapView, FBMLOptionViewArrowMetrics, NSString;

@interface FBMLSuggestionEmptyStackOptionView : UIView <FBMLOptionContentViewResponder> {

	FBMLOptionContentView* _contentView;
	FBMLBubbleWrapView* _bubbleView;
	id<FBMLSuggestionEmptyStackOptionViewResponder> _responder;
	FBMLOptionViewArrowMetrics* _arrowMetrics;

}

@property (assign,nonatomic,__weak) id<FBMLSuggestionEmptyStackOptionViewResponder> responder;              //@synthesize responder=_responder - In the implementation block
@property (nonatomic,copy) FBMLOptionViewArrowMetrics * arrowMetrics;                                       //@synthesize arrowMetrics=_arrowMetrics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didTapOptionContentView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 image:(id)arg2 prompt:(id)arg3 arrowMetrics:(id)arg4 ;
-(void)setArrowMetrics:(FBMLOptionViewArrowMetrics *)arg1 ;
-(FBMLOptionViewArrowMetrics *)arrowMetrics;
-(void)layoutSubviews;
-(void)setResponder:(id<FBMLSuggestionEmptyStackOptionViewResponder>)arg1 ;
-(id<FBMLSuggestionEmptyStackOptionViewResponder>)responder;
@end
