/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMessageVideoAttachmentContent, NSString, NSData, NSURL;

@interface _FBMutableVideoAttachmentInfo : NSObject {

	FBMessageVideoAttachmentContent* _videoAttachmentContent;
	NSString* _sha256Hash;
	NSData* _videoData;
	unsigned long long _estimatedFileSize;
	NSURL* _localURL;
	NSString* _messageOfflineId;

}

@property (nonatomic,copy) NSString * sha256Hash;                               //@synthesize sha256Hash=_sha256Hash - In the implementation block
@property (nonatomic,copy) NSData * videoData;                                  //@synthesize videoData=_videoData - In the implementation block
@property (assign,nonatomic) unsigned long long estimatedFileSize;              //@synthesize estimatedFileSize=_estimatedFileSize - In the implementation block
@property (nonatomic,copy) NSURL * localURL;                                    //@synthesize localURL=_localURL - In the implementation block
@property (nonatomic,copy) NSString * messageOfflineId;                         //@synthesize messageOfflineId=_messageOfflineId - In the implementation block
-(id)immutableCopy;
-(id)initWithVideoAttachmentContent:(id)arg1 ;
-(NSString *)sha256Hash;
-(void)setSha256Hash:(NSString *)arg1 ;
-(void)setEstimatedFileSize:(unsigned long long)arg1 ;
-(NSString *)messageOfflineId;
-(void)setMessageOfflineId:(NSString *)arg1 ;
-(unsigned long long)estimatedFileSize;
-(NSURL *)localURL;
-(void)setVideoData:(NSData *)arg1 ;
-(NSData *)videoData;
-(void)setLocalURL:(NSURL *)arg1 ;
@end

