//
//  UIWindow+DetoxUtils.h
//  Detox
//
//  Created by Leo Natan (Wix) on 6/4/20.
//  Copyright © 2020 Wix. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIWindow (DetoxUtils)

@property (nonatomic, strong, class, readonly, nullable) UIWindow* dtx_keyWindow;
@property (nonatomic, strong, class, readonly) NSArray<UIWindow*>* dtx_allKeyWindowSceneWindows;

+ (NSArray<UIWindow*>*)dtx_allWindows;
+ (NSArray<UIWindow*>*)dtx_allWindowsForScene:(nullable id /* UIWindowScene* */)scene;
+ (void)dtx_enumerateAllWindowsUsingBlock:(void (NS_NOESCAPE ^)(UIWindow* obj, NSUInteger idx, BOOL *stop))block;
+ (void)dtx_enumerateKeyWindowSceneWindowsUsingBlock:(void (NS_NOESCAPE ^)(UIWindow* obj, NSUInteger idx, BOOL *stop))block;
+ (void)dtx_enumerateWindowsInScene:(nullable id /* UIWindowScene* */)scene usingBlock:(void (NS_NOESCAPE ^)(UIWindow* obj, NSUInteger idx, BOOL *stop))block;

@end

NS_ASSUME_NONNULL_END
