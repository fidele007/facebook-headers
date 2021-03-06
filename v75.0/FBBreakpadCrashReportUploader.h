/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBBreakpadCrashReportProcessor.h>

@class FileUploadAttachment, NSString, NSDictionary;

@interface FBBreakpadCrashReportUploader : NSObject <FBBreakpadCrashReportProcessor> {

	/*^block*/id _uploadAttachmentBlock;
	FileUploadAttachment* _uploadAttachment;
	/*^block*/id _criticalLogDataBlock;
	NSString* _criticalLogData;
	/*^block*/id _corruptionTrapLogsBlock;
	NSDictionary* _corruptionTrapLogs;
	BOOL _userIsEmployee;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)process:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)initWithUploadAttachmentBlock:(/*^block*/id)arg1 criticalLogDataBlock:(/*^block*/id)arg2 corruptionTrapLogs:(/*^block*/id)arg3 userIsEmployee:(BOOL)arg4 ;
@end

