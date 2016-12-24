/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBRapidReportingContainerState : FBValueObject <NSCopying> {

	BOOL _isSubmitted;
	BOOL _highlightWarning;

}

@property (nonatomic,readonly) BOOL isSubmitted;                   //@synthesize isSubmitted=_isSubmitted - In the implementation block
@property (nonatomic,readonly) BOOL highlightWarning;              //@synthesize highlightWarning=_highlightWarning - In the implementation block
-(id)initWithIsSubmitted:(BOOL)arg1 highlightWarning:(BOOL)arg2 ;
-(BOOL)isSubmitted;
-(BOOL)highlightWarning;
@end
