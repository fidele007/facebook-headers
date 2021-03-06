/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSAttributedString, NSString, FBAdInterfacesAction;

@interface FBAdInterfacesMessage : FBValueObject <NSCopying> {

	NSAttributedString* _title;
	NSAttributedString* _text;
	NSAttributedString* _bannerText;
	NSString* _imageURI;
	unsigned long long _type;
	unsigned long long _location;
	FBAdInterfacesAction* _action;
	NSString* _sourceAYMTTipID;
	NSString* _sourceAYMTChannelID;

}

@property (nonatomic,copy,readonly) NSAttributedString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * text;                    //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * bannerText;              //@synthesize bannerText=_bannerText - In the implementation block
@property (nonatomic,copy,readonly) NSString * imageURI;                          //@synthesize imageURI=_imageURI - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long location;                       //@synthesize location=_location - In the implementation block
@property (nonatomic,copy,readonly) FBAdInterfacesAction * action;                //@synthesize action=_action - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceAYMTTipID;                   //@synthesize sourceAYMTTipID=_sourceAYMTTipID - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceAYMTChannelID;               //@synthesize sourceAYMTChannelID=_sourceAYMTChannelID - In the implementation block
-(NSString *)imageURI;
-(NSString *)sourceAYMTTipID;
-(NSString *)sourceAYMTChannelID;
-(id)initWithTitle:(id)arg1 text:(id)arg2 bannerText:(id)arg3 imageURI:(id)arg4 type:(unsigned long long)arg5 location:(unsigned long long)arg6 action:(id)arg7 sourceAYMTTipID:(id)arg8 sourceAYMTChannelID:(id)arg9 ;
-(unsigned long long)type;
-(FBAdInterfacesAction *)action;
-(NSAttributedString *)title;
-(NSAttributedString *)text;
-(unsigned long long)location;
-(NSAttributedString *)bannerText;
@end

