/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBComponentChangesetWriter.h>

@protocol FBComposerTextViewChangesetWriterDelegate;
@class FBComponentCollectionViewDataSource, NSString;

@interface FBComposerTextViewChangesetWriter : NSObject <FBComponentChangesetWriter> {

	FBComponentCollectionViewDataSource* _dataSource;
	id<FBComposerTextViewChangesetWriterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBComposerTextViewChangesetWriterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)applyChangeset:(id)arg1 userInfo:(id)arg2 ;
-(void)setDelegate:(id<FBComposerTextViewChangesetWriterDelegate>)arg1 ;
-(id<FBComposerTextViewChangesetWriterDelegate>)delegate;
-(id)initWithDataSource:(id)arg1 ;
@end

