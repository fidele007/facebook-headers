/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNThreadReadMarkValue;

@interface MNThreadReadMark : FBValueObject <NSCopying, NSCoding> {

	MNThreadReadMarkValue* _markValue;

}

@property (nonatomic,copy,readonly) MNThreadReadMarkValue * markValue;              //@synthesize markValue=_markValue - In the implementation block
+(id)newMarkWithValue:(id)arg1 ;
-(id)initWithMarkValue:(id)arg1 ;
-(MNThreadReadMarkValue *)markValue;
@end

