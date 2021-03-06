/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBMCallToAction : FBValueObject <NSCoding, NSCopying> {

	BOOL _isMutable;
	BOOL _isDisabled;
	NSString* _graphQLID;
	NSString* _actionTitle;
	NSString* _actionURLString;
	NSString* _nativeURLString;
	NSString* _actionOpenType;
	double _displayHeightRatioForActionUrl;

}

@property (nonatomic,copy,readonly) NSString * graphQLID;                          //@synthesize graphQLID=_graphQLID - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionTitle;                        //@synthesize actionTitle=_actionTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionURLString;                    //@synthesize actionURLString=_actionURLString - In the implementation block
@property (nonatomic,copy,readonly) NSString * nativeURLString;                    //@synthesize nativeURLString=_nativeURLString - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionOpenType;                     //@synthesize actionOpenType=_actionOpenType - In the implementation block
@property (nonatomic,readonly) BOOL isMutable;                                     //@synthesize isMutable=_isMutable - In the implementation block
@property (nonatomic,readonly) BOOL isDisabled;                                    //@synthesize isDisabled=_isDisabled - In the implementation block
@property (nonatomic,readonly) double displayHeightRatioForActionUrl;              //@synthesize displayHeightRatioForActionUrl=_displayHeightRatioForActionUrl - In the implementation block
-(NSString *)graphQLID;
-(NSString *)nativeURLString;
-(id)initWithGraphQLID:(id)arg1 actionTitle:(id)arg2 actionURLString:(id)arg3 nativeURLString:(id)arg4 actionOpenType:(id)arg5 isMutable:(BOOL)arg6 isDisabled:(BOOL)arg7 displayHeightRatioForActionUrl:(double)arg8 ;
-(double)displayHeightRatioForActionUrl;
-(NSString *)actionOpenType;
-(NSString *)actionURLString;
-(BOOL)isMutable;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isDisabled;
-(NSString *)actionTitle;
@end

