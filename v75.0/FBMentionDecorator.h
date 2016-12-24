/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMentionDecoratableTextView, FBMentionDecoratorDelegate;
#import <Facebook/Facebook-Structs.h>
@class NSMutableSet, NSString, NSSet;

@interface FBMentionDecorator : NSObject {

	id<FBMentionDecoratableTextView> _textView;
	CFStringTokenizerRef _tokenizer;
	NSMutableSet* _mentions;
	BOOL _detectingMention;
	int _textViewDidChangeSentinel;
	BOOL _addingMention;
	BOOL _mentionAdjustmentScheduled;
	NSRange _mentionAdjustment;
	int _minimumQueryLength;
	id<FBMentionDecoratorDelegate> _delegate;
	double _queryDelay;
	NSString* _prefix;

}

@property (assign,nonatomic,__weak) id<FBMentionDecoratorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int minimumQueryLength;                                      //@synthesize minimumQueryLength=_minimumQueryLength - In the implementation block
@property (assign,nonatomic) double queryDelay;                                           //@synthesize queryDelay=_queryDelay - In the implementation block
@property (nonatomic,copy) NSString * prefix;                                             //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,copy,readonly) NSSet * committedMentions; 
-(NSSet *)committedMentions;
-(BOOL)_smartDeleteInMention:(id)arg1 caretPosition:(unsigned long long)arg2 ;
-(void)_removeMentions:(id)arg1 ;
-(void)_findPrefixBasedMention:(id)arg1 atCaretPosition:(unsigned long long)arg2 prefixRange:(NSRange)arg3 ;
-(void)_scheduleTokenBasedMentionDetectionWithSentinel:(int)arg1 ;
-(void)_detectedQuery:(id)arg1 queryRange:(NSRange)arg2 caretPosition:(unsigned long long)arg3 prefixRange:(NSRange)arg4 ;
-(void)_findTokenBasedMention:(id)arg1 atCaretPosition:(unsigned long long)arg2 prefixRange:(NSRange)arg3 ;
-(void)_finishedDetecting;
-(void)_addMention:(id)arg1 replacementRange:(NSRange)arg2 ;
-(NSRange)_extendedReplacementRange:(id)arg1 text:(id)arg2 caretPosition:(unsigned long long)arg3 context:(id)arg4 ;
-(id)_mentionAttributesForMention:(id)arg1 ;
-(id)_defaultAttributesForRemovedMention:(id)arg1 ;
-(id)initForTextView:(id)arg1 ;
-(void)addMentions:(id)arg1 ;
-(void)commitMention:(id)arg1 context:(id)arg2 ;
-(void)setMinimumQueryLength:(int)arg1 ;
-(double)queryDelay;
-(void)setQueryDelay:(double)arg1 ;
-(void)setDelegate:(id<FBMentionDecoratorDelegate>)arg1 ;
-(void)dealloc;
-(id<FBMentionDecoratorDelegate>)delegate;
-(void)reset;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)setPrefix:(NSString *)arg1 ;
-(NSString *)prefix;
-(int)minimumQueryLength;
@end

