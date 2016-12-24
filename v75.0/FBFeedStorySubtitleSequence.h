/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBFeedHeaderSubtitleSequence.h>

@class FBMemFeedStory, FBFontFoundry, UIColor, NSString;

@interface FBFeedStorySubtitleSequence : NSObject <FBFeedHeaderSubtitleSequence> {

	FBMemFeedStory* _story;
	FBFontFoundry* _fontFoundry;
	BOOL _includeFeedTopics;
	BOOL _storyIsInPermalink;
	BOOL _useExpandedDate;
	unsigned long long _currentSize;
	BOOL _privacyRendering;
	unsigned long long _privacyOptions;
	UIColor* _privacyColor;
	BOOL _isFIGEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sequenceWithStory:(id)arg1 fontFoundry:(id)arg2 storyIsInPermalink:(BOOL)arg3 useExpandedDate:(BOOL)arg4 privacyRendering:(BOOL)arg5 privacyOptions:(unsigned long long)arg6 privacyColor:(id)arg7 isFIGEnabled:(BOOL)arg8 ;
+(id)subtitleForStory:(id)arg1 fontFoundry:(id)arg2 truncationMode:(unsigned long long)arg3 storyIsInPermalink:(BOOL)arg4 useExpandedDate:(BOOL)arg5 privacyRendering:(BOOL)arg6 privacyOptions:(unsigned long long)arg7 privacyColor:(id)arg8 isFIGEnabled:(BOOL)arg9 ;
+(void)setShouldDisableAppAttributionLink:(BOOL)arg1 ;
+(void)setShouldMakeTimestampTappable:(BOOL)arg1 ;
-(id)initWithStory:(id)arg1 fontFoundry:(id)arg2 storyIsInPermalink:(BOOL)arg3 useExpandedDate:(BOOL)arg4 privacyRendering:(BOOL)arg5 privacyOptions:(unsigned long long)arg6 privacyColor:(id)arg7 isFIGEnabled:(BOOL)arg8 ;
-(id)generateSubtitleWithSize:(unsigned long long)arg1 ;
-(id)next;
@end
