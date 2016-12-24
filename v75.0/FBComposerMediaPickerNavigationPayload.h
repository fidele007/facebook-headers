/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBComposerMediaPickerNavigationPayload : FBValueObject <NSCopying> {

	BOOL _allowUnselectMediaAttachments;
	unsigned long long _mediaFilter;

}

@property (nonatomic,readonly) unsigned long long mediaFilter;                  //@synthesize mediaFilter=_mediaFilter - In the implementation block
@property (nonatomic,readonly) BOOL allowUnselectMediaAttachments;              //@synthesize allowUnselectMediaAttachments=_allowUnselectMediaAttachments - In the implementation block
-(unsigned long long)mediaFilter;
-(id)initWithMediaFilter:(unsigned long long)arg1 allowUnselectMediaAttachments:(BOOL)arg2 ;
-(BOOL)allowUnselectMediaAttachments;
@end

