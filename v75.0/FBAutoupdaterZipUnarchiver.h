/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAutoupdaterUnarchiver.h>

@protocol OS_dispatch_queue, FBAutoupdaterUnarchiverDelegate, FBAutoupdaterZipUnarchiverOutputStrategy;
@class NSFileManager, FBAutoupdaterUpdate, NSMutableDictionary, NSString, NSObject, NSProgress;

@interface FBAutoupdaterZipUnarchiver : NSObject <FBAutoupdaterUnarchiver> {

	NSFileManager* _fileManager;
	FBAutoupdaterUpdate* _currentUpdate;
	NSMutableDictionary* _manifest;
	NSMutableDictionary* _uncompressedFilesizeMap;
	NSString* _fromPath;
	NSObject*<OS_dispatch_queue> _unzipQueue;
	id<FBAutoupdaterUnarchiverDelegate> _delegate;
	id<FBAutoupdaterZipUnarchiverOutputStrategy> _outputStrategy;
	NSProgress* _progress;

}

@property (nonatomic,retain) id<FBAutoupdaterZipUnarchiverOutputStrategy> outputStrategy;              //@synthesize outputStrategy=_outputStrategy - In the implementation block
@property (assign,nonatomic,__weak) id<FBAutoupdaterUnarchiverDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSProgress * progress;                                                  //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDelegate:(id)arg1 outputStrategy:(id)arg2 ;
-(void)_initializeProgressForPath:(id)arg1 ;
-(void)_startUnarchive:(id)arg1 fromPath:(id)arg2 toPath:(id)arg3 ;
-(BOOL)_verifyInstallPreconditionsForUpdate:(id)arg1 fromPath:(id)arg2 toPath:(id)arg3 ;
-(BOOL)_unzipFromPath:(id)arg1 toPath:(id)arg2 ;
-(void)_failWithMessage:(id)arg1 underlyingError:(id)arg2 update:(id)arg3 ;
-(id)_unarchivePathForEntryAtPath:(id)arg1 ;
-(BOOL)_createSymlinkForEntry:(id)arg1 toPath:(id)arg2 ;
-(BOOL)_writeEntry:(id)arg1 toPath:(id)arg2 ;
-(void)unarchive:(id)arg1 fromPath:(id)arg2 toPath:(id)arg3 ;
-(void)unarchiveInForeground:(id)arg1 fromPath:(id)arg2 toPath:(id)arg3 ;
-(BOOL)_isSymlinkEntry:(id)arg1 ;
-(id<FBAutoupdaterZipUnarchiverOutputStrategy>)outputStrategy;
-(void)setOutputStrategy:(id<FBAutoupdaterZipUnarchiverOutputStrategy>)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<FBAutoupdaterUnarchiverDelegate>)arg1 ;
-(id<FBAutoupdaterUnarchiverDelegate>)delegate;
-(void)_cleanup;
-(id)initWithDelegate:(id)arg1 ;
-(NSProgress *)progress;
-(BOOL)_shouldCancel:(id)arg1 ;
-(BOOL)_createDirectory:(id)arg1 ;
@end
