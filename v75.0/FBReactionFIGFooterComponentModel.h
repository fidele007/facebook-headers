/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBReactionFIGFooterComponentModel : FBValueObject <NSCopying> {

	BOOL _showsChevron;
	NSString* _message;

}

@property (nonatomic,copy,readonly) NSString * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) BOOL showsChevron;                    //@synthesize showsChevron=_showsChevron - In the implementation block
-(id)initWithMessage:(id)arg1 showsChevron:(BOOL)arg2 ;
-(BOOL)showsChevron;
-(NSString *)message;
@end

