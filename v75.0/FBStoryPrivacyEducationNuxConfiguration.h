/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIImage;

@interface FBStoryPrivacyEducationNuxConfiguration : FBValueObject <NSCopying> {

	NSString* _nuxTitle;
	NSString* _educationContent;
	UIImage* _icon;
	UIImage* _smallIcon;

}

@property (nonatomic,copy,readonly) NSString * nuxTitle;                      //@synthesize nuxTitle=_nuxTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * educationContent;              //@synthesize educationContent=_educationContent - In the implementation block
@property (nonatomic,copy,readonly) UIImage * icon;                           //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy,readonly) UIImage * smallIcon;                      //@synthesize smallIcon=_smallIcon - In the implementation block
-(NSString *)nuxTitle;
-(NSString *)educationContent;
-(id)initWithNuxTitle:(id)arg1 educationContent:(id)arg2 icon:(id)arg3 smallIcon:(id)arg4 ;
-(UIImage *)icon;
-(UIImage *)smallIcon;
@end

