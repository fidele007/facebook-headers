/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DDLogFileManager <NSObject>
@property (assign) unsigned long long maximumNumberOfLogFiles; 
@optional
-(void)didArchiveLogFile:(id)arg1;
-(void)didRollAndArchiveLogFile:(id)arg1;

@required
-(id)sortedLogFileInfos;
-(unsigned long long)maximumNumberOfLogFiles;
-(id)logsDirectory;
-(id)unsortedLogFilePaths;
-(id)unsortedLogFileInfos;
-(id)unsortedLogFileNames;
-(id)sortedLogFilePaths;
-(id)sortedLogFileNames;
-(id)createNewLogFile;
-(void)setMaximumNumberOfLogFiles:(unsigned long long)arg1;

@end
