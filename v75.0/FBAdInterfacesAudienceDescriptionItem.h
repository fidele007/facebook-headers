/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface FBAdInterfacesAudienceDescriptionItem : FBValueObject <NSCopying> {

	NSString* _title;
	NSArray* _values;

}

@property (nonatomic,copy,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSArray * values;              //@synthesize values=_values - In the implementation block
-(id)initWithTitle:(id)arg1 values:(id)arg2 ;
-(NSString *)title;
-(NSArray *)values;
@end

