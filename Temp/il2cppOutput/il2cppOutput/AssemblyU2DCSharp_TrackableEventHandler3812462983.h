#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1779888572;
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TrackableEventHandler
struct  TrackableEventHandler_t3812462983  : public MonoBehaviour_t1158329972
{
public:
	// Vuforia.TrackableBehaviour TrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t1779888572 * ___mTrackableBehaviour_2;
	// System.Boolean TrackableEventHandler::mHasBeenFound
	bool ___mHasBeenFound_3;
	// System.Boolean TrackableEventHandler::mLostTracking
	bool ___mLostTracking_4;
	// System.Single TrackableEventHandler::mSecondsSinceLost
	float ___mSecondsSinceLost_5;
	// UnityEngine.UI.Button TrackableEventHandler::phoneButton
	Button_t2872111280 * ___phoneButton_6;
	// UnityEngine.UI.Button TrackableEventHandler::emailButton
	Button_t2872111280 * ___emailButton_7;
	// System.Boolean TrackableEventHandler::capture
	bool ___capture_8;
	// System.Boolean TrackableEventHandler::newCapture
	bool ___newCapture_9;
	// UnityEngine.Animator TrackableEventHandler::phone
	Animator_t69676727 * ___phone_10;
	// UnityEngine.Animator TrackableEventHandler::email
	Animator_t69676727 * ___email_11;
	// UnityEngine.UI.Button TrackableEventHandler::ph
	Button_t2872111280 * ___ph_12;
	// UnityEngine.UI.Button TrackableEventHandler::em
	Button_t2872111280 * ___em_13;

public:
	inline static int32_t get_offset_of_mTrackableBehaviour_2() { return static_cast<int32_t>(offsetof(TrackableEventHandler_t3812462983, ___mTrackableBehaviour_2)); }
	inline TrackableBehaviour_t1779888572 * get_mTrackableBehaviour_2() const { return ___mTrackableBehaviour_2; }
	inline TrackableBehaviour_t1779888572 ** get_address_of_mTrackableBehaviour_2() { return &___mTrackableBehaviour_2; }
	inline void set_mTrackableBehaviour_2(TrackableBehaviour_t1779888572 * value)
	{
		___mTrackableBehaviour_2 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackableBehaviour_2, value);
	}

	inline static int32_t get_offset_of_mHasBeenFound_3() { return static_cast<int32_t>(offsetof(TrackableEventHandler_t3812462983, ___mHasBeenFound_3)); }
	inline bool get_mHasBeenFound_3() const { return ___mHasBeenFound_3; }
	inline bool* get_address_of_mHasBeenFound_3() { return &___mHasBeenFound_3; }
	inline void set_mHasBeenFound_3(bool value)
	{
		___mHasBeenFound_3 = value;
	}

	inline static int32_t get_offset_of_mLostTracking_4() { return static_cast<int32_t>(offsetof(TrackableEventHandler_t3812462983, ___mLostTracking_4)); }
	inline bool get_mLostTracking_4() const { return ___mLostTracking_4; }
	inline bool* get_address_of_mLostTracking_4() { return &___mLostTracking_4; }
	inline void set_mLostTracking_4(bool value)
	{
		___mLostTracking_4 = value;
	}

	inline static int32_t get_offset_of_mSecondsSinceLost_5() { return static_cast<int32_t>(offsetof(TrackableEventHandler_t3812462983, ___mSecondsSinceLost_5)); }
	inline float get_mSecondsSinceLost_5() const { return ___mSecondsSinceLost_5; }
	inline float* get_address_of_mSecondsSinceLost_5() { return &___mSecondsSinceLost_5; }
	inline void set_mSecondsSinceLost_5(float value)
	{
		___mSecondsSinceLost_5 = value;
	}

	inline static int32_t get_offset_of_phoneButton_6() { return static_cast<int32_t>(offsetof(TrackableEventHandler_t3812462983, ___phoneButton_6)); }
	inline Button_t2872111280 * get_phoneButton_6() const { return ___phoneButton_6; }
	inline Button_t2872111280 ** get_address_of_phoneButton_6() { return &___phoneButton_6; }
	inline void set_phoneButton_6(Button_t2872111280 * value)
	{
		___phoneButton_6 = value;
		Il2CppCodeGenWriteBarrier(&___phoneButton_6, value);
	}

	inline static int32_t get_offset_of_emailButton_7() { return static_cast<int32_t>(offsetof(TrackableEventHandler_t3812462983, ___emailButton_7)); }
	inline Button_t2872111280 * get_emailButton_7() const { return ___emailButton_7; }
	inline Button_t2872111280 ** get_address_of_emailButton_7() { return &___emailButton_7; }
	inline void set_emailButton_7(Button_t2872111280 * value)
	{
		___emailButton_7 = value;
		Il2CppCodeGenWriteBarrier(&___emailButton_7, value);
	}

	inline static int32_t get_offset_of_capture_8() { return static_cast<int32_t>(offsetof(TrackableEventHandler_t3812462983, ___capture_8)); }
	inline bool get_capture_8() const { return ___capture_8; }
	inline bool* get_address_of_capture_8() { return &___capture_8; }
	inline void set_capture_8(bool value)
	{
		___capture_8 = value;
	}

	inline static int32_t get_offset_of_newCapture_9() { return static_cast<int32_t>(offsetof(TrackableEventHandler_t3812462983, ___newCapture_9)); }
	inline bool get_newCapture_9() const { return ___newCapture_9; }
	inline bool* get_address_of_newCapture_9() { return &___newCapture_9; }
	inline void set_newCapture_9(bool value)
	{
		___newCapture_9 = value;
	}

	inline static int32_t get_offset_of_phone_10() { return static_cast<int32_t>(offsetof(TrackableEventHandler_t3812462983, ___phone_10)); }
	inline Animator_t69676727 * get_phone_10() const { return ___phone_10; }
	inline Animator_t69676727 ** get_address_of_phone_10() { return &___phone_10; }
	inline void set_phone_10(Animator_t69676727 * value)
	{
		___phone_10 = value;
		Il2CppCodeGenWriteBarrier(&___phone_10, value);
	}

	inline static int32_t get_offset_of_email_11() { return static_cast<int32_t>(offsetof(TrackableEventHandler_t3812462983, ___email_11)); }
	inline Animator_t69676727 * get_email_11() const { return ___email_11; }
	inline Animator_t69676727 ** get_address_of_email_11() { return &___email_11; }
	inline void set_email_11(Animator_t69676727 * value)
	{
		___email_11 = value;
		Il2CppCodeGenWriteBarrier(&___email_11, value);
	}

	inline static int32_t get_offset_of_ph_12() { return static_cast<int32_t>(offsetof(TrackableEventHandler_t3812462983, ___ph_12)); }
	inline Button_t2872111280 * get_ph_12() const { return ___ph_12; }
	inline Button_t2872111280 ** get_address_of_ph_12() { return &___ph_12; }
	inline void set_ph_12(Button_t2872111280 * value)
	{
		___ph_12 = value;
		Il2CppCodeGenWriteBarrier(&___ph_12, value);
	}

	inline static int32_t get_offset_of_em_13() { return static_cast<int32_t>(offsetof(TrackableEventHandler_t3812462983, ___em_13)); }
	inline Button_t2872111280 * get_em_13() const { return ___em_13; }
	inline Button_t2872111280 ** get_address_of_em_13() { return &___em_13; }
	inline void set_em_13(Button_t2872111280 * value)
	{
		___em_13 = value;
		Il2CppCodeGenWriteBarrier(&___em_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
