/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBContactImportPermissionListener.h>
#import <Facebook/FBLocalContactsSyncCancellationListener.h>
#import <Facebook/FBImportedContactsDownloadCancellationListener.h>

@protocol FBContactImportPermissionListener, FBImportedContactsSyncListener;
@class NSString;

@interface FBContactImportCancellationProcessor : NSObject <FBContactImportPermissionListener, FBLocalContactsSyncCancellationListener, FBImportedContactsDownloadCancellationListener> {

	unsigned long long _currentState;
	id<FBContactImportPermissionListener> _importedContactsDownloadPermissionHandler;
	id<FBImportedContactsSyncListener> _listener;
	id<FBContactImportPermissionListener> _localContactsSyncPermissionHandler;
	id<FBContactImportPermissionListener> _permissionListener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)contactImportingAllowed;
-(void)contactImportingDisallowed;
-(void)localContactsSyncingDisallowedWhenUploadingContacts;
-(void)localContactsSyncingDisallowedWhileInactive;
-(void)importedContactsDownloadDisallowedWhileDownloadingContacts;
-(void)importedContactsDownloadDisallowedWhileInactive;
-(id)initWithLocalContactsSyncPermissionHandler:(id)arg1 importedContactsDownloadPermissionHandler:(id)arg2 listener:(id)arg3 permissionListener:(id)arg4 ;
@end
