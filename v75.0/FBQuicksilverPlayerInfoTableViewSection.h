/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface FBQuicksilverPlayerInfoTableViewSection : FBValueObject <NSCopying> {

	BOOL _isNullState;
	long long _sectionType;
	NSString* _title;
	double _cellHeight;
	NSArray* _cellsViewModel;

}

@property (nonatomic,readonly) long long sectionType;                      //@synthesize sectionType=_sectionType - In the implementation block
@property (nonatomic,readonly) BOOL isNullState;                           //@synthesize isNullState=_isNullState - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) double cellHeight;                          //@synthesize cellHeight=_cellHeight - In the implementation block
@property (nonatomic,copy,readonly) NSArray * cellsViewModel;              //@synthesize cellsViewModel=_cellsViewModel - In the implementation block
-(NSArray *)cellsViewModel;
-(BOOL)isNullState;
-(id)initWithSectionType:(long long)arg1 isNullState:(BOOL)arg2 title:(id)arg3 cellHeight:(double)arg4 cellsViewModel:(id)arg5 ;
-(NSString *)title;
-(double)cellHeight;
-(long long)sectionType;
@end

