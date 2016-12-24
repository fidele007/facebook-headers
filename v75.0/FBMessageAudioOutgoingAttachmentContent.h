/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <Facebook/FBMessageSingleAttachmentContentDedupable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSURL, NSString;

@interface FBMessageAudioOutgoingAttachmentContent : FBValueObject <FBMessageSingleAttachmentContentDedupable, NSCopying, NSCoding> {

	BOOL _isVoicemail;
	NSURL* _fileURL;
	double _duration;
	NSString* _mimeType;
	NSString* _filename;

}

@property (nonatomic,copy,readonly) NSURL * fileURL;                  //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) double duration;                       //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy,readonly) NSString * mimeType;              //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,copy,readonly) NSString * filename;              //@synthesize filename=_filename - In the implementation block
@property (nonatomic,readonly) BOOL isVoicemail;                      //@synthesize isVoicemail=_isVoicemail - In the implementation block
-(id)initWithFileURL:(id)arg1 duration:(double)arg2 mimeType:(id)arg3 filename:(id)arg4 isVoicemail:(BOOL)arg5 ;
-(id)dedupeKey;
-(double)duration;
-(NSString *)mimeType;
-(NSURL *)fileURL;
-(BOOL)isVoicemail;
-(NSString *)filename;
@end
