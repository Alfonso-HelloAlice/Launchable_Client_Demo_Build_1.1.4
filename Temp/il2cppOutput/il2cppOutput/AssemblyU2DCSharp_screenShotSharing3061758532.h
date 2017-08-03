#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// MNPopup/MNPopupAction
struct MNPopupAction_t2249655003;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// screenShotSharing
struct  screenShotSharing_t3061758532  : public MonoBehaviour_t1158329972
{
public:
	// System.String screenShotSharing::newPath
	String_t* ___newPath_2;
	// System.String screenShotSharing::shot
	String_t* ___shot_3;
	// UnityEngine.UI.Button screenShotSharing::capture
	Button_t2872111280 * ___capture_4;
	// UnityEngine.UI.Button screenShotSharing::save
	Button_t2872111280 * ___save_5;
	// UnityEngine.UI.Button screenShotSharing::cancel
	Button_t2872111280 * ___cancel_6;
	// UnityEngine.UI.Button screenShotSharing::bigCancel
	Button_t2872111280 * ___bigCancel_7;
	// UnityEngine.UI.Button screenShotSharing::facebook
	Button_t2872111280 * ___facebook_8;
	// UnityEngine.UI.Button screenShotSharing::twitter
	Button_t2872111280 * ___twitter_9;
	// UnityEngine.GameObject screenShotSharing::launchable
	GameObject_t1756533147 * ___launchable_10;
	// UnityEngine.GameObject screenShotSharing::findTarget
	GameObject_t1756533147 * ___findTarget_11;
	// UnityEngine.GameObject screenShotSharing::flash
	GameObject_t1756533147 * ___flash_12;
	// UnityEngine.GameObject screenShotSharing::ImageHolder
	GameObject_t1756533147 * ___ImageHolder_13;
	// UnityEngine.GameObject screenShotSharing::bigFlash
	GameObject_t1756533147 * ___bigFlash_14;
	// UnityEngine.UI.Button screenShotSharing::currentPhone
	Button_t2872111280 * ___currentPhone_15;
	// UnityEngine.UI.Button screenShotSharing::currentEmail
	Button_t2872111280 * ___currentEmail_16;
	// UnityEngine.GUIStyle screenShotSharing::style
	GUIStyle_t1799908754 * ___style_17;
	// UnityEngine.GUIStyle screenShotSharing::style2
	GUIStyle_t1799908754 * ___style2_18;
	// UnityEngine.Texture2D screenShotSharing::screenCap
	Texture2D_t3542995729 * ___screenCap_19;
	// UnityEngine.Texture2D screenShotSharing::border
	Texture2D_t3542995729 * ___border_20;
	// System.Boolean screenShotSharing::noAnimation
	bool ___noAnimation_21;
	// System.Boolean screenShotSharing::noPhoneEmailButtons
	bool ___noPhoneEmailButtons_22;

public:
	inline static int32_t get_offset_of_newPath_2() { return static_cast<int32_t>(offsetof(screenShotSharing_t3061758532, ___newPath_2)); }
	inline String_t* get_newPath_2() const { return ___newPath_2; }
	inline String_t** get_address_of_newPath_2() { return &___newPath_2; }
	inline void set_newPath_2(String_t* value)
	{
		___newPath_2 = value;
		Il2CppCodeGenWriteBarrier(&___newPath_2, value);
	}

	inline static int32_t get_offset_of_shot_3() { return static_cast<int32_t>(offsetof(screenShotSharing_t3061758532, ___shot_3)); }
	inline String_t* get_shot_3() const { return ___shot_3; }
	inline String_t** get_address_of_shot_3() { return &___shot_3; }
	inline void set_shot_3(String_t* value)
	{
		___shot_3 = value;
		Il2CppCodeGenWriteBarrier(&___shot_3, value);
	}

	inline static int32_t get_offset_of_capture_4() { return static_cast<int32_t>(offsetof(screenShotSharing_t3061758532, ___capture_4)); }
	inline Button_t2872111280 * get_capture_4() const { return ___capture_4; }
	inline Button_t2872111280 ** get_address_of_capture_4() { return &___capture_4; }
	inline void set_capture_4(Button_t2872111280 * value)
	{
		___capture_4 = value;
		Il2CppCodeGenWriteBarrier(&___capture_4, value);
	}

	inline static int32_t get_offset_of_save_5() { return static_cast<int32_t>(offsetof(screenShotSharing_t3061758532, ___save_5)); }
	inline Button_t2872111280 * get_save_5() const { return ___save_5; }
	inline Button_t2872111280 ** get_address_of_save_5() { return &___save_5; }
	inline void set_save_5(Button_t2872111280 * value)
	{
		___save_5 = value;
		Il2CppCodeGenWriteBarrier(&___save_5, value);
	}

	inline static int32_t get_offset_of_cancel_6() { return static_cast<int32_t>(offsetof(screenShotSharing_t3061758532, ___cancel_6)); }
	inline Button_t2872111280 * get_cancel_6() const { return ___cancel_6; }
	inline Button_t2872111280 ** get_address_of_cancel_6() { return &___cancel_6; }
	inline void set_cancel_6(Button_t2872111280 * value)
	{
		___cancel_6 = value;
		Il2CppCodeGenWriteBarrier(&___cancel_6, value);
	}

	inline static int32_t get_offset_of_bigCancel_7() { return static_cast<int32_t>(offsetof(screenShotSharing_t3061758532, ___bigCancel_7)); }
	inline Button_t2872111280 * get_bigCancel_7() const { return ___bigCancel_7; }
	inline Button_t2872111280 ** get_address_of_bigCancel_7() { return &___bigCancel_7; }
	inline void set_bigCancel_7(Button_t2872111280 * value)
	{
		___bigCancel_7 = value;
		Il2CppCodeGenWriteBarrier(&___bigCancel_7, value);
	}

	inline static int32_t get_offset_of_facebook_8() { return static_cast<int32_t>(offsetof(screenShotSharing_t3061758532, ___facebook_8)); }
	inline Button_t2872111280 * get_facebook_8() const { return ___facebook_8; }
	inline Button_t2872111280 ** get_address_of_facebook_8() { return &___facebook_8; }
	inline void set_facebook_8(Button_t2872111280 * value)
	{
		___facebook_8 = value;
		Il2CppCodeGenWriteBarrier(&___facebook_8, value);
	}

	inline static int32_t get_offset_of_twitter_9() { return static_cast<int32_t>(offsetof(screenShotSharing_t3061758532, ___twitter_9)); }
	inline Button_t2872111280 * get_twitter_9() const { return ___twitter_9; }
	inline Button_t2872111280 ** get_address_of_twitter_9() { return &___twitter_9; }
	inline void set_twitter_9(Button_t2872111280 * value)
	{
		___twitter_9 = value;
		Il2CppCodeGenWriteBarrier(&___twitter_9, value);
	}

	inline static int32_t get_offset_of_launchable_10() { return static_cast<int32_t>(offsetof(screenShotSharing_t3061758532, ___launchable_10)); }
	inline GameObject_t1756533147 * get_launchable_10() const { return ___launchable_10; }
	inline GameObject_t1756533147 ** get_address_of_launchable_10() { return &___launchable_10; }
	inline void set_launchable_10(GameObject_t1756533147 * value)
	{
		___launchable_10 = value;
		Il2CppCodeGenWriteBarrier(&___launchable_10, value);
	}

	inline static int32_t get_offset_of_findTarget_11() { return static_cast<int32_t>(offsetof(screenShotSharing_t3061758532, ___findTarget_11)); }
	inline GameObject_t1756533147 * get_findTarget_11() const { return ___findTarget_11; }
	inline GameObject_t1756533147 ** get_address_of_findTarget_11() { return &___findTarget_11; }
	inline void set_findTarget_11(GameObject_t1756533147 * value)
	{
		___findTarget_11 = value;
		Il2CppCodeGenWriteBarrier(&___findTarget_11, value);
	}

	inline static int32_t get_offset_of_flash_12() { return static_cast<int32_t>(offsetof(screenShotSharing_t3061758532, ___flash_12)); }
	inline GameObject_t1756533147 * get_flash_12() const { return ___flash_12; }
	inline GameObject_t1756533147 ** get_address_of_flash_12() { return &___flash_12; }
	inline void set_flash_12(GameObject_t1756533147 * value)
	{
		___flash_12 = value;
		Il2CppCodeGenWriteBarrier(&___flash_12, value);
	}

	inline static int32_t get_offset_of_ImageHolder_13() { return static_cast<int32_t>(offsetof(screenShotSharing_t3061758532, ___ImageHolder_13)); }
	inline GameObject_t1756533147 * get_ImageHolder_13() const { return ___ImageHolder_13; }
	inline GameObject_t1756533147 ** get_address_of_ImageHolder_13() { return &___ImageHolder_13; }
	inline void set_ImageHolder_13(GameObject_t1756533147 * value)
	{
		___ImageHolder_13 = value;
		Il2CppCodeGenWriteBarrier(&___ImageHolder_13, value);
	}

	inline static int32_t get_offset_of_bigFlash_14() { return static_cast<int32_t>(offsetof(screenShotSharing_t3061758532, ___bigFlash_14)); }
	inline GameObject_t1756533147 * get_bigFlash_14() const { return ___bigFlash_14; }
	inline GameObject_t1756533147 ** get_address_of_bigFlash_14() { return &___bigFlash_14; }
	inline void set_bigFlash_14(GameObject_t1756533147 * value)
	{
		___bigFlash_14 = value;
		Il2CppCodeGenWriteBarrier(&___bigFlash_14, value);
	}

	inline static int32_t get_offset_of_currentPhone_15() { return static_cast<int32_t>(offsetof(screenShotSharing_t3061758532, ___currentPhone_15)); }
	inline Button_t2872111280 * get_currentPhone_15() const { return ___currentPhone_15; }
	inline Button_t2872111280 ** get_address_of_currentPhone_15() { return &___currentPhone_15; }
	inline void set_currentPhone_15(Button_t2872111280 * value)
	{
		___currentPhone_15 = value;
		Il2CppCodeGenWriteBarrier(&___currentPhone_15, value);
	}

	inline static int32_t get_offset_of_currentEmail_16() { return static_cast<int32_t>(offsetof(screenShotSharing_t3061758532, ___currentEmail_16)); }
	inline Button_t2872111280 * get_currentEmail_16() const { return ___currentEmail_16; }
	inline Button_t2872111280 ** get_address_of_currentEmail_16() { return &___currentEmail_16; }
	inline void set_currentEmail_16(Button_t2872111280 * value)
	{
		___currentEmail_16 = value;
		Il2CppCodeGenWriteBarrier(&___currentEmail_16, value);
	}

	inline static int32_t get_offset_of_style_17() { return static_cast<int32_t>(offsetof(screenShotSharing_t3061758532, ___style_17)); }
	inline GUIStyle_t1799908754 * get_style_17() const { return ___style_17; }
	inline GUIStyle_t1799908754 ** get_address_of_style_17() { return &___style_17; }
	inline void set_style_17(GUIStyle_t1799908754 * value)
	{
		___style_17 = value;
		Il2CppCodeGenWriteBarrier(&___style_17, value);
	}

	inline static int32_t get_offset_of_style2_18() { return static_cast<int32_t>(offsetof(screenShotSharing_t3061758532, ___style2_18)); }
	inline GUIStyle_t1799908754 * get_style2_18() const { return ___style2_18; }
	inline GUIStyle_t1799908754 ** get_address_of_style2_18() { return &___style2_18; }
	inline void set_style2_18(GUIStyle_t1799908754 * value)
	{
		___style2_18 = value;
		Il2CppCodeGenWriteBarrier(&___style2_18, value);
	}

	inline static int32_t get_offset_of_screenCap_19() { return static_cast<int32_t>(offsetof(screenShotSharing_t3061758532, ___screenCap_19)); }
	inline Texture2D_t3542995729 * get_screenCap_19() const { return ___screenCap_19; }
	inline Texture2D_t3542995729 ** get_address_of_screenCap_19() { return &___screenCap_19; }
	inline void set_screenCap_19(Texture2D_t3542995729 * value)
	{
		___screenCap_19 = value;
		Il2CppCodeGenWriteBarrier(&___screenCap_19, value);
	}

	inline static int32_t get_offset_of_border_20() { return static_cast<int32_t>(offsetof(screenShotSharing_t3061758532, ___border_20)); }
	inline Texture2D_t3542995729 * get_border_20() const { return ___border_20; }
	inline Texture2D_t3542995729 ** get_address_of_border_20() { return &___border_20; }
	inline void set_border_20(Texture2D_t3542995729 * value)
	{
		___border_20 = value;
		Il2CppCodeGenWriteBarrier(&___border_20, value);
	}

	inline static int32_t get_offset_of_noAnimation_21() { return static_cast<int32_t>(offsetof(screenShotSharing_t3061758532, ___noAnimation_21)); }
	inline bool get_noAnimation_21() const { return ___noAnimation_21; }
	inline bool* get_address_of_noAnimation_21() { return &___noAnimation_21; }
	inline void set_noAnimation_21(bool value)
	{
		___noAnimation_21 = value;
	}

	inline static int32_t get_offset_of_noPhoneEmailButtons_22() { return static_cast<int32_t>(offsetof(screenShotSharing_t3061758532, ___noPhoneEmailButtons_22)); }
	inline bool get_noPhoneEmailButtons_22() const { return ___noPhoneEmailButtons_22; }
	inline bool* get_address_of_noPhoneEmailButtons_22() { return &___noPhoneEmailButtons_22; }
	inline void set_noPhoneEmailButtons_22(bool value)
	{
		___noPhoneEmailButtons_22 = value;
	}
};

struct screenShotSharing_t3061758532_StaticFields
{
public:
	// MNPopup/MNPopupAction screenShotSharing::<>f__am$cache0
	MNPopupAction_t2249655003 * ___U3CU3Ef__amU24cache0_23;
	// MNPopup/MNPopupAction screenShotSharing::<>f__am$cache1
	MNPopupAction_t2249655003 * ___U3CU3Ef__amU24cache1_24;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_23() { return static_cast<int32_t>(offsetof(screenShotSharing_t3061758532_StaticFields, ___U3CU3Ef__amU24cache0_23)); }
	inline MNPopupAction_t2249655003 * get_U3CU3Ef__amU24cache0_23() const { return ___U3CU3Ef__amU24cache0_23; }
	inline MNPopupAction_t2249655003 ** get_address_of_U3CU3Ef__amU24cache0_23() { return &___U3CU3Ef__amU24cache0_23; }
	inline void set_U3CU3Ef__amU24cache0_23(MNPopupAction_t2249655003 * value)
	{
		___U3CU3Ef__amU24cache0_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_23, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_24() { return static_cast<int32_t>(offsetof(screenShotSharing_t3061758532_StaticFields, ___U3CU3Ef__amU24cache1_24)); }
	inline MNPopupAction_t2249655003 * get_U3CU3Ef__amU24cache1_24() const { return ___U3CU3Ef__amU24cache1_24; }
	inline MNPopupAction_t2249655003 ** get_address_of_U3CU3Ef__amU24cache1_24() { return &___U3CU3Ef__amU24cache1_24; }
	inline void set_U3CU3Ef__amU24cache1_24(MNPopupAction_t2249655003 * value)
	{
		___U3CU3Ef__amU24cache1_24 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_24, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
