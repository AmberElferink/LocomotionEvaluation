#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.Attribute
struct Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char
struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,Unity.Entities.ScriptBehaviourManager>[]
struct EntryU5BU5D_t9D35134AE72DBD1AE3CB8B7C616417703C449D32;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,Unity.Entities.ScriptBehaviourManager>
struct KeyCollection_t948104669F454F6E81647420B2F81A27F7892614;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,Unity.Entities.ScriptBehaviourManager>
struct ValueCollection_t7A49D4ABB2355983EE55456E2C0E8497CB3CB087;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.Type,Unity.Entities.ScriptBehaviourManager>
struct Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F;
// System.Collections.Generic.IEnumerable`1<Unity.Entities.ScriptBehaviourManager>
struct IEnumerable_1_t89224EE5033841F712DE248018C25B488E1A82AD;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t84A1E76CEF8A66F732C15925C1E1DBC7446DB3A4;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_tE09735A322C3B17000EF4E4BC8026FEDEB7B0D9B;
// System.Collections.Generic.IList`1<Unity.Entities.ScriptBehaviourManager>
struct IList_1_tDF4B412C4EE9AF6C85303F93A92C10876BC26792;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<Unity.Entities.ScriptBehaviourManager>
struct List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445;
// System.Collections.Generic.List`1<Unity.Entities.World>
struct List_1_t3E642DEC3ECCF74A4F3732168EAE534DC91673A6;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Unity.Entities.ScriptBehaviourManager>
struct ReadOnlyCollection_1_t0C6843E8F3A6543EE548249D63096DBB0754BC24;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Func`2<System.Reflection.FieldInfo,System.Boolean>
struct Func_2_t56D7C745FF6EF4A902AAB44EAFC9F43DC7DF0CDD;
// System.Int32
struct Int32_t585191389E07734F19F3156FF88FB3EF4800D102;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.UInt32
struct UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// Unity.Collections.NativeHashMapData
struct NativeHashMapData_tD9D3B267DA0D5157D6B5C8C099D0A11BE4C279BB;
// Unity.Entities.ArchetypeManager
struct ArchetypeManager_t72901F70B60CC6DF5456032A7FBE5F3D29C3AEA0;
// Unity.Entities.ComponentGroup
struct ComponentGroup_t95719B3A6DEC548B74691DD9617029233DAD91B1;
// Unity.Entities.ComponentJobSafetyManager
struct ComponentJobSafetyManager_tA5A6CAC17710B5DE0584A8C4E02B313610FC3500;
// Unity.Entities.EntityDataManager
struct EntityDataManager_t4851DE9BEC698C70110411C1EDDC127FD4734756;
// Unity.Entities.EntityGroupManager
struct EntityGroupManager_tEDA6CEB266AEC3FB6BA6D2C88310A7FFF4A08E56;
// Unity.Entities.EntityManager/EntityManagerDebug
struct EntityManagerDebug_tE9DB94BB3B26DB1F38416CC562929F9F561A5028;
// Unity.Entities.FastEquality/Layout[]
struct LayoutU5BU5D_t020B9455644110FB97E85E0698EE115BE9E3722C;
// Unity.Entities.FastEquality/TypeInfo
struct TypeInfo_t4386566412634AE6E9ACF105EE51E7AEE48F9AF5;
// Unity.Entities.ScriptBehaviourManager
struct ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C;
// Unity.Entities.ScriptBehaviourManager[]
struct ScriptBehaviourManagerU5BU5D_t4B2AAE1E8F2F37E34E6C060C181D34E9DDFB9CC7;
// Unity.Entities.SharedComponentDataManager
struct SharedComponentDataManager_tDEC17476532B1C30AA27FB3E5946CBA0C835CAFE;
// Unity.Entities.TypeManager/<>c
struct U3CU3Ec_t1234B68126878DBDB84E9917E17DAA5E21B698A0;
// Unity.Entities.TypeManager/EntityOffsetInfo[]
struct EntityOffsetInfoU5BU5D_tE2302811C925A7C38EEBDE3C158881A2E02CC3E4;
// Unity.Entities.UpdateAfterAttribute
struct UpdateAfterAttribute_t3E5895B0558A08D5A5C193149925C5D947B22DE3;
// Unity.Entities.UpdateBeforeAttribute
struct UpdateBeforeAttribute_t1547E96ADA4D845BEFE640C7EBA54BB1BF9964FB;
// Unity.Entities.UpdateInGroupAttribute
struct UpdateInGroupAttribute_t10CFAF8D3E3A3DD188ECFA30CE20238F85FA276A;
// Unity.Entities.WordStorage
struct WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8;
// Unity.Entities.World
struct World_tEEA075348FAEC96EE224554FCDED78254768804E;
// Unity.Entities.World[]
struct WorldU5BU5D_t84AAEF3147DB03C857A3546FCC0EA581BCDDB161;

extern RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F_il2cpp_TypeInfo_var;
extern RuntimeClass* EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3E642DEC3ECCF74A4F3732168EAE534DC91673A6_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445_il2cpp_TypeInfo_var;
extern RuntimeClass* MissingMethodException_t7D33DFD3009E4F19BE4DD0967F04D3878F348498_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyCollection_1_t0C6843E8F3A6543EE548249D63096DBB0754BC24_il2cpp_TypeInfo_var;
extern RuntimeClass* ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec_t1234B68126878DBDB84E9917E17DAA5E21B698A0_il2cpp_TypeInfo_var;
extern RuntimeClass* WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8_il2cpp_TypeInfo_var;
extern RuntimeClass* World_tEEA075348FAEC96EE224554FCDED78254768804E_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2DDC6DC0D59BE69AB70326B740C316A9F95CDD44;
extern String_t* _stringLiteral43877617DD1745CCC76963FF4DC374E875370F30;
extern String_t* _stringLiteralA3BB78DA990BFC1E258B6CEAA3FE47652DAEC5F0;
extern String_t* _stringLiteralD556FC831C7B6FFB6D61F0D284608C9EBA2A8577;
extern const RuntimeMethod* Dictionary_2_Add_mBB9F1BDE9B7FD3E71E0DBD4B886F323AEC334656_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Clear_m882A88B78C063A08131E2C1705E2C2E9AA1EDCC1_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m1FAEB7A45EEC00A90537A9C7C8FEF93F33749FB9_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m14FAA4E1C93D87C935BCC973FE7D1A4DF50B5C61_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m0EC757AD9801FEFAB28A0C5F3B5FF304D4FD30D9_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m071D3F7038B9B2188F9794672F0C8F0C427B311A_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m9C25BCD2D5B74852C2EF1821CFD26909DCC17620_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_mFF68BE2E0FDCB432AF38A796BAF2F6CDD4377E0D_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m0A05D71C08663EE1F2698B30DC67DA0C4148E7C0_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_mA2EEFBF09A4B54FF63BC147C96912EBF1A998602_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m34E261986E4856CE9C75B1B068CB821C96ECD65D_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3F64B689E744C90B786C5C1EC7F2FABA30CAA546_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m1E904408485AF0B6DC2B53063E8E730B9F0900E3_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Contains_mFC2525018DE71698EA64EFDC349061660A605F12_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m248A80D434ED29E7991EFA070A9BE4464EC69EC6_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Remove_m62435CE6445EE0871D8F90D16BCEBD8C34B05FE2_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Remove_mFC18813B2D16AB14264B75DC42B8991FA887E4E6_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Reverse_mB4FB155F759478BA09CBC5C4C5F7CB87E2D18AB2_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m016B7AD9226F608728F97AAAFF357B2226301B40_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_mB54295B514A703F333F69B23876C246729FAC133_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_mA769BA2B9D93E1409037895D02BDB1AE297680CD_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_mA068FE543869F436B504A9D52F026B5E702BC166_RuntimeMethod_var;
extern const RuntimeMethod* NativeArray_1_Dispose_m819E94EE5DC5AD0CF4B1F2372795EBB5441C1668_RuntimeMethod_var;
extern const RuntimeMethod* NativeArray_1_Dispose_mCCF1C8209E27BE62EBC0FAB288D1038BB7C4ED79_RuntimeMethod_var;
extern const RuntimeMethod* NativeArray_1__ctor_m31DFC95A147492CF22058A7AE93443D710DA2986_RuntimeMethod_var;
extern const RuntimeMethod* NativeArray_1__ctor_m4F91C56CC50AB0E1B25E24C61C2F34C690098F91_RuntimeMethod_var;
extern const RuntimeMethod* NativeMultiHashMap_2_Add_m1C393F41C3B4B1A55950B0E25F357204DC5F3C41_RuntimeMethod_var;
extern const RuntimeMethod* NativeMultiHashMap_2_Dispose_mFAEBE7FCD7859A0CCAF73AF4E882F174ED642E14_RuntimeMethod_var;
extern const RuntimeMethod* NativeMultiHashMap_2_TryGetFirstValue_mCFEE6CB91ABB39F3E5FDC3292940BFBFE202A8BF_RuntimeMethod_var;
extern const RuntimeMethod* NativeMultiHashMap_2_TryGetNextValue_m85C55FEC955DAD271D1FED0366875FA0FB28855B_RuntimeMethod_var;
extern const RuntimeMethod* NativeMultiHashMap_2__ctor_mD642075A32E67E40475A5804F71118F20D4D2D6D_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1__ctor_mEDCB4D392B1AF20310D9849D903234D2EBE1AE94_RuntimeMethod_var;
extern const RuntimeMethod* World_AddManager_TisScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C_m925B06F6F8A48EDD137619AB9800B7FA645921EC_RuntimeMethod_var;
extern const RuntimeMethod* World_CreateManagerInternal_m395F28BFE883C4B8B404B884A479B9853BB2B646_RuntimeMethod_var;
extern const RuntimeMethod* World_Dispose_mA2C5B7B71DFA1A2E41DF51C39FAF5C803DE35747_RuntimeMethod_var;
extern const RuntimeMethod* World_RemoveManagerInternal_m22A3DCB4AFAFD6889B84E3B24C49764E5712146D_RuntimeMethod_var;
extern const RuntimeType* ISystemStateComponentData_tCCDD668178E711F81D821F6F38D4A09EFAC9ADE2_0_0_0_var;
extern const RuntimeType* ISystemStateSharedComponentData_t7356B7C69F5B5B0CE975877D98201560E244B912_0_0_0_var;
extern const RuntimeType* ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C_0_0_0_var;
extern const uint32_t TypeInfo__ctor_m43DB04B2F4034DCF59472BF758A66CA38CBA80A4_MetadataUsageId;
extern const uint32_t U3CU3Ec__cctor_m1EF7B20577BEE21BFCE99AD1E1CDC11D5611F761_MetadataUsageId;
extern const uint32_t WordStorage_Dispose_mA8B46B333B32D0A48EC0A7CED41041ADC7593AF0_MetadataUsageId;
extern const uint32_t WordStorage_GetIndex_m47A63E719E7A37AE0CFC9A588E726CF59E1495BE_MetadataUsageId;
extern const uint32_t WordStorage_GetOrCreateIndex_m8F3A4F16709E0721C241C5C1DFC816B6100EF1ED_MetadataUsageId;
extern const uint32_t WordStorage_Initialize_mA3BDE7571980715FC61DFB3FB435977E8FCE1A82_MetadataUsageId;
extern const uint32_t WordStorage_get_Instance_m01EE3920D46FB7E1951D39FF2E5280A743B1FB2A_MetadataUsageId;
extern const uint32_t WordStorage_set_Instance_m635A28120C2D08806ACBFFF28F1EFDD7E603BCD8_MetadataUsageId;
extern const uint32_t World_AddTypeLookup_m364FE5B38C207CA38E2B45B4AD6565FE1D9E5707_MetadataUsageId;
extern const uint32_t World_CreateManagerInternal_m395F28BFE883C4B8B404B884A479B9853BB2B646_MetadataUsageId;
extern const uint32_t World_DisposeAllWorlds_m6DE989565292CCF51CEC24EB971ECA832F561A04_MetadataUsageId;
extern const uint32_t World_Dispose_mA2C5B7B71DFA1A2E41DF51C39FAF5C803DE35747_MetadataUsageId;
extern const uint32_t World_GetExistingManagerInternal_m6B294BC2B80CE2DC0D15BB459E18AF1B1BD55227_MetadataUsageId;
extern const uint32_t World_RemoveManagerInternal_m22A3DCB4AFAFD6889B84E3B24C49764E5712146D_MetadataUsageId;
extern const uint32_t World__cctor_mC687693BC0B680B528E2423DE100A3C24D3660A1_MetadataUsageId;
extern const uint32_t World__ctor_m621977F24BBF6A3DDBDC35B06B4B271B6D161951_MetadataUsageId;
extern const uint32_t World_get_Active_mD6EE6752C1E68C2E9E6C37D8908F1FBDDBA7C015_MetadataUsageId;
extern const uint32_t World_get_BehaviourManagers_mF6D336C58F0D4F60A62BA0EF926ABB4252B84DD9_MetadataUsageId;
extern const uint32_t World_set_Active_m873110896D26BC31ECAAE5CBEE490DF5073550B5_MetadataUsageId;
struct EntityDataManager_t4851DE9BEC698C70110411C1EDDC127FD4734756 ;
struct EntityOffsetInfo_tBA42506153706A75A011761D1B08C2068EB09D31 ;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Layout_t42138B3D3D2034CF0F16539E4DAB9ACA2FAD50A7_marshaled_com;
struct Layout_t42138B3D3D2034CF0F16539E4DAB9ACA2FAD50A7_marshaled_pinvoke;
struct NativeHashMapData_tD9D3B267DA0D5157D6B5C8C099D0A11BE4C279BB ;
struct TypeInfo_t4386566412634AE6E9ACF105EE51E7AEE48F9AF5;;
struct TypeInfo_t4386566412634AE6E9ACF105EE51E7AEE48F9AF5_marshaled_com;
struct TypeInfo_t4386566412634AE6E9ACF105EE51E7AEE48F9AF5_marshaled_com;;
struct TypeInfo_t4386566412634AE6E9ACF105EE51E7AEE48F9AF5_marshaled_pinvoke;
struct TypeInfo_t4386566412634AE6E9ACF105EE51E7AEE48F9AF5_marshaled_pinvoke;;

struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct EntityOffsetInfoU5BU5D_tE2302811C925A7C38EEBDE3C158881A2E02CC3E4;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef ATTRIBUTE_TF048C13FB3C8CFCC53F82290E4A3F621089F9A74_H
#define ATTRIBUTE_TF048C13FB3C8CFCC53F82290E4A3F621089F9A74_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_TF048C13FB3C8CFCC53F82290E4A3F621089F9A74_H
#ifndef DICTIONARY_2_TF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F_H
#define DICTIONARY_2_TF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Type,Unity.Entities.ScriptBehaviourManager>
struct  Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t9D35134AE72DBD1AE3CB8B7C616417703C449D32* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t948104669F454F6E81647420B2F81A27F7892614 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t7A49D4ABB2355983EE55456E2C0E8497CB3CB087 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F, ___entries_1)); }
	inline EntryU5BU5D_t9D35134AE72DBD1AE3CB8B7C616417703C449D32* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t9D35134AE72DBD1AE3CB8B7C616417703C449D32** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t9D35134AE72DBD1AE3CB8B7C616417703C449D32* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F, ___keys_7)); }
	inline KeyCollection_t948104669F454F6E81647420B2F81A27F7892614 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t948104669F454F6E81647420B2F81A27F7892614 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t948104669F454F6E81647420B2F81A27F7892614 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F, ___values_8)); }
	inline ValueCollection_t7A49D4ABB2355983EE55456E2C0E8497CB3CB087 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t7A49D4ABB2355983EE55456E2C0E8497CB3CB087 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t7A49D4ABB2355983EE55456E2C0E8497CB3CB087 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_TF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F_H
#ifndef LIST_1_TBEFC7E81B140E222889DE4FC745DE7F0C31AD445_H
#define LIST_1_TBEFC7E81B140E222889DE4FC745DE7F0C31AD445_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Unity.Entities.ScriptBehaviourManager>
struct  List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ScriptBehaviourManagerU5BU5D_t4B2AAE1E8F2F37E34E6C060C181D34E9DDFB9CC7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445, ____items_1)); }
	inline ScriptBehaviourManagerU5BU5D_t4B2AAE1E8F2F37E34E6C060C181D34E9DDFB9CC7* get__items_1() const { return ____items_1; }
	inline ScriptBehaviourManagerU5BU5D_t4B2AAE1E8F2F37E34E6C060C181D34E9DDFB9CC7** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ScriptBehaviourManagerU5BU5D_t4B2AAE1E8F2F37E34E6C060C181D34E9DDFB9CC7* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ScriptBehaviourManagerU5BU5D_t4B2AAE1E8F2F37E34E6C060C181D34E9DDFB9CC7* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445_StaticFields, ____emptyArray_5)); }
	inline ScriptBehaviourManagerU5BU5D_t4B2AAE1E8F2F37E34E6C060C181D34E9DDFB9CC7* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ScriptBehaviourManagerU5BU5D_t4B2AAE1E8F2F37E34E6C060C181D34E9DDFB9CC7** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ScriptBehaviourManagerU5BU5D_t4B2AAE1E8F2F37E34E6C060C181D34E9DDFB9CC7* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TBEFC7E81B140E222889DE4FC745DE7F0C31AD445_H
#ifndef LIST_1_T3E642DEC3ECCF74A4F3732168EAE534DC91673A6_H
#define LIST_1_T3E642DEC3ECCF74A4F3732168EAE534DC91673A6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Unity.Entities.World>
struct  List_1_t3E642DEC3ECCF74A4F3732168EAE534DC91673A6  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	WorldU5BU5D_t84AAEF3147DB03C857A3546FCC0EA581BCDDB161* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3E642DEC3ECCF74A4F3732168EAE534DC91673A6, ____items_1)); }
	inline WorldU5BU5D_t84AAEF3147DB03C857A3546FCC0EA581BCDDB161* get__items_1() const { return ____items_1; }
	inline WorldU5BU5D_t84AAEF3147DB03C857A3546FCC0EA581BCDDB161** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(WorldU5BU5D_t84AAEF3147DB03C857A3546FCC0EA581BCDDB161* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3E642DEC3ECCF74A4F3732168EAE534DC91673A6, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3E642DEC3ECCF74A4F3732168EAE534DC91673A6, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3E642DEC3ECCF74A4F3732168EAE534DC91673A6, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t3E642DEC3ECCF74A4F3732168EAE534DC91673A6_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	WorldU5BU5D_t84AAEF3147DB03C857A3546FCC0EA581BCDDB161* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3E642DEC3ECCF74A4F3732168EAE534DC91673A6_StaticFields, ____emptyArray_5)); }
	inline WorldU5BU5D_t84AAEF3147DB03C857A3546FCC0EA581BCDDB161* get__emptyArray_5() const { return ____emptyArray_5; }
	inline WorldU5BU5D_t84AAEF3147DB03C857A3546FCC0EA581BCDDB161** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(WorldU5BU5D_t84AAEF3147DB03C857A3546FCC0EA581BCDDB161* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3E642DEC3ECCF74A4F3732168EAE534DC91673A6_H
#ifndef READONLYCOLLECTION_1_T0C6843E8F3A6543EE548249D63096DBB0754BC24_H
#define READONLYCOLLECTION_1_T0C6843E8F3A6543EE548249D63096DBB0754BC24_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyCollection`1<Unity.Entities.ScriptBehaviourManager>
struct  ReadOnlyCollection_1_t0C6843E8F3A6543EE548249D63096DBB0754BC24  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t0C6843E8F3A6543EE548249D63096DBB0754BC24, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t0C6843E8F3A6543EE548249D63096DBB0754BC24, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTION_1_T0C6843E8F3A6543EE548249D63096DBB0754BC24_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef SCRIPTBEHAVIOURMANAGER_T8C34EC740B994E1FCFEDBBBA447299C12B2C286C_H
#define SCRIPTBEHAVIOURMANAGER_T8C34EC740B994E1FCFEDBBBA447299C12B2C286C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Entities.ScriptBehaviourManager
struct  ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTBEHAVIOURMANAGER_T8C34EC740B994E1FCFEDBBBA447299C12B2C286C_H
#ifndef U3CU3EC_T1234B68126878DBDB84E9917E17DAA5E21B698A0_H
#define U3CU3EC_T1234B68126878DBDB84E9917E17DAA5E21B698A0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Entities.TypeManager_<>c
struct  U3CU3Ec_t1234B68126878DBDB84E9917E17DAA5E21B698A0  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t1234B68126878DBDB84E9917E17DAA5E21B698A0_StaticFields
{
public:
	// Unity.Entities.TypeManager_<>c Unity.Entities.TypeManager_<>c::<>9
	U3CU3Ec_t1234B68126878DBDB84E9917E17DAA5E21B698A0 * ___U3CU3E9_0;
	// System.Func`2<System.Reflection.FieldInfo,System.Boolean> Unity.Entities.TypeManager_<>c::<>9__24_0
	Func_2_t56D7C745FF6EF4A902AAB44EAFC9F43DC7DF0CDD * ___U3CU3E9__24_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1234B68126878DBDB84E9917E17DAA5E21B698A0_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t1234B68126878DBDB84E9917E17DAA5E21B698A0 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t1234B68126878DBDB84E9917E17DAA5E21B698A0 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t1234B68126878DBDB84E9917E17DAA5E21B698A0 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1234B68126878DBDB84E9917E17DAA5E21B698A0_StaticFields, ___U3CU3E9__24_0_1)); }
	inline Func_2_t56D7C745FF6EF4A902AAB44EAFC9F43DC7DF0CDD * get_U3CU3E9__24_0_1() const { return ___U3CU3E9__24_0_1; }
	inline Func_2_t56D7C745FF6EF4A902AAB44EAFC9F43DC7DF0CDD ** get_address_of_U3CU3E9__24_0_1() { return &___U3CU3E9__24_0_1; }
	inline void set_U3CU3E9__24_0_1(Func_2_t56D7C745FF6EF4A902AAB44EAFC9F43DC7DF0CDD * value)
	{
		___U3CU3E9__24_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__24_0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T1234B68126878DBDB84E9917E17DAA5E21B698A0_H
#ifndef UINTLISTDEBUGVIEW_TA560BF494C85705BF1B6FB6DC33192351E4094DF_H
#define UINTLISTDEBUGVIEW_TA560BF494C85705BF1B6FB6DC33192351E4094DF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Entities.UintListDebugView
struct  UintListDebugView_tA560BF494C85705BF1B6FB6DC33192351E4094DF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTLISTDEBUGVIEW_TA560BF494C85705BF1B6FB6DC33192351E4094DF_H
#ifndef WORDSTORAGEDEBUGVIEW_T3C49153D3690CAE3B828CB731112CA1FE6E2EF3D_H
#define WORDSTORAGEDEBUGVIEW_T3C49153D3690CAE3B828CB731112CA1FE6E2EF3D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Entities.WordStorageDebugView
struct  WordStorageDebugView_t3C49153D3690CAE3B828CB731112CA1FE6E2EF3D  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORDSTORAGEDEBUGVIEW_T3C49153D3690CAE3B828CB731112CA1FE6E2EF3D_H
#ifndef WORLD_TEEA075348FAEC96EE224554FCDED78254768804E_H
#define WORLD_TEEA075348FAEC96EE224554FCDED78254768804E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Entities.World
struct  World_tEEA075348FAEC96EE224554FCDED78254768804E  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,Unity.Entities.ScriptBehaviourManager> Unity.Entities.World::m_BehaviourManagerLookup
	Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F * ___m_BehaviourManagerLookup_1;
	// System.Collections.Generic.List`1<Unity.Entities.ScriptBehaviourManager> Unity.Entities.World::m_BehaviourManagers
	List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445 * ___m_BehaviourManagers_2;
	// System.String Unity.Entities.World::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_4;
	// System.Int32 Unity.Entities.World::<Version>k__BackingField
	int32_t ___U3CVersionU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_m_BehaviourManagerLookup_1() { return static_cast<int32_t>(offsetof(World_tEEA075348FAEC96EE224554FCDED78254768804E, ___m_BehaviourManagerLookup_1)); }
	inline Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F * get_m_BehaviourManagerLookup_1() const { return ___m_BehaviourManagerLookup_1; }
	inline Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F ** get_address_of_m_BehaviourManagerLookup_1() { return &___m_BehaviourManagerLookup_1; }
	inline void set_m_BehaviourManagerLookup_1(Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F * value)
	{
		___m_BehaviourManagerLookup_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_BehaviourManagerLookup_1), value);
	}

	inline static int32_t get_offset_of_m_BehaviourManagers_2() { return static_cast<int32_t>(offsetof(World_tEEA075348FAEC96EE224554FCDED78254768804E, ___m_BehaviourManagers_2)); }
	inline List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445 * get_m_BehaviourManagers_2() const { return ___m_BehaviourManagers_2; }
	inline List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445 ** get_address_of_m_BehaviourManagers_2() { return &___m_BehaviourManagers_2; }
	inline void set_m_BehaviourManagers_2(List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445 * value)
	{
		___m_BehaviourManagers_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_BehaviourManagers_2), value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(World_tEEA075348FAEC96EE224554FCDED78254768804E, ___U3CNameU3Ek__BackingField_4)); }
	inline String_t* get_U3CNameU3Ek__BackingField_4() const { return ___U3CNameU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_4() { return &___U3CNameU3Ek__BackingField_4; }
	inline void set_U3CNameU3Ek__BackingField_4(String_t* value)
	{
		___U3CNameU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CVersionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(World_tEEA075348FAEC96EE224554FCDED78254768804E, ___U3CVersionU3Ek__BackingField_5)); }
	inline int32_t get_U3CVersionU3Ek__BackingField_5() const { return ___U3CVersionU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CVersionU3Ek__BackingField_5() { return &___U3CVersionU3Ek__BackingField_5; }
	inline void set_U3CVersionU3Ek__BackingField_5(int32_t value)
	{
		___U3CVersionU3Ek__BackingField_5 = value;
	}
};

struct World_tEEA075348FAEC96EE224554FCDED78254768804E_StaticFields
{
public:
	// System.Collections.Generic.List`1<Unity.Entities.World> Unity.Entities.World::allWorlds
	List_1_t3E642DEC3ECCF74A4F3732168EAE534DC91673A6 * ___allWorlds_0;
	// System.Int32 Unity.Entities.World::ms_SystemIDAllocator
	int32_t ___ms_SystemIDAllocator_3;
	// Unity.Entities.World Unity.Entities.World::<Active>k__BackingField
	World_tEEA075348FAEC96EE224554FCDED78254768804E * ___U3CActiveU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_allWorlds_0() { return static_cast<int32_t>(offsetof(World_tEEA075348FAEC96EE224554FCDED78254768804E_StaticFields, ___allWorlds_0)); }
	inline List_1_t3E642DEC3ECCF74A4F3732168EAE534DC91673A6 * get_allWorlds_0() const { return ___allWorlds_0; }
	inline List_1_t3E642DEC3ECCF74A4F3732168EAE534DC91673A6 ** get_address_of_allWorlds_0() { return &___allWorlds_0; }
	inline void set_allWorlds_0(List_1_t3E642DEC3ECCF74A4F3732168EAE534DC91673A6 * value)
	{
		___allWorlds_0 = value;
		Il2CppCodeGenWriteBarrier((&___allWorlds_0), value);
	}

	inline static int32_t get_offset_of_ms_SystemIDAllocator_3() { return static_cast<int32_t>(offsetof(World_tEEA075348FAEC96EE224554FCDED78254768804E_StaticFields, ___ms_SystemIDAllocator_3)); }
	inline int32_t get_ms_SystemIDAllocator_3() const { return ___ms_SystemIDAllocator_3; }
	inline int32_t* get_address_of_ms_SystemIDAllocator_3() { return &___ms_SystemIDAllocator_3; }
	inline void set_ms_SystemIDAllocator_3(int32_t value)
	{
		___ms_SystemIDAllocator_3 = value;
	}

	inline static int32_t get_offset_of_U3CActiveU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(World_tEEA075348FAEC96EE224554FCDED78254768804E_StaticFields, ___U3CActiveU3Ek__BackingField_6)); }
	inline World_tEEA075348FAEC96EE224554FCDED78254768804E * get_U3CActiveU3Ek__BackingField_6() const { return ___U3CActiveU3Ek__BackingField_6; }
	inline World_tEEA075348FAEC96EE224554FCDED78254768804E ** get_address_of_U3CActiveU3Ek__BackingField_6() { return &___U3CActiveU3Ek__BackingField_6; }
	inline void set_U3CActiveU3Ek__BackingField_6(World_tEEA075348FAEC96EE224554FCDED78254768804E * value)
	{
		___U3CActiveU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CActiveU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORLD_TEEA075348FAEC96EE224554FCDED78254768804E_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#define CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((&___categoryForLatin1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#ifndef ENUMERATOR_TE0C99528D3DCE5863566CE37BD94162A4C0431CD_H
#define ENUMERATOR_TE0C99528D3DCE5863566CE37BD94162A4C0431CD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_TE0C99528D3DCE5863566CE37BD94162A4C0431CD_H
#ifndef ENUMERATOR_T11491103305F453BCC7D7A157BDF0BE57F72C1D1_H
#define ENUMERATOR_T11491103305F453BCC7D7A157BDF0BE57F72C1D1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1_Enumerator<Unity.Entities.ScriptBehaviourManager>
struct  Enumerator_t11491103305F453BCC7D7A157BDF0BE57F72C1D1 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t11491103305F453BCC7D7A157BDF0BE57F72C1D1, ___list_0)); }
	inline List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445 * get_list_0() const { return ___list_0; }
	inline List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t11491103305F453BCC7D7A157BDF0BE57F72C1D1, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t11491103305F453BCC7D7A157BDF0BE57F72C1D1, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t11491103305F453BCC7D7A157BDF0BE57F72C1D1, ___current_3)); }
	inline ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * get_current_3() const { return ___current_3; }
	inline ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T11491103305F453BCC7D7A157BDF0BE57F72C1D1_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef FIELDINFO_T_H
#define FIELDINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDINFO_T_H
#ifndef GCHANDLE_T39FAEE3EA592432C93B574A31DD83B87F1847DE3_H
#define GCHANDLE_T39FAEE3EA592432C93B574A31DD83B87F1847DE3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T39FAEE3EA592432C93B574A31DD83B87F1847DE3_H
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifndef UINT16_TAE45CEF73BF720100519F6867F32145D075F928E_H
#define UINT16_TAE45CEF73BF720100519F6867F32145D075F928E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_TAE45CEF73BF720100519F6867F32145D075F928E_H
#ifndef UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
#define UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef NATIVEMULTIHASHMAPITERATOR_1_TCA92178ECD8A70D308B9C81DBAD37A80453A7AF0_H
#define NATIVEMULTIHASHMAPITERATOR_1_TCA92178ECD8A70D308B9C81DBAD37A80453A7AF0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.NativeMultiHashMapIterator`1<System.Int32>
struct  NativeMultiHashMapIterator_1_tCA92178ECD8A70D308B9C81DBAD37A80453A7AF0 
{
public:
	// TKey Unity.Collections.NativeMultiHashMapIterator`1::key
	int32_t ___key_0;
	// System.Int32 Unity.Collections.NativeMultiHashMapIterator`1::NextEntryIndex
	int32_t ___NextEntryIndex_1;
	// System.Int32 Unity.Collections.NativeMultiHashMapIterator`1::EntryIndex
	int32_t ___EntryIndex_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(NativeMultiHashMapIterator_1_tCA92178ECD8A70D308B9C81DBAD37A80453A7AF0, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_NextEntryIndex_1() { return static_cast<int32_t>(offsetof(NativeMultiHashMapIterator_1_tCA92178ECD8A70D308B9C81DBAD37A80453A7AF0, ___NextEntryIndex_1)); }
	inline int32_t get_NextEntryIndex_1() const { return ___NextEntryIndex_1; }
	inline int32_t* get_address_of_NextEntryIndex_1() { return &___NextEntryIndex_1; }
	inline void set_NextEntryIndex_1(int32_t value)
	{
		___NextEntryIndex_1 = value;
	}

	inline static int32_t get_offset_of_EntryIndex_2() { return static_cast<int32_t>(offsetof(NativeMultiHashMapIterator_1_tCA92178ECD8A70D308B9C81DBAD37A80453A7AF0, ___EntryIndex_2)); }
	inline int32_t get_EntryIndex_2() const { return ___EntryIndex_2; }
	inline int32_t* get_address_of_EntryIndex_2() { return &___EntryIndex_2; }
	inline void set_EntryIndex_2(int32_t value)
	{
		___EntryIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEMULTIHASHMAPITERATOR_1_TCA92178ECD8A70D308B9C81DBAD37A80453A7AF0_H
#ifndef TYPEINFO_T4386566412634AE6E9ACF105EE51E7AEE48F9AF5_H
#define TYPEINFO_T4386566412634AE6E9ACF105EE51E7AEE48F9AF5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Entities.FastEquality_TypeInfo
struct  TypeInfo_t4386566412634AE6E9ACF105EE51E7AEE48F9AF5 
{
public:
	// Unity.Entities.FastEquality_Layout[] Unity.Entities.FastEquality_TypeInfo::Layouts
	LayoutU5BU5D_t020B9455644110FB97E85E0698EE115BE9E3722C* ___Layouts_0;
	// System.Int32 Unity.Entities.FastEquality_TypeInfo::Hash
	int32_t ___Hash_1;

public:
	inline static int32_t get_offset_of_Layouts_0() { return static_cast<int32_t>(offsetof(TypeInfo_t4386566412634AE6E9ACF105EE51E7AEE48F9AF5, ___Layouts_0)); }
	inline LayoutU5BU5D_t020B9455644110FB97E85E0698EE115BE9E3722C* get_Layouts_0() const { return ___Layouts_0; }
	inline LayoutU5BU5D_t020B9455644110FB97E85E0698EE115BE9E3722C** get_address_of_Layouts_0() { return &___Layouts_0; }
	inline void set_Layouts_0(LayoutU5BU5D_t020B9455644110FB97E85E0698EE115BE9E3722C* value)
	{
		___Layouts_0 = value;
		Il2CppCodeGenWriteBarrier((&___Layouts_0), value);
	}

	inline static int32_t get_offset_of_Hash_1() { return static_cast<int32_t>(offsetof(TypeInfo_t4386566412634AE6E9ACF105EE51E7AEE48F9AF5, ___Hash_1)); }
	inline int32_t get_Hash_1() const { return ___Hash_1; }
	inline int32_t* get_address_of_Hash_1() { return &___Hash_1; }
	inline void set_Hash_1(int32_t value)
	{
		___Hash_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Unity.Entities.FastEquality/TypeInfo
struct TypeInfo_t4386566412634AE6E9ACF105EE51E7AEE48F9AF5_marshaled_pinvoke
{
	Layout_t42138B3D3D2034CF0F16539E4DAB9ACA2FAD50A7_marshaled_pinvoke* ___Layouts_0;
	int32_t ___Hash_1;
};
// Native definition for COM marshalling of Unity.Entities.FastEquality/TypeInfo
struct TypeInfo_t4386566412634AE6E9ACF105EE51E7AEE48F9AF5_marshaled_com
{
	Layout_t42138B3D3D2034CF0F16539E4DAB9ACA2FAD50A7_marshaled_com* ___Layouts_0;
	int32_t ___Hash_1;
};
#endif // TYPEINFO_T4386566412634AE6E9ACF105EE51E7AEE48F9AF5_H
#ifndef NATIVESTRINGVIEW_T7891AF2C8133156B59547F83542831AA9803CAC1_H
#define NATIVESTRINGVIEW_T7891AF2C8133156B59547F83542831AA9803CAC1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Entities.NativeStringView
struct  NativeStringView_t7891AF2C8133156B59547F83542831AA9803CAC1 
{
public:
	// System.Char* Unity.Entities.NativeStringView::pointer
	Il2CppChar* ___pointer_0;
	// System.Int32 Unity.Entities.NativeStringView::length
	int32_t ___length_1;

public:
	inline static int32_t get_offset_of_pointer_0() { return static_cast<int32_t>(offsetof(NativeStringView_t7891AF2C8133156B59547F83542831AA9803CAC1, ___pointer_0)); }
	inline Il2CppChar* get_pointer_0() const { return ___pointer_0; }
	inline Il2CppChar** get_address_of_pointer_0() { return &___pointer_0; }
	inline void set_pointer_0(Il2CppChar* value)
	{
		___pointer_0 = value;
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(NativeStringView_t7891AF2C8133156B59547F83542831AA9803CAC1, ___length_1)); }
	inline int32_t get_length_1() const { return ___length_1; }
	inline int32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(int32_t value)
	{
		___length_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Unity.Entities.NativeStringView
struct NativeStringView_t7891AF2C8133156B59547F83542831AA9803CAC1_marshaled_pinvoke
{
	Il2CppChar* ___pointer_0;
	int32_t ___length_1;
};
// Native definition for COM marshalling of Unity.Entities.NativeStringView
struct NativeStringView_t7891AF2C8133156B59547F83542831AA9803CAC1_marshaled_com
{
	Il2CppChar* ___pointer_0;
	int32_t ___length_1;
};
#endif // NATIVESTRINGVIEW_T7891AF2C8133156B59547F83542831AA9803CAC1_H
#ifndef ENTITYOFFSETINFO_TBA42506153706A75A011761D1B08C2068EB09D31_H
#define ENTITYOFFSETINFO_TBA42506153706A75A011761D1B08C2068EB09D31_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Entities.TypeManager_EntityOffsetInfo
struct  EntityOffsetInfo_tBA42506153706A75A011761D1B08C2068EB09D31 
{
public:
	// System.Int32 Unity.Entities.TypeManager_EntityOffsetInfo::Offset
	int32_t ___Offset_0;

public:
	inline static int32_t get_offset_of_Offset_0() { return static_cast<int32_t>(offsetof(EntityOffsetInfo_tBA42506153706A75A011761D1B08C2068EB09D31, ___Offset_0)); }
	inline int32_t get_Offset_0() const { return ___Offset_0; }
	inline int32_t* get_address_of_Offset_0() { return &___Offset_0; }
	inline void set_Offset_0(int32_t value)
	{
		___Offset_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENTITYOFFSETINFO_TBA42506153706A75A011761D1B08C2068EB09D31_H
#ifndef FORCEDMEMORYORDERINGATTRIBUTE_TA098CBC3B4508B60A8B17AAA60D470C7D3829C16_H
#define FORCEDMEMORYORDERINGATTRIBUTE_TA098CBC3B4508B60A8B17AAA60D470C7D3829C16_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Entities.TypeManager_ForcedMemoryOrderingAttribute
struct  ForcedMemoryOrderingAttribute_tA098CBC3B4508B60A8B17AAA60D470C7D3829C16  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:
	// System.UInt64 Unity.Entities.TypeManager_ForcedMemoryOrderingAttribute::MemoryOrdering
	uint64_t ___MemoryOrdering_0;

public:
	inline static int32_t get_offset_of_MemoryOrdering_0() { return static_cast<int32_t>(offsetof(ForcedMemoryOrderingAttribute_tA098CBC3B4508B60A8B17AAA60D470C7D3829C16, ___MemoryOrdering_0)); }
	inline uint64_t get_MemoryOrdering_0() const { return ___MemoryOrdering_0; }
	inline uint64_t* get_address_of_MemoryOrdering_0() { return &___MemoryOrdering_0; }
	inline void set_MemoryOrdering_0(uint64_t value)
	{
		___MemoryOrdering_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORCEDMEMORYORDERINGATTRIBUTE_TA098CBC3B4508B60A8B17AAA60D470C7D3829C16_H
#ifndef OBJECTOFFSETTYPE_T23672B7FFCFF082F39332BDDE719E0BADA585777_H
#define OBJECTOFFSETTYPE_T23672B7FFCFF082F39332BDDE719E0BADA585777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Entities.TypeManager_ObjectOffsetType
struct  ObjectOffsetType_t23672B7FFCFF082F39332BDDE719E0BADA585777 
{
public:
	// System.Void* Unity.Entities.TypeManager_ObjectOffsetType::v0
	void* ___v0_0;
	// System.Void* Unity.Entities.TypeManager_ObjectOffsetType::v1
	void* ___v1_1;

public:
	inline static int32_t get_offset_of_v0_0() { return static_cast<int32_t>(offsetof(ObjectOffsetType_t23672B7FFCFF082F39332BDDE719E0BADA585777, ___v0_0)); }
	inline void* get_v0_0() const { return ___v0_0; }
	inline void** get_address_of_v0_0() { return &___v0_0; }
	inline void set_v0_0(void* value)
	{
		___v0_0 = value;
	}

	inline static int32_t get_offset_of_v1_1() { return static_cast<int32_t>(offsetof(ObjectOffsetType_t23672B7FFCFF082F39332BDDE719E0BADA585777, ___v1_1)); }
	inline void* get_v1_1() const { return ___v1_1; }
	inline void** get_address_of_v1_1() { return &___v1_1; }
	inline void set_v1_1(void* value)
	{
		___v1_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTOFFSETTYPE_T23672B7FFCFF082F39332BDDE719E0BADA585777_H
#ifndef UINTLIST_TCF6ACBB2D81EF957C961BD571CFE3025C44A48E6_H
#define UINTLIST_TCF6ACBB2D81EF957C961BD571CFE3025C44A48E6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Entities.UintList
struct  UintList_tCF6ACBB2D81EF957C961BD571CFE3025C44A48E6 
{
public:
	// System.UInt32* Unity.Entities.UintList::p
	uint32_t* ___p_0;
	// System.Int32 Unity.Entities.UintList::Count
	int32_t ___Count_1;
	// System.Int32 Unity.Entities.UintList::Capacity
	int32_t ___Capacity_2;

public:
	inline static int32_t get_offset_of_p_0() { return static_cast<int32_t>(offsetof(UintList_tCF6ACBB2D81EF957C961BD571CFE3025C44A48E6, ___p_0)); }
	inline uint32_t* get_p_0() const { return ___p_0; }
	inline uint32_t** get_address_of_p_0() { return &___p_0; }
	inline void set_p_0(uint32_t* value)
	{
		___p_0 = value;
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(UintList_tCF6ACBB2D81EF957C961BD571CFE3025C44A48E6, ___Count_1)); }
	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
	}

	inline static int32_t get_offset_of_Capacity_2() { return static_cast<int32_t>(offsetof(UintList_tCF6ACBB2D81EF957C961BD571CFE3025C44A48E6, ___Capacity_2)); }
	inline int32_t get_Capacity_2() const { return ___Capacity_2; }
	inline int32_t* get_address_of_Capacity_2() { return &___Capacity_2; }
	inline void set_Capacity_2(int32_t value)
	{
		___Capacity_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTLIST_TCF6ACBB2D81EF957C961BD571CFE3025C44A48E6_H
#ifndef UPDATEAFTERATTRIBUTE_T3E5895B0558A08D5A5C193149925C5D947B22DE3_H
#define UPDATEAFTERATTRIBUTE_T3E5895B0558A08D5A5C193149925C5D947B22DE3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Entities.UpdateAfterAttribute
struct  UpdateAfterAttribute_t3E5895B0558A08D5A5C193149925C5D947B22DE3  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:
	// System.Type Unity.Entities.UpdateAfterAttribute::<SystemType>k__BackingField
	Type_t * ___U3CSystemTypeU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CSystemTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UpdateAfterAttribute_t3E5895B0558A08D5A5C193149925C5D947B22DE3, ___U3CSystemTypeU3Ek__BackingField_0)); }
	inline Type_t * get_U3CSystemTypeU3Ek__BackingField_0() const { return ___U3CSystemTypeU3Ek__BackingField_0; }
	inline Type_t ** get_address_of_U3CSystemTypeU3Ek__BackingField_0() { return &___U3CSystemTypeU3Ek__BackingField_0; }
	inline void set_U3CSystemTypeU3Ek__BackingField_0(Type_t * value)
	{
		___U3CSystemTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSystemTypeU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEAFTERATTRIBUTE_T3E5895B0558A08D5A5C193149925C5D947B22DE3_H
#ifndef UPDATEBEFOREATTRIBUTE_T1547E96ADA4D845BEFE640C7EBA54BB1BF9964FB_H
#define UPDATEBEFOREATTRIBUTE_T1547E96ADA4D845BEFE640C7EBA54BB1BF9964FB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Entities.UpdateBeforeAttribute
struct  UpdateBeforeAttribute_t1547E96ADA4D845BEFE640C7EBA54BB1BF9964FB  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:
	// System.Type Unity.Entities.UpdateBeforeAttribute::<SystemType>k__BackingField
	Type_t * ___U3CSystemTypeU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CSystemTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UpdateBeforeAttribute_t1547E96ADA4D845BEFE640C7EBA54BB1BF9964FB, ___U3CSystemTypeU3Ek__BackingField_0)); }
	inline Type_t * get_U3CSystemTypeU3Ek__BackingField_0() const { return ___U3CSystemTypeU3Ek__BackingField_0; }
	inline Type_t ** get_address_of_U3CSystemTypeU3Ek__BackingField_0() { return &___U3CSystemTypeU3Ek__BackingField_0; }
	inline void set_U3CSystemTypeU3Ek__BackingField_0(Type_t * value)
	{
		___U3CSystemTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSystemTypeU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEBEFOREATTRIBUTE_T1547E96ADA4D845BEFE640C7EBA54BB1BF9964FB_H
#ifndef UPDATEINGROUPATTRIBUTE_T10CFAF8D3E3A3DD188ECFA30CE20238F85FA276A_H
#define UPDATEINGROUPATTRIBUTE_T10CFAF8D3E3A3DD188ECFA30CE20238F85FA276A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Entities.UpdateInGroupAttribute
struct  UpdateInGroupAttribute_t10CFAF8D3E3A3DD188ECFA30CE20238F85FA276A  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:
	// System.Type Unity.Entities.UpdateInGroupAttribute::<GroupType>k__BackingField
	Type_t * ___U3CGroupTypeU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CGroupTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UpdateInGroupAttribute_t10CFAF8D3E3A3DD188ECFA30CE20238F85FA276A, ___U3CGroupTypeU3Ek__BackingField_0)); }
	inline Type_t * get_U3CGroupTypeU3Ek__BackingField_0() const { return ___U3CGroupTypeU3Ek__BackingField_0; }
	inline Type_t ** get_address_of_U3CGroupTypeU3Ek__BackingField_0() { return &___U3CGroupTypeU3Ek__BackingField_0; }
	inline void set_U3CGroupTypeU3Ek__BackingField_0(Type_t * value)
	{
		___U3CGroupTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CGroupTypeU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEINGROUPATTRIBUTE_T10CFAF8D3E3A3DD188ECFA30CE20238F85FA276A_H
#ifndef WRITEGROUPATTRIBUTE_T5ACFD929A062F105167DEE0EE160AA9E2E0718D4_H
#define WRITEGROUPATTRIBUTE_T5ACFD929A062F105167DEE0EE160AA9E2E0718D4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Entities.WriteGroupAttribute
struct  WriteGroupAttribute_t5ACFD929A062F105167DEE0EE160AA9E2E0718D4  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:
	// System.Type Unity.Entities.WriteGroupAttribute::TargetType
	Type_t * ___TargetType_0;

public:
	inline static int32_t get_offset_of_TargetType_0() { return static_cast<int32_t>(offsetof(WriteGroupAttribute_t5ACFD929A062F105167DEE0EE160AA9E2E0718D4, ___TargetType_0)); }
	inline Type_t * get_TargetType_0() const { return ___TargetType_0; }
	inline Type_t ** get_address_of_TargetType_0() { return &___TargetType_0; }
	inline void set_TargetType_0(Type_t * value)
	{
		___TargetType_0 = value;
		Il2CppCodeGenWriteBarrier((&___TargetType_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITEGROUPATTRIBUTE_T5ACFD929A062F105167DEE0EE160AA9E2E0718D4_H
#ifndef ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#define ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_paramName_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#ifndef MEMBERACCESSEXCEPTION_TDA869AFFB4FC1EA0EEF3143D85999710AC4774F0_H
#define MEMBERACCESSEXCEPTION_TDA869AFFB4FC1EA0EEF3143D85999710AC4774F0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MemberAccessException
struct  MemberAccessException_tDA869AFFB4FC1EA0EEF3143D85999710AC4774F0  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERACCESSEXCEPTION_TDA869AFFB4FC1EA0EEF3143D85999710AC4774F0_H
#ifndef BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#define BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifndef RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#define RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifndef ALLOCATOR_T62A091275262E7067EAAD565B67764FA877D58D6_H
#define ALLOCATOR_T62A091275262E7067EAAD565B67764FA877D58D6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.Allocator
struct  Allocator_t62A091275262E7067EAAD565B67764FA877D58D6 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t62A091275262E7067EAAD565B67764FA877D58D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALLOCATOR_T62A091275262E7067EAAD565B67764FA877D58D6_H
#ifndef NATIVEARRAYOPTIONS_T23897F2D7CA2F1B58D2539C64062DD7C77615B6A_H
#define NATIVEARRAYOPTIONS_T23897F2D7CA2F1B58D2539C64062DD7C77615B6A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.NativeArrayOptions
struct  NativeArrayOptions_t23897F2D7CA2F1B58D2539C64062DD7C77615B6A 
{
public:
	// System.Int32 Unity.Collections.NativeArrayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeArrayOptions_t23897F2D7CA2F1B58D2539C64062DD7C77615B6A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEARRAYOPTIONS_T23897F2D7CA2F1B58D2539C64062DD7C77615B6A_H
#ifndef EXCLUSIVEENTITYTRANSACTION_T7A7370A898FD21834C22B2F21D256BB313C41E5E_H
#define EXCLUSIVEENTITYTRANSACTION_T7A7370A898FD21834C22B2F21D256BB313C41E5E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Entities.ExclusiveEntityTransaction
struct  ExclusiveEntityTransaction_t7A7370A898FD21834C22B2F21D256BB313C41E5E 
{
public:
	// System.Runtime.InteropServices.GCHandle Unity.Entities.ExclusiveEntityTransaction::m_ArchetypeManager
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  ___m_ArchetypeManager_0;
	// System.Runtime.InteropServices.GCHandle Unity.Entities.ExclusiveEntityTransaction::m_EntityGroupManager
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  ___m_EntityGroupManager_1;
	// System.Runtime.InteropServices.GCHandle Unity.Entities.ExclusiveEntityTransaction::m_SharedComponentDataManager
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  ___m_SharedComponentDataManager_2;
	// Unity.Entities.EntityDataManager* Unity.Entities.ExclusiveEntityTransaction::m_Entities
	EntityDataManager_t4851DE9BEC698C70110411C1EDDC127FD4734756 * ___m_Entities_3;

public:
	inline static int32_t get_offset_of_m_ArchetypeManager_0() { return static_cast<int32_t>(offsetof(ExclusiveEntityTransaction_t7A7370A898FD21834C22B2F21D256BB313C41E5E, ___m_ArchetypeManager_0)); }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  get_m_ArchetypeManager_0() const { return ___m_ArchetypeManager_0; }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * get_address_of_m_ArchetypeManager_0() { return &___m_ArchetypeManager_0; }
	inline void set_m_ArchetypeManager_0(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  value)
	{
		___m_ArchetypeManager_0 = value;
	}

	inline static int32_t get_offset_of_m_EntityGroupManager_1() { return static_cast<int32_t>(offsetof(ExclusiveEntityTransaction_t7A7370A898FD21834C22B2F21D256BB313C41E5E, ___m_EntityGroupManager_1)); }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  get_m_EntityGroupManager_1() const { return ___m_EntityGroupManager_1; }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * get_address_of_m_EntityGroupManager_1() { return &___m_EntityGroupManager_1; }
	inline void set_m_EntityGroupManager_1(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  value)
	{
		___m_EntityGroupManager_1 = value;
	}

	inline static int32_t get_offset_of_m_SharedComponentDataManager_2() { return static_cast<int32_t>(offsetof(ExclusiveEntityTransaction_t7A7370A898FD21834C22B2F21D256BB313C41E5E, ___m_SharedComponentDataManager_2)); }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  get_m_SharedComponentDataManager_2() const { return ___m_SharedComponentDataManager_2; }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * get_address_of_m_SharedComponentDataManager_2() { return &___m_SharedComponentDataManager_2; }
	inline void set_m_SharedComponentDataManager_2(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  value)
	{
		___m_SharedComponentDataManager_2 = value;
	}

	inline static int32_t get_offset_of_m_Entities_3() { return static_cast<int32_t>(offsetof(ExclusiveEntityTransaction_t7A7370A898FD21834C22B2F21D256BB313C41E5E, ___m_Entities_3)); }
	inline EntityDataManager_t4851DE9BEC698C70110411C1EDDC127FD4734756 * get_m_Entities_3() const { return ___m_Entities_3; }
	inline EntityDataManager_t4851DE9BEC698C70110411C1EDDC127FD4734756 ** get_address_of_m_Entities_3() { return &___m_Entities_3; }
	inline void set_m_Entities_3(EntityDataManager_t4851DE9BEC698C70110411C1EDDC127FD4734756 * value)
	{
		___m_Entities_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Unity.Entities.ExclusiveEntityTransaction
struct ExclusiveEntityTransaction_t7A7370A898FD21834C22B2F21D256BB313C41E5E_marshaled_pinvoke
{
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  ___m_ArchetypeManager_0;
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  ___m_EntityGroupManager_1;
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  ___m_SharedComponentDataManager_2;
	EntityDataManager_t4851DE9BEC698C70110411C1EDDC127FD4734756 * ___m_Entities_3;
};
// Native definition for COM marshalling of Unity.Entities.ExclusiveEntityTransaction
struct ExclusiveEntityTransaction_t7A7370A898FD21834C22B2F21D256BB313C41E5E_marshaled_com
{
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  ___m_ArchetypeManager_0;
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  ___m_EntityGroupManager_1;
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  ___m_SharedComponentDataManager_2;
	EntityDataManager_t4851DE9BEC698C70110411C1EDDC127FD4734756 * ___m_Entities_3;
};
#endif // EXCLUSIVEENTITYTRANSACTION_T7A7370A898FD21834C22B2F21D256BB313C41E5E_H
#ifndef TYPECATEGORY_TF271486384D2E9358B3075ED860157B8380633F2_H
#define TYPECATEGORY_TF271486384D2E9358B3075ED860157B8380633F2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Entities.TypeManager_TypeCategory
struct  TypeCategory_tF271486384D2E9358B3075ED860157B8380633F2 
{
public:
	// System.Int32 Unity.Entities.TypeManager_TypeCategory::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeCategory_tF271486384D2E9358B3075ED860157B8380633F2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECATEGORY_TF271486384D2E9358B3075ED860157B8380633F2_H
#ifndef MISSINGMEMBEREXCEPTION_T165349A7E04FC51DAA5C2251C6DCDD2DD60255DD_H
#define MISSINGMEMBEREXCEPTION_T165349A7E04FC51DAA5C2251C6DCDD2DD60255DD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MissingMemberException
struct  MissingMemberException_t165349A7E04FC51DAA5C2251C6DCDD2DD60255DD  : public MemberAccessException_tDA869AFFB4FC1EA0EEF3143D85999710AC4774F0
{
public:
	// System.String System.MissingMemberException::ClassName
	String_t* ___ClassName_17;
	// System.String System.MissingMemberException::MemberName
	String_t* ___MemberName_18;
	// System.Byte[] System.MissingMemberException::Signature
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___Signature_19;

public:
	inline static int32_t get_offset_of_ClassName_17() { return static_cast<int32_t>(offsetof(MissingMemberException_t165349A7E04FC51DAA5C2251C6DCDD2DD60255DD, ___ClassName_17)); }
	inline String_t* get_ClassName_17() const { return ___ClassName_17; }
	inline String_t** get_address_of_ClassName_17() { return &___ClassName_17; }
	inline void set_ClassName_17(String_t* value)
	{
		___ClassName_17 = value;
		Il2CppCodeGenWriteBarrier((&___ClassName_17), value);
	}

	inline static int32_t get_offset_of_MemberName_18() { return static_cast<int32_t>(offsetof(MissingMemberException_t165349A7E04FC51DAA5C2251C6DCDD2DD60255DD, ___MemberName_18)); }
	inline String_t* get_MemberName_18() const { return ___MemberName_18; }
	inline String_t** get_address_of_MemberName_18() { return &___MemberName_18; }
	inline void set_MemberName_18(String_t* value)
	{
		___MemberName_18 = value;
		Il2CppCodeGenWriteBarrier((&___MemberName_18), value);
	}

	inline static int32_t get_offset_of_Signature_19() { return static_cast<int32_t>(offsetof(MissingMemberException_t165349A7E04FC51DAA5C2251C6DCDD2DD60255DD, ___Signature_19)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_Signature_19() const { return ___Signature_19; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_Signature_19() { return &___Signature_19; }
	inline void set_Signature_19(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___Signature_19 = value;
		Il2CppCodeGenWriteBarrier((&___Signature_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGMEMBEREXCEPTION_T165349A7E04FC51DAA5C2251C6DCDD2DD60255DD_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_0), value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_1), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_3), value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_5), value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef NATIVEARRAY_1_TBE26874675F6C49D2857F878D75D41FF754C4AA0_H
#define NATIVEARRAY_1_TBE26874675F6C49D2857F878D75D41FF754C4AA0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.NativeArray`1<System.Int32>
struct  NativeArray_1_tBE26874675F6C49D2857F878D75D41FF754C4AA0 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tBE26874675F6C49D2857F878D75D41FF754C4AA0, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tBE26874675F6C49D2857F878D75D41FF754C4AA0, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tBE26874675F6C49D2857F878D75D41FF754C4AA0, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
#endif // NATIVEARRAY_1_TBE26874675F6C49D2857F878D75D41FF754C4AA0_H
#ifndef NATIVEARRAY_1_TF8F29F681A7F71C4B94C2720ED966BEFAAE88159_H
#define NATIVEARRAY_1_TF8F29F681A7F71C4B94C2720ED966BEFAAE88159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.NativeArray`1<System.UInt16>
struct  NativeArray_1_tF8F29F681A7F71C4B94C2720ED966BEFAAE88159 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tF8F29F681A7F71C4B94C2720ED966BEFAAE88159, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tF8F29F681A7F71C4B94C2720ED966BEFAAE88159, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tF8F29F681A7F71C4B94C2720ED966BEFAAE88159, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
#endif // NATIVEARRAY_1_TF8F29F681A7F71C4B94C2720ED966BEFAAE88159_H
#ifndef NATIVEMULTIHASHMAP_2_T33D19E01B39832C09685E8A5179791EFFD82AFEF_H
#define NATIVEMULTIHASHMAP_2_T33D19E01B39832C09685E8A5179791EFFD82AFEF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.NativeMultiHashMap`2<System.Int32,System.Int32>
struct  NativeMultiHashMap_2_t33D19E01B39832C09685E8A5179791EFFD82AFEF 
{
public:
	// Unity.Collections.NativeHashMapData* Unity.Collections.NativeMultiHashMap`2::m_Buffer
	NativeHashMapData_tD9D3B267DA0D5157D6B5C8C099D0A11BE4C279BB * ___m_Buffer_0;
	// Unity.Collections.Allocator Unity.Collections.NativeMultiHashMap`2::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_1;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeMultiHashMap_2_t33D19E01B39832C09685E8A5179791EFFD82AFEF, ___m_Buffer_0)); }
	inline NativeHashMapData_tD9D3B267DA0D5157D6B5C8C099D0A11BE4C279BB * get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline NativeHashMapData_tD9D3B267DA0D5157D6B5C8C099D0A11BE4C279BB ** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(NativeHashMapData_tD9D3B267DA0D5157D6B5C8C099D0A11BE4C279BB * value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_1() { return static_cast<int32_t>(offsetof(NativeMultiHashMap_2_t33D19E01B39832C09685E8A5179791EFFD82AFEF, ___m_AllocatorLabel_1)); }
	inline int32_t get_m_AllocatorLabel_1() const { return ___m_AllocatorLabel_1; }
	inline int32_t* get_address_of_m_AllocatorLabel_1() { return &___m_AllocatorLabel_1; }
	inline void set_m_AllocatorLabel_1(int32_t value)
	{
		___m_AllocatorLabel_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Unity.Collections.NativeMultiHashMap`2
#ifndef NativeMultiHashMap_2_t64A5C2766CC4096F70888F09A587E3C00F590DBE_marshaled_pinvoke_define
#define NativeMultiHashMap_2_t64A5C2766CC4096F70888F09A587E3C00F590DBE_marshaled_pinvoke_define
struct NativeMultiHashMap_2_t64A5C2766CC4096F70888F09A587E3C00F590DBE_marshaled_pinvoke
{
	NativeHashMapData_tD9D3B267DA0D5157D6B5C8C099D0A11BE4C279BB * ___m_Buffer_0;
	int32_t ___m_AllocatorLabel_1;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeMultiHashMap`2
#ifndef NativeMultiHashMap_2_t64A5C2766CC4096F70888F09A587E3C00F590DBE_marshaled_com_define
#define NativeMultiHashMap_2_t64A5C2766CC4096F70888F09A587E3C00F590DBE_marshaled_com_define
struct NativeMultiHashMap_2_t64A5C2766CC4096F70888F09A587E3C00F590DBE_marshaled_com
{
	NativeHashMapData_tD9D3B267DA0D5157D6B5C8C099D0A11BE4C279BB * ___m_Buffer_0;
	int32_t ___m_AllocatorLabel_1;
};
#endif
#endif // NATIVEMULTIHASHMAP_2_T33D19E01B39832C09685E8A5179791EFFD82AFEF_H
#ifndef ENTITYMANAGER_TD03BBAE8A03BE6E803E142278B44DADB1F999C14_H
#define ENTITYMANAGER_TD03BBAE8A03BE6E803E142278B44DADB1F999C14_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Entities.EntityManager
struct  EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14  : public ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C
{
public:
	// Unity.Entities.EntityDataManager* Unity.Entities.EntityManager::m_Entities
	EntityDataManager_t4851DE9BEC698C70110411C1EDDC127FD4734756 * ___m_Entities_0;
	// Unity.Entities.ArchetypeManager Unity.Entities.EntityManager::m_ArchetypeManager
	ArchetypeManager_t72901F70B60CC6DF5456032A7FBE5F3D29C3AEA0 * ___m_ArchetypeManager_1;
	// Unity.Entities.EntityGroupManager Unity.Entities.EntityManager::m_GroupManager
	EntityGroupManager_tEDA6CEB266AEC3FB6BA6D2C88310A7FFF4A08E56 * ___m_GroupManager_2;
	// Unity.Entities.SharedComponentDataManager Unity.Entities.EntityManager::m_SharedComponentManager
	SharedComponentDataManager_tDEC17476532B1C30AA27FB3E5946CBA0C835CAFE * ___m_SharedComponentManager_3;
	// Unity.Entities.ExclusiveEntityTransaction Unity.Entities.EntityManager::m_ExclusiveEntityTransaction
	ExclusiveEntityTransaction_t7A7370A898FD21834C22B2F21D256BB313C41E5E  ___m_ExclusiveEntityTransaction_4;
	// Unity.Entities.World Unity.Entities.EntityManager::m_World
	World_tEEA075348FAEC96EE224554FCDED78254768804E * ___m_World_5;
	// Unity.Entities.ComponentGroup Unity.Entities.EntityManager::m_UniversalGroup
	ComponentGroup_t95719B3A6DEC548B74691DD9617029233DAD91B1 * ___m_UniversalGroup_6;
	// Unity.Entities.ComponentJobSafetyManager Unity.Entities.EntityManager::<ComponentJobSafetyManager>k__BackingField
	ComponentJobSafetyManager_tA5A6CAC17710B5DE0584A8C4E02B313610FC3500 * ___U3CComponentJobSafetyManagerU3Ek__BackingField_7;
	// Unity.Entities.EntityManager_EntityManagerDebug Unity.Entities.EntityManager::m_Debug
	EntityManagerDebug_tE9DB94BB3B26DB1F38416CC562929F9F561A5028 * ___m_Debug_8;

public:
	inline static int32_t get_offset_of_m_Entities_0() { return static_cast<int32_t>(offsetof(EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14, ___m_Entities_0)); }
	inline EntityDataManager_t4851DE9BEC698C70110411C1EDDC127FD4734756 * get_m_Entities_0() const { return ___m_Entities_0; }
	inline EntityDataManager_t4851DE9BEC698C70110411C1EDDC127FD4734756 ** get_address_of_m_Entities_0() { return &___m_Entities_0; }
	inline void set_m_Entities_0(EntityDataManager_t4851DE9BEC698C70110411C1EDDC127FD4734756 * value)
	{
		___m_Entities_0 = value;
	}

	inline static int32_t get_offset_of_m_ArchetypeManager_1() { return static_cast<int32_t>(offsetof(EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14, ___m_ArchetypeManager_1)); }
	inline ArchetypeManager_t72901F70B60CC6DF5456032A7FBE5F3D29C3AEA0 * get_m_ArchetypeManager_1() const { return ___m_ArchetypeManager_1; }
	inline ArchetypeManager_t72901F70B60CC6DF5456032A7FBE5F3D29C3AEA0 ** get_address_of_m_ArchetypeManager_1() { return &___m_ArchetypeManager_1; }
	inline void set_m_ArchetypeManager_1(ArchetypeManager_t72901F70B60CC6DF5456032A7FBE5F3D29C3AEA0 * value)
	{
		___m_ArchetypeManager_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ArchetypeManager_1), value);
	}

	inline static int32_t get_offset_of_m_GroupManager_2() { return static_cast<int32_t>(offsetof(EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14, ___m_GroupManager_2)); }
	inline EntityGroupManager_tEDA6CEB266AEC3FB6BA6D2C88310A7FFF4A08E56 * get_m_GroupManager_2() const { return ___m_GroupManager_2; }
	inline EntityGroupManager_tEDA6CEB266AEC3FB6BA6D2C88310A7FFF4A08E56 ** get_address_of_m_GroupManager_2() { return &___m_GroupManager_2; }
	inline void set_m_GroupManager_2(EntityGroupManager_tEDA6CEB266AEC3FB6BA6D2C88310A7FFF4A08E56 * value)
	{
		___m_GroupManager_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_GroupManager_2), value);
	}

	inline static int32_t get_offset_of_m_SharedComponentManager_3() { return static_cast<int32_t>(offsetof(EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14, ___m_SharedComponentManager_3)); }
	inline SharedComponentDataManager_tDEC17476532B1C30AA27FB3E5946CBA0C835CAFE * get_m_SharedComponentManager_3() const { return ___m_SharedComponentManager_3; }
	inline SharedComponentDataManager_tDEC17476532B1C30AA27FB3E5946CBA0C835CAFE ** get_address_of_m_SharedComponentManager_3() { return &___m_SharedComponentManager_3; }
	inline void set_m_SharedComponentManager_3(SharedComponentDataManager_tDEC17476532B1C30AA27FB3E5946CBA0C835CAFE * value)
	{
		___m_SharedComponentManager_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SharedComponentManager_3), value);
	}

	inline static int32_t get_offset_of_m_ExclusiveEntityTransaction_4() { return static_cast<int32_t>(offsetof(EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14, ___m_ExclusiveEntityTransaction_4)); }
	inline ExclusiveEntityTransaction_t7A7370A898FD21834C22B2F21D256BB313C41E5E  get_m_ExclusiveEntityTransaction_4() const { return ___m_ExclusiveEntityTransaction_4; }
	inline ExclusiveEntityTransaction_t7A7370A898FD21834C22B2F21D256BB313C41E5E * get_address_of_m_ExclusiveEntityTransaction_4() { return &___m_ExclusiveEntityTransaction_4; }
	inline void set_m_ExclusiveEntityTransaction_4(ExclusiveEntityTransaction_t7A7370A898FD21834C22B2F21D256BB313C41E5E  value)
	{
		___m_ExclusiveEntityTransaction_4 = value;
	}

	inline static int32_t get_offset_of_m_World_5() { return static_cast<int32_t>(offsetof(EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14, ___m_World_5)); }
	inline World_tEEA075348FAEC96EE224554FCDED78254768804E * get_m_World_5() const { return ___m_World_5; }
	inline World_tEEA075348FAEC96EE224554FCDED78254768804E ** get_address_of_m_World_5() { return &___m_World_5; }
	inline void set_m_World_5(World_tEEA075348FAEC96EE224554FCDED78254768804E * value)
	{
		___m_World_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_World_5), value);
	}

	inline static int32_t get_offset_of_m_UniversalGroup_6() { return static_cast<int32_t>(offsetof(EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14, ___m_UniversalGroup_6)); }
	inline ComponentGroup_t95719B3A6DEC548B74691DD9617029233DAD91B1 * get_m_UniversalGroup_6() const { return ___m_UniversalGroup_6; }
	inline ComponentGroup_t95719B3A6DEC548B74691DD9617029233DAD91B1 ** get_address_of_m_UniversalGroup_6() { return &___m_UniversalGroup_6; }
	inline void set_m_UniversalGroup_6(ComponentGroup_t95719B3A6DEC548B74691DD9617029233DAD91B1 * value)
	{
		___m_UniversalGroup_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_UniversalGroup_6), value);
	}

	inline static int32_t get_offset_of_U3CComponentJobSafetyManagerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14, ___U3CComponentJobSafetyManagerU3Ek__BackingField_7)); }
	inline ComponentJobSafetyManager_tA5A6CAC17710B5DE0584A8C4E02B313610FC3500 * get_U3CComponentJobSafetyManagerU3Ek__BackingField_7() const { return ___U3CComponentJobSafetyManagerU3Ek__BackingField_7; }
	inline ComponentJobSafetyManager_tA5A6CAC17710B5DE0584A8C4E02B313610FC3500 ** get_address_of_U3CComponentJobSafetyManagerU3Ek__BackingField_7() { return &___U3CComponentJobSafetyManagerU3Ek__BackingField_7; }
	inline void set_U3CComponentJobSafetyManagerU3Ek__BackingField_7(ComponentJobSafetyManager_tA5A6CAC17710B5DE0584A8C4E02B313610FC3500 * value)
	{
		___U3CComponentJobSafetyManagerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CComponentJobSafetyManagerU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_m_Debug_8() { return static_cast<int32_t>(offsetof(EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14, ___m_Debug_8)); }
	inline EntityManagerDebug_tE9DB94BB3B26DB1F38416CC562929F9F561A5028 * get_m_Debug_8() const { return ___m_Debug_8; }
	inline EntityManagerDebug_tE9DB94BB3B26DB1F38416CC562929F9F561A5028 ** get_address_of_m_Debug_8() { return &___m_Debug_8; }
	inline void set_m_Debug_8(EntityManagerDebug_tE9DB94BB3B26DB1F38416CC562929F9F561A5028 * value)
	{
		___m_Debug_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_Debug_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENTITYMANAGER_TD03BBAE8A03BE6E803E142278B44DADB1F999C14_H
#ifndef TYPEINFO_TDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3_H
#define TYPEINFO_TDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Entities.TypeManager_TypeInfo
struct  TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3 
{
public:
	// System.Type Unity.Entities.TypeManager_TypeInfo::Type
	Type_t * ___Type_0;
	// System.Int32 Unity.Entities.TypeManager_TypeInfo::TypeIndex
	int32_t ___TypeIndex_1;
	// System.Int32 Unity.Entities.TypeManager_TypeInfo::SizeInChunk
	int32_t ___SizeInChunk_2;
	// System.Int32 Unity.Entities.TypeManager_TypeInfo::ElementSize
	int32_t ___ElementSize_3;
	// System.Int32 Unity.Entities.TypeManager_TypeInfo::AlignmentInBytes
	int32_t ___AlignmentInBytes_4;
	// System.Int32 Unity.Entities.TypeManager_TypeInfo::BufferCapacity
	int32_t ___BufferCapacity_5;
	// Unity.Entities.FastEquality_TypeInfo Unity.Entities.TypeManager_TypeInfo::FastEqualityTypeInfo
	TypeInfo_t4386566412634AE6E9ACF105EE51E7AEE48F9AF5  ___FastEqualityTypeInfo_6;
	// Unity.Entities.TypeManager_TypeCategory Unity.Entities.TypeManager_TypeInfo::Category
	int32_t ___Category_7;
	// System.Int32 Unity.Entities.TypeManager_TypeInfo::EntityOffsetCount
	int32_t ___EntityOffsetCount_8;
	// Unity.Entities.TypeManager_EntityOffsetInfo[] Unity.Entities.TypeManager_TypeInfo::EntityOffsets
	EntityOffsetInfoU5BU5D_tE2302811C925A7C38EEBDE3C158881A2E02CC3E4* ___EntityOffsets_9;
	// System.UInt64 Unity.Entities.TypeManager_TypeInfo::MemoryOrdering
	uint64_t ___MemoryOrdering_10;
	// System.UInt64 Unity.Entities.TypeManager_TypeInfo::StableTypeHash
	uint64_t ___StableTypeHash_11;
	// System.Int32* Unity.Entities.TypeManager_TypeInfo::WriteGroups
	int32_t* ___WriteGroups_12;
	// System.Int32 Unity.Entities.TypeManager_TypeInfo::WriteGroupCount
	int32_t ___WriteGroupCount_13;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3, ___Type_0)); }
	inline Type_t * get_Type_0() const { return ___Type_0; }
	inline Type_t ** get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(Type_t * value)
	{
		___Type_0 = value;
		Il2CppCodeGenWriteBarrier((&___Type_0), value);
	}

	inline static int32_t get_offset_of_TypeIndex_1() { return static_cast<int32_t>(offsetof(TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3, ___TypeIndex_1)); }
	inline int32_t get_TypeIndex_1() const { return ___TypeIndex_1; }
	inline int32_t* get_address_of_TypeIndex_1() { return &___TypeIndex_1; }
	inline void set_TypeIndex_1(int32_t value)
	{
		___TypeIndex_1 = value;
	}

	inline static int32_t get_offset_of_SizeInChunk_2() { return static_cast<int32_t>(offsetof(TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3, ___SizeInChunk_2)); }
	inline int32_t get_SizeInChunk_2() const { return ___SizeInChunk_2; }
	inline int32_t* get_address_of_SizeInChunk_2() { return &___SizeInChunk_2; }
	inline void set_SizeInChunk_2(int32_t value)
	{
		___SizeInChunk_2 = value;
	}

	inline static int32_t get_offset_of_ElementSize_3() { return static_cast<int32_t>(offsetof(TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3, ___ElementSize_3)); }
	inline int32_t get_ElementSize_3() const { return ___ElementSize_3; }
	inline int32_t* get_address_of_ElementSize_3() { return &___ElementSize_3; }
	inline void set_ElementSize_3(int32_t value)
	{
		___ElementSize_3 = value;
	}

	inline static int32_t get_offset_of_AlignmentInBytes_4() { return static_cast<int32_t>(offsetof(TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3, ___AlignmentInBytes_4)); }
	inline int32_t get_AlignmentInBytes_4() const { return ___AlignmentInBytes_4; }
	inline int32_t* get_address_of_AlignmentInBytes_4() { return &___AlignmentInBytes_4; }
	inline void set_AlignmentInBytes_4(int32_t value)
	{
		___AlignmentInBytes_4 = value;
	}

	inline static int32_t get_offset_of_BufferCapacity_5() { return static_cast<int32_t>(offsetof(TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3, ___BufferCapacity_5)); }
	inline int32_t get_BufferCapacity_5() const { return ___BufferCapacity_5; }
	inline int32_t* get_address_of_BufferCapacity_5() { return &___BufferCapacity_5; }
	inline void set_BufferCapacity_5(int32_t value)
	{
		___BufferCapacity_5 = value;
	}

	inline static int32_t get_offset_of_FastEqualityTypeInfo_6() { return static_cast<int32_t>(offsetof(TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3, ___FastEqualityTypeInfo_6)); }
	inline TypeInfo_t4386566412634AE6E9ACF105EE51E7AEE48F9AF5  get_FastEqualityTypeInfo_6() const { return ___FastEqualityTypeInfo_6; }
	inline TypeInfo_t4386566412634AE6E9ACF105EE51E7AEE48F9AF5 * get_address_of_FastEqualityTypeInfo_6() { return &___FastEqualityTypeInfo_6; }
	inline void set_FastEqualityTypeInfo_6(TypeInfo_t4386566412634AE6E9ACF105EE51E7AEE48F9AF5  value)
	{
		___FastEqualityTypeInfo_6 = value;
	}

	inline static int32_t get_offset_of_Category_7() { return static_cast<int32_t>(offsetof(TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3, ___Category_7)); }
	inline int32_t get_Category_7() const { return ___Category_7; }
	inline int32_t* get_address_of_Category_7() { return &___Category_7; }
	inline void set_Category_7(int32_t value)
	{
		___Category_7 = value;
	}

	inline static int32_t get_offset_of_EntityOffsetCount_8() { return static_cast<int32_t>(offsetof(TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3, ___EntityOffsetCount_8)); }
	inline int32_t get_EntityOffsetCount_8() const { return ___EntityOffsetCount_8; }
	inline int32_t* get_address_of_EntityOffsetCount_8() { return &___EntityOffsetCount_8; }
	inline void set_EntityOffsetCount_8(int32_t value)
	{
		___EntityOffsetCount_8 = value;
	}

	inline static int32_t get_offset_of_EntityOffsets_9() { return static_cast<int32_t>(offsetof(TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3, ___EntityOffsets_9)); }
	inline EntityOffsetInfoU5BU5D_tE2302811C925A7C38EEBDE3C158881A2E02CC3E4* get_EntityOffsets_9() const { return ___EntityOffsets_9; }
	inline EntityOffsetInfoU5BU5D_tE2302811C925A7C38EEBDE3C158881A2E02CC3E4** get_address_of_EntityOffsets_9() { return &___EntityOffsets_9; }
	inline void set_EntityOffsets_9(EntityOffsetInfoU5BU5D_tE2302811C925A7C38EEBDE3C158881A2E02CC3E4* value)
	{
		___EntityOffsets_9 = value;
		Il2CppCodeGenWriteBarrier((&___EntityOffsets_9), value);
	}

	inline static int32_t get_offset_of_MemoryOrdering_10() { return static_cast<int32_t>(offsetof(TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3, ___MemoryOrdering_10)); }
	inline uint64_t get_MemoryOrdering_10() const { return ___MemoryOrdering_10; }
	inline uint64_t* get_address_of_MemoryOrdering_10() { return &___MemoryOrdering_10; }
	inline void set_MemoryOrdering_10(uint64_t value)
	{
		___MemoryOrdering_10 = value;
	}

	inline static int32_t get_offset_of_StableTypeHash_11() { return static_cast<int32_t>(offsetof(TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3, ___StableTypeHash_11)); }
	inline uint64_t get_StableTypeHash_11() const { return ___StableTypeHash_11; }
	inline uint64_t* get_address_of_StableTypeHash_11() { return &___StableTypeHash_11; }
	inline void set_StableTypeHash_11(uint64_t value)
	{
		___StableTypeHash_11 = value;
	}

	inline static int32_t get_offset_of_WriteGroups_12() { return static_cast<int32_t>(offsetof(TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3, ___WriteGroups_12)); }
	inline int32_t* get_WriteGroups_12() const { return ___WriteGroups_12; }
	inline int32_t** get_address_of_WriteGroups_12() { return &___WriteGroups_12; }
	inline void set_WriteGroups_12(int32_t* value)
	{
		___WriteGroups_12 = value;
	}

	inline static int32_t get_offset_of_WriteGroupCount_13() { return static_cast<int32_t>(offsetof(TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3, ___WriteGroupCount_13)); }
	inline int32_t get_WriteGroupCount_13() const { return ___WriteGroupCount_13; }
	inline int32_t* get_address_of_WriteGroupCount_13() { return &___WriteGroupCount_13; }
	inline void set_WriteGroupCount_13(int32_t value)
	{
		___WriteGroupCount_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Unity.Entities.TypeManager/TypeInfo
struct TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3_marshaled_pinvoke
{
	Type_t * ___Type_0;
	int32_t ___TypeIndex_1;
	int32_t ___SizeInChunk_2;
	int32_t ___ElementSize_3;
	int32_t ___AlignmentInBytes_4;
	int32_t ___BufferCapacity_5;
	TypeInfo_t4386566412634AE6E9ACF105EE51E7AEE48F9AF5_marshaled_pinvoke ___FastEqualityTypeInfo_6;
	int32_t ___Category_7;
	int32_t ___EntityOffsetCount_8;
	EntityOffsetInfo_tBA42506153706A75A011761D1B08C2068EB09D31 * ___EntityOffsets_9;
	uint64_t ___MemoryOrdering_10;
	uint64_t ___StableTypeHash_11;
	int32_t* ___WriteGroups_12;
	int32_t ___WriteGroupCount_13;
};
// Native definition for COM marshalling of Unity.Entities.TypeManager/TypeInfo
struct TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3_marshaled_com
{
	Type_t * ___Type_0;
	int32_t ___TypeIndex_1;
	int32_t ___SizeInChunk_2;
	int32_t ___ElementSize_3;
	int32_t ___AlignmentInBytes_4;
	int32_t ___BufferCapacity_5;
	TypeInfo_t4386566412634AE6E9ACF105EE51E7AEE48F9AF5_marshaled_com ___FastEqualityTypeInfo_6;
	int32_t ___Category_7;
	int32_t ___EntityOffsetCount_8;
	EntityOffsetInfo_tBA42506153706A75A011761D1B08C2068EB09D31 * ___EntityOffsets_9;
	uint64_t ___MemoryOrdering_10;
	uint64_t ___StableTypeHash_11;
	int32_t* ___WriteGroups_12;
	int32_t ___WriteGroupCount_13;
};
#endif // TYPEINFO_TDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3_H
#ifndef MISSINGMETHODEXCEPTION_T7D33DFD3009E4F19BE4DD0967F04D3878F348498_H
#define MISSINGMETHODEXCEPTION_T7D33DFD3009E4F19BE4DD0967F04D3878F348498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MissingMethodException
struct  MissingMethodException_t7D33DFD3009E4F19BE4DD0967F04D3878F348498  : public MissingMemberException_t165349A7E04FC51DAA5C2251C6DCDD2DD60255DD
{
public:
	// System.String System.MissingMethodException::signature
	String_t* ___signature_20;

public:
	inline static int32_t get_offset_of_signature_20() { return static_cast<int32_t>(offsetof(MissingMethodException_t7D33DFD3009E4F19BE4DD0967F04D3878F348498, ___signature_20)); }
	inline String_t* get_signature_20() const { return ___signature_20; }
	inline String_t** get_address_of_signature_20() { return &___signature_20; }
	inline void set_signature_20(String_t* value)
	{
		___signature_20 = value;
		Il2CppCodeGenWriteBarrier((&___signature_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGMETHODEXCEPTION_T7D33DFD3009E4F19BE4DD0967F04D3878F348498_H
#ifndef WORDSTORAGE_T7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8_H
#define WORDSTORAGE_T7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Entities.WordStorage
struct  WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8  : public RuntimeObject
{
public:
	// Unity.Collections.NativeArray`1<System.UInt16> Unity.Entities.WordStorage::buffer
	NativeArray_1_tF8F29F681A7F71C4B94C2720ED966BEFAAE88159  ___buffer_0;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Entities.WordStorage::offset
	NativeArray_1_tBE26874675F6C49D2857F878D75D41FF754C4AA0  ___offset_1;
	// Unity.Collections.NativeArray`1<System.UInt16> Unity.Entities.WordStorage::length
	NativeArray_1_tF8F29F681A7F71C4B94C2720ED966BEFAAE88159  ___length_2;
	// Unity.Collections.NativeMultiHashMap`2<System.Int32,System.Int32> Unity.Entities.WordStorage::hash
	NativeMultiHashMap_2_t33D19E01B39832C09685E8A5179791EFFD82AFEF  ___hash_3;
	// System.Int32 Unity.Entities.WordStorage::chars
	int32_t ___chars_4;
	// System.Int32 Unity.Entities.WordStorage::entries
	int32_t ___entries_5;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8, ___buffer_0)); }
	inline NativeArray_1_tF8F29F681A7F71C4B94C2720ED966BEFAAE88159  get_buffer_0() const { return ___buffer_0; }
	inline NativeArray_1_tF8F29F681A7F71C4B94C2720ED966BEFAAE88159 * get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(NativeArray_1_tF8F29F681A7F71C4B94C2720ED966BEFAAE88159  value)
	{
		___buffer_0 = value;
	}

	inline static int32_t get_offset_of_offset_1() { return static_cast<int32_t>(offsetof(WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8, ___offset_1)); }
	inline NativeArray_1_tBE26874675F6C49D2857F878D75D41FF754C4AA0  get_offset_1() const { return ___offset_1; }
	inline NativeArray_1_tBE26874675F6C49D2857F878D75D41FF754C4AA0 * get_address_of_offset_1() { return &___offset_1; }
	inline void set_offset_1(NativeArray_1_tBE26874675F6C49D2857F878D75D41FF754C4AA0  value)
	{
		___offset_1 = value;
	}

	inline static int32_t get_offset_of_length_2() { return static_cast<int32_t>(offsetof(WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8, ___length_2)); }
	inline NativeArray_1_tF8F29F681A7F71C4B94C2720ED966BEFAAE88159  get_length_2() const { return ___length_2; }
	inline NativeArray_1_tF8F29F681A7F71C4B94C2720ED966BEFAAE88159 * get_address_of_length_2() { return &___length_2; }
	inline void set_length_2(NativeArray_1_tF8F29F681A7F71C4B94C2720ED966BEFAAE88159  value)
	{
		___length_2 = value;
	}

	inline static int32_t get_offset_of_hash_3() { return static_cast<int32_t>(offsetof(WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8, ___hash_3)); }
	inline NativeMultiHashMap_2_t33D19E01B39832C09685E8A5179791EFFD82AFEF  get_hash_3() const { return ___hash_3; }
	inline NativeMultiHashMap_2_t33D19E01B39832C09685E8A5179791EFFD82AFEF * get_address_of_hash_3() { return &___hash_3; }
	inline void set_hash_3(NativeMultiHashMap_2_t33D19E01B39832C09685E8A5179791EFFD82AFEF  value)
	{
		___hash_3 = value;
	}

	inline static int32_t get_offset_of_chars_4() { return static_cast<int32_t>(offsetof(WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8, ___chars_4)); }
	inline int32_t get_chars_4() const { return ___chars_4; }
	inline int32_t* get_address_of_chars_4() { return &___chars_4; }
	inline void set_chars_4(int32_t value)
	{
		___chars_4 = value;
	}

	inline static int32_t get_offset_of_entries_5() { return static_cast<int32_t>(offsetof(WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8, ___entries_5)); }
	inline int32_t get_entries_5() const { return ___entries_5; }
	inline int32_t* get_address_of_entries_5() { return &___entries_5; }
	inline void set_entries_5(int32_t value)
	{
		___entries_5 = value;
	}
};

struct WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8_StaticFields
{
public:
	// Unity.Entities.WordStorage Unity.Entities.WordStorage::_Instance
	WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8 * ____Instance_6;

public:
	inline static int32_t get_offset_of__Instance_6() { return static_cast<int32_t>(offsetof(WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8_StaticFields, ____Instance_6)); }
	inline WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8 * get__Instance_6() const { return ____Instance_6; }
	inline WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8 ** get_address_of__Instance_6() { return &____Instance_6; }
	inline void set__Instance_6(WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8 * value)
	{
		____Instance_6 = value;
		Il2CppCodeGenWriteBarrier((&____Instance_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORDSTORAGE_T7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8_H
// Unity.Entities.TypeManager_EntityOffsetInfo[]
struct EntityOffsetInfoU5BU5D_tE2302811C925A7C38EEBDE3C158881A2E02CC3E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) EntityOffsetInfo_tBA42506153706A75A011761D1B08C2068EB09D31  m_Items[1];

public:
	inline EntityOffsetInfo_tBA42506153706A75A011761D1B08C2068EB09D31  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EntityOffsetInfo_tBA42506153706A75A011761D1B08C2068EB09D31 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EntityOffsetInfo_tBA42506153706A75A011761D1B08C2068EB09D31  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline EntityOffsetInfo_tBA42506153706A75A011761D1B08C2068EB09D31  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EntityOffsetInfo_tBA42506153706A75A011761D1B08C2068EB09D31 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EntityOffsetInfo_tBA42506153706A75A011761D1B08C2068EB09D31  value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};

extern "C" void TypeInfo_t4386566412634AE6E9ACF105EE51E7AEE48F9AF5_marshal_pinvoke(const TypeInfo_t4386566412634AE6E9ACF105EE51E7AEE48F9AF5& unmarshaled, TypeInfo_t4386566412634AE6E9ACF105EE51E7AEE48F9AF5_marshaled_pinvoke& marshaled);
extern "C" void TypeInfo_t4386566412634AE6E9ACF105EE51E7AEE48F9AF5_marshal_pinvoke_back(const TypeInfo_t4386566412634AE6E9ACF105EE51E7AEE48F9AF5_marshaled_pinvoke& marshaled, TypeInfo_t4386566412634AE6E9ACF105EE51E7AEE48F9AF5& unmarshaled);
extern "C" void TypeInfo_t4386566412634AE6E9ACF105EE51E7AEE48F9AF5_marshal_pinvoke_cleanup(TypeInfo_t4386566412634AE6E9ACF105EE51E7AEE48F9AF5_marshaled_pinvoke& marshaled);
extern "C" void TypeInfo_t4386566412634AE6E9ACF105EE51E7AEE48F9AF5_marshal_com(const TypeInfo_t4386566412634AE6E9ACF105EE51E7AEE48F9AF5& unmarshaled, TypeInfo_t4386566412634AE6E9ACF105EE51E7AEE48F9AF5_marshaled_com& marshaled);
extern "C" void TypeInfo_t4386566412634AE6E9ACF105EE51E7AEE48F9AF5_marshal_com_back(const TypeInfo_t4386566412634AE6E9ACF105EE51E7AEE48F9AF5_marshaled_com& marshaled, TypeInfo_t4386566412634AE6E9ACF105EE51E7AEE48F9AF5& unmarshaled);
extern "C" void TypeInfo_t4386566412634AE6E9ACF105EE51E7AEE48F9AF5_marshal_com_cleanup(TypeInfo_t4386566412634AE6E9ACF105EE51E7AEE48F9AF5_marshaled_com& marshaled);

// System.Void Unity.Collections.NativeArray`1<System.UInt16>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
extern "C" IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m4F91C56CC50AB0E1B25E24C61C2F34C690098F91_gshared (NativeArray_1_tF8F29F681A7F71C4B94C2720ED966BEFAAE88159 * __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<System.Int32>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
extern "C" IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m31DFC95A147492CF22058A7AE93443D710DA2986_gshared (NativeArray_1_tBE26874675F6C49D2857F878D75D41FF754C4AA0 * __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeMultiHashMap`2<System.Int32,System.Int32>::.ctor(System.Int32,Unity.Collections.Allocator)
extern "C" IL2CPP_METHOD_ATTR void NativeMultiHashMap_2__ctor_mD642075A32E67E40475A5804F71118F20D4D2D6D_gshared (NativeMultiHashMap_2_t33D19E01B39832C09685E8A5179791EFFD82AFEF * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeMultiHashMap`2<System.Int32,System.Int32>::TryGetFirstValue(!0,!1&,Unity.Collections.NativeMultiHashMapIterator`1<!0>&)
extern "C" IL2CPP_METHOD_ATTR bool NativeMultiHashMap_2_TryGetFirstValue_mCFEE6CB91ABB39F3E5FDC3292940BFBFE202A8BF_gshared (NativeMultiHashMap_2_t33D19E01B39832C09685E8A5179791EFFD82AFEF * __this, int32_t p0, int32_t* p1, NativeMultiHashMapIterator_1_tCA92178ECD8A70D308B9C81DBAD37A80453A7AF0 * p2, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeMultiHashMap`2<System.Int32,System.Int32>::TryGetNextValue(!1&,Unity.Collections.NativeMultiHashMapIterator`1<!0>&)
extern "C" IL2CPP_METHOD_ATTR bool NativeMultiHashMap_2_TryGetNextValue_m85C55FEC955DAD271D1FED0366875FA0FB28855B_gshared (NativeMultiHashMap_2_t33D19E01B39832C09685E8A5179791EFFD82AFEF * __this, int32_t* p0, NativeMultiHashMapIterator_1_tCA92178ECD8A70D308B9C81DBAD37A80453A7AF0 * p1, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeMultiHashMap`2<System.Int32,System.Int32>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void NativeMultiHashMap_2_Add_m1C393F41C3B4B1A55950B0E25F357204DC5F3C41_gshared (NativeMultiHashMap_2_t33D19E01B39832C09685E8A5179791EFFD82AFEF * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<System.UInt16>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m819E94EE5DC5AD0CF4B1F2372795EBB5441C1668_gshared (NativeArray_1_tF8F29F681A7F71C4B94C2720ED966BEFAAE88159 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<System.Int32>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mCCF1C8209E27BE62EBC0FAB288D1038BB7C4ED79_gshared (NativeArray_1_tBE26874675F6C49D2857F878D75D41FF754C4AA0 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeMultiHashMap`2<System.Int32,System.Int32>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void NativeMultiHashMap_2_Dispose_mFAEBE7FCD7859A0CCAF73AF4E882F174ED642E14_gshared (NativeMultiHashMap_2_t33D19E01B39832C09685E8A5179791EFFD82AFEF * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::.ctor(System.Collections.Generic.IList`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_m8F7880F43C4E281DBF7CA5A9431D5E6DD3797B7E_gshared (ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Contains_mE08D561E86879A26245096C572A8593279383FDB_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" IL2CPP_METHOD_ATTR void List_1_Reverse_m72D0A68F3695A2828EFA0CD851D1A88BEA4827A4_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m1115171C74C982EA09CF1B8DB7E4C97ED6AC23D4_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// T Unity.Entities.World::AddManager<System.Object>(T)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * World_AddManager_TisRuntimeObject_m5767EBC28FA8E327DC972B492AD2DACF2E64A60C_gshared (World_tEEA075348FAEC96EE224554FCDED78254768804E * __this, RuntimeObject * ___manager0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, const RuntimeMethod* method);

// System.Void Unity.Entities.TypeManager/<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2EEF39367F6A1A677A08EF13587DDE4E89B914D6 (U3CU3Ec_t1234B68126878DBDB84E9917E17DAA5E21B698A0 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean Unity.Entities.TypeManager::IsZeroSizeStruct(System.Type)
extern "C" IL2CPP_METHOD_ATTR bool TypeManager_IsZeroSizeStruct_m31803424B0686A1C6114CAE2186BE1FE8F00AF2B (Type_t * ___t0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  p0, const RuntimeMethod* method);
// System.Void Unity.Entities.TypeManager/TypeInfo::.ctor(System.Type,System.Int32,System.Int32,Unity.Entities.TypeManager/TypeCategory,Unity.Entities.FastEquality/TypeInfo,Unity.Entities.TypeManager/EntityOffsetInfo[],System.UInt64,System.Int32,System.Int32,System.Int32,System.UInt64,System.Int32*,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TypeInfo__ctor_m43DB04B2F4034DCF59472BF758A66CA38CBA80A4 (TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3 * __this, Type_t * ___type0, int32_t ___typeIndex1, int32_t ___size2, int32_t ___category3, TypeInfo_t4386566412634AE6E9ACF105EE51E7AEE48F9AF5  ___typeInfo4, EntityOffsetInfoU5BU5D_tE2302811C925A7C38EEBDE3C158881A2E02CC3E4* ___entityOffsets5, uint64_t ___memoryOrdering6, int32_t ___bufferCapacity7, int32_t ___elementSize8, int32_t ___alignmentInBytes9, uint64_t ___stableTypeHash10, int32_t* ___writeGroups11, int32_t ___writeGroupCount12, const RuntimeMethod* method);
// System.Boolean Unity.Entities.TypeManager/TypeInfo::get_IsZeroSized()
extern "C" IL2CPP_METHOD_ATTR bool TypeInfo_get_IsZeroSized_m626906C0E202BD3B622825F72EE6697FFA85D5E0 (TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3 * __this, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0 (Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * __this, const RuntimeMethod* method);
// System.Void Unity.Entities.WordStorage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WordStorage__ctor_m71F960F6BDA7DB679667812C3C71D6CDEFDB9508 (WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<System.UInt16>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m4F91C56CC50AB0E1B25E24C61C2F34C690098F91 (NativeArray_1_tF8F29F681A7F71C4B94C2720ED966BEFAAE88159 * __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tF8F29F681A7F71C4B94C2720ED966BEFAAE88159 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m4F91C56CC50AB0E1B25E24C61C2F34C690098F91_gshared)(__this, p0, p1, p2, method);
}
// System.Void Unity.Collections.NativeArray`1<System.Int32>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m31DFC95A147492CF22058A7AE93443D710DA2986 (NativeArray_1_tBE26874675F6C49D2857F878D75D41FF754C4AA0 * __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tBE26874675F6C49D2857F878D75D41FF754C4AA0 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m31DFC95A147492CF22058A7AE93443D710DA2986_gshared)(__this, p0, p1, p2, method);
}
// System.Void Unity.Collections.NativeMultiHashMap`2<System.Int32,System.Int32>::.ctor(System.Int32,Unity.Collections.Allocator)
inline void NativeMultiHashMap_2__ctor_mD642075A32E67E40475A5804F71118F20D4D2D6D (NativeMultiHashMap_2_t33D19E01B39832C09685E8A5179791EFFD82AFEF * __this, int32_t p0, int32_t p1, const RuntimeMethod* method)
{
	((  void (*) (NativeMultiHashMap_2_t33D19E01B39832C09685E8A5179791EFFD82AFEF *, int32_t, int32_t, const RuntimeMethod*))NativeMultiHashMap_2__ctor_mD642075A32E67E40475A5804F71118F20D4D2D6D_gshared)(__this, p0, p1, method);
}
// System.Int32 Unity.Entities.WordStorage::GetOrCreateIndex(Unity.Entities.NativeStringView)
extern "C" IL2CPP_METHOD_ATTR int32_t WordStorage_GetOrCreateIndex_m8F3A4F16709E0721C241C5C1DFC816B6100EF1ED (WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8 * __this, NativeStringView_t7891AF2C8133156B59547F83542831AA9803CAC1  ___value0, const RuntimeMethod* method);
// System.Void Unity.Entities.WordStorage::Initialize()
extern "C" IL2CPP_METHOD_ATTR void WordStorage_Initialize_mA3BDE7571980715FC61DFB3FB435977E8FCE1A82 (WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeMultiHashMap`2<System.Int32,System.Int32>::TryGetFirstValue(!0,!1&,Unity.Collections.NativeMultiHashMapIterator`1<!0>&)
inline bool NativeMultiHashMap_2_TryGetFirstValue_mCFEE6CB91ABB39F3E5FDC3292940BFBFE202A8BF (NativeMultiHashMap_2_t33D19E01B39832C09685E8A5179791EFFD82AFEF * __this, int32_t p0, int32_t* p1, NativeMultiHashMapIterator_1_tCA92178ECD8A70D308B9C81DBAD37A80453A7AF0 * p2, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeMultiHashMap_2_t33D19E01B39832C09685E8A5179791EFFD82AFEF *, int32_t, int32_t*, NativeMultiHashMapIterator_1_tCA92178ECD8A70D308B9C81DBAD37A80453A7AF0 *, const RuntimeMethod*))NativeMultiHashMap_2_TryGetFirstValue_mCFEE6CB91ABB39F3E5FDC3292940BFBFE202A8BF_gshared)(__this, p0, p1, p2, method);
}
// System.Int32 Unity.Entities.NativeStringView::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t NativeStringView_get_Length_m84881AA1F4CFF41668115F4AC0D809FA4ED00060 (NativeStringView_t7891AF2C8133156B59547F83542831AA9803CAC1 * __this, const RuntimeMethod* method);
// System.Char Unity.Entities.NativeStringView::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar NativeStringView_get_Item_m43FAF817F38346A9AF3CFC2EF646E4EB54DFC147 (NativeStringView_t7891AF2C8133156B59547F83542831AA9803CAC1 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeMultiHashMap`2<System.Int32,System.Int32>::TryGetNextValue(!1&,Unity.Collections.NativeMultiHashMapIterator`1<!0>&)
inline bool NativeMultiHashMap_2_TryGetNextValue_m85C55FEC955DAD271D1FED0366875FA0FB28855B (NativeMultiHashMap_2_t33D19E01B39832C09685E8A5179791EFFD82AFEF * __this, int32_t* p0, NativeMultiHashMapIterator_1_tCA92178ECD8A70D308B9C81DBAD37A80453A7AF0 * p1, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeMultiHashMap_2_t33D19E01B39832C09685E8A5179791EFFD82AFEF *, int32_t*, NativeMultiHashMapIterator_1_tCA92178ECD8A70D308B9C81DBAD37A80453A7AF0 *, const RuntimeMethod*))NativeMultiHashMap_2_TryGetNextValue_m85C55FEC955DAD271D1FED0366875FA0FB28855B_gshared)(__this, p0, p1, method);
}
// System.Int32 Unity.Entities.NativeStringView::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t NativeStringView_GetHashCode_m2C2B6510D1293B608B5EDE1A8E9722472A949213 (NativeStringView_t7891AF2C8133156B59547F83542831AA9803CAC1 * __this, const RuntimeMethod* method);
// System.Int32 Unity.Entities.WordStorage::GetIndex(System.Int32,Unity.Entities.NativeStringView)
extern "C" IL2CPP_METHOD_ATTR int32_t WordStorage_GetIndex_m47A63E719E7A37AE0CFC9A588E726CF59E1495BE (WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8 * __this, int32_t ___h0, NativeStringView_t7891AF2C8133156B59547F83542831AA9803CAC1  ___temp1, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeMultiHashMap`2<System.Int32,System.Int32>::Add(!0,!1)
inline void NativeMultiHashMap_2_Add_m1C393F41C3B4B1A55950B0E25F357204DC5F3C41 (NativeMultiHashMap_2_t33D19E01B39832C09685E8A5179791EFFD82AFEF * __this, int32_t p0, int32_t p1, const RuntimeMethod* method)
{
	((  void (*) (NativeMultiHashMap_2_t33D19E01B39832C09685E8A5179791EFFD82AFEF *, int32_t, int32_t, const RuntimeMethod*))NativeMultiHashMap_2_Add_m1C393F41C3B4B1A55950B0E25F357204DC5F3C41_gshared)(__this, p0, p1, method);
}
// System.Void Unity.Collections.NativeArray`1<System.UInt16>::Dispose()
inline void NativeArray_1_Dispose_m819E94EE5DC5AD0CF4B1F2372795EBB5441C1668 (NativeArray_1_tF8F29F681A7F71C4B94C2720ED966BEFAAE88159 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tF8F29F681A7F71C4B94C2720ED966BEFAAE88159 *, const RuntimeMethod*))NativeArray_1_Dispose_m819E94EE5DC5AD0CF4B1F2372795EBB5441C1668_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<System.Int32>::Dispose()
inline void NativeArray_1_Dispose_mCCF1C8209E27BE62EBC0FAB288D1038BB7C4ED79 (NativeArray_1_tBE26874675F6C49D2857F878D75D41FF754C4AA0 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tBE26874675F6C49D2857F878D75D41FF754C4AA0 *, const RuntimeMethod*))NativeArray_1_Dispose_mCCF1C8209E27BE62EBC0FAB288D1038BB7C4ED79_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeMultiHashMap`2<System.Int32,System.Int32>::Dispose()
inline void NativeMultiHashMap_2_Dispose_mFAEBE7FCD7859A0CCAF73AF4E882F174ED642E14 (NativeMultiHashMap_2_t33D19E01B39832C09685E8A5179791EFFD82AFEF * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeMultiHashMap_2_t33D19E01B39832C09685E8A5179791EFFD82AFEF *, const RuntimeMethod*))NativeMultiHashMap_2_Dispose_mFAEBE7FCD7859A0CCAF73AF4E882F174ED642E14_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,Unity.Entities.ScriptBehaviourManager>::.ctor()
inline void Dictionary_2__ctor_m071D3F7038B9B2188F9794672F0C8F0C427B311A (Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Entities.ScriptBehaviourManager>::.ctor()
inline void List_1__ctor_mB54295B514A703F333F69B23876C246729FAC133 (List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Entities.World>::Add(!0)
inline void List_1_Add_m3F64B689E744C90B786C5C1EC7F2FABA30CAA546 (List_1_t3E642DEC3ECCF74A4F3732168EAE534DC91673A6 * __this, World_tEEA075348FAEC96EE224554FCDED78254768804E * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3E642DEC3ECCF74A4F3732168EAE534DC91673A6 *, World_tEEA075348FAEC96EE224554FCDED78254768804E *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, p0, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Unity.Entities.ScriptBehaviourManager>::.ctor(System.Collections.Generic.IList`1<!0>)
inline void ReadOnlyCollection_1__ctor_mEDCB4D392B1AF20310D9849D903234D2EBE1AE94 (ReadOnlyCollection_1_t0C6843E8F3A6543EE548249D63096DBB0754BC24 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_t0C6843E8F3A6543EE548249D63096DBB0754BC24 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_m8F7880F43C4E281DBF7CA5A9431D5E6DD3797B7E_gshared)(__this, p0, method);
}
// System.String Unity.Entities.World::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* World_get_Name_m91ED4B4F5BDD5D46C406F917C0B07662946FC553 (World_tEEA075348FAEC96EE224554FCDED78254768804E * __this, const RuntimeMethod* method);
// System.Boolean Unity.Entities.World::get_IsCreated()
extern "C" IL2CPP_METHOD_ATTR bool World_get_IsCreated_mC3A23BA504F169A06784EFD81205EA99B4C37405 (World_tEEA075348FAEC96EE224554FCDED78254768804E * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<Unity.Entities.World>::Contains(!0)
inline bool List_1_Contains_mFC2525018DE71698EA64EFDC349061660A605F12 (List_1_t3E642DEC3ECCF74A4F3732168EAE534DC91673A6 * __this, World_tEEA075348FAEC96EE224554FCDED78254768804E * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t3E642DEC3ECCF74A4F3732168EAE534DC91673A6 *, World_tEEA075348FAEC96EE224554FCDED78254768804E *, const RuntimeMethod*))List_1_Contains_mE08D561E86879A26245096C572A8593279383FDB_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.List`1<Unity.Entities.World>::Remove(!0)
inline bool List_1_Remove_m62435CE6445EE0871D8F90D16BCEBD8C34B05FE2 (List_1_t3E642DEC3ECCF74A4F3732168EAE534DC91673A6 * __this, World_tEEA075348FAEC96EE224554FCDED78254768804E * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t3E642DEC3ECCF74A4F3732168EAE534DC91673A6 *, World_tEEA075348FAEC96EE224554FCDED78254768804E *, const RuntimeMethod*))List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Entities.ScriptBehaviourManager>::Reverse()
inline void List_1_Reverse_mB4FB155F759478BA09CBC5C4C5F7CB87E2D18AB2 (List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445 *, const RuntimeMethod*))List_1_Reverse_m72D0A68F3695A2828EFA0CD851D1A88BEA4827A4_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Unity.Entities.ScriptBehaviourManager>::GetEnumerator()
inline Enumerator_t11491103305F453BCC7D7A157BDF0BE57F72C1D1  List_1_GetEnumerator_m248A80D434ED29E7991EFA070A9BE4464EC69EC6 (List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t11491103305F453BCC7D7A157BDF0BE57F72C1D1  (*) (List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Unity.Entities.ScriptBehaviourManager>::get_Current()
inline ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * Enumerator_get_Current_mA2EEFBF09A4B54FF63BC147C96912EBF1A998602 (Enumerator_t11491103305F453BCC7D7A157BDF0BE57F72C1D1 * __this, const RuntimeMethod* method)
{
	return ((  ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * (*) (Enumerator_t11491103305F453BCC7D7A157BDF0BE57F72C1D1 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<Unity.Entities.ScriptBehaviourManager>::Remove(!0)
inline bool List_1_Remove_mFC18813B2D16AB14264B75DC42B8991FA887E4E6 (List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445 * __this, ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445 *, ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C *, const RuntimeMethod*))List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Entities.ScriptBehaviourManager>::Add(!0)
inline void List_1_Add_m34E261986E4856CE9C75B1B068CB821C96ECD65D (List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445 * __this, ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445 *, ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.Entities.ScriptBehaviourManager>::MoveNext()
inline bool Enumerator_MoveNext_m0A05D71C08663EE1F2698B30DC67DA0C4148E7C0 (Enumerator_t11491103305F453BCC7D7A157BDF0BE57F72C1D1 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t11491103305F453BCC7D7A157BDF0BE57F72C1D1 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.Entities.ScriptBehaviourManager>::Dispose()
inline void Enumerator_Dispose_mFF68BE2E0FDCB432AF38A796BAF2F6CDD4377E0D (Enumerator_t11491103305F453BCC7D7A157BDF0BE57F72C1D1 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t11491103305F453BCC7D7A157BDF0BE57F72C1D1 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Void Unity.Entities.ScriptBehaviourManager::DestroyInstance()
extern "C" IL2CPP_METHOD_ATTR void ScriptBehaviourManager_DestroyInstance_m47C0E2D53A7B0D4444361356CE0B31F45483D80A (ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * __this, const RuntimeMethod* method);
// System.Void Unity.Debug::LogException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogException_mC053F054ED74DD39A469D42D1EBADC908F0F0B63 (Exception_t * ___exception0, const RuntimeMethod* method);
// Unity.Entities.World Unity.Entities.World::get_Active()
extern "C" IL2CPP_METHOD_ATTR World_tEEA075348FAEC96EE224554FCDED78254768804E * World_get_Active_mD6EE6752C1E68C2E9E6C37D8908F1FBDDBA7C015 (const RuntimeMethod* method);
// System.Void Unity.Entities.World::set_Active(Unity.Entities.World)
extern "C" IL2CPP_METHOD_ATTR void World_set_Active_m873110896D26BC31ECAAE5CBEE490DF5073550B5 (World_tEEA075348FAEC96EE224554FCDED78254768804E * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Unity.Entities.ScriptBehaviourManager>::Clear()
inline void List_1_Clear_m1E904408485AF0B6DC2B53063E8E730B9F0900E3 (List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445 *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,Unity.Entities.ScriptBehaviourManager>::Clear()
inline void Dictionary_2_Clear_m882A88B78C063A08131E2C1705E2C2E9AA1EDCC1 (Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F *, const RuntimeMethod*))Dictionary_2_Clear_m1115171C74C982EA09CF1B8DB7E4C97ED6AC23D4_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<Unity.Entities.World>::get_Item(System.Int32)
inline World_tEEA075348FAEC96EE224554FCDED78254768804E * List_1_get_Item_mA068FE543869F436B504A9D52F026B5E702BC166 (List_1_t3E642DEC3ECCF74A4F3732168EAE534DC91673A6 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  World_tEEA075348FAEC96EE224554FCDED78254768804E * (*) (List_1_t3E642DEC3ECCF74A4F3732168EAE534DC91673A6 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared)(__this, p0, method);
}
// System.Void Unity.Entities.World::Dispose()
extern "C" IL2CPP_METHOD_ATTR void World_Dispose_mA2C5B7B71DFA1A2E41DF51C39FAF5C803DE35747 (World_tEEA075348FAEC96EE224554FCDED78254768804E * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Unity.Entities.World>::get_Count()
inline int32_t List_1_get_Count_mA769BA2B9D93E1409037895D02BDB1AE297680CD (List_1_t3E642DEC3ECCF74A4F3732168EAE534DC91673A6 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3E642DEC3ECCF74A4F3732168EAE534DC91673A6 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
// System.Object System.Activator::CreateInstance(System.Type,System.Object[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_mEE50708E1E8AAD4E5021A2FFDB992DDF65727E17 (Type_t * p0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void Unity.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_mF0A2FA52B5E8B726CF5FE7791266F9FEE9C75EBF (RuntimeObject * ___message0, const RuntimeMethod* method);
// T Unity.Entities.World::AddManager<Unity.Entities.ScriptBehaviourManager>(T)
inline ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * World_AddManager_TisScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C_m925B06F6F8A48EDD137619AB9800B7FA645921EC (World_tEEA075348FAEC96EE224554FCDED78254768804E * __this, ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * ___manager0, const RuntimeMethod* method)
{
	return ((  ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * (*) (World_tEEA075348FAEC96EE224554FCDED78254768804E *, ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C *, const RuntimeMethod*))World_AddManager_TisRuntimeObject_m5767EBC28FA8E327DC972B492AD2DACF2E64A60C_gshared)(__this, ___manager0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,Unity.Entities.ScriptBehaviourManager>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m0EC757AD9801FEFAB28A0C5F3B5FF304D4FD30D9 (Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F * __this, Type_t * p0, ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F *, Type_t *, ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared)(__this, p0, p1, method);
}
// Unity.Entities.ScriptBehaviourManager Unity.Entities.World::GetExistingManagerInternal(System.Type)
extern "C" IL2CPP_METHOD_ATTR ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * World_GetExistingManagerInternal_m6B294BC2B80CE2DC0D15BB459E18AF1B1BD55227 (World_tEEA075348FAEC96EE224554FCDED78254768804E * __this, Type_t * ___type0, const RuntimeMethod* method);
// Unity.Entities.ScriptBehaviourManager Unity.Entities.World::CreateManagerInternal(System.Type,System.Object[])
extern "C" IL2CPP_METHOD_ATTR ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * World_CreateManagerInternal_m395F28BFE883C4B8B404B884A479B9853BB2B646 (World_tEEA075348FAEC96EE224554FCDED78254768804E * __this, Type_t * ___type0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___constructorArguments1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,Unity.Entities.ScriptBehaviourManager>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m1FAEB7A45EEC00A90537A9C7C8FEF93F33749FB9 (Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F * __this, Type_t * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F *, Type_t *, const RuntimeMethod*))Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,Unity.Entities.ScriptBehaviourManager>::Add(!0,!1)
inline void Dictionary_2_Add_mBB9F1BDE9B7FD3E71E0DBD4B886F323AEC334656 (Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F * __this, Type_t * p0, ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F *, Type_t *, ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C *, const RuntimeMethod*))Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR bool Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9 (Type_t * p0, Type_t * p1, const RuntimeMethod* method);
// System.Int32 Unity.Entities.World::get_Version()
extern "C" IL2CPP_METHOD_ATTR int32_t World_get_Version_mE02F17593AD3305E2DC72D581E450B02223B1D43 (World_tEEA075348FAEC96EE224554FCDED78254768804E * __this, const RuntimeMethod* method);
// System.Void Unity.Entities.World::set_Version(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void World_set_Version_mBDD09A2D3B320774EA48D33E44BADA6572B48EBF (World_tEEA075348FAEC96EE224554FCDED78254768804E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Type,Unity.Entities.ScriptBehaviourManager>::get_Item(!0)
inline ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * Dictionary_2_get_Item_m9C25BCD2D5B74852C2EF1821CFD26909DCC17620 (Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F * __this, Type_t * p0, const RuntimeMethod* method)
{
	return ((  ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * (*) (Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F *, Type_t *, const RuntimeMethod*))Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,Unity.Entities.ScriptBehaviourManager>::Remove(!0)
inline bool Dictionary_2_Remove_m14FAA4E1C93D87C935BCC973FE7D1A4DF50B5C61 (Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F * __this, Type_t * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F *, Type_t *, const RuntimeMethod*))Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared)(__this, p0, method);
}
// System.Void Unity.Entities.World::AddTypeLookup(System.Type,Unity.Entities.ScriptBehaviourManager)
extern "C" IL2CPP_METHOD_ATTR void World_AddTypeLookup_m364FE5B38C207CA38E2B45B4AD6565FE1D9E5707 (World_tEEA075348FAEC96EE224554FCDED78254768804E * __this, Type_t * ___type0, ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * ___manager1, const RuntimeMethod* method);
// System.Void Unity.Entities.World::CheckGetOrCreateManager()
extern "C" IL2CPP_METHOD_ATTR void World_CheckGetOrCreateManager_m0CF300DC6C44AA0AB3D0E7571AB563DF17F37324 (World_tEEA075348FAEC96EE224554FCDED78254768804E * __this, const RuntimeMethod* method);
// Unity.Entities.ScriptBehaviourManager Unity.Entities.World::GetOrCreateManagerInternal(System.Type)
extern "C" IL2CPP_METHOD_ATTR ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * World_GetOrCreateManagerInternal_mC7AC2975724DAF65A96EA0134B93446A8C7F3D9B (World_tEEA075348FAEC96EE224554FCDED78254768804E * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Unity.Entities.World>::.ctor()
inline void List_1__ctor_m016B7AD9226F608728F97AAAFF357B2226301B40 (List_1_t3E642DEC3ECCF74A4F3732168EAE534DC91673A6 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3E642DEC3ECCF74A4F3732168EAE534DC91673A6 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Entities.TypeManager_<>c::.cctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1EF7B20577BEE21BFCE99AD1E1CDC11D5611F761 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m1EF7B20577BEE21BFCE99AD1E1CDC11D5611F761_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t1234B68126878DBDB84E9917E17DAA5E21B698A0 * L_0 = (U3CU3Ec_t1234B68126878DBDB84E9917E17DAA5E21B698A0 *)il2cpp_codegen_object_new(U3CU3Ec_t1234B68126878DBDB84E9917E17DAA5E21B698A0_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m2EEF39367F6A1A677A08EF13587DDE4E89B914D6(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t1234B68126878DBDB84E9917E17DAA5E21B698A0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1234B68126878DBDB84E9917E17DAA5E21B698A0_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Entities.TypeManager_<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2EEF39367F6A1A677A08EF13587DDE4E89B914D6 (U3CU3Ec_t1234B68126878DBDB84E9917E17DAA5E21B698A0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Unity.Entities.TypeManager_<>c::<IsZeroSizeStruct>b__24_0(System.Reflection.FieldInfo)
extern "C" IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CIsZeroSizeStructU3Eb__24_0_m4161807B784AF5205595E784F65BB4A9B70D785B (U3CU3Ec_t1234B68126878DBDB84E9917E17DAA5E21B698A0 * __this, FieldInfo_t * ___fi0, const RuntimeMethod* method)
{
	{
		FieldInfo_t * L_0 = ___fi0;
		NullCheck(L_0);
		Type_t * L_1 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_0);
		bool L_2 = TypeManager_IsZeroSizeStruct_m31803424B0686A1C6114CAE2186BE1FE8F00AF2B(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Unity.Entities.TypeManager/TypeInfo
extern "C" void TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3_marshal_pinvoke(const TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3& unmarshaled, TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Type' of type 'TypeInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Type_0Exception, NULL, NULL);
}
extern "C" void TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3_marshal_pinvoke_back(const TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3_marshaled_pinvoke& marshaled, TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3& unmarshaled)
{
	Exception_t* ___Type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Type' of type 'TypeInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Type_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Entities.TypeManager/TypeInfo
extern "C" void TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3_marshal_pinvoke_cleanup(TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: Unity.Entities.TypeManager/TypeInfo
extern "C" void TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3_marshal_com(const TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3& unmarshaled, TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3_marshaled_com& marshaled)
{
	Exception_t* ___Type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Type' of type 'TypeInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Type_0Exception, NULL, NULL);
}
extern "C" void TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3_marshal_com_back(const TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3_marshaled_com& marshaled, TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3& unmarshaled)
{
	Exception_t* ___Type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Type' of type 'TypeInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Type_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Entities.TypeManager/TypeInfo
extern "C" void TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3_marshal_com_cleanup(TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3_marshaled_com& marshaled)
{
}
// System.Void Unity.Entities.TypeManager_TypeInfo::.ctor(System.Type,System.Int32,System.Int32,Unity.Entities.TypeManager_TypeCategory,Unity.Entities.FastEquality_TypeInfo,Unity.Entities.TypeManager_EntityOffsetInfo[],System.UInt64,System.Int32,System.Int32,System.Int32,System.UInt64,System.Int32*,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TypeInfo__ctor_m43DB04B2F4034DCF59472BF758A66CA38CBA80A4 (TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3 * __this, Type_t * ___type0, int32_t ___typeIndex1, int32_t ___size2, int32_t ___category3, TypeInfo_t4386566412634AE6E9ACF105EE51E7AEE48F9AF5  ___typeInfo4, EntityOffsetInfoU5BU5D_tE2302811C925A7C38EEBDE3C158881A2E02CC3E4* ___entityOffsets5, uint64_t ___memoryOrdering6, int32_t ___bufferCapacity7, int32_t ___elementSize8, int32_t ___alignmentInBytes9, uint64_t ___stableTypeHash10, int32_t* ___writeGroups11, int32_t ___writeGroupCount12, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeInfo__ctor_m43DB04B2F4034DCF59472BF758A66CA38CBA80A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3 * G_B2_0 = NULL;
	TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3 * G_B3_1 = NULL;
	int32_t G_B6_0 = 0;
	{
		Type_t * L_0 = ___type0;
		__this->set_Type_0(L_0);
		int32_t L_1 = ___typeIndex1;
		__this->set_TypeIndex_1(L_1);
		int32_t L_2 = ___size2;
		__this->set_SizeInChunk_2(L_2);
		int32_t L_3 = ___category3;
		__this->set_Category_7(L_3);
		TypeInfo_t4386566412634AE6E9ACF105EE51E7AEE48F9AF5  L_4 = ___typeInfo4;
		__this->set_FastEqualityTypeInfo_6(L_4);
		EntityOffsetInfoU5BU5D_tE2302811C925A7C38EEBDE3C158881A2E02CC3E4* L_5 = ___entityOffsets5;
		G_B1_0 = __this;
		if (L_5)
		{
			G_B2_0 = __this;
			goto IL_002d;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0031;
	}

IL_002d:
	{
		EntityOffsetInfoU5BU5D_tE2302811C925A7C38EEBDE3C158881A2E02CC3E4* L_6 = ___entityOffsets5;
		NullCheck(L_6);
		G_B3_0 = (((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length))));
		G_B3_1 = G_B2_0;
	}

IL_0031:
	{
		G_B3_1->set_EntityOffsetCount_8(G_B3_0);
		EntityOffsetInfoU5BU5D_tE2302811C925A7C38EEBDE3C158881A2E02CC3E4* L_7 = ___entityOffsets5;
		__this->set_EntityOffsets_9(L_7);
		uint64_t L_8 = ___memoryOrdering6;
		__this->set_MemoryOrdering_10(L_8);
		int32_t L_9 = ___bufferCapacity7;
		__this->set_BufferCapacity_5(L_9);
		int32_t L_10 = ___elementSize8;
		__this->set_ElementSize_3(L_10);
		int32_t L_11 = ___alignmentInBytes9;
		__this->set_AlignmentInBytes_4(L_11);
		uint64_t L_12 = ___stableTypeHash10;
		__this->set_StableTypeHash_11(L_12);
		int32_t* L_13 = ___writeGroups11;
		__this->set_WriteGroups_12((int32_t*)L_13);
		int32_t L_14 = ___writeGroupCount12;
		__this->set_WriteGroupCount_13(L_14);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_15 = { reinterpret_cast<intptr_t> (ISystemStateSharedComponentData_t7356B7C69F5B5B0CE975877D98201560E244B912_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_16 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_15, /*hidden argument*/NULL);
		Type_t * L_17 = ___type0;
		NullCheck(L_16);
		bool L_18 = VirtFuncInvoker1< bool, Type_t * >::Invoke(111 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_16, L_17);
		V_0 = L_18;
		bool L_19 = V_0;
		if (L_19)
		{
			goto IL_009c;
		}
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_20 = { reinterpret_cast<intptr_t> (ISystemStateComponentData_tCCDD668178E711F81D821F6F38D4A09EFAC9ADE2_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_20, /*hidden argument*/NULL);
		Type_t * L_22 = ___type0;
		NullCheck(L_21);
		bool L_23 = VirtFuncInvoker1< bool, Type_t * >::Invoke(111 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_21, L_22);
		G_B6_0 = ((int32_t)(L_23));
		goto IL_009d;
	}

IL_009c:
	{
		G_B6_0 = 1;
	}

IL_009d:
	{
		V_1 = (bool)G_B6_0;
		int32_t L_24 = ___typeIndex1;
		if (!L_24)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_25 = __this->get_SizeInChunk_2();
		if (L_25)
		{
			goto IL_00be;
		}
	}
	{
		int32_t L_26 = __this->get_TypeIndex_1();
		__this->set_TypeIndex_1(((int32_t)((int32_t)L_26|(int32_t)((int32_t)1073741824))));
	}

IL_00be:
	{
		int32_t L_27 = __this->get_Category_7();
		if ((!(((uint32_t)L_27) == ((uint32_t)2))))
		{
			goto IL_00d9;
		}
	}
	{
		int32_t L_28 = __this->get_TypeIndex_1();
		__this->set_TypeIndex_1(((int32_t)((int32_t)L_28|(int32_t)((int32_t)268435456))));
	}

IL_00d9:
	{
		bool L_29 = V_1;
		if (!L_29)
		{
			goto IL_00ee;
		}
	}
	{
		int32_t L_30 = __this->get_TypeIndex_1();
		__this->set_TypeIndex_1(((int32_t)((int32_t)L_30|(int32_t)((int32_t)134217728))));
	}

IL_00ee:
	{
		bool L_31 = V_0;
		if (!L_31)
		{
			goto IL_0103;
		}
	}
	{
		int32_t L_32 = __this->get_TypeIndex_1();
		__this->set_TypeIndex_1(((int32_t)((int32_t)L_32|(int32_t)((int32_t)402653184))));
	}

IL_0103:
	{
		int32_t L_33 = __this->get_BufferCapacity_5();
		if ((((int32_t)L_33) < ((int32_t)0)))
		{
			goto IL_011e;
		}
	}
	{
		int32_t L_34 = __this->get_TypeIndex_1();
		__this->set_TypeIndex_1(((int32_t)((int32_t)L_34|(int32_t)((int32_t)67108864))));
	}

IL_011e:
	{
		int32_t L_35 = __this->get_EntityOffsetCount_8();
		if (L_35)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_36 = __this->get_TypeIndex_1();
		__this->set_TypeIndex_1(((int32_t)((int32_t)L_36|(int32_t)((int32_t)33554432))));
	}

IL_0138:
	{
		return;
	}
}
extern "C"  void TypeInfo__ctor_m43DB04B2F4034DCF59472BF758A66CA38CBA80A4_AdjustorThunk (RuntimeObject * __this, Type_t * ___type0, int32_t ___typeIndex1, int32_t ___size2, int32_t ___category3, TypeInfo_t4386566412634AE6E9ACF105EE51E7AEE48F9AF5  ___typeInfo4, EntityOffsetInfoU5BU5D_tE2302811C925A7C38EEBDE3C158881A2E02CC3E4* ___entityOffsets5, uint64_t ___memoryOrdering6, int32_t ___bufferCapacity7, int32_t ___elementSize8, int32_t ___alignmentInBytes9, uint64_t ___stableTypeHash10, int32_t* ___writeGroups11, int32_t ___writeGroupCount12, const RuntimeMethod* method)
{
	TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3 * _thisAdjusted = reinterpret_cast<TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3 *>(__this + 1);
	TypeInfo__ctor_m43DB04B2F4034DCF59472BF758A66CA38CBA80A4(_thisAdjusted, ___type0, ___typeIndex1, ___size2, ___category3, ___typeInfo4, ___entityOffsets5, ___memoryOrdering6, ___bufferCapacity7, ___elementSize8, ___alignmentInBytes9, ___stableTypeHash10, ___writeGroups11, ___writeGroupCount12, method);
}
// System.Boolean Unity.Entities.TypeManager_TypeInfo::get_IsZeroSized()
extern "C" IL2CPP_METHOD_ATTR bool TypeInfo_get_IsZeroSized_m626906C0E202BD3B622825F72EE6697FFA85D5E0 (TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_SizeInChunk_2();
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
extern "C"  bool TypeInfo_get_IsZeroSized_m626906C0E202BD3B622825F72EE6697FFA85D5E0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3 * _thisAdjusted = reinterpret_cast<TypeInfo_tDCC4AA347E5EA34625B335B94CC21AF3F9C6FAE3 *>(__this + 1);
	return TypeInfo_get_IsZeroSized_m626906C0E202BD3B622825F72EE6697FFA85D5E0(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Type Unity.Entities.UpdateAfterAttribute::get_SystemType()
extern "C" IL2CPP_METHOD_ATTR Type_t * UpdateAfterAttribute_get_SystemType_mEC22AB93F9D399B09CD8BDEDEB34796B01D65008 (UpdateAfterAttribute_t3E5895B0558A08D5A5C193149925C5D947B22DE3 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CSystemTypeU3Ek__BackingField_0();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Entities.UpdateBeforeAttribute::.ctor(System.Type)
extern "C" IL2CPP_METHOD_ATTR void UpdateBeforeAttribute__ctor_mA1FE8C7C290E4115DAA222B3ABA54717C8CB9D0C (UpdateBeforeAttribute_t1547E96ADA4D845BEFE640C7EBA54BB1BF9964FB * __this, Type_t * ___systemType0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___systemType0;
		__this->set_U3CSystemTypeU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Type Unity.Entities.UpdateBeforeAttribute::get_SystemType()
extern "C" IL2CPP_METHOD_ATTR Type_t * UpdateBeforeAttribute_get_SystemType_mD5B539C5467F0C29E2F04680D95D91C6AD74E003 (UpdateBeforeAttribute_t1547E96ADA4D845BEFE640C7EBA54BB1BF9964FB * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CSystemTypeU3Ek__BackingField_0();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Type Unity.Entities.UpdateInGroupAttribute::get_GroupType()
extern "C" IL2CPP_METHOD_ATTR Type_t * UpdateInGroupAttribute_get_GroupType_mA9E22F6E62DB3F404B482F1D1EA2064F0E20E951 (UpdateInGroupAttribute_t10CFAF8D3E3A3DD188ECFA30CE20238F85FA276A * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CGroupTypeU3Ek__BackingField_0();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Entities.WordStorage Unity.Entities.WordStorage::get_Instance()
extern "C" IL2CPP_METHOD_ATTR WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8 * WordStorage_get_Instance_m01EE3920D46FB7E1951D39FF2E5280A743B1FB2A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordStorage_get_Instance_m01EE3920D46FB7E1951D39FF2E5280A743B1FB2A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8 * L_0 = ((WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8_StaticFields*)il2cpp_codegen_static_fields_for(WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8_il2cpp_TypeInfo_var))->get__Instance_6();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8 * L_1 = (WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8 *)il2cpp_codegen_object_new(WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8_il2cpp_TypeInfo_var);
		WordStorage__ctor_m71F960F6BDA7DB679667812C3C71D6CDEFDB9508(L_1, /*hidden argument*/NULL);
		((WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8_StaticFields*)il2cpp_codegen_static_fields_for(WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8_il2cpp_TypeInfo_var))->set__Instance_6(L_1);
	}

IL_0011:
	{
		WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8 * L_2 = ((WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8_StaticFields*)il2cpp_codegen_static_fields_for(WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8_il2cpp_TypeInfo_var))->get__Instance_6();
		return L_2;
	}
}
// System.Void Unity.Entities.WordStorage::set_Instance(Unity.Entities.WordStorage)
extern "C" IL2CPP_METHOD_ATTR void WordStorage_set_Instance_m635A28120C2D08806ACBFFF28F1EFDD7E603BCD8 (WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordStorage_set_Instance_m635A28120C2D08806ACBFFF28F1EFDD7E603BCD8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8 * L_0 = ___value0;
		((WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8_StaticFields*)il2cpp_codegen_static_fields_for(WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8_il2cpp_TypeInfo_var))->set__Instance_6(L_0);
		return;
	}
}
// System.Void Unity.Entities.WordStorage::Initialize()
extern "C" IL2CPP_METHOD_ATTR void WordStorage_Initialize_mA3BDE7571980715FC61DFB3FB435977E8FCE1A82 (WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordStorage_Initialize_mA3BDE7571980715FC61DFB3FB435977E8FCE1A82_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NativeStringView_t7891AF2C8133156B59547F83542831AA9803CAC1  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		NativeArray_1_tF8F29F681A7F71C4B94C2720ED966BEFAAE88159  L_0;
		memset(&L_0, 0, sizeof(L_0));
		NativeArray_1__ctor_m4F91C56CC50AB0E1B25E24C61C2F34C690098F91((&L_0), ((int32_t)1000000), 4, 1, /*hidden argument*/NativeArray_1__ctor_m4F91C56CC50AB0E1B25E24C61C2F34C690098F91_RuntimeMethod_var);
		__this->set_buffer_0(L_0);
		NativeArray_1_tBE26874675F6C49D2857F878D75D41FF754C4AA0  L_1;
		memset(&L_1, 0, sizeof(L_1));
		NativeArray_1__ctor_m31DFC95A147492CF22058A7AE93443D710DA2986((&L_1), ((int32_t)10000), 4, 1, /*hidden argument*/NativeArray_1__ctor_m31DFC95A147492CF22058A7AE93443D710DA2986_RuntimeMethod_var);
		__this->set_offset_1(L_1);
		NativeArray_1_tF8F29F681A7F71C4B94C2720ED966BEFAAE88159  L_2;
		memset(&L_2, 0, sizeof(L_2));
		NativeArray_1__ctor_m4F91C56CC50AB0E1B25E24C61C2F34C690098F91((&L_2), ((int32_t)10000), 4, 1, /*hidden argument*/NativeArray_1__ctor_m4F91C56CC50AB0E1B25E24C61C2F34C690098F91_RuntimeMethod_var);
		__this->set_length_2(L_2);
		NativeMultiHashMap_2_t33D19E01B39832C09685E8A5179791EFFD82AFEF  L_3;
		memset(&L_3, 0, sizeof(L_3));
		NativeMultiHashMap_2__ctor_mD642075A32E67E40475A5804F71118F20D4D2D6D((&L_3), ((int32_t)10000), 4, /*hidden argument*/NativeMultiHashMap_2__ctor_mD642075A32E67E40475A5804F71118F20D4D2D6D_RuntimeMethod_var);
		__this->set_hash_3(L_3);
		__this->set_chars_4(0);
		__this->set_entries_5(0);
		il2cpp_codegen_initobj((&V_0), sizeof(NativeStringView_t7891AF2C8133156B59547F83542831AA9803CAC1 ));
		NativeStringView_t7891AF2C8133156B59547F83542831AA9803CAC1  L_4 = V_0;
		WordStorage_GetOrCreateIndex_m8F3A4F16709E0721C241C5C1DFC816B6100EF1ED(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Entities.WordStorage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WordStorage__ctor_m71F960F6BDA7DB679667812C3C71D6CDEFDB9508 (WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		WordStorage_Initialize_mA3BDE7571980715FC61DFB3FB435977E8FCE1A82(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Unity.Entities.WordStorage::GetIndex(System.Int32,Unity.Entities.NativeStringView)
extern "C" IL2CPP_METHOD_ATTR int32_t WordStorage_GetIndex_m47A63E719E7A37AE0CFC9A588E726CF59E1495BE (WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8 * __this, int32_t ___h0, NativeStringView_t7891AF2C8133156B59547F83542831AA9803CAC1  ___temp1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordStorage_GetIndex_m47A63E719E7A37AE0CFC9A588E726CF59E1495BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NativeMultiHashMapIterator_1_tCA92178ECD8A70D308B9C81DBAD37A80453A7AF0  V_1;
	memset(&V_1, 0, sizeof(V_1));
	uint16_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		NativeMultiHashMap_2_t33D19E01B39832C09685E8A5179791EFFD82AFEF * L_0 = __this->get_address_of_hash_3();
		int32_t L_1 = ___h0;
		bool L_2 = NativeMultiHashMap_2_TryGetFirstValue_mCFEE6CB91ABB39F3E5FDC3292940BFBFE202A8BF((NativeMultiHashMap_2_t33D19E01B39832C09685E8A5179791EFFD82AFEF *)L_0, L_1, (int32_t*)(&V_0), (NativeMultiHashMapIterator_1_tCA92178ECD8A70D308B9C81DBAD37A80453A7AF0 *)(&V_1), /*hidden argument*/NativeMultiHashMap_2_TryGetFirstValue_mCFEE6CB91ABB39F3E5FDC3292940BFBFE202A8BF_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_006d;
		}
	}
	{
		NativeArray_1_tF8F29F681A7F71C4B94C2720ED966BEFAAE88159 * L_3 = __this->get_address_of_length_2();
		int32_t L_4 = V_0;
		uint16_t L_5 = IL2CPP_NATIVEARRAY_GET_ITEM(uint16_t, ((NativeArray_1_tF8F29F681A7F71C4B94C2720ED966BEFAAE88159 *)L_3)->___m_Buffer_0, L_4);
		V_2 = L_5;
		uint16_t L_6 = V_2;
		int32_t L_7 = NativeStringView_get_Length_m84881AA1F4CFF41668115F4AC0D809FA4ED00060((NativeStringView_t7891AF2C8133156B59547F83542831AA9803CAC1 *)(&___temp1), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_006d;
		}
	}
	{
		NativeArray_1_tBE26874675F6C49D2857F878D75D41FF754C4AA0 * L_8 = __this->get_address_of_offset_1();
		int32_t L_9 = V_0;
		int32_t L_10 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((NativeArray_1_tBE26874675F6C49D2857F878D75D41FF754C4AA0 *)L_8)->___m_Buffer_0, L_9);
		V_3 = L_10;
		V_4 = 0;
		goto IL_005b;
	}

IL_003b:
	{
		int32_t L_11 = V_4;
		Il2CppChar L_12 = NativeStringView_get_Item_m43FAF817F38346A9AF3CFC2EF646E4EB54DFC147((NativeStringView_t7891AF2C8133156B59547F83542831AA9803CAC1 *)(&___temp1), L_11, /*hidden argument*/NULL);
		NativeArray_1_tF8F29F681A7F71C4B94C2720ED966BEFAAE88159 * L_13 = __this->get_address_of_buffer_0();
		int32_t L_14 = V_3;
		int32_t L_15 = V_4;
		uint16_t L_16 = IL2CPP_NATIVEARRAY_GET_ITEM(uint16_t, ((NativeArray_1_tF8F29F681A7F71C4B94C2720ED966BEFAAE88159 *)L_13)->___m_Buffer_0, ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)L_15)));
		if ((!(((uint32_t)L_12) == ((uint32_t)L_16))))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_17 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_18 = V_4;
		uint16_t L_19 = V_2;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_003b;
		}
	}

IL_0060:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = NativeStringView_get_Length_m84881AA1F4CFF41668115F4AC0D809FA4ED00060((NativeStringView_t7891AF2C8133156B59547F83542831AA9803CAC1 *)(&___temp1), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_22 = V_0;
		return L_22;
	}

IL_006d:
	{
		NativeMultiHashMap_2_t33D19E01B39832C09685E8A5179791EFFD82AFEF * L_23 = __this->get_address_of_hash_3();
		bool L_24 = NativeMultiHashMap_2_TryGetNextValue_m85C55FEC955DAD271D1FED0366875FA0FB28855B((NativeMultiHashMap_2_t33D19E01B39832C09685E8A5179791EFFD82AFEF *)L_23, (int32_t*)(&V_0), (NativeMultiHashMapIterator_1_tCA92178ECD8A70D308B9C81DBAD37A80453A7AF0 *)(&V_1), /*hidden argument*/NativeMultiHashMap_2_TryGetNextValue_m85C55FEC955DAD271D1FED0366875FA0FB28855B_RuntimeMethod_var);
		if (L_24)
		{
			goto IL_006d;
		}
	}
	{
		return (-1);
	}
}
// System.Int32 Unity.Entities.WordStorage::GetOrCreateIndex(Unity.Entities.NativeStringView)
extern "C" IL2CPP_METHOD_ATTR int32_t WordStorage_GetOrCreateIndex_m8F3A4F16709E0721C241C5C1DFC816B6100EF1ED (WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8 * __this, NativeStringView_t7891AF2C8133156B59547F83542831AA9803CAC1  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordStorage_GetOrCreateIndex_m8F3A4F16709E0721C241C5C1DFC816B6100EF1ED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = NativeStringView_GetHashCode_m2C2B6510D1293B608B5EDE1A8E9722472A949213((NativeStringView_t7891AF2C8133156B59547F83542831AA9803CAC1 *)(&___value0), /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		NativeStringView_t7891AF2C8133156B59547F83542831AA9803CAC1  L_2 = ___value0;
		int32_t L_3 = WordStorage_GetIndex_m47A63E719E7A37AE0CFC9A588E726CF59E1495BE(__this, L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_5 = V_1;
		return L_5;
	}

IL_001d:
	{
		int32_t L_6 = __this->get_chars_4();
		V_2 = L_6;
		int32_t L_7 = NativeStringView_get_Length_m84881AA1F4CFF41668115F4AC0D809FA4ED00060((NativeStringView_t7891AF2C8133156B59547F83542831AA9803CAC1 *)(&___value0), /*hidden argument*/NULL);
		V_3 = (uint16_t)(((int32_t)((uint16_t)L_7)));
		V_4 = 0;
		goto IL_0060;
	}

IL_0032:
	{
		NativeArray_1_tF8F29F681A7F71C4B94C2720ED966BEFAAE88159 * L_8 = __this->get_address_of_buffer_0();
		int32_t L_9 = __this->get_chars_4();
		V_5 = L_9;
		int32_t L_10 = V_5;
		__this->set_chars_4(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
		int32_t L_11 = V_5;
		int32_t L_12 = V_4;
		Il2CppChar L_13 = NativeStringView_get_Item_m43FAF817F38346A9AF3CFC2EF646E4EB54DFC147((NativeStringView_t7891AF2C8133156B59547F83542831AA9803CAC1 *)(&___value0), L_12, /*hidden argument*/NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(uint16_t, ((NativeArray_1_tF8F29F681A7F71C4B94C2720ED966BEFAAE88159 *)L_8)->___m_Buffer_0, L_11, L_13);
		int32_t L_14 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0060:
	{
		int32_t L_15 = V_4;
		uint16_t L_16 = V_3;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0032;
		}
	}
	{
		NativeArray_1_tBE26874675F6C49D2857F878D75D41FF754C4AA0 * L_17 = __this->get_address_of_offset_1();
		int32_t L_18 = __this->get_entries_5();
		int32_t L_19 = V_2;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((NativeArray_1_tBE26874675F6C49D2857F878D75D41FF754C4AA0 *)L_17)->___m_Buffer_0, L_18, L_19);
		NativeArray_1_tF8F29F681A7F71C4B94C2720ED966BEFAAE88159 * L_20 = __this->get_address_of_length_2();
		int32_t L_21 = __this->get_entries_5();
		uint16_t L_22 = V_3;
		IL2CPP_NATIVEARRAY_SET_ITEM(uint16_t, ((NativeArray_1_tF8F29F681A7F71C4B94C2720ED966BEFAAE88159 *)L_20)->___m_Buffer_0, L_21, L_22);
		NativeMultiHashMap_2_t33D19E01B39832C09685E8A5179791EFFD82AFEF * L_23 = __this->get_address_of_hash_3();
		int32_t L_24 = V_0;
		int32_t L_25 = __this->get_entries_5();
		NativeMultiHashMap_2_Add_m1C393F41C3B4B1A55950B0E25F357204DC5F3C41((NativeMultiHashMap_2_t33D19E01B39832C09685E8A5179791EFFD82AFEF *)L_23, L_24, L_25, /*hidden argument*/NativeMultiHashMap_2_Add_m1C393F41C3B4B1A55950B0E25F357204DC5F3C41_RuntimeMethod_var);
		int32_t L_26 = __this->get_entries_5();
		V_5 = L_26;
		int32_t L_27 = V_5;
		__this->set_entries_5(((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1)));
		int32_t L_28 = V_5;
		return L_28;
	}
}
// System.Void Unity.Entities.WordStorage::Dispose()
extern "C" IL2CPP_METHOD_ATTR void WordStorage_Dispose_mA8B46B333B32D0A48EC0A7CED41041ADC7593AF0 (WordStorage_t7BAFC4FB51910DA1B12E163B47D8DF1AFB9B05D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordStorage_Dispose_mA8B46B333B32D0A48EC0A7CED41041ADC7593AF0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NativeArray_1_tF8F29F681A7F71C4B94C2720ED966BEFAAE88159 * L_0 = __this->get_address_of_buffer_0();
		NativeArray_1_Dispose_m819E94EE5DC5AD0CF4B1F2372795EBB5441C1668((NativeArray_1_tF8F29F681A7F71C4B94C2720ED966BEFAAE88159 *)L_0, /*hidden argument*/NativeArray_1_Dispose_m819E94EE5DC5AD0CF4B1F2372795EBB5441C1668_RuntimeMethod_var);
		NativeArray_1_tBE26874675F6C49D2857F878D75D41FF754C4AA0 * L_1 = __this->get_address_of_offset_1();
		NativeArray_1_Dispose_mCCF1C8209E27BE62EBC0FAB288D1038BB7C4ED79((NativeArray_1_tBE26874675F6C49D2857F878D75D41FF754C4AA0 *)L_1, /*hidden argument*/NativeArray_1_Dispose_mCCF1C8209E27BE62EBC0FAB288D1038BB7C4ED79_RuntimeMethod_var);
		NativeArray_1_tF8F29F681A7F71C4B94C2720ED966BEFAAE88159 * L_2 = __this->get_address_of_length_2();
		NativeArray_1_Dispose_m819E94EE5DC5AD0CF4B1F2372795EBB5441C1668((NativeArray_1_tF8F29F681A7F71C4B94C2720ED966BEFAAE88159 *)L_2, /*hidden argument*/NativeArray_1_Dispose_m819E94EE5DC5AD0CF4B1F2372795EBB5441C1668_RuntimeMethod_var);
		NativeMultiHashMap_2_t33D19E01B39832C09685E8A5179791EFFD82AFEF * L_3 = __this->get_address_of_hash_3();
		NativeMultiHashMap_2_Dispose_mFAEBE7FCD7859A0CCAF73AF4E882F174ED642E14((NativeMultiHashMap_2_t33D19E01B39832C09685E8A5179791EFFD82AFEF *)L_3, /*hidden argument*/NativeMultiHashMap_2_Dispose_mFAEBE7FCD7859A0CCAF73AF4E882F174ED642E14_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Entities.World::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void World__ctor_m621977F24BBF6A3DDBDC35B06B4B271B6D161951 (World_tEEA075348FAEC96EE224554FCDED78254768804E * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (World__ctor_m621977F24BBF6A3DDBDC35B06B4B271B6D161951_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F * L_0 = (Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F *)il2cpp_codegen_object_new(Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m071D3F7038B9B2188F9794672F0C8F0C427B311A(L_0, /*hidden argument*/Dictionary_2__ctor_m071D3F7038B9B2188F9794672F0C8F0C427B311A_RuntimeMethod_var);
		__this->set_m_BehaviourManagerLookup_1(L_0);
		List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445 * L_1 = (List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445 *)il2cpp_codegen_object_new(List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445_il2cpp_TypeInfo_var);
		List_1__ctor_mB54295B514A703F333F69B23876C246729FAC133(L_1, /*hidden argument*/List_1__ctor_mB54295B514A703F333F69B23876C246729FAC133_RuntimeMethod_var);
		__this->set_m_BehaviourManagers_2(L_1);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		String_t* L_2 = ___name0;
		__this->set_U3CNameU3Ek__BackingField_4(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(World_tEEA075348FAEC96EE224554FCDED78254768804E_il2cpp_TypeInfo_var);
		List_1_t3E642DEC3ECCF74A4F3732168EAE534DC91673A6 * L_3 = ((World_tEEA075348FAEC96EE224554FCDED78254768804E_StaticFields*)il2cpp_codegen_static_fields_for(World_tEEA075348FAEC96EE224554FCDED78254768804E_il2cpp_TypeInfo_var))->get_allWorlds_0();
		NullCheck(L_3);
		List_1_Add_m3F64B689E744C90B786C5C1EC7F2FABA30CAA546(L_3, __this, /*hidden argument*/List_1_Add_m3F64B689E744C90B786C5C1EC7F2FABA30CAA546_RuntimeMethod_var);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<Unity.Entities.ScriptBehaviourManager> Unity.Entities.World::get_BehaviourManagers()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* World_get_BehaviourManagers_mF6D336C58F0D4F60A62BA0EF926ABB4252B84DD9 (World_tEEA075348FAEC96EE224554FCDED78254768804E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (World_get_BehaviourManagers_mF6D336C58F0D4F60A62BA0EF926ABB4252B84DD9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445 * L_0 = __this->get_m_BehaviourManagers_2();
		ReadOnlyCollection_1_t0C6843E8F3A6543EE548249D63096DBB0754BC24 * L_1 = (ReadOnlyCollection_1_t0C6843E8F3A6543EE548249D63096DBB0754BC24 *)il2cpp_codegen_object_new(ReadOnlyCollection_1_t0C6843E8F3A6543EE548249D63096DBB0754BC24_il2cpp_TypeInfo_var);
		ReadOnlyCollection_1__ctor_mEDCB4D392B1AF20310D9849D903234D2EBE1AE94(L_1, L_0, /*hidden argument*/ReadOnlyCollection_1__ctor_mEDCB4D392B1AF20310D9849D903234D2EBE1AE94_RuntimeMethod_var);
		return L_1;
	}
}
// System.String Unity.Entities.World::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* World_get_Name_m91ED4B4F5BDD5D46C406F917C0B07662946FC553 (World_tEEA075348FAEC96EE224554FCDED78254768804E * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_4();
		return L_0;
	}
}
// System.String Unity.Entities.World::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* World_ToString_m33273E3DCD588BC22752EDB873FB34DD57EB4907 (World_tEEA075348FAEC96EE224554FCDED78254768804E * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = World_get_Name_m91ED4B4F5BDD5D46C406F917C0B07662946FC553(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Unity.Entities.World::get_Version()
extern "C" IL2CPP_METHOD_ATTR int32_t World_get_Version_mE02F17593AD3305E2DC72D581E450B02223B1D43 (World_tEEA075348FAEC96EE224554FCDED78254768804E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CVersionU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Unity.Entities.World::set_Version(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void World_set_Version_mBDD09A2D3B320774EA48D33E44BADA6572B48EBF (World_tEEA075348FAEC96EE224554FCDED78254768804E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CVersionU3Ek__BackingField_5(L_0);
		return;
	}
}
// Unity.Entities.World Unity.Entities.World::get_Active()
extern "C" IL2CPP_METHOD_ATTR World_tEEA075348FAEC96EE224554FCDED78254768804E * World_get_Active_mD6EE6752C1E68C2E9E6C37D8908F1FBDDBA7C015 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (World_get_Active_mD6EE6752C1E68C2E9E6C37D8908F1FBDDBA7C015_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(World_tEEA075348FAEC96EE224554FCDED78254768804E_il2cpp_TypeInfo_var);
		World_tEEA075348FAEC96EE224554FCDED78254768804E * L_0 = ((World_tEEA075348FAEC96EE224554FCDED78254768804E_StaticFields*)il2cpp_codegen_static_fields_for(World_tEEA075348FAEC96EE224554FCDED78254768804E_il2cpp_TypeInfo_var))->get_U3CActiveU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Unity.Entities.World::set_Active(Unity.Entities.World)
extern "C" IL2CPP_METHOD_ATTR void World_set_Active_m873110896D26BC31ECAAE5CBEE490DF5073550B5 (World_tEEA075348FAEC96EE224554FCDED78254768804E * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (World_set_Active_m873110896D26BC31ECAAE5CBEE490DF5073550B5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		World_tEEA075348FAEC96EE224554FCDED78254768804E * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(World_tEEA075348FAEC96EE224554FCDED78254768804E_il2cpp_TypeInfo_var);
		((World_tEEA075348FAEC96EE224554FCDED78254768804E_StaticFields*)il2cpp_codegen_static_fields_for(World_tEEA075348FAEC96EE224554FCDED78254768804E_il2cpp_TypeInfo_var))->set_U3CActiveU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Boolean Unity.Entities.World::get_IsCreated()
extern "C" IL2CPP_METHOD_ATTR bool World_get_IsCreated_mC3A23BA504F169A06784EFD81205EA99B4C37405 (World_tEEA075348FAEC96EE224554FCDED78254768804E * __this, const RuntimeMethod* method)
{
	{
		List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445 * L_0 = __this->get_m_BehaviourManagers_2();
		return (bool)((!(((RuntimeObject*)(List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Void Unity.Entities.World::Dispose()
extern "C" IL2CPP_METHOD_ATTR void World_Dispose_mA2C5B7B71DFA1A2E41DF51C39FAF5C803DE35747 (World_tEEA075348FAEC96EE224554FCDED78254768804E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (World_Dispose_mA2C5B7B71DFA1A2E41DF51C39FAF5C803DE35747_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t11491103305F453BCC7D7A157BDF0BE57F72C1D1  V_0;
	memset(&V_0, 0, sizeof(V_0));
	ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * V_1 = NULL;
	ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		bool L_0 = World_get_IsCreated_mC3A23BA504F169A06784EFD81205EA99B4C37405(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_1 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_1, _stringLiteralA3BB78DA990BFC1E258B6CEAA3FE47652DAEC5F0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, World_Dispose_mA2C5B7B71DFA1A2E41DF51C39FAF5C803DE35747_RuntimeMethod_var);
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(World_tEEA075348FAEC96EE224554FCDED78254768804E_il2cpp_TypeInfo_var);
		List_1_t3E642DEC3ECCF74A4F3732168EAE534DC91673A6 * L_2 = ((World_tEEA075348FAEC96EE224554FCDED78254768804E_StaticFields*)il2cpp_codegen_static_fields_for(World_tEEA075348FAEC96EE224554FCDED78254768804E_il2cpp_TypeInfo_var))->get_allWorlds_0();
		NullCheck(L_2);
		bool L_3 = List_1_Contains_mFC2525018DE71698EA64EFDC349061660A605F12(L_2, __this, /*hidden argument*/List_1_Contains_mFC2525018DE71698EA64EFDC349061660A605F12_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(World_tEEA075348FAEC96EE224554FCDED78254768804E_il2cpp_TypeInfo_var);
		List_1_t3E642DEC3ECCF74A4F3732168EAE534DC91673A6 * L_4 = ((World_tEEA075348FAEC96EE224554FCDED78254768804E_StaticFields*)il2cpp_codegen_static_fields_for(World_tEEA075348FAEC96EE224554FCDED78254768804E_il2cpp_TypeInfo_var))->get_allWorlds_0();
		NullCheck(L_4);
		List_1_Remove_m62435CE6445EE0871D8F90D16BCEBD8C34B05FE2(L_4, __this, /*hidden argument*/List_1_Remove_m62435CE6445EE0871D8F90D16BCEBD8C34B05FE2_RuntimeMethod_var);
	}

IL_002c:
	{
		List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445 * L_5 = __this->get_m_BehaviourManagers_2();
		NullCheck(L_5);
		List_1_Reverse_mB4FB155F759478BA09CBC5C4C5F7CB87E2D18AB2(L_5, /*hidden argument*/List_1_Reverse_mB4FB155F759478BA09CBC5C4C5F7CB87E2D18AB2_RuntimeMethod_var);
		List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445 * L_6 = __this->get_m_BehaviourManagers_2();
		NullCheck(L_6);
		Enumerator_t11491103305F453BCC7D7A157BDF0BE57F72C1D1  L_7 = List_1_GetEnumerator_m248A80D434ED29E7991EFA070A9BE4464EC69EC6(L_6, /*hidden argument*/List_1_GetEnumerator_m248A80D434ED29E7991EFA070A9BE4464EC69EC6_RuntimeMethod_var);
		V_0 = L_7;
	}

IL_0043:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0070;
		}

IL_0045:
		{
			ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * L_8 = Enumerator_get_Current_mA2EEFBF09A4B54FF63BC147C96912EBF1A998602((Enumerator_t11491103305F453BCC7D7A157BDF0BE57F72C1D1 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mA2EEFBF09A4B54FF63BC147C96912EBF1A998602_RuntimeMethod_var);
			V_1 = L_8;
			ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * L_9 = V_1;
			if (!((EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14 *)IsInstSealed((RuntimeObject*)L_9, EntityManager_tD03BBAE8A03BE6E803E142278B44DADB1F999C14_il2cpp_TypeInfo_var)))
			{
				goto IL_0070;
			}
		}

IL_0055:
		{
			List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445 * L_10 = __this->get_m_BehaviourManagers_2();
			ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * L_11 = V_1;
			NullCheck(L_10);
			List_1_Remove_mFC18813B2D16AB14264B75DC42B8991FA887E4E6(L_10, L_11, /*hidden argument*/List_1_Remove_mFC18813B2D16AB14264B75DC42B8991FA887E4E6_RuntimeMethod_var);
			List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445 * L_12 = __this->get_m_BehaviourManagers_2();
			ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * L_13 = V_1;
			NullCheck(L_12);
			List_1_Add_m34E261986E4856CE9C75B1B068CB821C96ECD65D(L_12, L_13, /*hidden argument*/List_1_Add_m34E261986E4856CE9C75B1B068CB821C96ECD65D_RuntimeMethod_var);
			IL2CPP_LEAVE(0x89, FINALLY_007b);
		}

IL_0070:
		{
			bool L_14 = Enumerator_MoveNext_m0A05D71C08663EE1F2698B30DC67DA0C4148E7C0((Enumerator_t11491103305F453BCC7D7A157BDF0BE57F72C1D1 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m0A05D71C08663EE1F2698B30DC67DA0C4148E7C0_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_0045;
			}
		}

IL_0079:
		{
			IL2CPP_LEAVE(0x89, FINALLY_007b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007b;
	}

FINALLY_007b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mFF68BE2E0FDCB432AF38A796BAF2F6CDD4377E0D((Enumerator_t11491103305F453BCC7D7A157BDF0BE57F72C1D1 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mFF68BE2E0FDCB432AF38A796BAF2F6CDD4377E0D_RuntimeMethod_var);
		IL2CPP_END_FINALLY(123)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(123)
	{
		IL2CPP_JUMP_TBL(0x89, IL_0089)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0089:
	{
		List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445 * L_15 = __this->get_m_BehaviourManagers_2();
		NullCheck(L_15);
		Enumerator_t11491103305F453BCC7D7A157BDF0BE57F72C1D1  L_16 = List_1_GetEnumerator_m248A80D434ED29E7991EFA070A9BE4464EC69EC6(L_15, /*hidden argument*/List_1_GetEnumerator_m248A80D434ED29E7991EFA070A9BE4464EC69EC6_RuntimeMethod_var);
		V_0 = L_16;
	}

IL_0095:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00ae;
		}

IL_0097:
		{
			ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * L_17 = Enumerator_get_Current_mA2EEFBF09A4B54FF63BC147C96912EBF1A998602((Enumerator_t11491103305F453BCC7D7A157BDF0BE57F72C1D1 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mA2EEFBF09A4B54FF63BC147C96912EBF1A998602_RuntimeMethod_var);
			V_2 = L_17;
		}

IL_009f:
		try
		{ // begin try (depth: 2)
			ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * L_18 = V_2;
			NullCheck(L_18);
			ScriptBehaviourManager_DestroyInstance_m47C0E2D53A7B0D4444361356CE0B31F45483D80A(L_18, /*hidden argument*/NULL);
			goto IL_00ae;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_00a7;
			throw e;
		}

CATCH_00a7:
		{ // begin catch(System.Exception)
			Debug_LogException_mC053F054ED74DD39A469D42D1EBADC908F0F0B63(((Exception_t *)__exception_local), /*hidden argument*/NULL);
			goto IL_00ae;
		} // end catch (depth: 2)

IL_00ae:
		{
			bool L_19 = Enumerator_MoveNext_m0A05D71C08663EE1F2698B30DC67DA0C4148E7C0((Enumerator_t11491103305F453BCC7D7A157BDF0BE57F72C1D1 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m0A05D71C08663EE1F2698B30DC67DA0C4148E7C0_RuntimeMethod_var);
			if (L_19)
			{
				goto IL_0097;
			}
		}

IL_00b7:
		{
			IL2CPP_LEAVE(0xC7, FINALLY_00b9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b9;
	}

FINALLY_00b9:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mFF68BE2E0FDCB432AF38A796BAF2F6CDD4377E0D((Enumerator_t11491103305F453BCC7D7A157BDF0BE57F72C1D1 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mFF68BE2E0FDCB432AF38A796BAF2F6CDD4377E0D_RuntimeMethod_var);
		IL2CPP_END_FINALLY(185)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(185)
	{
		IL2CPP_JUMP_TBL(0xC7, IL_00c7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00c7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(World_tEEA075348FAEC96EE224554FCDED78254768804E_il2cpp_TypeInfo_var);
		World_tEEA075348FAEC96EE224554FCDED78254768804E * L_20 = World_get_Active_mD6EE6752C1E68C2E9E6C37D8908F1FBDDBA7C015(/*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(World_tEEA075348FAEC96EE224554FCDED78254768804E *)L_20) == ((RuntimeObject*)(World_tEEA075348FAEC96EE224554FCDED78254768804E *)__this))))
		{
			goto IL_00d5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(World_tEEA075348FAEC96EE224554FCDED78254768804E_il2cpp_TypeInfo_var);
		World_set_Active_m873110896D26BC31ECAAE5CBEE490DF5073550B5((World_tEEA075348FAEC96EE224554FCDED78254768804E *)NULL, /*hidden argument*/NULL);
	}

IL_00d5:
	{
		List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445 * L_21 = __this->get_m_BehaviourManagers_2();
		NullCheck(L_21);
		List_1_Clear_m1E904408485AF0B6DC2B53063E8E730B9F0900E3(L_21, /*hidden argument*/List_1_Clear_m1E904408485AF0B6DC2B53063E8E730B9F0900E3_RuntimeMethod_var);
		Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F * L_22 = __this->get_m_BehaviourManagerLookup_1();
		NullCheck(L_22);
		Dictionary_2_Clear_m882A88B78C063A08131E2C1705E2C2E9AA1EDCC1(L_22, /*hidden argument*/Dictionary_2_Clear_m882A88B78C063A08131E2C1705E2C2E9AA1EDCC1_RuntimeMethod_var);
		__this->set_m_BehaviourManagers_2((List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445 *)NULL);
		__this->set_m_BehaviourManagerLookup_1((Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F *)NULL);
		return;
	}
}
// System.Void Unity.Entities.World::DisposeAllWorlds()
extern "C" IL2CPP_METHOD_ATTR void World_DisposeAllWorlds_m6DE989565292CCF51CEC24EB971ECA832F561A04 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (World_DisposeAllWorlds_m6DE989565292CCF51CEC24EB971ECA832F561A04_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0012;
	}

IL_0002:
	{
		IL2CPP_RUNTIME_CLASS_INIT(World_tEEA075348FAEC96EE224554FCDED78254768804E_il2cpp_TypeInfo_var);
		List_1_t3E642DEC3ECCF74A4F3732168EAE534DC91673A6 * L_0 = ((World_tEEA075348FAEC96EE224554FCDED78254768804E_StaticFields*)il2cpp_codegen_static_fields_for(World_tEEA075348FAEC96EE224554FCDED78254768804E_il2cpp_TypeInfo_var))->get_allWorlds_0();
		NullCheck(L_0);
		World_tEEA075348FAEC96EE224554FCDED78254768804E * L_1 = List_1_get_Item_mA068FE543869F436B504A9D52F026B5E702BC166(L_0, 0, /*hidden argument*/List_1_get_Item_mA068FE543869F436B504A9D52F026B5E702BC166_RuntimeMethod_var);
		NullCheck(L_1);
		World_Dispose_mA2C5B7B71DFA1A2E41DF51C39FAF5C803DE35747(L_1, /*hidden argument*/NULL);
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(World_tEEA075348FAEC96EE224554FCDED78254768804E_il2cpp_TypeInfo_var);
		List_1_t3E642DEC3ECCF74A4F3732168EAE534DC91673A6 * L_2 = ((World_tEEA075348FAEC96EE224554FCDED78254768804E_StaticFields*)il2cpp_codegen_static_fields_for(World_tEEA075348FAEC96EE224554FCDED78254768804E_il2cpp_TypeInfo_var))->get_allWorlds_0();
		NullCheck(L_2);
		int32_t L_3 = List_1_get_Count_mA769BA2B9D93E1409037895D02BDB1AE297680CD(L_2, /*hidden argument*/List_1_get_Count_mA769BA2B9D93E1409037895D02BDB1AE297680CD_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
// Unity.Entities.ScriptBehaviourManager Unity.Entities.World::CreateManagerInternal(System.Type,System.Object[])
extern "C" IL2CPP_METHOD_ATTR ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * World_CreateManagerInternal_m395F28BFE883C4B8B404B884A479B9853BB2B646 (World_tEEA075348FAEC96EE224554FCDED78254768804E * __this, Type_t * ___type0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___constructorArguments1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (World_CreateManagerInternal_m395F28BFE883C4B8B404B884A479B9853BB2B646_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		Type_t * L_0 = ___type0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ___constructorArguments1;
		RuntimeObject * L_2 = Activator_CreateInstance_mEE50708E1E8AAD4E5021A2FFDB992DDF65727E17(L_0, L_1, /*hidden argument*/NULL);
		V_0 = ((ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C *)IsInstClass((RuntimeObject*)L_2, ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C_il2cpp_TypeInfo_var));
		goto IL_002c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (MissingMethodException_t7D33DFD3009E4F19BE4DD0967F04D3878F348498_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_000f;
		throw e;
	}

CATCH_000f:
	{ // begin catch(System.MissingMethodException)
		Type_t * L_3 = ___type0;
		String_t* L_4 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralD556FC831C7B6FFB6D61F0D284608C9EBA2A8577, L_3, /*hidden argument*/NULL);
		String_t* L_5 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_4, _stringLiteral2DDC6DC0D59BE69AB70326B740C316A9F95CDD44, /*hidden argument*/NULL);
		Debug_LogError_mF0A2FA52B5E8B726CF5FE7791266F9FEE9C75EBF(L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, NULL, World_CreateManagerInternal_m395F28BFE883C4B8B404B884A479B9853BB2B646_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_002c:
	{
		ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * L_6 = V_0;
		ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * L_7 = World_AddManager_TisScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C_m925B06F6F8A48EDD137619AB9800B7FA645921EC(__this, L_6, /*hidden argument*/World_AddManager_TisScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C_m925B06F6F8A48EDD137619AB9800B7FA645921EC_RuntimeMethod_var);
		return L_7;
	}
}
// Unity.Entities.ScriptBehaviourManager Unity.Entities.World::GetExistingManagerInternal(System.Type)
extern "C" IL2CPP_METHOD_ATTR ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * World_GetExistingManagerInternal_m6B294BC2B80CE2DC0D15BB459E18AF1B1BD55227 (World_tEEA075348FAEC96EE224554FCDED78254768804E * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (World_GetExistingManagerInternal_m6B294BC2B80CE2DC0D15BB459E18AF1B1BD55227_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * V_0 = NULL;
	{
		Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F * L_0 = __this->get_m_BehaviourManagerLookup_1();
		Type_t * L_1 = ___type0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_TryGetValue_m0EC757AD9801FEFAB28A0C5F3B5FF304D4FD30D9(L_0, L_1, (ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m0EC757AD9801FEFAB28A0C5F3B5FF304D4FD30D9_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * L_3 = V_0;
		return L_3;
	}

IL_0012:
	{
		return (ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C *)NULL;
	}
}
// Unity.Entities.ScriptBehaviourManager Unity.Entities.World::GetOrCreateManagerInternal(System.Type)
extern "C" IL2CPP_METHOD_ATTR ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * World_GetOrCreateManagerInternal_mC7AC2975724DAF65A96EA0134B93446A8C7F3D9B (World_tEEA075348FAEC96EE224554FCDED78254768804E * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * G_B2_0 = NULL;
	ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * G_B1_0 = NULL;
	{
		Type_t * L_0 = ___type0;
		ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * L_1 = World_GetExistingManagerInternal_m6B294BC2B80CE2DC0D15BB459E18AF1B1BD55227(__this, L_0, /*hidden argument*/NULL);
		ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0013;
		}
	}
	{
		Type_t * L_3 = ___type0;
		ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * L_4 = World_CreateManagerInternal_m395F28BFE883C4B8B404B884A479B9853BB2B646(__this, L_3, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL, /*hidden argument*/NULL);
		G_B2_0 = L_4;
	}

IL_0013:
	{
		return G_B2_0;
	}
}
// System.Void Unity.Entities.World::AddTypeLookup(System.Type,Unity.Entities.ScriptBehaviourManager)
extern "C" IL2CPP_METHOD_ATTR void World_AddTypeLookup_m364FE5B38C207CA38E2B45B4AD6565FE1D9E5707 (World_tEEA075348FAEC96EE224554FCDED78254768804E * __this, Type_t * ___type0, ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * ___manager1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (World_AddTypeLookup_m364FE5B38C207CA38E2B45B4AD6565FE1D9E5707_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0025;
	}

IL_0002:
	{
		Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F * L_0 = __this->get_m_BehaviourManagerLookup_1();
		Type_t * L_1 = ___type0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m1FAEB7A45EEC00A90537A9C7C8FEF93F33749FB9(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m1FAEB7A45EEC00A90537A9C7C8FEF93F33749FB9_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F * L_3 = __this->get_m_BehaviourManagerLookup_1();
		Type_t * L_4 = ___type0;
		ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * L_5 = ___manager1;
		NullCheck(L_3);
		Dictionary_2_Add_mBB9F1BDE9B7FD3E71E0DBD4B886F323AEC334656(L_3, L_4, L_5, /*hidden argument*/Dictionary_2_Add_mBB9F1BDE9B7FD3E71E0DBD4B886F323AEC334656_RuntimeMethod_var);
	}

IL_001d:
	{
		Type_t * L_6 = ___type0;
		NullCheck(L_6);
		Type_t * L_7 = VirtFuncInvoker0< Type_t * >::Invoke(29 /* System.Type System.Type::get_BaseType() */, L_6);
		___type0 = L_7;
	}

IL_0025:
	{
		Type_t * L_8 = ___type0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_9 = { reinterpret_cast<intptr_t> (ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_9, /*hidden argument*/NULL);
		bool L_11 = Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9(L_8, L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Entities.World::RemoveManagerInternal(Unity.Entities.ScriptBehaviourManager)
extern "C" IL2CPP_METHOD_ATTR void World_RemoveManagerInternal_m22A3DCB4AFAFD6889B84E3B24C49764E5712146D (World_tEEA075348FAEC96EE224554FCDED78254768804E * __this, ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * ___manager0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (World_RemoveManagerInternal_m22A3DCB4AFAFD6889B84E3B24C49764E5712146D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	int32_t V_1 = 0;
	Enumerator_t11491103305F453BCC7D7A157BDF0BE57F72C1D1  V_2;
	memset(&V_2, 0, sizeof(V_2));
	ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445 * L_0 = __this->get_m_BehaviourManagers_2();
		ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * L_1 = ___manager0;
		NullCheck(L_0);
		bool L_2 = List_1_Remove_mFC18813B2D16AB14264B75DC42B8991FA887E4E6(L_0, L_1, /*hidden argument*/List_1_Remove_mFC18813B2D16AB14264B75DC42B8991FA887E4E6_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_3 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_3, _stringLiteral43877617DD1745CCC76963FF4DC374E875370F30, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, World_RemoveManagerInternal_m22A3DCB4AFAFD6889B84E3B24C49764E5712146D_RuntimeMethod_var);
	}

IL_0019:
	{
		int32_t L_4 = World_get_Version_mE02F17593AD3305E2DC72D581E450B02223B1D43(__this, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		int32_t L_5 = V_1;
		World_set_Version_mBDD09A2D3B320774EA48D33E44BADA6572B48EBF(__this, L_5, /*hidden argument*/NULL);
		ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * L_6 = ___manager0;
		NullCheck(L_6);
		Type_t * L_7 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_009f;
	}

IL_0032:
	{
		Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F * L_8 = __this->get_m_BehaviourManagerLookup_1();
		Type_t * L_9 = V_0;
		NullCheck(L_8);
		ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * L_10 = Dictionary_2_get_Item_m9C25BCD2D5B74852C2EF1821CFD26909DCC17620(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_m9C25BCD2D5B74852C2EF1821CFD26909DCC17620_RuntimeMethod_var);
		ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * L_11 = ___manager0;
		if ((!(((RuntimeObject*)(ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C *)L_10) == ((RuntimeObject*)(ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C *)L_11))))
		{
			goto IL_0098;
		}
	}
	{
		Dictionary_2_tF9088202AA66410F2FE1EE7EC2A7C1CBAC3B7E8F * L_12 = __this->get_m_BehaviourManagerLookup_1();
		Type_t * L_13 = V_0;
		NullCheck(L_12);
		Dictionary_2_Remove_m14FAA4E1C93D87C935BCC973FE7D1A4DF50B5C61(L_12, L_13, /*hidden argument*/Dictionary_2_Remove_m14FAA4E1C93D87C935BCC973FE7D1A4DF50B5C61_RuntimeMethod_var);
		List_1_tBEFC7E81B140E222889DE4FC745DE7F0C31AD445 * L_14 = __this->get_m_BehaviourManagers_2();
		NullCheck(L_14);
		Enumerator_t11491103305F453BCC7D7A157BDF0BE57F72C1D1  L_15 = List_1_GetEnumerator_m248A80D434ED29E7991EFA070A9BE4464EC69EC6(L_14, /*hidden argument*/List_1_GetEnumerator_m248A80D434ED29E7991EFA070A9BE4464EC69EC6_RuntimeMethod_var);
		V_2 = L_15;
	}

IL_005a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007f;
		}

IL_005c:
		{
			ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * L_16 = Enumerator_get_Current_mA2EEFBF09A4B54FF63BC147C96912EBF1A998602((Enumerator_t11491103305F453BCC7D7A157BDF0BE57F72C1D1 *)(&V_2), /*hidden argument*/Enumerator_get_Current_mA2EEFBF09A4B54FF63BC147C96912EBF1A998602_RuntimeMethod_var);
			V_3 = L_16;
			ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * L_17 = V_3;
			NullCheck(L_17);
			Type_t * L_18 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_17, /*hidden argument*/NULL);
			Type_t * L_19 = V_0;
			NullCheck(L_18);
			bool L_20 = VirtFuncInvoker1< bool, Type_t * >::Invoke(109 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, L_18, L_19);
			if (!L_20)
			{
				goto IL_007f;
			}
		}

IL_0072:
		{
			ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * L_21 = V_3;
			NullCheck(L_21);
			Type_t * L_22 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_21, /*hidden argument*/NULL);
			ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * L_23 = V_3;
			World_AddTypeLookup_m364FE5B38C207CA38E2B45B4AD6565FE1D9E5707(__this, L_22, L_23, /*hidden argument*/NULL);
		}

IL_007f:
		{
			bool L_24 = Enumerator_MoveNext_m0A05D71C08663EE1F2698B30DC67DA0C4148E7C0((Enumerator_t11491103305F453BCC7D7A157BDF0BE57F72C1D1 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m0A05D71C08663EE1F2698B30DC67DA0C4148E7C0_RuntimeMethod_var);
			if (L_24)
			{
				goto IL_005c;
			}
		}

IL_0088:
		{
			IL2CPP_LEAVE(0x98, FINALLY_008a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008a;
	}

FINALLY_008a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mFF68BE2E0FDCB432AF38A796BAF2F6CDD4377E0D((Enumerator_t11491103305F453BCC7D7A157BDF0BE57F72C1D1 *)(&V_2), /*hidden argument*/Enumerator_Dispose_mFF68BE2E0FDCB432AF38A796BAF2F6CDD4377E0D_RuntimeMethod_var);
		IL2CPP_END_FINALLY(138)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(138)
	{
		IL2CPP_JUMP_TBL(0x98, IL_0098)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0098:
	{
		Type_t * L_25 = V_0;
		NullCheck(L_25);
		Type_t * L_26 = VirtFuncInvoker0< Type_t * >::Invoke(29 /* System.Type System.Type::get_BaseType() */, L_25);
		V_0 = L_26;
	}

IL_009f:
	{
		Type_t * L_27 = V_0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_28 = { reinterpret_cast<intptr_t> (ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_29 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_28, /*hidden argument*/NULL);
		bool L_30 = Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9(L_27, L_29, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0032;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Entities.World::CheckGetOrCreateManager()
extern "C" IL2CPP_METHOD_ATTR void World_CheckGetOrCreateManager_m0CF300DC6C44AA0AB3D0E7571AB563DF17F37324 (World_tEEA075348FAEC96EE224554FCDED78254768804E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// Unity.Entities.ScriptBehaviourManager Unity.Entities.World::GetOrCreateManager(System.Type)
extern "C" IL2CPP_METHOD_ATTR ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * World_GetOrCreateManager_mA56C0BCE44CE4595EE9BA096948D442F79D04614 (World_tEEA075348FAEC96EE224554FCDED78254768804E * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	{
		World_CheckGetOrCreateManager_m0CF300DC6C44AA0AB3D0E7571AB563DF17F37324(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___type0;
		ScriptBehaviourManager_t8C34EC740B994E1FCFEDBBBA447299C12B2C286C * L_1 = World_GetOrCreateManagerInternal_mC7AC2975724DAF65A96EA0134B93446A8C7F3D9B(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Unity.Entities.World::.cctor()
extern "C" IL2CPP_METHOD_ATTR void World__cctor_mC687693BC0B680B528E2423DE100A3C24D3660A1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (World__cctor_mC687693BC0B680B528E2423DE100A3C24D3660A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3E642DEC3ECCF74A4F3732168EAE534DC91673A6 * L_0 = (List_1_t3E642DEC3ECCF74A4F3732168EAE534DC91673A6 *)il2cpp_codegen_object_new(List_1_t3E642DEC3ECCF74A4F3732168EAE534DC91673A6_il2cpp_TypeInfo_var);
		List_1__ctor_m016B7AD9226F608728F97AAAFF357B2226301B40(L_0, /*hidden argument*/List_1__ctor_m016B7AD9226F608728F97AAAFF357B2226301B40_RuntimeMethod_var);
		((World_tEEA075348FAEC96EE224554FCDED78254768804E_StaticFields*)il2cpp_codegen_static_fields_for(World_tEEA075348FAEC96EE224554FCDED78254768804E_il2cpp_TypeInfo_var))->set_allWorlds_0(L_0);
		((World_tEEA075348FAEC96EE224554FCDED78254768804E_StaticFields*)il2cpp_codegen_static_fields_for(World_tEEA075348FAEC96EE224554FCDED78254768804E_il2cpp_TypeInfo_var))->set_ms_SystemIDAllocator_3(0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
