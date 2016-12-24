/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, NSArray;

@interface FBCommentComposerAccessoryContainerView : UIView {

	unsigned long long _feedbackContainerType;
	NSMutableArray* _internalButtons;

}

@property (nonatomic,copy,readonly) NSArray * buttons; 
-(id)initWithFeedbackContainerType:(unsigned long long)arg1 ;
-(BOOL)insertButton:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)removeButton:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSArray *)buttons;
-(void)addButton:(id)arg1 ;
@end

