/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, FBMemTextWithEntities;

@interface FBPageCTAAdminInfoFields : FBValueObject <NSCopying> {

	NSString* _title;
	NSString* _subtitle;
	NSString* _fieldType;
	NSString* _fieldKey;
	NSString* _fieldValue;
	NSArray* _options;
	NSString* _hint;
	NSArray* _subfields;
	FBMemTextWithEntities* _body;

}

@property (nonatomic,copy,readonly) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                       //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * fieldType;                      //@synthesize fieldType=_fieldType - In the implementation block
@property (nonatomic,copy,readonly) NSString * fieldKey;                       //@synthesize fieldKey=_fieldKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * fieldValue;                     //@synthesize fieldValue=_fieldValue - In the implementation block
@property (nonatomic,copy,readonly) NSArray * options;                         //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSString * hint;                           //@synthesize hint=_hint - In the implementation block
@property (nonatomic,copy,readonly) NSArray * subfields;                       //@synthesize subfields=_subfields - In the implementation block
@property (nonatomic,copy,readonly) FBMemTextWithEntities * body;              //@synthesize body=_body - In the implementation block
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 fieldType:(id)arg3 fieldKey:(id)arg4 fieldValue:(id)arg5 options:(id)arg6 hint:(id)arg7 subfields:(id)arg8 body:(id)arg9 ;
-(NSString *)fieldKey;
-(NSArray *)subfields;
-(NSString *)title;
-(NSString *)subtitle;
-(FBMemTextWithEntities *)body;
-(NSArray *)options;
-(NSString *)hint;
-(NSString *)fieldValue;
-(NSString *)fieldType;
@end

