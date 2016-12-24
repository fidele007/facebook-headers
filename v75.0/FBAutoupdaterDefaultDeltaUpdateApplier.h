/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAutoupdaterDeltaUpdateApplier.h>

@class NSFileManager, NSString;

@interface FBAutoupdaterDefaultDeltaUpdateApplier : NSObject <FBAutoupdaterDeltaUpdateApplier> {

	NSFileManager* _fileManager;

}

@property (nonatomic,retain) NSFileManager * fileManager;              //@synthesize fileManager=_fileManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFileManager:(id)arg1 ;
-(id)_readDeltaUpdateManifestAtUpdatePath:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyDeltaUpdate:(id)arg1 atPath:(id)arg2 source:(id)arg3 destination:(id)arg4 error:(id*)arg5 ;
-(BOOL)addFileAtPath:(id)arg1 toDestinationPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeFileAtPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)patchFileAtPath:(id)arg1 patchPath:(id)arg2 checksum:(id)arg3 size:(id)arg4 error:(id*)arg5 ;
-(id)init;
-(NSFileManager *)fileManager;
-(void)setFileManager:(NSFileManager *)arg1 ;
@end

