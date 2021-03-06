/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSAttributedString, UIImage, NSURL;

@interface FBLocalPhotoMenuUploadEducationRow : NSObject <NSCopying> {

	unsigned long long _subtype;
	NSAttributedString* _titleRow_titleText;
	NSAttributedString* _iconRow_text;
	UIImage* _iconRow_icon;
	NSAttributedString* _linkRow_text;
	NSURL* _linkRow_link;

}
+(id)titleRowWithTitleText:(id)arg1 ;
+(id)iconRowWithText:(id)arg1 icon:(id)arg2 ;
+(id)linkRowWithText:(id)arg1 link:(id)arg2 ;
-(void)matchTitleRow:(/*^block*/id)arg1 iconRow:(/*^block*/id)arg2 linkRow:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

