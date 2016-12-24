/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBUserSession, FBMemDigitalGoodFeedUnitItem, NSIndexPath;


@protocol FBNativeAppFeedCellProtocol <NSObject>
@property (nonatomic,retain) FBUserSession * session; 
@property (nonatomic,retain) FBMemDigitalGoodFeedUnitItem * feedUnit; 
@property (assign,nonatomic,__weak) id<FBNativeAppFeedCellDelegate> delegate; 
@property (nonatomic,retain) NSIndexPath * indexPath; 
@required
-(FBMemDigitalGoodFeedUnitItem *)feedUnit;
-(void)setFeedUnit:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id<FBNativeAppFeedCellDelegate>)delegate;
-(NSIndexPath *)indexPath;
-(void)setIndexPath:(id)arg1;
-(FBUserSession *)session;
-(void)setSession:(id)arg1;

@end

