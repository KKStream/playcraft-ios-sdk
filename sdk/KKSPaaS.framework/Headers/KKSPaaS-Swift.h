// Generated by Apple Swift version 5.4 (swiftlang-1205.0.26.9 clang-1205.0.19.55)
#ifndef KKSPAAS_SWIFT_H
#define KKSPAAS_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import AVFoundation;
@import AVKit;
@import CoreData;
@import CoreGraphics;
@import Foundation;
@import GoogleCast;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="KKSPaaS",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif



/// Asset keep the downloaded required information such as AVURLAsset & Bitrate etc.
/// Give AssetResourceLoaderErrorDelegate which help caller can monitor the error type
/// The core of download request occur in Asset+AVAssetResourceLoaderDelegate.swift
SWIFT_CLASS("_TtC7KKSPaaS5Asset")
@interface Asset : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end





@class AVContentKeySession;
@class AVContentKeyRequest;
@class AVPersistableContentKeyRequest;
@class NSNumber;
@class NSData;

@interface Asset (SWIFT_EXTENSION(KKSPaaS)) <AVContentKeySessionDelegate>
- (void)contentKeySession:(AVContentKeySession * _Nonnull)session didProvideContentKeyRequest:(AVContentKeyRequest * _Nonnull)keyRequest;
- (void)contentKeySession:(AVContentKeySession * _Nonnull)session didProvidePersistableContentKeyRequest:(AVPersistableContentKeyRequest * _Nonnull)keyRequest;
- (void)contentKeySession:(AVContentKeySession * _Nonnull)session didProvideRenewingContentKeyRequest:(AVContentKeyRequest * _Nonnull)keyRequest;
- (void)contentKeySession:(AVContentKeySession * _Nonnull)session contentKeyRequestDidSucceed:(AVContentKeyRequest * _Nonnull)keyRequest;
- (BOOL)contentKeySession:(AVContentKeySession * _Nonnull)session shouldRetryContentKeyRequest:(AVContentKeyRequest * _Nonnull)keyRequest reason:(AVContentKeyRequestRetryReason _Nonnull)retryReason SWIFT_WARN_UNUSED_RESULT;
- (void)contentKeySession:(AVContentKeySession * _Nonnull)session didUpdatePersistableContentKey:(NSData * _Nonnull)persistableContentKey forContentKeyIdentifier:(id _Nonnull)keyIdentifier;
- (void)contentKeySession:(AVContentKeySession * _Nonnull)session contentKeyRequest:(AVContentKeyRequest * _Nonnull)keyRequest didFailWithError:(NSError * _Nonnull)err;
@end


SWIFT_CLASS("_TtC7KKSPaaS19AudioSessionManager")
@interface AudioSessionManager : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@class NSEntityDescription;
@class NSManagedObjectContext;

SWIFT_CLASS_NAMED("DownloadInfoEntity")
@interface DownloadInfoEntity : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end

@class NSString;

@interface DownloadInfoEntity (SWIFT_EXTENSION(KKSPaaS))
@property (nonatomic, copy) NSString * _Nonnull seriesId;
@property (nonatomic, copy) NSString * _Nonnull seriesTitle;
@property (nonatomic, copy) NSString * _Nonnull seasonId;
@property (nonatomic, copy) NSString * _Nonnull seasonTitle;
@property (nonatomic) float seasonSort;
@property (nonatomic, copy) NSString * _Nonnull videoId;
@property (nonatomic) float sort;
@property (nonatomic, copy) NSString * _Nullable seriesImage;
@end


SWIFT_CLASS_NAMED("DownloadItemEntity")
@interface DownloadItemEntity : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end

@class FairPlayEntity;

@interface DownloadItemEntity (SWIFT_EXTENSION(KKSPaaS))
@property (nonatomic) int64_t afterFirstPlay;
@property (nonatomic) int64_t afterFirstPlayEndAt;
@property (nonatomic) int16_t age;
@property (nonatomic) int64_t beforeFirstPlay;
@property (nonatomic) int16_t duration;
@property (nonatomic) int16_t endBegin;
@property (nonatomic) int64_t firstPlayEndAt;
@property (nonatomic, copy) NSString * _Nullable id;
@property (nonatomic) int64_t licenseEndTime;
@property (nonatomic, copy) NSString * _Nonnull licenseId;
@property (nonatomic) int64_t licenseStartTime;
@property (nonatomic) int16_t manifestResolution;
@property (nonatomic) double manifestSize;
@property (nonatomic, copy) NSString * _Nonnull manifestURL;
@property (nonatomic) int32_t manifestBitrate;
@property (nonatomic) int64_t offlineDuration;
@property (nonatomic) int64_t offlineEndAt;
@property (nonatomic) float playbackPosition;
@property (nonatomic) float progress;
@property (nonatomic, copy) NSData * _Nullable seriesURLData;
@property (nonatomic) int16_t state;
@property (nonatomic, copy) NSString * _Nullable thumbnailSeekingURL;
@property (nonatomic, copy) NSString * _Nullable thumbnailURL;
@property (nonatomic, copy) NSString * _Nullable title;
@property (nonatomic, copy) NSString * _Nullable userId;
@property (nonatomic, strong) DownloadInfoEntity * _Nullable downloadInfo;
@property (nonatomic, strong) FairPlayEntity * _Nullable fairPlay;
@end


SWIFT_CLASS_NAMED("FairPlayEntity")
@interface FairPlayEntity : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface FairPlayEntity (SWIFT_EXTENSION(KKSPaaS))
@property (nonatomic, copy) NSString * _Nullable contentKeyIdentifier;
@property (nonatomic, copy) NSData * _Nullable urlData;
@end


SWIFT_CLASS("_TtC7KKSPaaS17GoogleCastManager")
@interface GoogleCastManager : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class GCKSessionManager;
@class GCKSession;
@class GCKCastSession;

@interface GoogleCastManager (SWIFT_EXTENSION(KKSPaaS)) <GCKSessionManagerListener>
- (void)sessionManager:(GCKSessionManager * _Nonnull)sessionManager willStartSession:(GCKSession * _Nonnull)session;
- (void)sessionManager:(GCKSessionManager * _Nonnull)sessionManager didStartSession:(GCKSession * _Nonnull)session;
- (void)sessionManager:(GCKSessionManager * _Nonnull)sessionManager willResumeSession:(GCKSession * _Nonnull)session;
- (void)sessionManager:(GCKSessionManager * _Nonnull)sessionManager didResumeSession:(GCKSession * _Nonnull)session;
- (void)sessionManager:(GCKSessionManager * _Nonnull)sessionManager willEndSession:(GCKSession * _Nonnull)session;
- (void)sessionManager:(GCKSessionManager * _Nonnull)sessionManager didEndSession:(GCKSession * _Nonnull)session withError:(NSError * _Nullable)error;
- (void)sessionManager:(GCKSessionManager * _Nonnull)sessionManager didFailToStartSession:(GCKSession * _Nonnull)session withError:(NSError * _Nonnull)error;
- (void)sessionManager:(GCKSessionManager * _Nonnull)sessionManager willEndCastSession:(GCKCastSession * _Nonnull)session;
- (void)sessionManager:(GCKSessionManager * _Nonnull)sessionManager didStartCastSession:(GCKCastSession * _Nonnull)session;
- (void)sessionManager:(GCKSessionManager * _Nonnull)sessionManager willResumeCastSession:(GCKCastSession * _Nonnull)session;
- (void)sessionManager:(GCKSessionManager * _Nonnull)sessionManager didResumeCastSession:(GCKCastSession * _Nonnull)session;
- (void)sessionManager:(GCKSessionManager * _Nonnull)sessionManager didEndCastSession:(GCKCastSession * _Nonnull)session withError:(NSError * _Nullable)error;
- (void)sessionManager:(GCKSessionManager * _Nonnull)sessionManager didFailToStartCastSession:(GCKCastSession * _Nonnull)session withError:(NSError * _Nonnull)error;
@end

@class AVURLAsset;
@class AVAssetResourceLoadingRequest;

SWIFT_CLASS("_TtC7KKSPaaS18HLSDownloadManager")
@interface HLSDownloadManager : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (AVURLAsset * _Nullable)loadAVURLAssetWithPath:(NSString * _Nonnull)path SWIFT_WARN_UNUSED_RESULT;
- (BOOL)validPersistentKeyWithResourceLoadingRequest:(AVAssetResourceLoadingRequest * _Nonnull)resourceLoadingRequest userId:(NSString * _Nonnull)userId SWIFT_WARN_UNUSED_RESULT;
@end




SWIFT_CLASS("_TtC7KKSPaaS11KKSAVPlayer")
@interface KKSAVPlayer : NSObject
/// player rate is 1.0 by default
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class AVAssetResourceLoader;

@interface KKSAVPlayer (SWIFT_EXTENSION(KKSPaaS)) <AVAssetResourceLoaderDelegate>
- (BOOL)resourceLoader:(AVAssetResourceLoader * _Nonnull)resourceLoader shouldWaitForLoadingOfRequestedResource:(AVAssetResourceLoadingRequest * _Nonnull)loadingRequest SWIFT_WARN_UNUSED_RESULT;
@end




@class AVAsset;

SWIFT_CLASS("_TtC7KKSPaaS13KKSPlayerItem")
@interface KKSPlayerItem : AVPlayerItem
- (nonnull instancetype)initWithAsset:(AVAsset * _Nonnull)asset automaticallyLoadedAssetKeys:(NSArray<NSString *> * _Nullable)automaticallyLoadedAssetKeys SWIFT_UNAVAILABLE;
@end





@class UIViewController;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC7KKSPaaS20NavigationController")
@interface NavigationController : UINavigationController
@property (nonatomic, readonly, strong) UIViewController * _Nullable childViewControllerForStatusBarStyle;
- (nonnull instancetype)initWithRootViewController:(UIViewController * _Nonnull)rootViewController OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNavigationBarClass:(Class _Nullable)navigationBarClass toolbarClass:(Class _Nullable)toolbarClass SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC7KKSPaaS16PaaSGradientView")
@interface PaaSGradientView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
@end


SWIFT_CLASS("_TtC7KKSPaaS15PaaSSliderPanel")
@interface PaaSSliderPanel : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7KKSPaaS10PlayerView")
@interface PlayerView : UIView
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (void)willMoveToSuperview:(UIView * _Nullable)newSuperview;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end



@class UIEvent;

SWIFT_CLASS("_TtC7KKSPaaS20PlayerViewController")
@interface PlayerViewController : UIViewController
- (void)viewDidLoad;
- (void)motionEnded:(UIEventSubtype)motion withEvent:(UIEvent * _Nullable)event;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
@property (nonatomic, readonly) UIStatusBarStyle preferredStatusBarStyle;
@property (nonatomic, readonly) BOOL prefersHomeIndicatorAutoHidden;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end






@class AVPictureInPictureController;

@interface PlayerViewController (SWIFT_EXTENSION(KKSPaaS)) <AVPictureInPictureControllerDelegate>
- (void)pictureInPictureController:(AVPictureInPictureController * _Nonnull)pictureInPictureController restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(void (^ _Nonnull)(BOOL))completionHandler;
@end




@protocol UIViewControllerTransitionCoordinator;

@interface PlayerViewController (SWIFT_EXTENSION(KKSPaaS))
- (void)dismissViewControllerAnimated:(BOOL)flag completion:(void (^ _Nullable)(void))completion;
- (void)viewWillTransitionToSize:(CGSize)size withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator> _Nonnull)coordinator;
@end




SWIFT_CLASS("_TtC7KKSPaaS13RecommendView")
@interface RecommendView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
@end

@class UIGestureRecognizer;

@interface RecommendView (SWIFT_EXTENSION(KKSPaaS)) <UIGestureRecognizerDelegate>
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer * _Nonnull)otherGestureRecognizer SWIFT_WARN_UNUSED_RESULT;
@end


@class UITableView;
@class NSIndexPath;

/// Please refer to <a href="https://gmqj1x.axshare.com/#id=ofkjaf&p=9_5-player_settings_1&g=1">Player settings</a>
SWIFT_CLASS("_TtC7KKSPaaS21SettingViewController")
@interface SettingViewController : UITableViewController
- (void)viewDidLoad;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end






SWIFT_CLASS("_TtC7KKSPaaS7UIStyle")
@interface UIStyle : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
