/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSAttributedString;

@interface FBComposerAttributedStringReductionTracker : NSObject {

	NSAttributedString* _accumulatedAttributedText;
	unsigned long long _consumedUpToLocationInText;
	NSAttributedString* _text;

}

@property (nonatomic,copy,readonly) NSAttributedString * accumulatedAttributedText;              //@synthesize accumulatedAttributedText=_accumulatedAttributedText - In the implementation block
@property (nonatomic,readonly) unsigned long long consumedUpToLocationInText;                    //@synthesize consumedUpToLocationInText=_consumedUpToLocationInText - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * text;                                   //@synthesize text=_text - In the implementation block
-(NSAttributedString *)accumulatedAttributedText;
-(id)initWithText:(id)arg1 accumulatedAttributedText:(id)arg2 consumedUpToLocationInText:(unsigned long long)arg3 ;
-(unsigned long long)consumedUpToLocationInText;
-(id)description;
-(NSAttributedString *)text;
@end

