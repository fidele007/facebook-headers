/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface FBNotificationToken : NSObject <NSCoding> {

	BOOL _isWorkExternalEntity;
	unsigned long long _tokenType;
	NSRange _range;

}

@property (nonatomic,readonly) NSRange range;                             //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) unsigned long long tokenType;              //@synthesize tokenType=_tokenType - In the implementation block
@property (nonatomic,readonly) BOOL isWorkExternalEntity;                 //@synthesize isWorkExternalEntity=_isWorkExternalEntity - In the implementation block
-(id)initWithRange:(NSRange)arg1 tokenType:(unsigned long long)arg2 isWorkExternalEntity:(BOOL)arg3 ;
-(BOOL)isWorkExternalEntity;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSRange)range;
-(unsigned long long)tokenType;
@end

