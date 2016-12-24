/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSAttributedString;

@interface FBPlaceMenuManagementRow : NSObject <NSCopying> {

	unsigned long long _subtype;
	NSAttributedString* _titleRow_titleText;
	NSAttributedString* _photoMenuRow_text;
	NSAttributedString* _photoMenuRow_subtext;
	BOOL _photoMenuRow_selected;
	NSAttributedString* _linkMenuRow_text;
	NSAttributedString* _linkMenuRow_subtext;
	BOOL _linkMenuRow_selected;
	NSAttributedString* _structuredMenuRow_text;
	NSAttributedString* _structuredMenuRow_subtext;
	BOOL _structuredMenuRow_selected;
	NSAttributedString* _noMenuRow_text;
	NSAttributedString* _noMenuRow_subtext;
	BOOL _noMenuRow_selected;

}
+(id)titleRowWithTitleText:(id)arg1 ;
+(id)photoMenuRowWithText:(id)arg1 subtext:(id)arg2 selected:(BOOL)arg3 ;
+(id)structuredMenuRowWithText:(id)arg1 subtext:(id)arg2 selected:(BOOL)arg3 ;
+(id)linkMenuRowWithText:(id)arg1 subtext:(id)arg2 selected:(BOOL)arg3 ;
+(id)noMenuRowWithText:(id)arg1 subtext:(id)arg2 selected:(BOOL)arg3 ;
-(void)matchTitleRow:(/*^block*/id)arg1 photoMenuRow:(/*^block*/id)arg2 linkMenuRow:(/*^block*/id)arg3 structuredMenuRow:(/*^block*/id)arg4 noMenuRow:(/*^block*/id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

