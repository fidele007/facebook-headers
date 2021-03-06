/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBSearchResultsFiltersCellModel : FBValueObject <NSCopying> {

	BOOL _cellSelected;
	NSString* _labelText;
	NSString* _filterIconName;

}

@property (nonatomic,copy,readonly) NSString * labelText;                   //@synthesize labelText=_labelText - In the implementation block
@property (nonatomic,copy,readonly) NSString * filterIconName;              //@synthesize filterIconName=_filterIconName - In the implementation block
@property (nonatomic,readonly) BOOL cellSelected;                           //@synthesize cellSelected=_cellSelected - In the implementation block
-(id)initWithLabelText:(id)arg1 filterIconName:(id)arg2 cellSelected:(BOOL)arg3 ;
-(NSString *)filterIconName;
-(NSString *)labelText;
-(BOOL)cellSelected;
@end

