// Generated by Apple Swift version 2.2 (swiftlang-703.0.18.8 clang-703.0.31)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
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
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
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
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
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
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import CoreGraphics;
@import UIKit;
@import Foundation;
@import WebKit;
#endif

#import <WildcardSDK/WildcardSDK.h>

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class NSURL;
@class NSError;


/// Card base class
SWIFT_CLASS("_TtC11WildcardSDK4Card")
@interface Card : NSObject

/// Associated web url for this card
@property (nonatomic, readonly, strong) NSURL * _Nonnull webUrl;
@property (nonatomic, readonly, copy) NSString * _Nonnull cardType;
@property (nonatomic, readonly) WCCardType type;
+ (WCCardType)cardTypeFromString:(NSString * _Null_unspecified)name;
+ (NSString * _Nonnull)stringFromCardType:(WCCardType)type;

/// Gets a card from the specified URL
+ (void)getFromUrl:(NSURL * _Null_unspecified)url completion:(void (^ _Nullable)(Card * _Nullable card, NSError * _Nullable error))completion;
- (BOOL)supportsLayout:(WCCardLayout)layout;
@end

@class NSDate;
@class NSDictionary;


/// Article Card
SWIFT_CLASS("_TtC11WildcardSDK11ArticleCard")
@interface ArticleCard : Card
@property (nonatomic, readonly, copy) NSString * _Nonnull title;
@property (nonatomic, readonly, copy) NSString * _Nullable abstractContent;
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nullable keywords;
@property (nonatomic, readonly, copy) NSString * _Nullable html;
@property (nonatomic, readonly, strong) NSDate * _Nullable publicationDate;
@property (nonatomic, readonly, copy) NSString * _Nullable source;
@property (nonatomic, readonly, copy) NSString * _Nullable author;
@property (nonatomic, readonly, strong) NSDate * _Nullable updatedDate;
@property (nonatomic, readonly, strong) NSDictionary * _Nullable media;
@property (nonatomic, readonly, strong) NSURL * _Nullable appLinkIos;
@property (nonatomic, readonly, strong) NSURL * _Nullable primaryImageURL;
- (BOOL)supportsLayout:(WCCardLayout)layout;
@end


@class CardView;
@protocol CardPhysicsDelegate;

SWIFT_CLASS("_TtC11WildcardSDK11CardPhysics")
@interface CardPhysics : NSObject
@property (nonatomic, strong) CardView * _Nonnull cardView;
@property (nonatomic, strong) id <CardPhysicsDelegate> _Nullable delegate;

/// Adds a pan gesture onto the card view which enables it to be dragged around the screen
@property (nonatomic) BOOL enableDragging;
@end


SWIFT_PROTOCOL("_TtP11WildcardSDK19CardPhysicsDelegate_")
@protocol CardPhysicsDelegate
@optional
- (void)cardViewDragged:(CardView * _Nonnull)cardView position:(CGPoint)position;
- (void)cardViewDropped:(CardView * _Nonnull)cardView position:(CGPoint)position;
- (void)cardViewTapped:(CardView * _Nonnull)cardView;
- (void)cardViewDoubleTapped:(CardView * _Nonnull)cardView;
@end

@protocol CardViewDelegate;
@protocol CardViewVisualSource;
@class NSCoder;

SWIFT_CLASS("_TtC11WildcardSDK8CardView")
@interface CardView : UIView

/// See CardPhysics
@property (nonatomic, strong) CardPhysics * _Nullable physics;

/// See CardViewDelegate
@property (nonatomic, strong) id <CardViewDelegate> _Nullable delegate;

/// The visual source associated with this CardView
@property (nonatomic, strong) id <CardViewVisualSource> _Null_unspecified visualSource;

/// The backing card for this CardView
@property (nonatomic, strong) Card * _Null_unspecified backingCard;

/// Preferred width for the CardView. When a CardView lays out its subcomponents from a visual source, each subcomponent will also be assigned this preferred width.
///
/// Changing the preferredWidth for the CardView will affect the intrinsic size of the subcomponents and the CardView itself.
@property (nonatomic) CGFloat preferredWidth;

/// Creates a CardView from a card. A layout will be chosen and the CardView will be returned with a default size.
+ (CardView * _Nullable)createCardView:(Card * _Null_unspecified)card;

/// Creates a CardView from a card with a prechosen layout. The CardView will be returned with a default size.
+ (CardView * _Nullable)createCardView:(Card * _Null_unspecified)card layout:(WCCardLayout)layout;

/// Creates a CardView from a card with a prechosen layout and width.
///
/// The card's size will be calculated optimally from the preferredWidth. You may choose various layouts and widths to a get a height that is suitable.
+ (CardView * _Nullable)createCardView:(Card * _Null_unspecified)card layout:(WCCardLayout)layout preferredWidth:(CGFloat)preferredWidth;

/// Creates a CardView with a customized visual source. See tutorials on how to create your own visual source.
///
/// Passing in UIViewNoIntrinsicMetric for the width will result in a default width calculation based on screen size
+ (CardView * _Nullable)createCardView:(Card * _Null_unspecified)card visualSource:(id <CardViewVisualSource> _Null_unspecified)visualSource preferredWidth:(CGFloat)preferredWidth;

/// ALPHA: Reloads the CardView with a new card. Autogenerates a layout
- (void)reloadWithCard:(Card * _Null_unspecified)newCard;

/// ALPHA: Reloads the CardView with a new card and specified layout.
- (void)reloadWithCard:(Card * _Null_unspecified)newCard layout:(WCCardLayout)layout;

/// ALPHA: Reloads the CardView with a new card, specified layout, and preferredWidth.
- (void)reloadWithCard:(Card * _Null_unspecified)newCard layout:(WCCardLayout)layout preferredWidth:(CGFloat)preferredWidth;

/// ALPHA: Reloads the CardView with a new card, custom visual source, and preferredWidth
- (void)reloadWithCard:(Card * _Null_unspecified)newCard visualSource:(id <CardViewVisualSource> _Nonnull)visualSource preferredWidth:(CGFloat)preferredWidth;
- (void)fadeOut:(NSTimeInterval)duration delay:(NSTimeInterval)delay completion:(void (^ _Nullable)(BOOL bool_))completion;
- (void)fadeIn:(NSTimeInterval)duration delay:(NSTimeInterval)delay completion:(void (^ _Nullable)(BOOL bool_))completion;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (void)didMoveToSuperview;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (CGSize)intrinsicContentSize;
@end


SWIFT_CLASS("_TtC11WildcardSDK14CardViewAction")
@interface CardViewAction : NSObject

/// Any parameters for the card action. e.g. for a WCCardAction.ViewOnWeb, there is a url parameter
@property (nonatomic, readonly, strong) NSDictionary * _Nullable parameters;

/// Action type. See WCCardAction
@property (nonatomic, readonly) WCCardAction type;

/// Init
- (nonnull instancetype)initWithType:(WCCardAction)type parameters:(NSDictionary * _Nullable)parameters OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_PROTOCOL("_TtP11WildcardSDK16CardViewDelegate_")
@protocol CardViewDelegate
@optional

/// Simply just a hook into UIView.layoutSubviews() for the CardView
- (void)cardViewLayoutSubviews:(CardView * _Nonnull)cardView;

/// CardView has been requested to perform a specific action.
- (void)cardViewRequestedAction:(CardView * _Nonnull)cardView action:(CardViewAction * _Nonnull)action;

/// CardView is about to be reloaded.
- (void)cardViewWillReload:(CardView * _Nonnull)cardView;

/// CardView has reloaded.
- (void)cardViewDidReload:(CardView * _Nonnull)cardView;
@end



/// The basic subcomponent of a CardView
SWIFT_CLASS("_TtC11WildcardSDK15CardViewElement")
@interface CardViewElement : UIView

/// Reference to the parent CardView of the CardViewElement. Nil if this element has not been added to any CardView yet.
@property (nonatomic, strong) CardView * _Nullable cardView;

/// Preferred width for the CardViewElement. Returns UIViewNoIntrinsicMetric if no preferred width is set.
///
/// Similar to UILabel.preferredMaxLayoutWidth, this width and is used in conjunction with optimizedHeight() to determine the intrinsic size of the CardViewElement
@property (nonatomic) CGFloat preferredWidth;

/// Return an optimized height for the CardViewElement based on a given width.
///
/// This function should be overriden to provide a proper intrinsic size for this CardViewElement. This height also affects the intrinsic size of a CardView if this element has been added to one
- (CGFloat)optimizedHeight:(CGFloat)cardWidth;

/// Update the CardViewElement with the given card.
///
/// This always happens before a final layout pass so you should not make any assumptions about frames or sizes during this call.
- (void)update:(Card * _Nonnull)card;

/// The preferred width of the card view element has just been updated, make any necessary adjustments
///
/// e.g. Resassign a UILabel's preferredMaxLayoutWidth if it depends on the CardViewElement's preferredWidth
- (void)adjustForPreferredWidth:(CGFloat)cardWidth;
- (CGSize)intrinsicContentSize;

/// Called automatically on init() or awakeFromNib()
- (void)initialize;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (void)awakeFromNib;
@end



/// The visual source of a CardView.
///
/// Every CardView is associated with a visual source and provides views for various subcomponents. If you choose to completely customize a card, you will have to implement a visual source of your own.
///
/// Each subcomponent of a CardView must extend CardViewElement.
SWIFT_PROTOCOL("_TtP11WildcardSDK20CardViewVisualSource_")
@protocol CardViewVisualSource

/// CardViewElement for the card body
- (CardViewElement * _Nonnull)viewForCardBody;
@optional

/// Optional CardViewElement for header
- (CardViewElement * _Nullable)viewForCardHeader;

/// Optional CardViewElement for footer
- (CardViewElement * _Nullable)viewForCardFooter;

/// Optional CardViewElement for the back of the card. Spans the full card, shown on double tap
- (CardViewElement * _Nullable)viewForBackOfCard;
@end

@class UILabel;

SWIFT_CLASS("_TtC11WildcardSDK14FullCardHeader")
@interface FullCardHeader : CardViewElement

/// Use this to change the vertical spacing between the kicker and title
@property (nonatomic) CGFloat kickerSpacing;

/// Content insets of card card content
@property (nonatomic) UIEdgeInsets contentEdgeInset;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified kicker;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified title;
@property (nonatomic, strong) UIView * _Null_unspecified hairline;
- (void)initialize;
- (void)adjustForPreferredWidth:(CGFloat)cardWidth;
- (void)update:(Card * _Nonnull)card;
- (CGFloat)optimizedHeight:(CGFloat)cardWidth;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
@end

@class WCImageView;

SWIFT_PROTOCOL("_TtP11WildcardSDK19WCImageViewDelegate_")
@protocol WCImageViewDelegate
@optional
- (void)imageViewTapped:(WCImageView * _Nonnull)imageView;
@end



/// Card Body with an image and a caption under it.
SWIFT_CLASS("_TtC11WildcardSDK19ImageAndCaptionBody")
@interface ImageAndCaptionBody : CardViewElement <WCImageViewDelegate>
@property (nonatomic, weak) IBOutlet WCImageView * _Null_unspecified imageView;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified caption;

/// Adjusts the aspect ratio of the image view.
@property (nonatomic) CGFloat imageAspectRatio;

/// Content inset for image view and caption
@property (nonatomic) UIEdgeInsets contentEdgeInset;

/// Controls the spacing between the caption and the image
@property (nonatomic) CGFloat captionSpacing;
- (void)initialize;
- (void)update:(Card * _Nonnull)card;
- (void)adjustForPreferredWidth:(CGFloat)cardWidth;
- (CGSize)intrinsicContentSize;
- (CGFloat)optimizedHeight:(CGFloat)cardWidth;
- (void)imageViewTapped:(WCImageView * _Nonnull)imageView;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
@end



/// Image Card
SWIFT_CLASS("_TtC11WildcardSDK9ImageCard")
@interface ImageCard : Card
@property (nonatomic, readonly, strong) NSURL * _Nonnull imageUrl;

/// optional size for the image. will be (-1,-1) if size is unavailable
@property (nonatomic, readonly) CGSize imageSize;
@property (nonatomic, readonly, copy) NSString * _Nullable title;
@property (nonatomic, readonly, copy) NSString * _Nullable imageCaption;
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nullable keywords;
@property (nonatomic, readonly, strong) NSURL * _Nullable appLinkIos;
- (BOOL)supportsLayout:(WCCardLayout)layout;
@end


SWIFT_CLASS("_TtC11WildcardSDK18ImageFloatLeftBody")
@interface ImageFloatLeftBody : CardViewElement <WCImageViewDelegate>
@property (nonatomic, weak) IBOutlet WCImageView * _Null_unspecified imageView;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified descriptionLabel;

/// Content inset for all content of card body
@property (nonatomic) UIEdgeInsets contentEdgeInset;

/// Set this variable to control the image size. Do not attempt to reframe or relayout the imageView itself
@property (nonatomic) CGSize imageViewSize;
- (void)initialize;
- (void)update:(Card * _Nonnull)card;
- (CGFloat)optimizedHeight:(CGFloat)cardWidth;
- (void)adjustForPreferredWidth:(CGFloat)cardWidth;
- (void)imageViewTapped:(WCImageView * _Nonnull)imageView;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11WildcardSDK19ImageFloatRightBody")
@interface ImageFloatRightBody : CardViewElement <WCImageViewDelegate>
@property (nonatomic, weak) IBOutlet WCImageView * _Null_unspecified imageView;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified descriptionLabel;

/// Content inset for all content of card body
@property (nonatomic) UIEdgeInsets contentEdgeInset;

/// Set this variable to control the image size. Do not attempt to reframe or relayout the imageView itself
@property (nonatomic) CGSize imageViewSize;
- (void)initialize;
- (void)update:(Card * _Nonnull)card;
- (CGFloat)optimizedHeight:(CGFloat)cardWidth;
- (void)adjustForPreferredWidth:(CGFloat)cardWidth;
- (void)imageViewTapped:(WCImageView * _Nonnull)imageView;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11WildcardSDK13ImageOnlyBody")
@interface ImageOnlyBody : CardViewElement <WCImageViewDelegate>
@property (nonatomic, strong) WCImageView * _Null_unspecified imageView;

/// Adjusts the aspect ratio of the image view.
@property (nonatomic) CGFloat imageAspectRatio;

/// Content insets
@property (nonatomic) UIEdgeInsets contentEdgeInset;
- (void)initialize;
- (void)adjustForPreferredWidth:(CGFloat)cardWidth;
- (void)update:(Card * _Nonnull)card;
- (CGFloat)optimizedHeight:(CGFloat)cardWidth;
- (void)imageViewTapped:(WCImageView * _Nonnull)imageView;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
@end



/// ALPHA: The visual source of a maximized CardView
///
/// The maximized visual source should always be used with the extension UIView.maximizeCardView. This visual source is responsible for displaying a Card during its 'maximized state'. In this state, the Card takes up the entire application frame, and is owned by a fully presented view controller.
///
/// This visual source may never be used for an inline card. The size is always determined relative to the application frame using applicationFrameEdgeInsets
SWIFT_PROTOCOL("_TtP11WildcardSDK29MaximizedCardViewVisualSource_")
@protocol MaximizedCardViewVisualSource <CardViewVisualSource>

/// This represents the edge insets of the maximized CardView to the application frame.
///
/// This is essentially how inset the CardView is from the screen
- (UIEdgeInsets)applicationFrameEdgeInsets;
@end

@class UIWebView;
@class NSURLRequest;

SWIFT_CLASS("_TtC11WildcardSDK20MediaTextFullWebView")
@interface MediaTextFullWebView : CardViewElement <UIWebViewDelegate>
- (void)initialize;
- (void)update:(Card * _Nonnull)card;
- (BOOL)webView:(UIWebView * _Nonnull)webView shouldStartLoadWithRequest:(NSURLRequest * _Nonnull)request navigationType:(UIWebViewNavigationType)navigationType;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
@end


@interface NSBundle (SWIFT_EXTENSION(WildcardSDK))

/// Gets a reference to the WildcardSDK Bundle
+ (NSBundle * _Nonnull)wildcardSDKBundle;
@end


@interface NSMutableAttributedString (SWIFT_EXTENSION(WildcardSDK))
@end


@interface NSURL (SWIFT_EXTENSION(WildcardSDK))
- (BOOL)isTwitterProfileURL;
- (BOOL)isTwitterTweetURL;
@end

@class UIButton;

SWIFT_CLASS("_TtC11WildcardSDK14ReadMoreFooter")
@interface ReadMoreFooter : CardViewElement

/// Read More Button. Always left aligned at the moment.
@property (nonatomic, strong) UIButton * _Null_unspecified readMoreButton;

/// Content insets. Right inset for this element does nothing at the moment.
@property (nonatomic) UIEdgeInsets contentEdgeInset;
- (void)initialize;
- (CGFloat)optimizedHeight:(CGFloat)cardWidth;
- (void)adjustForPreferredWidth:(CGFloat)cardWidth;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
@end



/// Most basic card body consisting of just a paragraph label
SWIFT_CLASS("_TtC11WildcardSDK23SingleParagraphCardBody")
@interface SingleParagraphCardBody : CardViewElement
@property (nonatomic, strong) UILabel * _Null_unspecified paragraphLabel;
@property (nonatomic) UIEdgeInsets contentEdgeInset;
- (void)initialize;
- (void)adjustForPreferredWidth:(CGFloat)cardWidth;
- (void)update:(Card * _Nonnull)card;
- (CGFloat)optimizedHeight:(CGFloat)cardWidth;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
@end



/// Summary Card
SWIFT_CLASS("_TtC11WildcardSDK11SummaryCard")
@interface SummaryCard : Card
@property (nonatomic, readonly, copy) NSString * _Nonnull title;
@property (nonatomic, readonly, copy) NSString * _Nonnull abstractContent;
@property (nonatomic, readonly, copy) NSString * _Nullable subtitle;
@property (nonatomic, readonly, strong) NSDictionary * _Nullable media;
@property (nonatomic, readonly, strong) NSURL * _Nullable primaryImageURL;
@property (nonatomic, readonly, strong) NSURL * _Nullable appLinkIos;
- (nonnull instancetype)initWithUrl:(NSURL * _Nonnull)url description:(NSString * _Nonnull)description title:(NSString * _Nonnull)title media:(NSDictionary * _Nullable)media data:(NSDictionary * _Nullable)data OBJC_DESIGNATED_INITIALIZER;
- (BOOL)supportsLayout:(WCCardLayout)layout;
@end


SWIFT_CLASS("_TtC11WildcardSDK13TwitterHeader")
@interface TwitterHeader : CardViewElement

/// Content insets of card card content
@property (nonatomic) UIEdgeInsets contentEdgeInset;
- (void)initialize;
- (void)update:(Card * _Nonnull)card;
- (CGFloat)optimizedHeight:(CGFloat)cardWidth;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
@end


@interface UIButton (SWIFT_EXTENSION(WildcardSDK))
@end


@interface UIColor (SWIFT_EXTENSION(WildcardSDK))
+ (UIColor * _Nonnull)wildcardDarkBlue;
+ (UIColor * _Nonnull)wildcardLightBlue;
+ (UIColor * _Nonnull)wildcardMediumGray;
+ (UIColor * _Nonnull)wildcardBackgroundGray;
+ (UIColor * _Nonnull)wildcardMediaBodyColor;
+ (UIColor * _Nonnull)twitterBlue;
@end


@interface UIFont (SWIFT_EXTENSION(WildcardSDK))
@end


@interface UIImage (SWIFT_EXTENSION(WildcardSDK))
@end


@interface UILabel (SWIFT_EXTENSION(WildcardSDK))
@end

@class NSLayoutConstraint;
@class UIViewController;

@interface UIView (SWIFT_EXTENSION(WildcardSDK))
+ (UIView * _Nullable)loadFromNibNamed:(NSString * _Nonnull)nibNamed;

/// For any view with a superview, constrain all edges flush with superview. e.g. Leading, Top, Bottom, Right all 0
- (void)constrainToSuperViewEdges;

/// Given a reference view, constrain this view to be exactly the same size and position (Useful for overlays that aren't child views). Superviews must be the same
- (void)constrainExactlyToView:(UIView * _Nonnull)view;

/// Given a reference view, align left. Superviews must be the same.
- (void)alignLeftToView:(UIView * _Nonnull)view;

/// Given a reference view, align right. Superviews must be the same.
- (void)alignRightToView:(UIView * _Nonnull)view;

/// Given a reference view, align top. Superviews must be the same.
- (void)alignTopToView:(UIView * _Nonnull)view;

/// Given a reference view, align bottom. Superviews must be the same.
- (void)alignBottomToView:(UIView * _Nonnull)view;
- (NSLayoutConstraint * _Nonnull)constrainLeftToSuperView:(CGFloat)offset;
- (NSLayoutConstraint * _Nonnull)constrainRightToSuperView:(CGFloat)offset;
- (NSLayoutConstraint * _Nonnull)constrainTopToSuperView:(CGFloat)offset;
- (NSLayoutConstraint * _Nonnull)constrainBottomToSuperView:(CGFloat)offset;
- (NSLayoutConstraint * _Nonnull)verticallyCenterToSuperView:(CGFloat)offset;
- (NSLayoutConstraint * _Nonnull)horizontallyCenterToSuperView:(CGFloat)offset;
- (NSLayoutConstraint * _Nonnull)constrainHeight:(CGFloat)height;
- (NSLayoutConstraint * _Nonnull)constrainWidth:(CGFloat)width;
- (void)constrainWidth:(CGFloat)width height:(CGFloat)height;
- (UIView * _Nonnull)addBlurOverlay:(UIBlurEffectStyle)style;
- (BOOL)hasSuperview;
- (UIViewController * _Nullable)parentViewController;

/// Adds a bottom border with specified width and color
- (UIView * _Nonnull)addBottomBorderWithWidth:(CGFloat)width color:(UIColor * _Nonnull)color;

/// Adds a left border with specified width and color
- (UIView * _Nonnull)addLeftBorderWithWidth:(CGFloat)width color:(UIColor * _Nonnull)color;

/// Adds a right border with specified width and color
- (UIView * _Nonnull)addRightBorderWithWidth:(CGFloat)width color:(UIColor * _Nonnull)color;

/// Adds a top border with specified width and color
- (UIView * _Nonnull)addTopBorderWithWidth:(CGFloat)width color:(UIColor * _Nonnull)color;
@end


@interface UIViewController (SWIFT_EXTENSION(WildcardSDK))

/// Presents a Card with a best-fit layout
- (void)presentCard:(Card * _Null_unspecified)card animated:(BOOL)animated completion:(void (^ _Nullable)(void))completion;

/// Presents a Card with a specific layout
- (void)presentCard:(Card * _Null_unspecified)card layout:(WCCardLayout)layout animated:(BOOL)animated completion:(void (^ _Nullable)(void))completion;

/// Presents a Card with a custom visual source
- (void)presentCard:(Card * _Null_unspecified)card customVisualSource:(id <CardViewVisualSource> _Nonnull)customVisualSource animated:(BOOL)animated completion:(void (^ _Nullable)(void))completion;

/// Default handling of various Card Actions by a UIViewController. Includes presenting share sheets, appstore sheets, etc.
///
/// It is recommended you use this UIViewController extension/category to handle card actions. If a UIViewController is a CardViewDelegate, you can use this function directly in cardViewRequestedAction. This is essential to making the buttons on your cards responsive.
- (void)handleCardAction:(CardView * _Nonnull)cardView action:(CardViewAction * _Nonnull)action;

/// ALPHA: Maximizes a CardView with a customized visual source
- (void)maximizeCardView:(CardView * _Nonnull)cardView maximizedVisualSource:(id <MaximizedCardViewVisualSource> _Nonnull)maximizedVisualSource;
@end



/// Video Card
SWIFT_CLASS("_TtC11WildcardSDK9VideoCard")
@interface VideoCard : Card
@property (nonatomic, readonly, copy) NSString * _Nonnull title;
@property (nonatomic, readonly, strong) NSURL * _Nonnull embedUrl;
@property (nonatomic, readonly, copy) NSString * _Nullable abstractContent;
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nullable keywords;
@property (nonatomic, readonly, strong) NSURL * _Nullable appLinkIos;
@property (nonatomic, readonly, strong) NSURL * _Nullable streamUrl;
@property (nonatomic, readonly, copy) NSString * _Nullable streamContentType;
@property (nonatomic, readonly, strong) NSURL * _Nullable posterImageUrl;
- (BOOL)isYoutube;
- (BOOL)isVimeo;
- (NSString * _Nullable)getYoutubeId;
- (BOOL)supportsLayout:(WCCardLayout)layout;
@end

@class WCVideoView;

SWIFT_PROTOCOL("_TtP11WildcardSDK19WCVideoViewDelegate_")
@protocol WCVideoViewDelegate
@optional
- (void)videoViewDidStartPlaying:(WCVideoView * _Nonnull)videoView;
- (void)videoViewWillEndPlaying:(WCVideoView * _Nonnull)videoView;
- (void)videoViewTapped:(WCVideoView * _Nonnull)videoView;
@end



/// A Card Body which can play various Video Cards
SWIFT_CLASS("_TtC11WildcardSDK13VideoCardBody")
@interface VideoCardBody : CardViewElement <WCVideoViewDelegate>
@property (nonatomic, strong) WCVideoView * _Null_unspecified videoView;

/// Adjusts the aspect ratio of the video
@property (nonatomic) CGFloat videoAspectRatio;

/// Content insets
@property (nonatomic) UIEdgeInsets contentEdgeInset;
- (void)initialize;
- (void)adjustForPreferredWidth:(CGFloat)cardWidth;
- (void)update:(Card * _Nonnull)card;
- (CGFloat)optimizedHeight:(CGFloat)cardWidth;
- (void)videoViewTapped:(WCVideoView * _Nonnull)videoView;
- (void)videoViewDidStartPlaying:(WCVideoView * _Nonnull)videoView;
- (void)videoViewWillEndPlaying:(WCVideoView * _Nonnull)videoView;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11WildcardSDK18VideoCardThumbnail")
@interface VideoCardThumbnail : CardViewElement <WCVideoViewDelegate>
@property (nonatomic, strong) WCVideoView * _Null_unspecified videoView;
@property (nonatomic, strong) UILabel * _Null_unspecified title;
@property (nonatomic, strong) UILabel * _Null_unspecified kicker;

/// Content insets
@property (nonatomic) UIEdgeInsets contentEdgeInset;

/// Use this to change the vertical spacing between the kicker and title
@property (nonatomic) CGFloat kickerSpacing;

/// Use this to change the horizontal padding between the label and the video view
@property (nonatomic) CGFloat labelToVideoPadding;
- (void)initialize;
- (CGFloat)optimizedHeight:(CGFloat)cardWidth;
- (void)update:(Card * _Nonnull)card;
- (void)adjustForPreferredWidth:(CGFloat)cardWidth;
- (void)videoViewTapped:(WCVideoView * _Nonnull)videoView;
- (void)videoViewDidStartPlaying:(WCVideoView * _Nonnull)videoView;
- (void)videoViewWillEndPlaying:(WCVideoView * _Nonnull)videoView;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11WildcardSDK19ViewOnWebCardFooter")
@interface ViewOnWebCardFooter : CardViewElement
@property (nonatomic, strong) UIButton * _Null_unspecified viewOnWebButton;
@property (nonatomic, strong) UIButton * _Null_unspecified shareButton;
@property (nonatomic, strong) UIView * _Null_unspecified hairline;
@property (nonatomic) UIEdgeInsets contentEdgeInset;
- (void)initialize;
- (void)adjustForPreferredWidth:(CGFloat)cardWidth;
- (CGFloat)optimizedHeight:(CGFloat)cardWidth;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
@end



/// Wildcard Extension of UIImageView with a few extra functions
SWIFT_CLASS("_TtC11WildcardSDK11WCImageView")
@interface WCImageView : UIImageView

/// Default cross fade animation duration when setting an image
@property (nonatomic) NSTimeInterval crossFadeDuration;

/// Set image to URL and automatically set the image
- (void)setImageWithURL:(NSURL * _Nonnull)url mode:(UIViewContentMode)mode;

/// See WCImageViewDelegate
@property (nonatomic, strong) id <WCImageViewDelegate> _Nullable delegate;

/// Set image to URL with a completion block. If the completion block is nil, this function will automatically set the image for the WCAImageView. If the completion block is not nil, this function will not assign the image directly and use the callback -- more suitable for re-use scenarios. This should be called on the main thread.
- (void)setImageWithURL:(NSURL * _Nonnull)url mode:(UIViewContentMode)mode completion:(void (^ _Nullable)(UIImage * _Nullable, NSError * _Nullable))completion;

/// Set the default place holder image, use this when there was a problem downloading or loading an image
- (void)setNoImage;

/// Cancel any pending image requests
- (void)cancelRequest;

/// Set image with a content mode. Does a cross fade animation by default
- (void)setImage:(UIImage * _Nonnull)image mode:(UIViewContentMode)mode;
- (void)setup;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (void)awakeFromNib;
@end


@class UIGestureRecognizer;
@class WKWebView;
@class WKNavigation;
@class WKUserContentController;
@class WKScriptMessage;
@class YTPlayerView;


/// Plays content from a Video Card
SWIFT_CLASS("_TtC11WildcardSDK11WCVideoView")
@interface WCVideoView : UIView <WKNavigationDelegate, YTPlayerViewDelegate, WKScriptMessageHandler, UIGestureRecognizerDelegate>
@property (nonatomic, strong) VideoCard * _Nullable videoCard;
@property (nonatomic, strong) id <WCVideoViewDelegate> _Nullable delegate;
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer * _Nonnull)otherGestureRecognizer;
- (void)webView:(WKWebView * _Nonnull)webView didCommitNavigation:(WKNavigation * _Null_unspecified)navigation;
- (void)webView:(WKWebView * _Nonnull)webView didFinishNavigation:(WKNavigation * _Null_unspecified)navigation;
- (void)webView:(WKWebView * _Nonnull)webView didFailNavigation:(WKNavigation * _Null_unspecified)navigation withError:(NSError * _Nonnull)error;
- (void)webView:(WKWebView * _Nonnull)webView didFailProvisionalNavigation:(WKNavigation * _Null_unspecified)navigation withError:(NSError * _Nonnull)error;
- (void)userContentController:(WKUserContentController * _Nonnull)userContentController didReceiveScriptMessage:(WKScriptMessage * _Nonnull)message;
- (void)playerView:(YTPlayerView * _Null_unspecified)playerView receivedError:(YTPlayerError)error;
- (void)playerViewDidBecomeReady:(YTPlayerView * _Null_unspecified)playerView;
- (void)playerView:(YTPlayerView * _Null_unspecified)playerView didChangeToState:(YTPlayerState)state;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (void)awakeFromNib;
@end


@class NSOperationQueue;


/// Global convenience settings
SWIFT_CLASS("_TtC11WildcardSDK11WildcardSDK")
@interface WildcardSDK : NSObject

/// Custom font for Card titles
+ (UIFont * _Nonnull)cardTitleFont;
+ (void)setCardTitleFont:(UIFont * _Nonnull)newValue;

/// Custom color for Card titles
+ (UIColor * _Nonnull)cardTitleColor;
+ (void)setCardTitleColor:(UIColor * _Nonnull)newValue;

/// Custom font for Card kickers
+ (UIFont * _Nonnull)cardKickerFont;
+ (void)setCardKickerFont:(UIFont * _Nonnull)newValue;

/// Custom color for Card kickers
+ (UIColor * _Nonnull)cardKickerColor;
+ (void)setCardKickerColor:(UIColor * _Nonnull)newValue;

/// Custom font for Card descriptions
+ (UIFont * _Nonnull)cardDescriptionFont;
+ (void)setCardDescriptionFont:(UIFont * _Nonnull)newValue;

/// Custom color for Card descriptions
+ (UIColor * _Nonnull)cardDescriptionColor;
+ (void)setCardDescriptionColor:(UIColor * _Nonnull)newValue;

/// Custom font for Card Action Buttons
+ (UIFont * _Nonnull)cardActionButtonFont;
+ (void)setCardActionButtonFont:(UIFont * _Nonnull)newValue;

/// Card Corner Radius
+ (CGFloat)cardCornerRadius;
+ (void)setCardCornerRadius:(CGFloat)newValue;

/// Delegate queue for network request callbacks
+ (NSOperationQueue * _Nonnull)networkDelegateQueue;
+ (void)setNetworkDelegateQueue:(NSOperationQueue * _Nonnull)newValue;

/// Custom corner radius for images shown in cards
+ (CGFloat)imageCornerRadius;
+ (void)setImageCornerRadius:(CGFloat)newValue;

/// This value is used to calculate a default preferred width for a CardView if none is explicilty given.
+ (CGFloat)defaultScreenMargin;
+ (void)setDefaultScreenMargin:(CGFloat)newValue;

/// The default background color for any card view
+ (UIColor * _Nonnull)cardBackgroundColor;
+ (void)setCardBackgroundColor:(UIColor * _Nonnull)newValue;

/// Enables or disables a drop shadow on the card view, ON by default
+ (BOOL)cardDropShadow;
+ (void)setCardDropShadow:(BOOL)newValue;

/// Initialize the SDK
+ (void)initializeWithApiKey:(NSString * _Nonnull)key;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop