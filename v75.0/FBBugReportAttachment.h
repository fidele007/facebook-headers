/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <Facebook/FBInvalidating.h>

@class FBAccessToken, NSString;

@interface FBBugReportAttachment : NSObject <NSCoding, FBInvalidating> {

	FBAccessToken* _accessToken;
	int _type;
	NSString* _filename;
	NSString* _backupPath;
	NSString* _bugID;

}

@property (nonatomic,copy) NSString * filename;                        //@synthesize filename=_filename - In the implementation block
@property (nonatomic,copy) NSString * backupPath;                      //@synthesize backupPath=_backupPath - In the implementation block
@property (nonatomic,copy) NSString * bugID;                           //@synthesize bugID=_bugID - In the implementation block
@property (assign,nonatomic) int type;                                 //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
+(id)savedAttachments;
+(void)saveAttachments:(id)arg1 ;
+(BOOL)_createAttachmentsFolders;
+(id)_filenameForAttachment:(id)arg1 ;
-(id)initWithImageData:(id)arg1 filename:(id)arg2 composerPath:(id)arg3 bugID:(id)arg4 accessToken:(id)arg5 ;
-(id)initWithData:(id)arg1 filename:(id)arg2 bugID:(id)arg3 accessToken:(id)arg4 ;
-(NSString *)backupPath;
-(void)setBugID:(NSString *)arg1 ;
-(void)setBackupPath:(NSString *)arg1 ;
-(NSString *)bugID;
-(id)_attachmentData;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)invalidate;
-(BOOL)isValid;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)parameters;
-(void)setFilename:(NSString *)arg1 ;
-(NSString *)filename;
@end

