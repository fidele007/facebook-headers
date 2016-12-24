/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:55 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSNumber;

@interface FBComposerVideoAttachmentCopyrightState : FBValueObject <NSCopying, NSCoding> {

	BOOL _hasDetectedCopyright;
	NSString* _fbid;
	unsigned long long _category;
	NSNumber* _score;

}

@property (nonatomic,readonly) BOOL hasDetectedCopyright;                //@synthesize hasDetectedCopyright=_hasDetectedCopyright - In the implementation block
@property (nonatomic,copy,readonly) NSString * fbid;                     //@synthesize fbid=_fbid - In the implementation block
@property (nonatomic,readonly) unsigned long long category;              //@synthesize category=_category - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * score;                    //@synthesize score=_score - In the implementation block
-(NSString *)fbid;
-(BOOL)hasDetectedCopyright;
-(id)initWithHasDetectedCopyright:(BOOL)arg1 fbid:(id)arg2 category:(unsigned long long)arg3 score:(id)arg4 ;
-(unsigned long long)category;
-(NSNumber *)score;
@end
