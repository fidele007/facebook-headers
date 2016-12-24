/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, FBComposerCompositionChangePermissions;

@interface FBComposerViewMediaAttachmentsItem : FBValueObject <NSCopying> {

	BOOL _showItem;
	NSArray* _mediaAttachments;
	FBComposerCompositionChangePermissions* _changePermissions;

}

@property (nonatomic,readonly) BOOL showItem;                                                                //@synthesize showItem=_showItem - In the implementation block
@property (nonatomic,copy,readonly) NSArray * mediaAttachments;                                              //@synthesize mediaAttachments=_mediaAttachments - In the implementation block
@property (nonatomic,copy,readonly) FBComposerCompositionChangePermissions * changePermissions;              //@synthesize changePermissions=_changePermissions - In the implementation block
-(FBComposerCompositionChangePermissions *)changePermissions;
-(BOOL)showItem;
-(id)initWithShowItem:(BOOL)arg1 mediaAttachments:(id)arg2 changePermissions:(id)arg3 ;
-(NSArray *)mediaAttachments;
@end

