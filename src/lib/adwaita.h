/*************************************************************************
 * Copyright (C) 2014 by Hugo Pereira Da Costa <hugo.pereira@free.fr>    *
 * Copyright (C) 2019 Jan Grulich <jgrulich@redhat.com>                  *
 *                                                                       *
 * This program is free software; you can redistribute it and/or modify  *
 * it under the terms of the GNU General Public License as published by  *
 * the Free Software Foundation; either version 2 of the License, or     *
 * (at your option) any later version.                                   *
 *                                                                       *
 * This program is distributed in the hope that it will be useful,       *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 * GNU General Public License for more details.                          *
 *                                                                       *
 * You should have received a copy of the GNU General Public License     *
 * along with this program; if not, write to the                         *
 * Free Software Foundation, Inc.,                                       *
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA .        *
 *************************************************************************/

#ifndef ADWAITA_H
#define ADWAITA_H

#include "adwaitaqt_export.h"

#include <QColor>
#include <QFlags>
#include <QPalette>
#include <QPointer>
#include <QStyle>
#include <QScopedPointer>
#include <QWeakPointer>

namespace Adwaita
{

//*@name convenience typedef
//@{

//* scoped pointer convenience typedef
template<typename T> using WeakPointer = QPointer<T>;

//* scoped pointer convenience typedef
template<typename T> using ScopedPointer = QScopedPointer<T, QScopedPointerPodDeleter>;

//@}

//* Settings
namespace Settings
{
    const bool SingleClick {true};
    const bool ShowIconsOnPushButtons {false};
    const int ToolButtonStyle {Qt::ToolButtonTextBesideIcon};
    const bool ShowIconsInMenuItems {false};
}

enum EnumMnemonicsMode { MN_NEVER, MN_AUTO, MN_ALWAYS };

enum EnumWindowDragMode { WD_NONE, WD_MINIMAL, WD_FULL };

//* Config
namespace Config
{
    // Common
    const int ShadowStrength {0};
    const int ShadowSize {0};
    const QColor ShadowColor {Qt::transparent};
    const bool OutlineCloseButton {false};

    // Style
    const bool AnimationsEnabled {false};
    const int AnimationSteps {100};
    const int AnimationsDuration {180};
    const bool StackedWidgetTransitionsEnabled {false};
    const bool ProgressBarAnimated {true};
    const int ProgressBarBusyStepDuration {600};
    const int ScrollBarAddLineButtons {0};
    const int ScrollBarSubLineButtons {0};
    const bool ScrollBarShowOnMouseOver {true};
    const int MnemonicsMode {MN_AUTO};
    const bool ToolBarDrawItemSeparator {0};
    const bool ViewDrawFocusIndicator {false};
    const bool SliderDrawTickMarks {true};
    const bool ViewDrawTreeBranchLines {false};
    const bool ViewInvertSortIndicator {true};
    const bool TabBarDrawCenteredTabs {false};
    const bool TitleWidgetDrawFrame {true};
    const bool DockWidgetDrawFrame {false};
    const bool SidePanelDrawFrame {false};
    const bool MenuItemDrawStrongFocus {true};
    const int WindowDragMode {0};
    const QStringList WindowDragWhiteList;
    const QStringList WindowDragBlackList;
    const bool UseWMMoveResize {true};
    const bool SplitterProxyEnabled {true};
    const int SplitterProxyWidth {3};
    const bool WidgetExplorerEnabled {false};
    const bool DrawWidgetRects {false};
}

namespace PropertyNames
{
    const char noAnimations[] = "_kde_no_animations";
    const char noWindowGrab[] = "_kde_no_window_grab";
    const char netWMForceShadow[] = "_KDE_NET_WM_FORCE_SHADOW";
    const char netWMSkipShadow[] = "_KDE_NET_WM_SKIP_SHADOW";
    const char sidePanelView[] = "_kde_side_panel_view";
    const char toolButtonAlignment[] = "_kde_toolButton_alignment";
    const char menuTitle[] = "_adwaita_toolButton_menutitle";
    const char alteredBackground[] = "_adwaita_altered_background";
}

//* metrics
enum Metrics {
    // frames
    Frame_FrameWidth = 4,
    Frame_FrameRadius = 2,

    // layout
    Layout_TopLevelMarginWidth = 10,
    Layout_ChildMarginWidth = 6,
    Layout_DefaultSpacing = 6,

    // line editors
    LineEdit_FrameWidth = 3,
    LineEdit_MarginHeight = 2,
    LineEdit_MarginWidth = 8,
    LineEdit_MinHeight = 32,
    LineEdit_MinWidth = 80,

    // menu items
    Menu_FrameWidth = 0,
    Menu_VMargin = 4,
    Menu_HMargin = 0,
    MenuItem_MarginWidth = 4,
    MenuItem_ItemSpacing = 6,
    MenuItem_AcceleratorSpace = 16,
    MenuItem_SeparatorHeight = 8,
    MenuButton_IndicatorWidth = 20,

    // combobox
    ComboBox_FrameWidth = 4,
    ComboBox_MarginHeight = 2,
    ComboBox_MarginWidth = 8,
    ComboBox_MinHeight = 32,
    ComboBox_MinWidth = 80,
    ComboBox_ItemFrameWidth = 10,

    // spinbox
    SpinBox_FrameWidth = LineEdit_FrameWidth,
    SpinBox_ArrowButtonWidth = 20,
    SpinBox_MinHeight = 32,
    SpinBox_MinWidth = 80,
    SpinBox_MarginHeight = 4,
    SpinBox_MarginWidth = 8,

    // groupbox title margin
    GroupBox_TitleMarginWidth = 4,

    // buttons
    Button_MinHeight = 32,
    Button_MinWidth = 80,
    Button_MarginHeight = 4,
    Button_MarginWidth = 8,
    Button_ItemSpacing = 4,

    // tool buttons
    ToolButton_MarginWidth = 6,
    ToolButton_ItemSpacing = 4,
    ToolButton_InlineIndicatorWidth = 12,

    // checkboxes and radio buttons
    CheckBox_Size = 20,
    CheckBox_FocusMarginWidth = 3,
    CheckBox_ItemSpacing = 4,

    // menubar items
    MenuBarItem_MarginWidth = 8,
    MenuBarItem_MarginHeight = 5,

    // scrollbars
    ScrollBar_Extend = 14,
    ScrollBar_SliderWidth = 8,
    ScrollBar_MinSliderHeight = 24,
    ScrollBar_NoButtonHeight = (ScrollBar_Extend - ScrollBar_SliderWidth) / 2,
    ScrollBar_SingleButtonHeight = 0,
    ScrollBar_DoubleButtonHeight = 0,

    // toolbars
    ToolBar_FrameWidth = 2,
    ToolBar_HandleExtent = 10,
    ToolBar_HandleWidth = 6,
    ToolBar_SeparatorWidth = 8,
    ToolBar_ExtensionWidth = 20,
    ToolBar_ItemSpacing = 0,

    // progressbars
    ProgressBar_BusyIndicatorSize = 24,
    ProgressBar_Thickness = 3,
    ProgressBar_ItemSpacing = 3,

    // mdi title bar
    TitleBar_MarginWidth = 4,

    // sliders
    Slider_TickLength = 4,
    Slider_TickMarginWidth = 6,
    Slider_GrooveThickness = 3,
    Slider_ControlThickness = 24,

    // tabbar
    TabBar_TabMarginHeight = 9,
    TabBar_TabMarginWidth = 8,
    TabBar_TabMinWidth = 80,
    TabBar_TabMinHeight = 32,
    TabBar_TabItemSpacing = 8,
    TabBar_TabOverlap = 1,
    TabBar_BaseOverlap = 0,

    // tab widget
    TabWidget_MarginWidth = 4,

    // toolbox
    ToolBox_TabMinWidth = 80,
    ToolBox_TabItemSpacing = 4,
    ToolBox_TabMarginWidth = 8,

    // tooltips
    ToolTip_FrameWidth = 3,

    // scroll areas
    ScrollArea_FrameWidth = 2,

    // list headers
    Header_MarginWidth = 3,
    Header_ItemSpacing = 2,
    Header_ArrowSize = 10,

    // tree view
    ItemView_ArrowSize = 10,
    ItemView_ItemMarginWidth = 3,
    List_ItemMarginWidth = 4,
    List_ItemMaxHeight = 32,

    // splitter
    Splitter_SplitterWidth = 1,

    // shadow dimensions
    Shadow_Overlap = 0

};

//* animation mode
enum AnimationMode { AnimationNone = 0, AnimationHover = 0x1, AnimationFocus = 0x2, AnimationEnable = 0x4, AnimationPressed = 0x8 };
Q_DECLARE_FLAGS(AnimationModes, AnimationMode)

//* corners
enum Corner {
    CornerTopLeft = 0x1,
    CornerTopRight = 0x2,
    CornerBottomLeft = 0x4,
    CornerBottomRight = 0x8,
    CornersTop = CornerTopLeft | CornerTopRight,
    CornersBottom = CornerBottomLeft | CornerBottomRight,
    CornersLeft = CornerTopLeft | CornerBottomLeft,
    CornersRight = CornerTopRight | CornerBottomRight,
    AllCorners = CornerTopLeft | CornerTopRight | CornerBottomLeft | CornerBottomRight
};
Q_DECLARE_FLAGS(Corners, Corner)

//* sides
enum Side { SideNone = 0x0, SideLeft = 0x1, SideTop = 0x2, SideRight = 0x4, SideBottom = 0x8, AllSides = SideLeft | SideTop | SideRight | SideBottom };
Q_DECLARE_FLAGS(Sides, Side)

//* checkbox state
enum CheckBoxState { CheckOff, CheckPartial, CheckOn, CheckAnimated };

//* radio button state
enum RadioButtonState { RadioOff, RadioOn, RadioAnimated };

//* arrow orientation
enum ArrowOrientation { ArrowNone, ArrowUp, ArrowDown, ArrowLeft, ArrowRight };

//* button type
enum ButtonType { ButtonClose, ButtonMaximize, ButtonMinimize, ButtonRestore };

enum ColorVariant { Unknown, Adwaita, AdwaitaLight, AdwaitaDark };

class StyleOptionsPrivate;

class ADWAITAQT_MAIN_EXPORT StyleOptions
{
public:
    explicit StyleOptions(const QPalette &palette);
    StyleOptions(const QPalette &palette, ColorVariant variant);
    StyleOptions(QPainter *painter, const QRect &rect);
    virtual ~StyleOptions();

    void setPalette(const QPalette &palette);
    QPalette palette() const;

    void setPainter(QPainter *painter);
    QPainter *painter() const;

    void setRect(const QRect &rect);
    QRect rect() const;

    void setColorGroup(QPalette::ColorGroup group);
    QPalette::ColorGroup colorGroup() const;

    void setColorRole(QPalette::ColorRole role);
    QPalette::ColorRole colorRole() const;

    void setColorVariant(ColorVariant variant);
    ColorVariant colorVariant() const;

    void setActive(bool active);
    bool active() const;

    void setHasFocus(bool focus);
    bool hasFocus() const;

    void setMouseOver(bool mouseOver);
    bool mouseOver() const;

    void setOpacity(qreal opacity);
    qreal opacity() const;

    void setAnimationMode(AnimationMode mode);
    AnimationMode animationMode() const;

    void setCheckboxState(CheckBoxState state);
    CheckBoxState checkboxState() const;

    void setRadioButtonState(RadioButtonState state);
    RadioButtonState radioButtonState() const;

    void setState(QStyle::State state);
    QStyle::State state() const;

    void setInMenu(bool inMenu);
    bool inMenu() const;

    void setSunken(bool sunken);
    bool sunken() const;

    void setColor(const QColor &color);
    QColor color() const;

    void setOutlineColor(const QColor &outlineColor);
    QColor outlineColor() const;

private:
    Q_DECLARE_PRIVATE(StyleOptions)

    const QScopedPointer<StyleOptionsPrivate> d_ptr;
};

} // namespace Adwaita

Q_DECLARE_OPERATORS_FOR_FLAGS(Adwaita::AnimationModes)
Q_DECLARE_OPERATORS_FOR_FLAGS(Adwaita::Corners)
Q_DECLARE_OPERATORS_FOR_FLAGS(Adwaita::Sides)

#endif // ADWAITA_H
