//
//  IWPhotoBrowserManager.h
//  HomePwner
//
//  Created by Hanguang on 1/11/16.
//  Copyright © 2016 Big Nerd Ranch. All rights reserved.
//

#import <Foundation/Foundation.h>

/// <#Description#>
@class IWPhotoBrowserManager;

@protocol IWPhotoBrowserManagerDelegate <NSObject>

@optional

/**
 *  <#Description#>
 *
 *  @param mamanger <#mamanger description#>
 *  @param indexes  <#indexes description#>
 */
- (void)photoManager:(IWPhotoBrowserManager *)mamanger deletePhotosAtIndexPaths:(NSArray <NSIndexPath *> *)indexes;

@end

@interface IWPhotoBrowserManager : NSObject
@property (nonatomic, weak) id <IWPhotoBrowserManagerDelegate> delegate;
@property (nonatomic) BOOL showAssets;

/**
 *  <#Description#>
 *
 *  @return <#return value description#>
 */
+ (instancetype)sharedInstance;

/**
 *  <#Description#>
 *
 *  @param controller <#controller description#>
 *  @param modally    <#modally description#>
 */
- (void)showPhotoBrowserInViewController:(UIViewController *)controller modally:(BOOL)modally;

@end
