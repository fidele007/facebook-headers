/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBMemGraphSearchQueryFilterGroup, FBModifiedFilterState;

@interface FBSearchResultsPillter : FBValueObject <NSCopying> {

	BOOL _selected;
	NSString* _title;
	unsigned long long _accessoryStyle;
	FBMemGraphSearchQueryFilterGroup* _filterGroup;
	FBModifiedFilterState* _modifiedState;

}

@property (nonatomic,copy,readonly) NSString * title;                                            //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL selected;                                                    //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) unsigned long long accessoryStyle;                                //@synthesize accessoryStyle=_accessoryStyle - In the implementation block
@property (nonatomic,copy,readonly) FBMemGraphSearchQueryFilterGroup * filterGroup;              //@synthesize filterGroup=_filterGroup - In the implementation block
@property (nonatomic,copy,readonly) FBModifiedFilterState * modifiedState;                       //@synthesize modifiedState=_modifiedState - In the implementation block
-(id)initWithTitle:(id)arg1 selected:(BOOL)arg2 accessoryStyle:(unsigned long long)arg3 filterGroup:(id)arg4 modifiedState:(id)arg5 ;
-(FBMemGraphSearchQueryFilterGroup *)filterGroup;
-(FBModifiedFilterState *)modifiedState;
-(NSString *)title;
-(BOOL)selected;
-(unsigned long long)accessoryStyle;
@end
