/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBInstantGameEndNavigationViewConfiguration : FBValueObject <NSCopying> {

	BOOL _shouldShowLeftButton;
	BOOL _shouldShowRightButton;
	NSString* _middleButtonTitle;

}

@property (nonatomic,readonly) BOOL shouldShowLeftButton;                      //@synthesize shouldShowLeftButton=_shouldShowLeftButton - In the implementation block
@property (nonatomic,copy,readonly) NSString * middleButtonTitle;              //@synthesize middleButtonTitle=_middleButtonTitle - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowRightButton;                     //@synthesize shouldShowRightButton=_shouldShowRightButton - In the implementation block
-(id)initWithShouldShowLeftButton:(BOOL)arg1 middleButtonTitle:(id)arg2 shouldShowRightButton:(BOOL)arg3 ;
-(BOOL)shouldShowLeftButton;
-(NSString *)middleButtonTitle;
-(BOOL)shouldShowRightButton;
@end

