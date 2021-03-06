/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBVersionedFileConfigurationDelegate.h>

@protocol FBVersionedEGODatabaseFileConfigurerDelegate;
@class FBAnalytics, NSString, NSSet, EGODatabase;

@interface FBVersionedEGODatabaseFileConfigurer : NSObject <FBVersionedFileConfigurationDelegate> {

	FBAnalytics* _analytics;
	NSString* _analyticsModule;
	NSString* _createTablesSql;
	NSString* _selectVersionSql;
	NSSet* _expectedTableNames;
	long long _fileProtection;
	EGODatabase* _db;
	id<FBVersionedEGODatabaseFileConfigurerDelegate> _delegate;

}

@property (nonatomic,readonly) EGODatabase * db;                                                            //@synthesize db=_db - In the implementation block
@property (assign,nonatomic,__weak) id<FBVersionedEGODatabaseFileConfigurerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAnalyticsModule:(id)arg1 createTablesSql:(id)arg2 selectVersionSql:(id)arg3 expectedTableNames:(id)arg4 fileProtection:(long long)arg5 analytics:(id)arg6 ;
-(id)_expectedTablesThatAreMissing;
-(void)beginConfigurationOfVersionedFile:(id)arg1 ;
-(void)didCompleteConfigurationWithSuccess:(BOOL)arg1 ;
-(BOOL)provisionSchemaForFile;
-(id)openFile;
-(BOOL)checkIntegrityForVersionedFile;
-(id)readCurrentVersionForFile;
-(BOOL)performFinalValidationCheck;
-(void)notifyDidDiscardFile;
-(void)setDelegate:(id<FBVersionedEGODatabaseFileConfigurerDelegate>)arg1 ;
-(id<FBVersionedEGODatabaseFileConfigurerDelegate>)delegate;
-(EGODatabase *)db;
@end

