/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBActivitySharingFlowManager;

@interface FBActivitySharingTableViewCellFactory : NSObject {

	double _topInset;
	FBActivitySharingFlowManager* _flowManager;

}

@property (assign,nonatomic) double topInset;                                                //@synthesize topInset=_topInset - In the implementation block
@property (assign,nonatomic,__weak) FBActivitySharingFlowManager * flowManager;              //@synthesize flowManager=_flowManager - In the implementation block
+(id)filledInCellWithReuseIdentifier:(id)arg1 prefix:(id)arg2 selection:(id)arg3 ;
+(id)defaultCellWithReuseIdentifier:(id)arg1 ;
+(id)expandedCellWithReuseIdentifier:(id)arg1 ;
+(void)configureDefaultCell:(id)arg1 pickerDataSource:(id)arg2 ;
+(void)configureExpandedCell:(id)arg1 ;
+(void)configureFilledInCell:(id)arg1 pickerDataSource:(id)arg2 ;
-(void)setFlowManager:(FBActivitySharingFlowManager *)arg1 ;
-(id)cellIdentifierForPickerDataSource:(id)arg1 indexPath:(id)arg2 ;
-(id)cellWithReuseIdentifier:(id)arg1 pickerDataSource:(id)arg2 indexPath:(id)arg3 ;
-(void)configureCell:(id)arg1 pickerDataSource:(id)arg2 reuseIdentifier:(id)arg3 ;
-(double)sectionHeightWithTableHeight:(double)arg1 dataSourceState:(long long)arg2 ;
-(double)cellHeightWithTableHeight:(double)arg1 dataSource:(id)arg2 indexPath:(id)arg3 ;
-(FBActivitySharingFlowManager *)flowManager;
-(double)topInset;
-(void)setTopInset:(double)arg1 ;
@end

