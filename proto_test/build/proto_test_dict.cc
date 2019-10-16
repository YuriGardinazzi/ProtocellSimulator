// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIyuridIDocumentsdIProtocellSimulatordIproto_testdIbuilddIproto_test_dict
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// The generated code does not explicitly qualifies STL entities
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "/home/yuri/Documents/ProtocellSimulator/proto_test/src/proto_test.h"

// Header files passed via #pragma extra_include

namespace bdm {
   namespace detail {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *bdmcLcLdetail_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("bdm::detail", 0 /*version*/, "core/util/string.h", 23,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &bdmcLcLdetail_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *bdmcLcLdetail_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace ROOT {
   static TClass *bdmcLcLLog_Dictionary();
   static void bdmcLcLLog_TClassManip(TClass*);
   static void *new_bdmcLcLLog(void *p = 0);
   static void *newArray_bdmcLcLLog(Long_t size, void *p);
   static void delete_bdmcLcLLog(void *p);
   static void deleteArray_bdmcLcLLog(void *p);
   static void destruct_bdmcLcLLog(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::Log*)
   {
      ::bdm::Log *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::Log));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::Log", "core/util/log.h", 30,
                  typeid(::bdm::Log), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLLog_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::Log) );
      instance.SetNew(&new_bdmcLcLLog);
      instance.SetNewArray(&newArray_bdmcLcLLog);
      instance.SetDelete(&delete_bdmcLcLLog);
      instance.SetDeleteArray(&deleteArray_bdmcLcLLog);
      instance.SetDestructor(&destruct_bdmcLcLLog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::Log*)
   {
      return GenerateInitInstanceLocal((::bdm::Log*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::Log*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLLog_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::Log*)0x0)->GetClass();
      bdmcLcLLog_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLLog_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLUniqueEventIdFactory_Dictionary();
   static void bdmcLcLUniqueEventIdFactory_TClassManip(TClass*);
   static void delete_bdmcLcLUniqueEventIdFactory(void *p);
   static void deleteArray_bdmcLcLUniqueEventIdFactory(void *p);
   static void destruct_bdmcLcLUniqueEventIdFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::UniqueEventIdFactory*)
   {
      ::bdm::UniqueEventIdFactory *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::UniqueEventIdFactory));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::UniqueEventIdFactory", "core/event/event.h", 41,
                  typeid(::bdm::UniqueEventIdFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLUniqueEventIdFactory_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::UniqueEventIdFactory) );
      instance.SetDelete(&delete_bdmcLcLUniqueEventIdFactory);
      instance.SetDeleteArray(&deleteArray_bdmcLcLUniqueEventIdFactory);
      instance.SetDestructor(&destruct_bdmcLcLUniqueEventIdFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::UniqueEventIdFactory*)
   {
      return GenerateInitInstanceLocal((::bdm::UniqueEventIdFactory*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::UniqueEventIdFactory*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLUniqueEventIdFactory_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::UniqueEventIdFactory*)0x0)->GetClass();
      bdmcLcLUniqueEventIdFactory_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLUniqueEventIdFactory_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLEvent_Dictionary();
   static void bdmcLcLEvent_TClassManip(TClass*);
   static void delete_bdmcLcLEvent(void *p);
   static void deleteArray_bdmcLcLEvent(void *p);
   static void destruct_bdmcLcLEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::Event*)
   {
      ::bdm::Event *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::Event));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::Event", "core/event/event.h", 67,
                  typeid(::bdm::Event), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLEvent_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::Event) );
      instance.SetDelete(&delete_bdmcLcLEvent);
      instance.SetDeleteArray(&deleteArray_bdmcLcLEvent);
      instance.SetDestructor(&destruct_bdmcLcLEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::Event*)
   {
      return GenerateInitInstanceLocal((::bdm::Event*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::Event*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLEvent_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::Event*)0x0)->GetClass();
      bdmcLcLEvent_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLEvent_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLSoUidGenerator_Dictionary();
   static void bdmcLcLSoUidGenerator_TClassManip(TClass*);
   static void delete_bdmcLcLSoUidGenerator(void *p);
   static void deleteArray_bdmcLcLSoUidGenerator(void *p);
   static void destruct_bdmcLcLSoUidGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::SoUidGenerator*)
   {
      ::bdm::SoUidGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::SoUidGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::SoUidGenerator", "core/sim_object/so_uid.h", 28,
                  typeid(::bdm::SoUidGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLSoUidGenerator_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::SoUidGenerator) );
      instance.SetDelete(&delete_bdmcLcLSoUidGenerator);
      instance.SetDeleteArray(&deleteArray_bdmcLcLSoUidGenerator);
      instance.SetDestructor(&destruct_bdmcLcLSoUidGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::SoUidGenerator*)
   {
      return GenerateInitInstanceLocal((::bdm::SoUidGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::SoUidGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLSoUidGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::SoUidGenerator*)0x0)->GetClass();
      bdmcLcLSoUidGenerator_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLSoUidGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLThreadInfo_Dictionary();
   static void bdmcLcLThreadInfo_TClassManip(TClass*);
   static void delete_bdmcLcLThreadInfo(void *p);
   static void deleteArray_bdmcLcLThreadInfo(void *p);
   static void destruct_bdmcLcLThreadInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::ThreadInfo*)
   {
      ::bdm::ThreadInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::ThreadInfo));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::ThreadInfo", "core/util/thread_info.h", 30,
                  typeid(::bdm::ThreadInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLThreadInfo_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::ThreadInfo) );
      instance.SetDelete(&delete_bdmcLcLThreadInfo);
      instance.SetDeleteArray(&deleteArray_bdmcLcLThreadInfo);
      instance.SetDestructor(&destruct_bdmcLcLThreadInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::ThreadInfo*)
   {
      return GenerateInitInstanceLocal((::bdm::ThreadInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::ThreadInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLThreadInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::ThreadInfo*)0x0)->GetClass();
      bdmcLcLThreadInfo_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLThreadInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLInPlaceExecutionContext_Dictionary();
   static void bdmcLcLInPlaceExecutionContext_TClassManip(TClass*);
   static void *new_bdmcLcLInPlaceExecutionContext(void *p = 0);
   static void *newArray_bdmcLcLInPlaceExecutionContext(Long_t size, void *p);
   static void delete_bdmcLcLInPlaceExecutionContext(void *p);
   static void deleteArray_bdmcLcLInPlaceExecutionContext(void *p);
   static void destruct_bdmcLcLInPlaceExecutionContext(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::InPlaceExecutionContext*)
   {
      ::bdm::InPlaceExecutionContext *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::InPlaceExecutionContext));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::InPlaceExecutionContext", "core/execution_context/in_place_exec_ctxt.h", 46,
                  typeid(::bdm::InPlaceExecutionContext), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLInPlaceExecutionContext_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::InPlaceExecutionContext) );
      instance.SetNew(&new_bdmcLcLInPlaceExecutionContext);
      instance.SetNewArray(&newArray_bdmcLcLInPlaceExecutionContext);
      instance.SetDelete(&delete_bdmcLcLInPlaceExecutionContext);
      instance.SetDeleteArray(&deleteArray_bdmcLcLInPlaceExecutionContext);
      instance.SetDestructor(&destruct_bdmcLcLInPlaceExecutionContext);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::InPlaceExecutionContext*)
   {
      return GenerateInitInstanceLocal((::bdm::InPlaceExecutionContext*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::InPlaceExecutionContext*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLInPlaceExecutionContext_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::InPlaceExecutionContext*)0x0)->GetClass();
      bdmcLcLInPlaceExecutionContext_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLInPlaceExecutionContext_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLis_so_ptrlEunsignedsPlonggR_Dictionary();
   static void bdmcLcLis_so_ptrlEunsignedsPlonggR_TClassManip(TClass*);
   static void *new_bdmcLcLis_so_ptrlEunsignedsPlonggR(void *p = 0);
   static void *newArray_bdmcLcLis_so_ptrlEunsignedsPlonggR(Long_t size, void *p);
   static void delete_bdmcLcLis_so_ptrlEunsignedsPlonggR(void *p);
   static void deleteArray_bdmcLcLis_so_ptrlEunsignedsPlonggR(void *p);
   static void destruct_bdmcLcLis_so_ptrlEunsignedsPlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::is_so_ptr<unsigned long>*)
   {
      ::bdm::is_so_ptr<unsigned long> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::is_so_ptr<unsigned long>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::is_so_ptr<unsigned long>", "core/sim_object/so_pointer.h", 115,
                  typeid(::bdm::is_so_ptr<unsigned long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLis_so_ptrlEunsignedsPlonggR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::is_so_ptr<unsigned long>) );
      instance.SetNew(&new_bdmcLcLis_so_ptrlEunsignedsPlonggR);
      instance.SetNewArray(&newArray_bdmcLcLis_so_ptrlEunsignedsPlonggR);
      instance.SetDelete(&delete_bdmcLcLis_so_ptrlEunsignedsPlonggR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLis_so_ptrlEunsignedsPlonggR);
      instance.SetDestructor(&destruct_bdmcLcLis_so_ptrlEunsignedsPlonggR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::is_so_ptr<unsigned long>*)
   {
      return GenerateInitInstanceLocal((::bdm::is_so_ptr<unsigned long>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::is_so_ptr<unsigned long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLis_so_ptrlEunsignedsPlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::is_so_ptr<unsigned long>*)0x0)->GetClass();
      bdmcLcLis_so_ptrlEunsignedsPlonggR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLis_so_ptrlEunsignedsPlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLis_so_ptrlEunsignedsPintgR_Dictionary();
   static void bdmcLcLis_so_ptrlEunsignedsPintgR_TClassManip(TClass*);
   static void *new_bdmcLcLis_so_ptrlEunsignedsPintgR(void *p = 0);
   static void *newArray_bdmcLcLis_so_ptrlEunsignedsPintgR(Long_t size, void *p);
   static void delete_bdmcLcLis_so_ptrlEunsignedsPintgR(void *p);
   static void deleteArray_bdmcLcLis_so_ptrlEunsignedsPintgR(void *p);
   static void destruct_bdmcLcLis_so_ptrlEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::is_so_ptr<unsigned int>*)
   {
      ::bdm::is_so_ptr<unsigned int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::is_so_ptr<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::is_so_ptr<unsigned int>", "core/sim_object/so_pointer.h", 115,
                  typeid(::bdm::is_so_ptr<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLis_so_ptrlEunsignedsPintgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::is_so_ptr<unsigned int>) );
      instance.SetNew(&new_bdmcLcLis_so_ptrlEunsignedsPintgR);
      instance.SetNewArray(&newArray_bdmcLcLis_so_ptrlEunsignedsPintgR);
      instance.SetDelete(&delete_bdmcLcLis_so_ptrlEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLis_so_ptrlEunsignedsPintgR);
      instance.SetDestructor(&destruct_bdmcLcLis_so_ptrlEunsignedsPintgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::is_so_ptr<unsigned int>*)
   {
      return GenerateInitInstanceLocal((::bdm::is_so_ptr<unsigned int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::is_so_ptr<unsigned int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLis_so_ptrlEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::is_so_ptr<unsigned int>*)0x0)->GetClass();
      bdmcLcLis_so_ptrlEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLis_so_ptrlEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLis_so_ptrlEvectorlEbdmcLcLBaseBiologyModulemUgRsPgR_Dictionary();
   static void bdmcLcLis_so_ptrlEvectorlEbdmcLcLBaseBiologyModulemUgRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLis_so_ptrlEvectorlEbdmcLcLBaseBiologyModulemUgRsPgR(void *p = 0);
   static void *newArray_bdmcLcLis_so_ptrlEvectorlEbdmcLcLBaseBiologyModulemUgRsPgR(Long_t size, void *p);
   static void delete_bdmcLcLis_so_ptrlEvectorlEbdmcLcLBaseBiologyModulemUgRsPgR(void *p);
   static void deleteArray_bdmcLcLis_so_ptrlEvectorlEbdmcLcLBaseBiologyModulemUgRsPgR(void *p);
   static void destruct_bdmcLcLis_so_ptrlEvectorlEbdmcLcLBaseBiologyModulemUgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::is_so_ptr<vector<bdm::BaseBiologyModule*> >*)
   {
      ::bdm::is_so_ptr<vector<bdm::BaseBiologyModule*> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::is_so_ptr<vector<bdm::BaseBiologyModule*> >));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::is_so_ptr<vector<bdm::BaseBiologyModule*> >", "core/sim_object/so_pointer.h", 115,
                  typeid(::bdm::is_so_ptr<vector<bdm::BaseBiologyModule*> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLis_so_ptrlEvectorlEbdmcLcLBaseBiologyModulemUgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::is_so_ptr<vector<bdm::BaseBiologyModule*> >) );
      instance.SetNew(&new_bdmcLcLis_so_ptrlEvectorlEbdmcLcLBaseBiologyModulemUgRsPgR);
      instance.SetNewArray(&newArray_bdmcLcLis_so_ptrlEvectorlEbdmcLcLBaseBiologyModulemUgRsPgR);
      instance.SetDelete(&delete_bdmcLcLis_so_ptrlEvectorlEbdmcLcLBaseBiologyModulemUgRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLis_so_ptrlEvectorlEbdmcLcLBaseBiologyModulemUgRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLis_so_ptrlEvectorlEbdmcLcLBaseBiologyModulemUgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::is_so_ptr<vector<bdm::BaseBiologyModule*> >*)
   {
      return GenerateInitInstanceLocal((::bdm::is_so_ptr<vector<bdm::BaseBiologyModule*> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::is_so_ptr<vector<bdm::BaseBiologyModule*> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLis_so_ptrlEvectorlEbdmcLcLBaseBiologyModulemUgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::is_so_ptr<vector<bdm::BaseBiologyModule*> >*)0x0)->GetClass();
      bdmcLcLis_so_ptrlEvectorlEbdmcLcLBaseBiologyModulemUgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLis_so_ptrlEvectorlEbdmcLcLBaseBiologyModulemUgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR_Dictionary();
   static void bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p = 0);
   static void *newArray_bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR(Long_t size, void *p);
   static void delete_bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p);
   static void deleteArray_bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p);
   static void destruct_bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::is_so_ptr<bdm::MathArray<double,3> >*)
   {
      ::bdm::is_so_ptr<bdm::MathArray<double,3> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::is_so_ptr<bdm::MathArray<double,3> >));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::is_so_ptr<bdm::MathArray<double,3> >", "core/sim_object/so_pointer.h", 115,
                  typeid(::bdm::is_so_ptr<bdm::MathArray<double,3> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::is_so_ptr<bdm::MathArray<double,3> >) );
      instance.SetNew(&new_bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR);
      instance.SetNewArray(&newArray_bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR);
      instance.SetDelete(&delete_bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::is_so_ptr<bdm::MathArray<double,3> >*)
   {
      return GenerateInitInstanceLocal((::bdm::is_so_ptr<bdm::MathArray<double,3> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::is_so_ptr<bdm::MathArray<double,3> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::is_so_ptr<bdm::MathArray<double,3> >*)0x0)->GetClass();
      bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLis_so_ptrlEdoublegR_Dictionary();
   static void bdmcLcLis_so_ptrlEdoublegR_TClassManip(TClass*);
   static void *new_bdmcLcLis_so_ptrlEdoublegR(void *p = 0);
   static void *newArray_bdmcLcLis_so_ptrlEdoublegR(Long_t size, void *p);
   static void delete_bdmcLcLis_so_ptrlEdoublegR(void *p);
   static void deleteArray_bdmcLcLis_so_ptrlEdoublegR(void *p);
   static void destruct_bdmcLcLis_so_ptrlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::is_so_ptr<double>*)
   {
      ::bdm::is_so_ptr<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::is_so_ptr<double>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::is_so_ptr<double>", "core/sim_object/so_pointer.h", 115,
                  typeid(::bdm::is_so_ptr<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLis_so_ptrlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::is_so_ptr<double>) );
      instance.SetNew(&new_bdmcLcLis_so_ptrlEdoublegR);
      instance.SetNewArray(&newArray_bdmcLcLis_so_ptrlEdoublegR);
      instance.SetDelete(&delete_bdmcLcLis_so_ptrlEdoublegR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLis_so_ptrlEdoublegR);
      instance.SetDestructor(&destruct_bdmcLcLis_so_ptrlEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::is_so_ptr<double>*)
   {
      return GenerateInitInstanceLocal((::bdm::is_so_ptr<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::is_so_ptr<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLis_so_ptrlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::is_so_ptr<double>*)0x0)->GetClass();
      bdmcLcLis_so_ptrlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLis_so_ptrlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLis_so_ptrlEboolgR_Dictionary();
   static void bdmcLcLis_so_ptrlEboolgR_TClassManip(TClass*);
   static void *new_bdmcLcLis_so_ptrlEboolgR(void *p = 0);
   static void *newArray_bdmcLcLis_so_ptrlEboolgR(Long_t size, void *p);
   static void delete_bdmcLcLis_so_ptrlEboolgR(void *p);
   static void deleteArray_bdmcLcLis_so_ptrlEboolgR(void *p);
   static void destruct_bdmcLcLis_so_ptrlEboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::is_so_ptr<bool>*)
   {
      ::bdm::is_so_ptr<bool> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::is_so_ptr<bool>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::is_so_ptr<bool>", "core/sim_object/so_pointer.h", 115,
                  typeid(::bdm::is_so_ptr<bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLis_so_ptrlEboolgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::is_so_ptr<bool>) );
      instance.SetNew(&new_bdmcLcLis_so_ptrlEboolgR);
      instance.SetNewArray(&newArray_bdmcLcLis_so_ptrlEboolgR);
      instance.SetDelete(&delete_bdmcLcLis_so_ptrlEboolgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLis_so_ptrlEboolgR);
      instance.SetDestructor(&destruct_bdmcLcLis_so_ptrlEboolgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::is_so_ptr<bool>*)
   {
      return GenerateInitInstanceLocal((::bdm::is_so_ptr<bool>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::is_so_ptr<bool>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLis_so_ptrlEboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::is_so_ptr<bool>*)0x0)->GetClass();
      bdmcLcLis_so_ptrlEboolgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLis_so_ptrlEboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLis_so_ptrlEintgR_Dictionary();
   static void bdmcLcLis_so_ptrlEintgR_TClassManip(TClass*);
   static void *new_bdmcLcLis_so_ptrlEintgR(void *p = 0);
   static void *newArray_bdmcLcLis_so_ptrlEintgR(Long_t size, void *p);
   static void delete_bdmcLcLis_so_ptrlEintgR(void *p);
   static void deleteArray_bdmcLcLis_so_ptrlEintgR(void *p);
   static void destruct_bdmcLcLis_so_ptrlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::is_so_ptr<int>*)
   {
      ::bdm::is_so_ptr<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::is_so_ptr<int>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::is_so_ptr<int>", "core/sim_object/so_pointer.h", 115,
                  typeid(::bdm::is_so_ptr<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLis_so_ptrlEintgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::is_so_ptr<int>) );
      instance.SetNew(&new_bdmcLcLis_so_ptrlEintgR);
      instance.SetNewArray(&newArray_bdmcLcLis_so_ptrlEintgR);
      instance.SetDelete(&delete_bdmcLcLis_so_ptrlEintgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLis_so_ptrlEintgR);
      instance.SetDestructor(&destruct_bdmcLcLis_so_ptrlEintgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::is_so_ptr<int>*)
   {
      return GenerateInitInstanceLocal((::bdm::is_so_ptr<int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::is_so_ptr<int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLis_so_ptrlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::is_so_ptr<int>*)0x0)->GetClass();
      bdmcLcLis_so_ptrlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLis_so_ptrlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLdetailcLcLExtractUidPtr_Dictionary();
   static void bdmcLcLdetailcLcLExtractUidPtr_TClassManip(TClass*);
   static void *new_bdmcLcLdetailcLcLExtractUidPtr(void *p = 0);
   static void *newArray_bdmcLcLdetailcLcLExtractUidPtr(Long_t size, void *p);
   static void delete_bdmcLcLdetailcLcLExtractUidPtr(void *p);
   static void deleteArray_bdmcLcLdetailcLcLExtractUidPtr(void *p);
   static void destruct_bdmcLcLdetailcLcLExtractUidPtr(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::detail::ExtractUidPtr*)
   {
      ::bdm::detail::ExtractUidPtr *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::detail::ExtractUidPtr));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::detail::ExtractUidPtr", "core/sim_object/so_pointer.h", 126,
                  typeid(::bdm::detail::ExtractUidPtr), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLdetailcLcLExtractUidPtr_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::detail::ExtractUidPtr) );
      instance.SetNew(&new_bdmcLcLdetailcLcLExtractUidPtr);
      instance.SetNewArray(&newArray_bdmcLcLdetailcLcLExtractUidPtr);
      instance.SetDelete(&delete_bdmcLcLdetailcLcLExtractUidPtr);
      instance.SetDeleteArray(&deleteArray_bdmcLcLdetailcLcLExtractUidPtr);
      instance.SetDestructor(&destruct_bdmcLcLdetailcLcLExtractUidPtr);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::detail::ExtractUidPtr*)
   {
      return GenerateInitInstanceLocal((::bdm::detail::ExtractUidPtr*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::detail::ExtractUidPtr*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLdetailcLcLExtractUidPtr_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::detail::ExtractUidPtr*)0x0)->GetClass();
      bdmcLcLdetailcLcLExtractUidPtr_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLdetailcLcLExtractUidPtr_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLCellDivisionEvent_Dictionary();
   static void bdmcLcLCellDivisionEvent_TClassManip(TClass*);
   static void delete_bdmcLcLCellDivisionEvent(void *p);
   static void deleteArray_bdmcLcLCellDivisionEvent(void *p);
   static void destruct_bdmcLcLCellDivisionEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::CellDivisionEvent*)
   {
      ::bdm::CellDivisionEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::CellDivisionEvent));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::CellDivisionEvent", "core/event/cell_division_event.h", 30,
                  typeid(::bdm::CellDivisionEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLCellDivisionEvent_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::CellDivisionEvent) );
      instance.SetDelete(&delete_bdmcLcLCellDivisionEvent);
      instance.SetDeleteArray(&deleteArray_bdmcLcLCellDivisionEvent);
      instance.SetDestructor(&destruct_bdmcLcLCellDivisionEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::CellDivisionEvent*)
   {
      return GenerateInitInstanceLocal((::bdm::CellDivisionEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::CellDivisionEvent*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLCellDivisionEvent_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::CellDivisionEvent*)0x0)->GetClass();
      bdmcLcLCellDivisionEvent_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLCellDivisionEvent_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLDefaultForce_Dictionary();
   static void bdmcLcLDefaultForce_TClassManip(TClass*);
   static void *new_bdmcLcLDefaultForce(void *p = 0);
   static void *newArray_bdmcLcLDefaultForce(Long_t size, void *p);
   static void delete_bdmcLcLDefaultForce(void *p);
   static void deleteArray_bdmcLcLDefaultForce(void *p);
   static void destruct_bdmcLcLDefaultForce(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::DefaultForce*)
   {
      ::bdm::DefaultForce *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::DefaultForce));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::DefaultForce", "core/default_force.h", 26,
                  typeid(::bdm::DefaultForce), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLDefaultForce_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::DefaultForce) );
      instance.SetNew(&new_bdmcLcLDefaultForce);
      instance.SetNewArray(&newArray_bdmcLcLDefaultForce);
      instance.SetDelete(&delete_bdmcLcLDefaultForce);
      instance.SetDeleteArray(&deleteArray_bdmcLcLDefaultForce);
      instance.SetDestructor(&destruct_bdmcLcLDefaultForce);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::DefaultForce*)
   {
      return GenerateInitInstanceLocal((::bdm::DefaultForce*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::DefaultForce*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLDefaultForce_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::DefaultForce*)0x0)->GetClass();
      bdmcLcLDefaultForce_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLDefaultForce_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLModuleParamUidGenerator_Dictionary();
   static void bdmcLcLModuleParamUidGenerator_TClassManip(TClass*);
   static void delete_bdmcLcLModuleParamUidGenerator(void *p);
   static void deleteArray_bdmcLcLModuleParamUidGenerator(void *p);
   static void destruct_bdmcLcLModuleParamUidGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::ModuleParamUidGenerator*)
   {
      ::bdm::ModuleParamUidGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::ModuleParamUidGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::ModuleParamUidGenerator", "core/param/module_param.h", 29,
                  typeid(::bdm::ModuleParamUidGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLModuleParamUidGenerator_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::ModuleParamUidGenerator) );
      instance.SetDelete(&delete_bdmcLcLModuleParamUidGenerator);
      instance.SetDeleteArray(&deleteArray_bdmcLcLModuleParamUidGenerator);
      instance.SetDestructor(&destruct_bdmcLcLModuleParamUidGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::ModuleParamUidGenerator*)
   {
      return GenerateInitInstanceLocal((::bdm::ModuleParamUidGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::ModuleParamUidGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLModuleParamUidGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::ModuleParamUidGenerator*)0x0)->GetClass();
      bdmcLcLModuleParamUidGenerator_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLModuleParamUidGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLParamcLcLVisualizeDiffusion_Dictionary();
   static void bdmcLcLParamcLcLVisualizeDiffusion_TClassManip(TClass*);
   static void *new_bdmcLcLParamcLcLVisualizeDiffusion(void *p = 0);
   static void *newArray_bdmcLcLParamcLcLVisualizeDiffusion(Long_t size, void *p);
   static void delete_bdmcLcLParamcLcLVisualizeDiffusion(void *p);
   static void deleteArray_bdmcLcLParamcLcLVisualizeDiffusion(void *p);
   static void destruct_bdmcLcLParamcLcLVisualizeDiffusion(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::Param::VisualizeDiffusion*)
   {
      ::bdm::Param::VisualizeDiffusion *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::Param::VisualizeDiffusion));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::Param::VisualizeDiffusion", "core/param/param.h", 231,
                  typeid(::bdm::Param::VisualizeDiffusion), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLParamcLcLVisualizeDiffusion_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::Param::VisualizeDiffusion) );
      instance.SetNew(&new_bdmcLcLParamcLcLVisualizeDiffusion);
      instance.SetNewArray(&newArray_bdmcLcLParamcLcLVisualizeDiffusion);
      instance.SetDelete(&delete_bdmcLcLParamcLcLVisualizeDiffusion);
      instance.SetDeleteArray(&deleteArray_bdmcLcLParamcLcLVisualizeDiffusion);
      instance.SetDestructor(&destruct_bdmcLcLParamcLcLVisualizeDiffusion);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::Param::VisualizeDiffusion*)
   {
      return GenerateInitInstanceLocal((::bdm::Param::VisualizeDiffusion*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::Param::VisualizeDiffusion*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLParamcLcLVisualizeDiffusion_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::Param::VisualizeDiffusion*)0x0)->GetClass();
      bdmcLcLParamcLcLVisualizeDiffusion_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLParamcLcLVisualizeDiffusion_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLMath_Dictionary();
   static void bdmcLcLMath_TClassManip(TClass*);
   static void *new_bdmcLcLMath(void *p = 0);
   static void *newArray_bdmcLcLMath(Long_t size, void *p);
   static void delete_bdmcLcLMath(void *p);
   static void deleteArray_bdmcLcLMath(void *p);
   static void destruct_bdmcLcLMath(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::Math*)
   {
      ::bdm::Math *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::Math));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::Math", "core/util/math.h", 28,
                  typeid(::bdm::Math), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLMath_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::Math) );
      instance.SetNew(&new_bdmcLcLMath);
      instance.SetNewArray(&newArray_bdmcLcLMath);
      instance.SetDelete(&delete_bdmcLcLMath);
      instance.SetDeleteArray(&deleteArray_bdmcLcLMath);
      instance.SetDestructor(&destruct_bdmcLcLMath);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::Math*)
   {
      return GenerateInitInstanceLocal((::bdm::Math*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::Math*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLMath_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::Math*)0x0)->GetClass();
      bdmcLcLMath_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLMath_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLScheduler_Dictionary();
   static void bdmcLcLScheduler_TClassManip(TClass*);
   static void *new_bdmcLcLScheduler(void *p = 0);
   static void *newArray_bdmcLcLScheduler(Long_t size, void *p);
   static void delete_bdmcLcLScheduler(void *p);
   static void deleteArray_bdmcLcLScheduler(void *p);
   static void destruct_bdmcLcLScheduler(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::Scheduler*)
   {
      ::bdm::Scheduler *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::Scheduler));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::Scheduler", "core/scheduler.h", 34,
                  typeid(::bdm::Scheduler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLScheduler_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::Scheduler) );
      instance.SetNew(&new_bdmcLcLScheduler);
      instance.SetNewArray(&newArray_bdmcLcLScheduler);
      instance.SetDelete(&delete_bdmcLcLScheduler);
      instance.SetDeleteArray(&deleteArray_bdmcLcLScheduler);
      instance.SetDestructor(&destruct_bdmcLcLScheduler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::Scheduler*)
   {
      return GenerateInitInstanceLocal((::bdm::Scheduler*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::Scheduler*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLScheduler_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::Scheduler*)0x0)->GetClass();
      bdmcLcLScheduler_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLScheduler_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridcLcLBoxmUcO27gR_Dictionary();
   static void bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridcLcLBoxmUcO27gR_TClassManip(TClass*);
   static void *new_bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridcLcLBoxmUcO27gR(void *p = 0);
   static void *newArray_bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridcLcLBoxmUcO27gR(Long_t size, void *p);
   static void delete_bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridcLcLBoxmUcO27gR(void *p);
   static void deleteArray_bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridcLcLBoxmUcO27gR(void *p);
   static void destruct_bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridcLcLBoxmUcO27gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::FixedSizeVector<const bdm::Grid::Box*,27>*)
   {
      ::bdm::FixedSizeVector<const bdm::Grid::Box*,27> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::FixedSizeVector<const bdm::Grid::Box*,27>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::FixedSizeVector<const bdm::Grid::Box*,27>", "core/container/fixed_size_vector.h", 28,
                  typeid(::bdm::FixedSizeVector<const bdm::Grid::Box*,27>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridcLcLBoxmUcO27gR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::FixedSizeVector<const bdm::Grid::Box*,27>) );
      instance.SetNew(&new_bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridcLcLBoxmUcO27gR);
      instance.SetNewArray(&newArray_bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridcLcLBoxmUcO27gR);
      instance.SetDelete(&delete_bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridcLcLBoxmUcO27gR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridcLcLBoxmUcO27gR);
      instance.SetDestructor(&destruct_bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridcLcLBoxmUcO27gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::FixedSizeVector<const bdm::Grid::Box*,27>*)
   {
      return GenerateInitInstanceLocal((::bdm::FixedSizeVector<const bdm::Grid::Box*,27>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::FixedSizeVector<const bdm::Grid::Box*,27>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridcLcLBoxmUcO27gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::FixedSizeVector<const bdm::Grid::Box*,27>*)0x0)->GetClass();
      bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridcLcLBoxmUcO27gR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridcLcLBoxmUcO27gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLFixedSizeVectorlEunsignedsPlongcO27gR_Dictionary();
   static void bdmcLcLFixedSizeVectorlEunsignedsPlongcO27gR_TClassManip(TClass*);
   static void *new_bdmcLcLFixedSizeVectorlEunsignedsPlongcO27gR(void *p = 0);
   static void *newArray_bdmcLcLFixedSizeVectorlEunsignedsPlongcO27gR(Long_t size, void *p);
   static void delete_bdmcLcLFixedSizeVectorlEunsignedsPlongcO27gR(void *p);
   static void deleteArray_bdmcLcLFixedSizeVectorlEunsignedsPlongcO27gR(void *p);
   static void destruct_bdmcLcLFixedSizeVectorlEunsignedsPlongcO27gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::FixedSizeVector<unsigned long,27>*)
   {
      ::bdm::FixedSizeVector<unsigned long,27> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::FixedSizeVector<unsigned long,27>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::FixedSizeVector<unsigned long,27>", "core/container/fixed_size_vector.h", 28,
                  typeid(::bdm::FixedSizeVector<unsigned long,27>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLFixedSizeVectorlEunsignedsPlongcO27gR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::FixedSizeVector<unsigned long,27>) );
      instance.SetNew(&new_bdmcLcLFixedSizeVectorlEunsignedsPlongcO27gR);
      instance.SetNewArray(&newArray_bdmcLcLFixedSizeVectorlEunsignedsPlongcO27gR);
      instance.SetDelete(&delete_bdmcLcLFixedSizeVectorlEunsignedsPlongcO27gR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLFixedSizeVectorlEunsignedsPlongcO27gR);
      instance.SetDestructor(&destruct_bdmcLcLFixedSizeVectorlEunsignedsPlongcO27gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::FixedSizeVector<unsigned long,27>*)
   {
      return GenerateInitInstanceLocal((::bdm::FixedSizeVector<unsigned long,27>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::FixedSizeVector<unsigned long,27>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLFixedSizeVectorlEunsignedsPlongcO27gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::FixedSizeVector<unsigned long,27>*)0x0)->GetClass();
      bdmcLcLFixedSizeVectorlEunsignedsPlongcO27gR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLFixedSizeVectorlEunsignedsPlongcO27gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR_Dictionary();
   static void bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR_TClassManip(TClass*);
   static void *new_bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR(void *p = 0);
   static void *newArray_bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR(Long_t size, void *p);
   static void delete_bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR(void *p);
   static void deleteArray_bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR(void *p);
   static void destruct_bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::FixedSizeVector<unsigned long,14>*)
   {
      ::bdm::FixedSizeVector<unsigned long,14> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::FixedSizeVector<unsigned long,14>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::FixedSizeVector<unsigned long,14>", "core/container/fixed_size_vector.h", 28,
                  typeid(::bdm::FixedSizeVector<unsigned long,14>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::FixedSizeVector<unsigned long,14>) );
      instance.SetNew(&new_bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR);
      instance.SetNewArray(&newArray_bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR);
      instance.SetDelete(&delete_bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR);
      instance.SetDestructor(&destruct_bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::FixedSizeVector<unsigned long,14>*)
   {
      return GenerateInitInstanceLocal((::bdm::FixedSizeVector<unsigned long,14>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::FixedSizeVector<unsigned long,14>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::FixedSizeVector<unsigned long,14>*)0x0)->GetClass();
      bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLParallelResizeVectorlEdoublegR_Dictionary();
   static void bdmcLcLParallelResizeVectorlEdoublegR_TClassManip(TClass*);
   static void *new_bdmcLcLParallelResizeVectorlEdoublegR(void *p = 0);
   static void *newArray_bdmcLcLParallelResizeVectorlEdoublegR(Long_t size, void *p);
   static void delete_bdmcLcLParallelResizeVectorlEdoublegR(void *p);
   static void deleteArray_bdmcLcLParallelResizeVectorlEdoublegR(void *p);
   static void destruct_bdmcLcLParallelResizeVectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::ParallelResizeVector<double>*)
   {
      ::bdm::ParallelResizeVector<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::ParallelResizeVector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::ParallelResizeVector<double>", "core/container/parallel_resize_vector.h", 24,
                  typeid(::bdm::ParallelResizeVector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLParallelResizeVectorlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::ParallelResizeVector<double>) );
      instance.SetNew(&new_bdmcLcLParallelResizeVectorlEdoublegR);
      instance.SetNewArray(&newArray_bdmcLcLParallelResizeVectorlEdoublegR);
      instance.SetDelete(&delete_bdmcLcLParallelResizeVectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLParallelResizeVectorlEdoublegR);
      instance.SetDestructor(&destruct_bdmcLcLParallelResizeVectorlEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::ParallelResizeVector<double>*)
   {
      return GenerateInitInstanceLocal((::bdm::ParallelResizeVector<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::ParallelResizeVector<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLParallelResizeVectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::ParallelResizeVector<double>*)0x0)->GetClass();
      bdmcLcLParallelResizeVectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLParallelResizeVectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLParallelResizeVectorlEbdmcLcLGridcLcLBoxgR_Dictionary();
   static void bdmcLcLParallelResizeVectorlEbdmcLcLGridcLcLBoxgR_TClassManip(TClass*);
   static void *new_bdmcLcLParallelResizeVectorlEbdmcLcLGridcLcLBoxgR(void *p = 0);
   static void *newArray_bdmcLcLParallelResizeVectorlEbdmcLcLGridcLcLBoxgR(Long_t size, void *p);
   static void delete_bdmcLcLParallelResizeVectorlEbdmcLcLGridcLcLBoxgR(void *p);
   static void deleteArray_bdmcLcLParallelResizeVectorlEbdmcLcLGridcLcLBoxgR(void *p);
   static void destruct_bdmcLcLParallelResizeVectorlEbdmcLcLGridcLcLBoxgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::ParallelResizeVector<bdm::Grid::Box>*)
   {
      ::bdm::ParallelResizeVector<bdm::Grid::Box> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::ParallelResizeVector<bdm::Grid::Box>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::ParallelResizeVector<bdm::Grid::Box>", "core/container/parallel_resize_vector.h", 24,
                  typeid(::bdm::ParallelResizeVector<bdm::Grid::Box>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLParallelResizeVectorlEbdmcLcLGridcLcLBoxgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::ParallelResizeVector<bdm::Grid::Box>) );
      instance.SetNew(&new_bdmcLcLParallelResizeVectorlEbdmcLcLGridcLcLBoxgR);
      instance.SetNewArray(&newArray_bdmcLcLParallelResizeVectorlEbdmcLcLGridcLcLBoxgR);
      instance.SetDelete(&delete_bdmcLcLParallelResizeVectorlEbdmcLcLGridcLcLBoxgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLParallelResizeVectorlEbdmcLcLGridcLcLBoxgR);
      instance.SetDestructor(&destruct_bdmcLcLParallelResizeVectorlEbdmcLcLGridcLcLBoxgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::ParallelResizeVector<bdm::Grid::Box>*)
   {
      return GenerateInitInstanceLocal((::bdm::ParallelResizeVector<bdm::Grid::Box>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::ParallelResizeVector<bdm::Grid::Box>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLParallelResizeVectorlEbdmcLcLGridcLcLBoxgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::ParallelResizeVector<bdm::Grid::Box>*)0x0)->GetClass();
      bdmcLcLParallelResizeVectorlEbdmcLcLGridcLcLBoxgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLParallelResizeVectorlEbdmcLcLGridcLcLBoxgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLGridcLcLBox_Dictionary();
   static void bdmcLcLGridcLcLBox_TClassManip(TClass*);
   static void *new_bdmcLcLGridcLcLBox(void *p = 0);
   static void *newArray_bdmcLcLGridcLcLBox(Long_t size, void *p);
   static void delete_bdmcLcLGridcLcLBox(void *p);
   static void deleteArray_bdmcLcLGridcLcLBox(void *p);
   static void destruct_bdmcLcLGridcLcLBox(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::Grid::Box*)
   {
      ::bdm::Grid::Box *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::Grid::Box));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::Grid::Box", "core/grid.h", 100,
                  typeid(::bdm::Grid::Box), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLGridcLcLBox_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::Grid::Box) );
      instance.SetNew(&new_bdmcLcLGridcLcLBox);
      instance.SetNewArray(&newArray_bdmcLcLGridcLcLBox);
      instance.SetDelete(&delete_bdmcLcLGridcLcLBox);
      instance.SetDeleteArray(&deleteArray_bdmcLcLGridcLcLBox);
      instance.SetDestructor(&destruct_bdmcLcLGridcLcLBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::Grid::Box*)
   {
      return GenerateInitInstanceLocal((::bdm::Grid::Box*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::Grid::Box*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLGridcLcLBox_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::Grid::Box*)0x0)->GetClass();
      bdmcLcLGridcLcLBox_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLGridcLcLBox_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLParallelResizeVectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgR_Dictionary();
   static void bdmcLcLParallelResizeVectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLParallelResizeVectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgR(void *p = 0);
   static void *newArray_bdmcLcLParallelResizeVectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgR(Long_t size, void *p);
   static void delete_bdmcLcLParallelResizeVectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgR(void *p);
   static void deleteArray_bdmcLcLParallelResizeVectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgR(void *p);
   static void destruct_bdmcLcLParallelResizeVectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::ParallelResizeVector<pair<unsigned int,const bdm::Grid::Box*> >*)
   {
      ::bdm::ParallelResizeVector<pair<unsigned int,const bdm::Grid::Box*> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::ParallelResizeVector<pair<unsigned int,const bdm::Grid::Box*> >));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::ParallelResizeVector<pair<unsigned int,const bdm::Grid::Box*> >", "core/container/parallel_resize_vector.h", 24,
                  typeid(::bdm::ParallelResizeVector<pair<unsigned int,const bdm::Grid::Box*> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLParallelResizeVectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::ParallelResizeVector<pair<unsigned int,const bdm::Grid::Box*> >) );
      instance.SetNew(&new_bdmcLcLParallelResizeVectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgR);
      instance.SetNewArray(&newArray_bdmcLcLParallelResizeVectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgR);
      instance.SetDelete(&delete_bdmcLcLParallelResizeVectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLParallelResizeVectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLParallelResizeVectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::ParallelResizeVector<pair<unsigned int,const bdm::Grid::Box*> >*)
   {
      return GenerateInitInstanceLocal((::bdm::ParallelResizeVector<pair<unsigned int,const bdm::Grid::Box*> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::ParallelResizeVector<pair<unsigned int,const bdm::Grid::Box*> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLParallelResizeVectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::ParallelResizeVector<pair<unsigned int,const bdm::Grid::Box*> >*)0x0)->GetClass();
      bdmcLcLParallelResizeVectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLParallelResizeVectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *__gnu_cxxcLcL__normal_iteratorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRmUcOvectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgRsPgR_Dictionary();
   static void __gnu_cxxcLcL__normal_iteratorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRmUcOvectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgRsPgR_TClassManip(TClass*);
   static void *new___gnu_cxxcLcL__normal_iteratorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRmUcOvectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgRsPgR(void *p = 0);
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRmUcOvectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgRsPgR(Long_t size, void *p);
   static void delete___gnu_cxxcLcL__normal_iteratorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRmUcOvectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgRsPgR(void *p);
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRmUcOvectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgRsPgR(void *p);
   static void destruct___gnu_cxxcLcL__normal_iteratorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRmUcOvectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::__gnu_cxx::__normal_iterator<pair<unsigned int,const bdm::Grid::Box*>*,vector<pair<unsigned int,const bdm::Grid::Box*> > >*)
   {
      ::__gnu_cxx::__normal_iterator<pair<unsigned int,const bdm::Grid::Box*>*,vector<pair<unsigned int,const bdm::Grid::Box*> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::__gnu_cxx::__normal_iterator<pair<unsigned int,const bdm::Grid::Box*>*,vector<pair<unsigned int,const bdm::Grid::Box*> > >));
      static ::ROOT::TGenericClassInfo 
         instance("__gnu_cxx::__normal_iterator<pair<unsigned int,const bdm::Grid::Box*>*,vector<pair<unsigned int,const bdm::Grid::Box*> > >", "string", 763,
                  typeid(::__gnu_cxx::__normal_iterator<pair<unsigned int,const bdm::Grid::Box*>*,vector<pair<unsigned int,const bdm::Grid::Box*> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &__gnu_cxxcLcL__normal_iteratorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRmUcOvectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::__gnu_cxx::__normal_iterator<pair<unsigned int,const bdm::Grid::Box*>*,vector<pair<unsigned int,const bdm::Grid::Box*> > >) );
      instance.SetNew(&new___gnu_cxxcLcL__normal_iteratorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRmUcOvectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgRsPgR);
      instance.SetNewArray(&newArray___gnu_cxxcLcL__normal_iteratorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRmUcOvectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgRsPgR);
      instance.SetDelete(&delete___gnu_cxxcLcL__normal_iteratorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRmUcOvectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray___gnu_cxxcLcL__normal_iteratorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRmUcOvectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgRsPgR);
      instance.SetDestructor(&destruct___gnu_cxxcLcL__normal_iteratorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRmUcOvectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::__gnu_cxx::__normal_iterator<pair<unsigned int,const bdm::Grid::Box*>*,vector<pair<unsigned int,const bdm::Grid::Box*> > >*)
   {
      return GenerateInitInstanceLocal((::__gnu_cxx::__normal_iterator<pair<unsigned int,const bdm::Grid::Box*>*,vector<pair<unsigned int,const bdm::Grid::Box*> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<pair<unsigned int,const bdm::Grid::Box*>*,vector<pair<unsigned int,const bdm::Grid::Box*> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *__gnu_cxxcLcL__normal_iteratorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRmUcOvectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<pair<unsigned int,const bdm::Grid::Box*>*,vector<pair<unsigned int,const bdm::Grid::Box*> > >*)0x0)->GetClass();
      __gnu_cxxcLcL__normal_iteratorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRmUcOvectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void __gnu_cxxcLcL__normal_iteratorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRmUcOvectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgR_Dictionary();
   static void pairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgR_TClassManip(TClass*);
   static void *new_pairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgR(void *p = 0);
   static void *newArray_pairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgR(Long_t size, void *p);
   static void delete_pairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgR(void *p);
   static void deleteArray_pairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgR(void *p);
   static void destruct_pairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<unsigned int,const bdm::Grid::Box*>*)
   {
      pair<unsigned int,const bdm::Grid::Box*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<unsigned int,const bdm::Grid::Box*>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<unsigned int,const bdm::Grid::Box*>", "string", 208,
                  typeid(pair<unsigned int,const bdm::Grid::Box*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgR_Dictionary, isa_proxy, 4,
                  sizeof(pair<unsigned int,const bdm::Grid::Box*>) );
      instance.SetNew(&new_pairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgR);
      instance.SetNewArray(&newArray_pairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgR);
      instance.SetDelete(&delete_pairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgR);
      instance.SetDeleteArray(&deleteArray_pairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgR);
      instance.SetDestructor(&destruct_pairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const pair<unsigned int,const bdm::Grid::Box*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<unsigned int,const bdm::Grid::Box*>*)0x0)->GetClass();
      pairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLSimObjectVectorlEbdmcLcLSoHandlegR_Dictionary();
   static void bdmcLcLSimObjectVectorlEbdmcLcLSoHandlegR_TClassManip(TClass*);
   static void *new_bdmcLcLSimObjectVectorlEbdmcLcLSoHandlegR(void *p = 0);
   static void *newArray_bdmcLcLSimObjectVectorlEbdmcLcLSoHandlegR(Long_t size, void *p);
   static void delete_bdmcLcLSimObjectVectorlEbdmcLcLSoHandlegR(void *p);
   static void deleteArray_bdmcLcLSimObjectVectorlEbdmcLcLSoHandlegR(void *p);
   static void destruct_bdmcLcLSimObjectVectorlEbdmcLcLSoHandlegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::SimObjectVector<bdm::SoHandle>*)
   {
      ::bdm::SimObjectVector<bdm::SoHandle> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::SimObjectVector<bdm::SoHandle>));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::SimObjectVector<bdm::SoHandle>", "core/container/sim_object_vector.h", 27,
                  typeid(::bdm::SimObjectVector<bdm::SoHandle>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLSimObjectVectorlEbdmcLcLSoHandlegR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::SimObjectVector<bdm::SoHandle>) );
      instance.SetNew(&new_bdmcLcLSimObjectVectorlEbdmcLcLSoHandlegR);
      instance.SetNewArray(&newArray_bdmcLcLSimObjectVectorlEbdmcLcLSoHandlegR);
      instance.SetDelete(&delete_bdmcLcLSimObjectVectorlEbdmcLcLSoHandlegR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLSimObjectVectorlEbdmcLcLSoHandlegR);
      instance.SetDestructor(&destruct_bdmcLcLSimObjectVectorlEbdmcLcLSoHandlegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::SimObjectVector<bdm::SoHandle>*)
   {
      return GenerateInitInstanceLocal((::bdm::SimObjectVector<bdm::SoHandle>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::SimObjectVector<bdm::SoHandle>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLSimObjectVectorlEbdmcLcLSoHandlegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::SimObjectVector<bdm::SoHandle>*)0x0)->GetClass();
      bdmcLcLSimObjectVectorlEbdmcLcLSoHandlegR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLSimObjectVectorlEbdmcLcLSoHandlegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLGridcLcLBoxcLcLIterator_Dictionary();
   static void bdmcLcLGridcLcLBoxcLcLIterator_TClassManip(TClass*);
   static void delete_bdmcLcLGridcLcLBoxcLcLIterator(void *p);
   static void deleteArray_bdmcLcLGridcLcLBoxcLcLIterator(void *p);
   static void destruct_bdmcLcLGridcLcLBoxcLcLIterator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::Grid::Box::Iterator*)
   {
      ::bdm::Grid::Box::Iterator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::Grid::Box::Iterator));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::Grid::Box::Iterator", "core/grid.h", 135,
                  typeid(::bdm::Grid::Box::Iterator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLGridcLcLBoxcLcLIterator_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::Grid::Box::Iterator) );
      instance.SetDelete(&delete_bdmcLcLGridcLcLBoxcLcLIterator);
      instance.SetDeleteArray(&deleteArray_bdmcLcLGridcLcLBoxcLcLIterator);
      instance.SetDestructor(&destruct_bdmcLcLGridcLcLBoxcLcLIterator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::Grid::Box::Iterator*)
   {
      return GenerateInitInstanceLocal((::bdm::Grid::Box::Iterator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::Grid::Box::Iterator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLGridcLcLBoxcLcLIterator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::Grid::Box::Iterator*)0x0)->GetClass();
      bdmcLcLGridcLcLBoxcLcLIterator_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLGridcLcLBoxcLcLIterator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLGridcLcLNeighborIterator_Dictionary();
   static void bdmcLcLGridcLcLNeighborIterator_TClassManip(TClass*);
   static void delete_bdmcLcLGridcLcLNeighborIterator(void *p);
   static void deleteArray_bdmcLcLGridcLcLNeighborIterator(void *p);
   static void destruct_bdmcLcLGridcLcLNeighborIterator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::Grid::NeighborIterator*)
   {
      ::bdm::Grid::NeighborIterator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::Grid::NeighborIterator));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::Grid::NeighborIterator", "core/grid.h", 167,
                  typeid(::bdm::Grid::NeighborIterator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLGridcLcLNeighborIterator_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::Grid::NeighborIterator) );
      instance.SetDelete(&delete_bdmcLcLGridcLcLNeighborIterator);
      instance.SetDeleteArray(&deleteArray_bdmcLcLGridcLcLNeighborIterator);
      instance.SetDestructor(&destruct_bdmcLcLGridcLcLNeighborIterator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::Grid::NeighborIterator*)
   {
      return GenerateInitInstanceLocal((::bdm::Grid::NeighborIterator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::Grid::NeighborIterator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLGridcLcLNeighborIterator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::Grid::NeighborIterator*)0x0)->GetClass();
      bdmcLcLGridcLcLNeighborIterator_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLGridcLcLNeighborIterator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLGridcLcLNeighborMutexBuilder_Dictionary();
   static void bdmcLcLGridcLcLNeighborMutexBuilder_TClassManip(TClass*);
   static void *new_bdmcLcLGridcLcLNeighborMutexBuilder(void *p = 0);
   static void *newArray_bdmcLcLGridcLcLNeighborMutexBuilder(Long_t size, void *p);
   static void delete_bdmcLcLGridcLcLNeighborMutexBuilder(void *p);
   static void deleteArray_bdmcLcLGridcLcLNeighborMutexBuilder(void *p);
   static void destruct_bdmcLcLGridcLcLNeighborMutexBuilder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::Grid::NeighborMutexBuilder*)
   {
      ::bdm::Grid::NeighborMutexBuilder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::Grid::NeighborMutexBuilder));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::Grid::NeighborMutexBuilder", "core/grid.h", 612,
                  typeid(::bdm::Grid::NeighborMutexBuilder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLGridcLcLNeighborMutexBuilder_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::Grid::NeighborMutexBuilder) );
      instance.SetNew(&new_bdmcLcLGridcLcLNeighborMutexBuilder);
      instance.SetNewArray(&newArray_bdmcLcLGridcLcLNeighborMutexBuilder);
      instance.SetDelete(&delete_bdmcLcLGridcLcLNeighborMutexBuilder);
      instance.SetDeleteArray(&deleteArray_bdmcLcLGridcLcLNeighborMutexBuilder);
      instance.SetDestructor(&destruct_bdmcLcLGridcLcLNeighborMutexBuilder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::Grid::NeighborMutexBuilder*)
   {
      return GenerateInitInstanceLocal((::bdm::Grid::NeighborMutexBuilder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::Grid::NeighborMutexBuilder*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLGridcLcLNeighborMutexBuilder_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::Grid::NeighborMutexBuilder*)0x0)->GetClass();
      bdmcLcLGridcLcLNeighborMutexBuilder_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLGridcLcLNeighborMutexBuilder_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLGridcLcLNeighborMutexBuildercLcLNeighborMutex_Dictionary();
   static void bdmcLcLGridcLcLNeighborMutexBuildercLcLNeighborMutex_TClassManip(TClass*);
   static void delete_bdmcLcLGridcLcLNeighborMutexBuildercLcLNeighborMutex(void *p);
   static void deleteArray_bdmcLcLGridcLcLNeighborMutexBuildercLcLNeighborMutex(void *p);
   static void destruct_bdmcLcLGridcLcLNeighborMutexBuildercLcLNeighborMutex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::Grid::NeighborMutexBuilder::NeighborMutex*)
   {
      ::bdm::Grid::NeighborMutexBuilder::NeighborMutex *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::Grid::NeighborMutexBuilder::NeighborMutex));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::Grid::NeighborMutexBuilder::NeighborMutex", "core/grid.h", 617,
                  typeid(::bdm::Grid::NeighborMutexBuilder::NeighborMutex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLGridcLcLNeighborMutexBuildercLcLNeighborMutex_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::Grid::NeighborMutexBuilder::NeighborMutex) );
      instance.SetDelete(&delete_bdmcLcLGridcLcLNeighborMutexBuildercLcLNeighborMutex);
      instance.SetDeleteArray(&deleteArray_bdmcLcLGridcLcLNeighborMutexBuildercLcLNeighborMutex);
      instance.SetDestructor(&destruct_bdmcLcLGridcLcLNeighborMutexBuildercLcLNeighborMutex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::Grid::NeighborMutexBuilder::NeighborMutex*)
   {
      return GenerateInitInstanceLocal((::bdm::Grid::NeighborMutexBuilder::NeighborMutex*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::Grid::NeighborMutexBuilder::NeighborMutex*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLGridcLcLNeighborMutexBuildercLcLNeighborMutex_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::Grid::NeighborMutexBuilder::NeighborMutex*)0x0)->GetClass();
      bdmcLcLGridcLcLNeighborMutexBuildercLcLNeighborMutex_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLGridcLcLNeighborMutexBuildercLcLNeighborMutex_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLModelInitializer_Dictionary();
   static void bdmcLcLModelInitializer_TClassManip(TClass*);
   static void *new_bdmcLcLModelInitializer(void *p = 0);
   static void *newArray_bdmcLcLModelInitializer(Long_t size, void *p);
   static void delete_bdmcLcLModelInitializer(void *p);
   static void deleteArray_bdmcLcLModelInitializer(void *p);
   static void destruct_bdmcLcLModelInitializer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::ModelInitializer*)
   {
      ::bdm::ModelInitializer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::ModelInitializer));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::ModelInitializer", "core/model_initializer.h", 30,
                  typeid(::bdm::ModelInitializer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLModelInitializer_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::ModelInitializer) );
      instance.SetNew(&new_bdmcLcLModelInitializer);
      instance.SetNewArray(&newArray_bdmcLcLModelInitializer);
      instance.SetDelete(&delete_bdmcLcLModelInitializer);
      instance.SetDeleteArray(&deleteArray_bdmcLcLModelInitializer);
      instance.SetDestructor(&destruct_bdmcLcLModelInitializer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::ModelInitializer*)
   {
      return GenerateInitInstanceLocal((::bdm::ModelInitializer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::ModelInitializer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLModelInitializer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::ModelInitializer*)0x0)->GetClass();
      bdmcLcLModelInitializer_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLModelInitializer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLCustomCLOParser_Dictionary();
   static void bdmcLcLCustomCLOParser_TClassManip(TClass*);
   static void delete_bdmcLcLCustomCLOParser(void *p);
   static void deleteArray_bdmcLcLCustomCLOParser(void *p);
   static void destruct_bdmcLcLCustomCLOParser(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::CustomCLOParser*)
   {
      ::bdm::CustomCLOParser *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::CustomCLOParser));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::CustomCLOParser", "core/param/custom_clo_parser.h", 27,
                  typeid(::bdm::CustomCLOParser), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLCustomCLOParser_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::CustomCLOParser) );
      instance.SetDelete(&delete_bdmcLcLCustomCLOParser);
      instance.SetDeleteArray(&deleteArray_bdmcLcLCustomCLOParser);
      instance.SetDestructor(&destruct_bdmcLcLCustomCLOParser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::CustomCLOParser*)
   {
      return GenerateInitInstanceLocal((::bdm::CustomCLOParser*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::CustomCLOParser*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLCustomCLOParser_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::CustomCLOParser*)0x0)->GetClass();
      bdmcLcLCustomCLOParser_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLCustomCLOParser_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_bdmcLcLMyCell(void *p = 0);
   static void delete_bdmcLcLMyCell(void *p);
   static void deleteArray_bdmcLcLMyCell(void *p);
   static void destruct_bdmcLcLMyCell(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::MyCell*)
   {
      ::bdm::MyCell *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::bdm::MyCell >(0);
      static ::ROOT::TGenericClassInfo 
         instance("bdm::MyCell", ::bdm::MyCell::Class_Version(), "protocell.h", 13,
                  typeid(::bdm::MyCell), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::bdm::MyCell::Dictionary, isa_proxy, 4,
                  sizeof(::bdm::MyCell) );
      instance.SetNew(&new_bdmcLcLMyCell);
      instance.SetDelete(&delete_bdmcLcLMyCell);
      instance.SetDeleteArray(&deleteArray_bdmcLcLMyCell);
      instance.SetDestructor(&destruct_bdmcLcLMyCell);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::MyCell*)
   {
      return GenerateInitInstanceLocal((::bdm::MyCell*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::MyCell*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_bdmcLcLGrowthModule(void *p = 0);
   static void *newArray_bdmcLcLGrowthModule(Long_t size, void *p);
   static void delete_bdmcLcLGrowthModule(void *p);
   static void deleteArray_bdmcLcLGrowthModule(void *p);
   static void destruct_bdmcLcLGrowthModule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::GrowthModule*)
   {
      ::bdm::GrowthModule *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::bdm::GrowthModule >(0);
      static ::ROOT::TGenericClassInfo 
         instance("bdm::GrowthModule", ::bdm::GrowthModule::Class_Version(), "my_growth.h", 8,
                  typeid(::bdm::GrowthModule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::bdm::GrowthModule::Dictionary, isa_proxy, 4,
                  sizeof(::bdm::GrowthModule) );
      instance.SetNew(&new_bdmcLcLGrowthModule);
      instance.SetNewArray(&newArray_bdmcLcLGrowthModule);
      instance.SetDelete(&delete_bdmcLcLGrowthModule);
      instance.SetDeleteArray(&deleteArray_bdmcLcLGrowthModule);
      instance.SetDestructor(&destruct_bdmcLcLGrowthModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::GrowthModule*)
   {
      return GenerateInitInstanceLocal((::bdm::GrowthModule*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::GrowthModule*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace bdm {
//______________________________________________________________________________
atomic_TClass_ptr MyCell::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MyCell::Class_Name()
{
   return "bdm::MyCell";
}

//______________________________________________________________________________
const char *MyCell::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::MyCell*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MyCell::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::MyCell*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MyCell::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::MyCell*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MyCell::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::MyCell*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace bdm
namespace bdm {
//______________________________________________________________________________
atomic_TClass_ptr GrowthModule::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GrowthModule::Class_Name()
{
   return "bdm::GrowthModule";
}

//______________________________________________________________________________
const char *GrowthModule::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::GrowthModule*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GrowthModule::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::GrowthModule*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GrowthModule::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::GrowthModule*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GrowthModule::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::GrowthModule*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace bdm
namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLLog(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Log : new ::bdm::Log;
   }
   static void *newArray_bdmcLcLLog(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Log[nElements] : new ::bdm::Log[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLLog(void *p) {
      delete ((::bdm::Log*)p);
   }
   static void deleteArray_bdmcLcLLog(void *p) {
      delete [] ((::bdm::Log*)p);
   }
   static void destruct_bdmcLcLLog(void *p) {
      typedef ::bdm::Log current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::Log

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLUniqueEventIdFactory(void *p) {
      delete ((::bdm::UniqueEventIdFactory*)p);
   }
   static void deleteArray_bdmcLcLUniqueEventIdFactory(void *p) {
      delete [] ((::bdm::UniqueEventIdFactory*)p);
   }
   static void destruct_bdmcLcLUniqueEventIdFactory(void *p) {
      typedef ::bdm::UniqueEventIdFactory current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::UniqueEventIdFactory

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLEvent(void *p) {
      delete ((::bdm::Event*)p);
   }
   static void deleteArray_bdmcLcLEvent(void *p) {
      delete [] ((::bdm::Event*)p);
   }
   static void destruct_bdmcLcLEvent(void *p) {
      typedef ::bdm::Event current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::Event

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLSoUidGenerator(void *p) {
      delete ((::bdm::SoUidGenerator*)p);
   }
   static void deleteArray_bdmcLcLSoUidGenerator(void *p) {
      delete [] ((::bdm::SoUidGenerator*)p);
   }
   static void destruct_bdmcLcLSoUidGenerator(void *p) {
      typedef ::bdm::SoUidGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::SoUidGenerator

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLThreadInfo(void *p) {
      delete ((::bdm::ThreadInfo*)p);
   }
   static void deleteArray_bdmcLcLThreadInfo(void *p) {
      delete [] ((::bdm::ThreadInfo*)p);
   }
   static void destruct_bdmcLcLThreadInfo(void *p) {
      typedef ::bdm::ThreadInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::ThreadInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLInPlaceExecutionContext(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::InPlaceExecutionContext : new ::bdm::InPlaceExecutionContext;
   }
   static void *newArray_bdmcLcLInPlaceExecutionContext(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::InPlaceExecutionContext[nElements] : new ::bdm::InPlaceExecutionContext[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLInPlaceExecutionContext(void *p) {
      delete ((::bdm::InPlaceExecutionContext*)p);
   }
   static void deleteArray_bdmcLcLInPlaceExecutionContext(void *p) {
      delete [] ((::bdm::InPlaceExecutionContext*)p);
   }
   static void destruct_bdmcLcLInPlaceExecutionContext(void *p) {
      typedef ::bdm::InPlaceExecutionContext current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::InPlaceExecutionContext

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLis_so_ptrlEunsignedsPlonggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<unsigned long> : new ::bdm::is_so_ptr<unsigned long>;
   }
   static void *newArray_bdmcLcLis_so_ptrlEunsignedsPlonggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<unsigned long>[nElements] : new ::bdm::is_so_ptr<unsigned long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLis_so_ptrlEunsignedsPlonggR(void *p) {
      delete ((::bdm::is_so_ptr<unsigned long>*)p);
   }
   static void deleteArray_bdmcLcLis_so_ptrlEunsignedsPlonggR(void *p) {
      delete [] ((::bdm::is_so_ptr<unsigned long>*)p);
   }
   static void destruct_bdmcLcLis_so_ptrlEunsignedsPlonggR(void *p) {
      typedef ::bdm::is_so_ptr<unsigned long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::is_so_ptr<unsigned long>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLis_so_ptrlEunsignedsPintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<unsigned int> : new ::bdm::is_so_ptr<unsigned int>;
   }
   static void *newArray_bdmcLcLis_so_ptrlEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<unsigned int>[nElements] : new ::bdm::is_so_ptr<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLis_so_ptrlEunsignedsPintgR(void *p) {
      delete ((::bdm::is_so_ptr<unsigned int>*)p);
   }
   static void deleteArray_bdmcLcLis_so_ptrlEunsignedsPintgR(void *p) {
      delete [] ((::bdm::is_so_ptr<unsigned int>*)p);
   }
   static void destruct_bdmcLcLis_so_ptrlEunsignedsPintgR(void *p) {
      typedef ::bdm::is_so_ptr<unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::is_so_ptr<unsigned int>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLis_so_ptrlEvectorlEbdmcLcLBaseBiologyModulemUgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<vector<bdm::BaseBiologyModule*> > : new ::bdm::is_so_ptr<vector<bdm::BaseBiologyModule*> >;
   }
   static void *newArray_bdmcLcLis_so_ptrlEvectorlEbdmcLcLBaseBiologyModulemUgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<vector<bdm::BaseBiologyModule*> >[nElements] : new ::bdm::is_so_ptr<vector<bdm::BaseBiologyModule*> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLis_so_ptrlEvectorlEbdmcLcLBaseBiologyModulemUgRsPgR(void *p) {
      delete ((::bdm::is_so_ptr<vector<bdm::BaseBiologyModule*> >*)p);
   }
   static void deleteArray_bdmcLcLis_so_ptrlEvectorlEbdmcLcLBaseBiologyModulemUgRsPgR(void *p) {
      delete [] ((::bdm::is_so_ptr<vector<bdm::BaseBiologyModule*> >*)p);
   }
   static void destruct_bdmcLcLis_so_ptrlEvectorlEbdmcLcLBaseBiologyModulemUgRsPgR(void *p) {
      typedef ::bdm::is_so_ptr<vector<bdm::BaseBiologyModule*> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::is_so_ptr<vector<bdm::BaseBiologyModule*> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<bdm::MathArray<double,3> > : new ::bdm::is_so_ptr<bdm::MathArray<double,3> >;
   }
   static void *newArray_bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<bdm::MathArray<double,3> >[nElements] : new ::bdm::is_so_ptr<bdm::MathArray<double,3> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p) {
      delete ((::bdm::is_so_ptr<bdm::MathArray<double,3> >*)p);
   }
   static void deleteArray_bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p) {
      delete [] ((::bdm::is_so_ptr<bdm::MathArray<double,3> >*)p);
   }
   static void destruct_bdmcLcLis_so_ptrlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p) {
      typedef ::bdm::is_so_ptr<bdm::MathArray<double,3> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::is_so_ptr<bdm::MathArray<double,3> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLis_so_ptrlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<double> : new ::bdm::is_so_ptr<double>;
   }
   static void *newArray_bdmcLcLis_so_ptrlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<double>[nElements] : new ::bdm::is_so_ptr<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLis_so_ptrlEdoublegR(void *p) {
      delete ((::bdm::is_so_ptr<double>*)p);
   }
   static void deleteArray_bdmcLcLis_so_ptrlEdoublegR(void *p) {
      delete [] ((::bdm::is_so_ptr<double>*)p);
   }
   static void destruct_bdmcLcLis_so_ptrlEdoublegR(void *p) {
      typedef ::bdm::is_so_ptr<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::is_so_ptr<double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLis_so_ptrlEboolgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<bool> : new ::bdm::is_so_ptr<bool>;
   }
   static void *newArray_bdmcLcLis_so_ptrlEboolgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<bool>[nElements] : new ::bdm::is_so_ptr<bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLis_so_ptrlEboolgR(void *p) {
      delete ((::bdm::is_so_ptr<bool>*)p);
   }
   static void deleteArray_bdmcLcLis_so_ptrlEboolgR(void *p) {
      delete [] ((::bdm::is_so_ptr<bool>*)p);
   }
   static void destruct_bdmcLcLis_so_ptrlEboolgR(void *p) {
      typedef ::bdm::is_so_ptr<bool> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::is_so_ptr<bool>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLis_so_ptrlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<int> : new ::bdm::is_so_ptr<int>;
   }
   static void *newArray_bdmcLcLis_so_ptrlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<int>[nElements] : new ::bdm::is_so_ptr<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLis_so_ptrlEintgR(void *p) {
      delete ((::bdm::is_so_ptr<int>*)p);
   }
   static void deleteArray_bdmcLcLis_so_ptrlEintgR(void *p) {
      delete [] ((::bdm::is_so_ptr<int>*)p);
   }
   static void destruct_bdmcLcLis_so_ptrlEintgR(void *p) {
      typedef ::bdm::is_so_ptr<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::is_so_ptr<int>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLdetailcLcLExtractUidPtr(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::detail::ExtractUidPtr : new ::bdm::detail::ExtractUidPtr;
   }
   static void *newArray_bdmcLcLdetailcLcLExtractUidPtr(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::detail::ExtractUidPtr[nElements] : new ::bdm::detail::ExtractUidPtr[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLdetailcLcLExtractUidPtr(void *p) {
      delete ((::bdm::detail::ExtractUidPtr*)p);
   }
   static void deleteArray_bdmcLcLdetailcLcLExtractUidPtr(void *p) {
      delete [] ((::bdm::detail::ExtractUidPtr*)p);
   }
   static void destruct_bdmcLcLdetailcLcLExtractUidPtr(void *p) {
      typedef ::bdm::detail::ExtractUidPtr current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::detail::ExtractUidPtr

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLCellDivisionEvent(void *p) {
      delete ((::bdm::CellDivisionEvent*)p);
   }
   static void deleteArray_bdmcLcLCellDivisionEvent(void *p) {
      delete [] ((::bdm::CellDivisionEvent*)p);
   }
   static void destruct_bdmcLcLCellDivisionEvent(void *p) {
      typedef ::bdm::CellDivisionEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::CellDivisionEvent

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLDefaultForce(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::DefaultForce : new ::bdm::DefaultForce;
   }
   static void *newArray_bdmcLcLDefaultForce(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::DefaultForce[nElements] : new ::bdm::DefaultForce[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLDefaultForce(void *p) {
      delete ((::bdm::DefaultForce*)p);
   }
   static void deleteArray_bdmcLcLDefaultForce(void *p) {
      delete [] ((::bdm::DefaultForce*)p);
   }
   static void destruct_bdmcLcLDefaultForce(void *p) {
      typedef ::bdm::DefaultForce current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::DefaultForce

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLModuleParamUidGenerator(void *p) {
      delete ((::bdm::ModuleParamUidGenerator*)p);
   }
   static void deleteArray_bdmcLcLModuleParamUidGenerator(void *p) {
      delete [] ((::bdm::ModuleParamUidGenerator*)p);
   }
   static void destruct_bdmcLcLModuleParamUidGenerator(void *p) {
      typedef ::bdm::ModuleParamUidGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::ModuleParamUidGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLParamcLcLVisualizeDiffusion(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Param::VisualizeDiffusion : new ::bdm::Param::VisualizeDiffusion;
   }
   static void *newArray_bdmcLcLParamcLcLVisualizeDiffusion(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Param::VisualizeDiffusion[nElements] : new ::bdm::Param::VisualizeDiffusion[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLParamcLcLVisualizeDiffusion(void *p) {
      delete ((::bdm::Param::VisualizeDiffusion*)p);
   }
   static void deleteArray_bdmcLcLParamcLcLVisualizeDiffusion(void *p) {
      delete [] ((::bdm::Param::VisualizeDiffusion*)p);
   }
   static void destruct_bdmcLcLParamcLcLVisualizeDiffusion(void *p) {
      typedef ::bdm::Param::VisualizeDiffusion current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::Param::VisualizeDiffusion

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLMath(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Math : new ::bdm::Math;
   }
   static void *newArray_bdmcLcLMath(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Math[nElements] : new ::bdm::Math[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLMath(void *p) {
      delete ((::bdm::Math*)p);
   }
   static void deleteArray_bdmcLcLMath(void *p) {
      delete [] ((::bdm::Math*)p);
   }
   static void destruct_bdmcLcLMath(void *p) {
      typedef ::bdm::Math current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::Math

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLScheduler(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Scheduler : new ::bdm::Scheduler;
   }
   static void *newArray_bdmcLcLScheduler(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Scheduler[nElements] : new ::bdm::Scheduler[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLScheduler(void *p) {
      delete ((::bdm::Scheduler*)p);
   }
   static void deleteArray_bdmcLcLScheduler(void *p) {
      delete [] ((::bdm::Scheduler*)p);
   }
   static void destruct_bdmcLcLScheduler(void *p) {
      typedef ::bdm::Scheduler current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::Scheduler

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridcLcLBoxmUcO27gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::FixedSizeVector<const bdm::Grid::Box*,27> : new ::bdm::FixedSizeVector<const bdm::Grid::Box*,27>;
   }
   static void *newArray_bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridcLcLBoxmUcO27gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::FixedSizeVector<const bdm::Grid::Box*,27>[nElements] : new ::bdm::FixedSizeVector<const bdm::Grid::Box*,27>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridcLcLBoxmUcO27gR(void *p) {
      delete ((::bdm::FixedSizeVector<const bdm::Grid::Box*,27>*)p);
   }
   static void deleteArray_bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridcLcLBoxmUcO27gR(void *p) {
      delete [] ((::bdm::FixedSizeVector<const bdm::Grid::Box*,27>*)p);
   }
   static void destruct_bdmcLcLFixedSizeVectorlEconstsPbdmcLcLGridcLcLBoxmUcO27gR(void *p) {
      typedef ::bdm::FixedSizeVector<const bdm::Grid::Box*,27> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::FixedSizeVector<const bdm::Grid::Box*,27>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLFixedSizeVectorlEunsignedsPlongcO27gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::FixedSizeVector<unsigned long,27> : new ::bdm::FixedSizeVector<unsigned long,27>;
   }
   static void *newArray_bdmcLcLFixedSizeVectorlEunsignedsPlongcO27gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::FixedSizeVector<unsigned long,27>[nElements] : new ::bdm::FixedSizeVector<unsigned long,27>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLFixedSizeVectorlEunsignedsPlongcO27gR(void *p) {
      delete ((::bdm::FixedSizeVector<unsigned long,27>*)p);
   }
   static void deleteArray_bdmcLcLFixedSizeVectorlEunsignedsPlongcO27gR(void *p) {
      delete [] ((::bdm::FixedSizeVector<unsigned long,27>*)p);
   }
   static void destruct_bdmcLcLFixedSizeVectorlEunsignedsPlongcO27gR(void *p) {
      typedef ::bdm::FixedSizeVector<unsigned long,27> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::FixedSizeVector<unsigned long,27>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::FixedSizeVector<unsigned long,14> : new ::bdm::FixedSizeVector<unsigned long,14>;
   }
   static void *newArray_bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::FixedSizeVector<unsigned long,14>[nElements] : new ::bdm::FixedSizeVector<unsigned long,14>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR(void *p) {
      delete ((::bdm::FixedSizeVector<unsigned long,14>*)p);
   }
   static void deleteArray_bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR(void *p) {
      delete [] ((::bdm::FixedSizeVector<unsigned long,14>*)p);
   }
   static void destruct_bdmcLcLFixedSizeVectorlEunsignedsPlongcO14gR(void *p) {
      typedef ::bdm::FixedSizeVector<unsigned long,14> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::FixedSizeVector<unsigned long,14>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLParallelResizeVectorlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::ParallelResizeVector<double> : new ::bdm::ParallelResizeVector<double>;
   }
   static void *newArray_bdmcLcLParallelResizeVectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::ParallelResizeVector<double>[nElements] : new ::bdm::ParallelResizeVector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLParallelResizeVectorlEdoublegR(void *p) {
      delete ((::bdm::ParallelResizeVector<double>*)p);
   }
   static void deleteArray_bdmcLcLParallelResizeVectorlEdoublegR(void *p) {
      delete [] ((::bdm::ParallelResizeVector<double>*)p);
   }
   static void destruct_bdmcLcLParallelResizeVectorlEdoublegR(void *p) {
      typedef ::bdm::ParallelResizeVector<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::ParallelResizeVector<double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLParallelResizeVectorlEbdmcLcLGridcLcLBoxgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::ParallelResizeVector<bdm::Grid::Box> : new ::bdm::ParallelResizeVector<bdm::Grid::Box>;
   }
   static void *newArray_bdmcLcLParallelResizeVectorlEbdmcLcLGridcLcLBoxgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::ParallelResizeVector<bdm::Grid::Box>[nElements] : new ::bdm::ParallelResizeVector<bdm::Grid::Box>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLParallelResizeVectorlEbdmcLcLGridcLcLBoxgR(void *p) {
      delete ((::bdm::ParallelResizeVector<bdm::Grid::Box>*)p);
   }
   static void deleteArray_bdmcLcLParallelResizeVectorlEbdmcLcLGridcLcLBoxgR(void *p) {
      delete [] ((::bdm::ParallelResizeVector<bdm::Grid::Box>*)p);
   }
   static void destruct_bdmcLcLParallelResizeVectorlEbdmcLcLGridcLcLBoxgR(void *p) {
      typedef ::bdm::ParallelResizeVector<bdm::Grid::Box> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::ParallelResizeVector<bdm::Grid::Box>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLGridcLcLBox(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Grid::Box : new ::bdm::Grid::Box;
   }
   static void *newArray_bdmcLcLGridcLcLBox(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Grid::Box[nElements] : new ::bdm::Grid::Box[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLGridcLcLBox(void *p) {
      delete ((::bdm::Grid::Box*)p);
   }
   static void deleteArray_bdmcLcLGridcLcLBox(void *p) {
      delete [] ((::bdm::Grid::Box*)p);
   }
   static void destruct_bdmcLcLGridcLcLBox(void *p) {
      typedef ::bdm::Grid::Box current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::Grid::Box

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLParallelResizeVectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::ParallelResizeVector<pair<unsigned int,const bdm::Grid::Box*> > : new ::bdm::ParallelResizeVector<pair<unsigned int,const bdm::Grid::Box*> >;
   }
   static void *newArray_bdmcLcLParallelResizeVectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::ParallelResizeVector<pair<unsigned int,const bdm::Grid::Box*> >[nElements] : new ::bdm::ParallelResizeVector<pair<unsigned int,const bdm::Grid::Box*> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLParallelResizeVectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgR(void *p) {
      delete ((::bdm::ParallelResizeVector<pair<unsigned int,const bdm::Grid::Box*> >*)p);
   }
   static void deleteArray_bdmcLcLParallelResizeVectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgR(void *p) {
      delete [] ((::bdm::ParallelResizeVector<pair<unsigned int,const bdm::Grid::Box*> >*)p);
   }
   static void destruct_bdmcLcLParallelResizeVectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgR(void *p) {
      typedef ::bdm::ParallelResizeVector<pair<unsigned int,const bdm::Grid::Box*> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::ParallelResizeVector<pair<unsigned int,const bdm::Grid::Box*> >

namespace ROOT {
   // Wrappers around operator new
   static void *new___gnu_cxxcLcL__normal_iteratorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRmUcOvectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<pair<unsigned int,const bdm::Grid::Box*>*,vector<pair<unsigned int,const bdm::Grid::Box*> > > : new ::__gnu_cxx::__normal_iterator<pair<unsigned int,const bdm::Grid::Box*>*,vector<pair<unsigned int,const bdm::Grid::Box*> > >;
   }
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRmUcOvectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<pair<unsigned int,const bdm::Grid::Box*>*,vector<pair<unsigned int,const bdm::Grid::Box*> > >[nElements] : new ::__gnu_cxx::__normal_iterator<pair<unsigned int,const bdm::Grid::Box*>*,vector<pair<unsigned int,const bdm::Grid::Box*> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete___gnu_cxxcLcL__normal_iteratorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRmUcOvectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgRsPgR(void *p) {
      delete ((::__gnu_cxx::__normal_iterator<pair<unsigned int,const bdm::Grid::Box*>*,vector<pair<unsigned int,const bdm::Grid::Box*> > >*)p);
   }
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRmUcOvectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgRsPgR(void *p) {
      delete [] ((::__gnu_cxx::__normal_iterator<pair<unsigned int,const bdm::Grid::Box*>*,vector<pair<unsigned int,const bdm::Grid::Box*> > >*)p);
   }
   static void destruct___gnu_cxxcLcL__normal_iteratorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRmUcOvectorlEpairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgRsPgRsPgR(void *p) {
      typedef ::__gnu_cxx::__normal_iterator<pair<unsigned int,const bdm::Grid::Box*>*,vector<pair<unsigned int,const bdm::Grid::Box*> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::__gnu_cxx::__normal_iterator<pair<unsigned int,const bdm::Grid::Box*>*,vector<pair<unsigned int,const bdm::Grid::Box*> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<unsigned int,const bdm::Grid::Box*> : new pair<unsigned int,const bdm::Grid::Box*>;
   }
   static void *newArray_pairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<unsigned int,const bdm::Grid::Box*>[nElements] : new pair<unsigned int,const bdm::Grid::Box*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgR(void *p) {
      delete ((pair<unsigned int,const bdm::Grid::Box*>*)p);
   }
   static void deleteArray_pairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgR(void *p) {
      delete [] ((pair<unsigned int,const bdm::Grid::Box*>*)p);
   }
   static void destruct_pairlEunsignedsPintcOconstsPbdmcLcLGridcLcLBoxmUgR(void *p) {
      typedef pair<unsigned int,const bdm::Grid::Box*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<unsigned int,const bdm::Grid::Box*>

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLSimObjectVectorlEbdmcLcLSoHandlegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::SimObjectVector<bdm::SoHandle> : new ::bdm::SimObjectVector<bdm::SoHandle>;
   }
   static void *newArray_bdmcLcLSimObjectVectorlEbdmcLcLSoHandlegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::SimObjectVector<bdm::SoHandle>[nElements] : new ::bdm::SimObjectVector<bdm::SoHandle>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLSimObjectVectorlEbdmcLcLSoHandlegR(void *p) {
      delete ((::bdm::SimObjectVector<bdm::SoHandle>*)p);
   }
   static void deleteArray_bdmcLcLSimObjectVectorlEbdmcLcLSoHandlegR(void *p) {
      delete [] ((::bdm::SimObjectVector<bdm::SoHandle>*)p);
   }
   static void destruct_bdmcLcLSimObjectVectorlEbdmcLcLSoHandlegR(void *p) {
      typedef ::bdm::SimObjectVector<bdm::SoHandle> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::SimObjectVector<bdm::SoHandle>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLGridcLcLBoxcLcLIterator(void *p) {
      delete ((::bdm::Grid::Box::Iterator*)p);
   }
   static void deleteArray_bdmcLcLGridcLcLBoxcLcLIterator(void *p) {
      delete [] ((::bdm::Grid::Box::Iterator*)p);
   }
   static void destruct_bdmcLcLGridcLcLBoxcLcLIterator(void *p) {
      typedef ::bdm::Grid::Box::Iterator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::Grid::Box::Iterator

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLGridcLcLNeighborIterator(void *p) {
      delete ((::bdm::Grid::NeighborIterator*)p);
   }
   static void deleteArray_bdmcLcLGridcLcLNeighborIterator(void *p) {
      delete [] ((::bdm::Grid::NeighborIterator*)p);
   }
   static void destruct_bdmcLcLGridcLcLNeighborIterator(void *p) {
      typedef ::bdm::Grid::NeighborIterator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::Grid::NeighborIterator

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLGridcLcLNeighborMutexBuilder(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Grid::NeighborMutexBuilder : new ::bdm::Grid::NeighborMutexBuilder;
   }
   static void *newArray_bdmcLcLGridcLcLNeighborMutexBuilder(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Grid::NeighborMutexBuilder[nElements] : new ::bdm::Grid::NeighborMutexBuilder[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLGridcLcLNeighborMutexBuilder(void *p) {
      delete ((::bdm::Grid::NeighborMutexBuilder*)p);
   }
   static void deleteArray_bdmcLcLGridcLcLNeighborMutexBuilder(void *p) {
      delete [] ((::bdm::Grid::NeighborMutexBuilder*)p);
   }
   static void destruct_bdmcLcLGridcLcLNeighborMutexBuilder(void *p) {
      typedef ::bdm::Grid::NeighborMutexBuilder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::Grid::NeighborMutexBuilder

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLGridcLcLNeighborMutexBuildercLcLNeighborMutex(void *p) {
      delete ((::bdm::Grid::NeighborMutexBuilder::NeighborMutex*)p);
   }
   static void deleteArray_bdmcLcLGridcLcLNeighborMutexBuildercLcLNeighborMutex(void *p) {
      delete [] ((::bdm::Grid::NeighborMutexBuilder::NeighborMutex*)p);
   }
   static void destruct_bdmcLcLGridcLcLNeighborMutexBuildercLcLNeighborMutex(void *p) {
      typedef ::bdm::Grid::NeighborMutexBuilder::NeighborMutex current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::Grid::NeighborMutexBuilder::NeighborMutex

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLModelInitializer(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::ModelInitializer : new ::bdm::ModelInitializer;
   }
   static void *newArray_bdmcLcLModelInitializer(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::ModelInitializer[nElements] : new ::bdm::ModelInitializer[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLModelInitializer(void *p) {
      delete ((::bdm::ModelInitializer*)p);
   }
   static void deleteArray_bdmcLcLModelInitializer(void *p) {
      delete [] ((::bdm::ModelInitializer*)p);
   }
   static void destruct_bdmcLcLModelInitializer(void *p) {
      typedef ::bdm::ModelInitializer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::ModelInitializer

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLCustomCLOParser(void *p) {
      delete ((::bdm::CustomCLOParser*)p);
   }
   static void deleteArray_bdmcLcLCustomCLOParser(void *p) {
      delete [] ((::bdm::CustomCLOParser*)p);
   }
   static void destruct_bdmcLcLCustomCLOParser(void *p) {
      typedef ::bdm::CustomCLOParser current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::CustomCLOParser

namespace bdm {
//______________________________________________________________________________
void MyCell::Streamer(TBuffer &R__b)
{
   // Stream an object of class bdm::MyCell.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(bdm::MyCell::Class(),this);
   } else {
      R__b.WriteClassBuffer(bdm::MyCell::Class(),this);
   }
}

} // namespace bdm
namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLMyCell(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::MyCell( (TRootIOCtor *)nullptr ) : new ::bdm::MyCell( (TRootIOCtor *)nullptr );
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLMyCell(void *p) {
      delete ((::bdm::MyCell*)p);
   }
   static void deleteArray_bdmcLcLMyCell(void *p) {
      delete [] ((::bdm::MyCell*)p);
   }
   static void destruct_bdmcLcLMyCell(void *p) {
      typedef ::bdm::MyCell current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::MyCell

namespace bdm {
//______________________________________________________________________________
void GrowthModule::Streamer(TBuffer &R__b)
{
   // Stream an object of class bdm::GrowthModule.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(bdm::GrowthModule::Class(),this);
   } else {
      R__b.WriteClassBuffer(bdm::GrowthModule::Class(),this);
   }
}

} // namespace bdm
namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLGrowthModule(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::GrowthModule : new ::bdm::GrowthModule;
   }
   static void *newArray_bdmcLcLGrowthModule(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::GrowthModule[nElements] : new ::bdm::GrowthModule[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLGrowthModule(void *p) {
      delete ((::bdm::GrowthModule*)p);
   }
   static void deleteArray_bdmcLcLGrowthModule(void *p) {
      delete [] ((::bdm::GrowthModule*)p);
   }
   static void destruct_bdmcLcLGrowthModule(void *p) {
      typedef ::bdm::GrowthModule current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::GrowthModule

namespace ROOT {
   static TClass *vectorlEbdmcLcLSoHandlegR_Dictionary();
   static void vectorlEbdmcLcLSoHandlegR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLSoHandlegR(void *p = 0);
   static void *newArray_vectorlEbdmcLcLSoHandlegR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLSoHandlegR(void *p);
   static void deleteArray_vectorlEbdmcLcLSoHandlegR(void *p);
   static void destruct_vectorlEbdmcLcLSoHandlegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::SoHandle>*)
   {
      vector<bdm::SoHandle> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::SoHandle>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::SoHandle>", -2, "vector", 216,
                  typeid(vector<bdm::SoHandle>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLSoHandlegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::SoHandle>) );
      instance.SetNew(&new_vectorlEbdmcLcLSoHandlegR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLSoHandlegR);
      instance.SetDelete(&delete_vectorlEbdmcLcLSoHandlegR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLSoHandlegR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLSoHandlegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::SoHandle> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<bdm::SoHandle>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLSoHandlegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bdm::SoHandle>*)0x0)->GetClass();
      vectorlEbdmcLcLSoHandlegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLSoHandlegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLSoHandlegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::SoHandle> : new vector<bdm::SoHandle>;
   }
   static void *newArray_vectorlEbdmcLcLSoHandlegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::SoHandle>[nElements] : new vector<bdm::SoHandle>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLSoHandlegR(void *p) {
      delete ((vector<bdm::SoHandle>*)p);
   }
   static void deleteArray_vectorlEbdmcLcLSoHandlegR(void *p) {
      delete [] ((vector<bdm::SoHandle>*)p);
   }
   static void destruct_vectorlEbdmcLcLSoHandlegR(void *p) {
      typedef vector<bdm::SoHandle> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::SoHandle>

namespace ROOT {
   static TClass *vectorlEbdmcLcLSimObjectmUgR_Dictionary();
   static void vectorlEbdmcLcLSimObjectmUgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLSimObjectmUgR(void *p = 0);
   static void *newArray_vectorlEbdmcLcLSimObjectmUgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLSimObjectmUgR(void *p);
   static void deleteArray_vectorlEbdmcLcLSimObjectmUgR(void *p);
   static void destruct_vectorlEbdmcLcLSimObjectmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::SimObject*>*)
   {
      vector<bdm::SimObject*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::SimObject*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::SimObject*>", -2, "vector", 216,
                  typeid(vector<bdm::SimObject*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLSimObjectmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::SimObject*>) );
      instance.SetNew(&new_vectorlEbdmcLcLSimObjectmUgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLSimObjectmUgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLSimObjectmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLSimObjectmUgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLSimObjectmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::SimObject*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<bdm::SimObject*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLSimObjectmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bdm::SimObject*>*)0x0)->GetClass();
      vectorlEbdmcLcLSimObjectmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLSimObjectmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLSimObjectmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::SimObject*> : new vector<bdm::SimObject*>;
   }
   static void *newArray_vectorlEbdmcLcLSimObjectmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::SimObject*>[nElements] : new vector<bdm::SimObject*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLSimObjectmUgR(void *p) {
      delete ((vector<bdm::SimObject*>*)p);
   }
   static void deleteArray_vectorlEbdmcLcLSimObjectmUgR(void *p) {
      delete [] ((vector<bdm::SimObject*>*)p);
   }
   static void destruct_vectorlEbdmcLcLSimObjectmUgR(void *p) {
      typedef vector<bdm::SimObject*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::SimObject*>

namespace ROOT {
   static TClass *vectorlEbdmcLcLRandommUgR_Dictionary();
   static void vectorlEbdmcLcLRandommUgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLRandommUgR(void *p = 0);
   static void *newArray_vectorlEbdmcLcLRandommUgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLRandommUgR(void *p);
   static void deleteArray_vectorlEbdmcLcLRandommUgR(void *p);
   static void destruct_vectorlEbdmcLcLRandommUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::Random*>*)
   {
      vector<bdm::Random*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::Random*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::Random*>", -2, "vector", 216,
                  typeid(vector<bdm::Random*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLRandommUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::Random*>) );
      instance.SetNew(&new_vectorlEbdmcLcLRandommUgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLRandommUgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLRandommUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLRandommUgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLRandommUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::Random*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<bdm::Random*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLRandommUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bdm::Random*>*)0x0)->GetClass();
      vectorlEbdmcLcLRandommUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLRandommUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLRandommUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::Random*> : new vector<bdm::Random*>;
   }
   static void *newArray_vectorlEbdmcLcLRandommUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::Random*>[nElements] : new vector<bdm::Random*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLRandommUgR(void *p) {
      delete ((vector<bdm::Random*>*)p);
   }
   static void deleteArray_vectorlEbdmcLcLRandommUgR(void *p) {
      delete [] ((vector<bdm::Random*>*)p);
   }
   static void destruct_vectorlEbdmcLcLRandommUgR(void *p) {
      typedef vector<bdm::Random*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::Random*>

namespace ROOT {
   static TClass *vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR_Dictionary();
   static void vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(void *p = 0);
   static void *newArray_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(void *p);
   static void deleteArray_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(void *p);
   static void destruct_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::Param::VisualizeDiffusion>*)
   {
      vector<bdm::Param::VisualizeDiffusion> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::Param::VisualizeDiffusion>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::Param::VisualizeDiffusion>", -2, "vector", 216,
                  typeid(vector<bdm::Param::VisualizeDiffusion>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::Param::VisualizeDiffusion>) );
      instance.SetNew(&new_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR);
      instance.SetDelete(&delete_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::Param::VisualizeDiffusion> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<bdm::Param::VisualizeDiffusion>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bdm::Param::VisualizeDiffusion>*)0x0)->GetClass();
      vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::Param::VisualizeDiffusion> : new vector<bdm::Param::VisualizeDiffusion>;
   }
   static void *newArray_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::Param::VisualizeDiffusion>[nElements] : new vector<bdm::Param::VisualizeDiffusion>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(void *p) {
      delete ((vector<bdm::Param::VisualizeDiffusion>*)p);
   }
   static void deleteArray_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(void *p) {
      delete [] ((vector<bdm::Param::VisualizeDiffusion>*)p);
   }
   static void destruct_vectorlEbdmcLcLParamcLcLVisualizeDiffusiongR(void *p) {
      typedef vector<bdm::Param::VisualizeDiffusion> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::Param::VisualizeDiffusion>

namespace ROOT {
   static TClass *vectorlEbdmcLcLOperationgR_Dictionary();
   static void vectorlEbdmcLcLOperationgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLOperationgR(void *p = 0);
   static void *newArray_vectorlEbdmcLcLOperationgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLOperationgR(void *p);
   static void deleteArray_vectorlEbdmcLcLOperationgR(void *p);
   static void destruct_vectorlEbdmcLcLOperationgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::Operation>*)
   {
      vector<bdm::Operation> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::Operation>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::Operation>", -2, "vector", 216,
                  typeid(vector<bdm::Operation>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLOperationgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::Operation>) );
      instance.SetNew(&new_vectorlEbdmcLcLOperationgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLOperationgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLOperationgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLOperationgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLOperationgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::Operation> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<bdm::Operation>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLOperationgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bdm::Operation>*)0x0)->GetClass();
      vectorlEbdmcLcLOperationgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLOperationgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLOperationgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::Operation> : new vector<bdm::Operation>;
   }
   static void *newArray_vectorlEbdmcLcLOperationgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::Operation>[nElements] : new vector<bdm::Operation>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLOperationgR(void *p) {
      delete ((vector<bdm::Operation>*)p);
   }
   static void deleteArray_vectorlEbdmcLcLOperationgR(void *p) {
      delete [] ((vector<bdm::Operation>*)p);
   }
   static void destruct_vectorlEbdmcLcLOperationgR(void *p) {
      typedef vector<bdm::Operation> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::Operation>

namespace ROOT {
   static TClass *vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR_Dictionary();
   static void vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p = 0);
   static void *newArray_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p);
   static void deleteArray_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p);
   static void destruct_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::MathArray<double,3> >*)
   {
      vector<bdm::MathArray<double,3> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::MathArray<double,3> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::MathArray<double,3> >", -2, "vector", 216,
                  typeid(vector<bdm::MathArray<double,3> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::MathArray<double,3> >) );
      instance.SetNew(&new_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::MathArray<double,3> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<bdm::MathArray<double,3> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bdm::MathArray<double,3> >*)0x0)->GetClass();
      vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::MathArray<double,3> > : new vector<bdm::MathArray<double,3> >;
   }
   static void *newArray_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::MathArray<double,3> >[nElements] : new vector<bdm::MathArray<double,3> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p) {
      delete ((vector<bdm::MathArray<double,3> >*)p);
   }
   static void deleteArray_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p) {
      delete [] ((vector<bdm::MathArray<double,3> >*)p);
   }
   static void destruct_vectorlEbdmcLcLMathArraylEdoublecO3gRsPgR(void *p) {
      typedef vector<bdm::MathArray<double,3> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::MathArray<double,3> >

namespace ROOT {
   static TClass *vectorlEbdmcLcLInlineVectorlEintcO8gRsPgR_Dictionary();
   static void vectorlEbdmcLcLInlineVectorlEintcO8gRsPgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLInlineVectorlEintcO8gRsPgR(void *p = 0);
   static void *newArray_vectorlEbdmcLcLInlineVectorlEintcO8gRsPgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLInlineVectorlEintcO8gRsPgR(void *p);
   static void deleteArray_vectorlEbdmcLcLInlineVectorlEintcO8gRsPgR(void *p);
   static void destruct_vectorlEbdmcLcLInlineVectorlEintcO8gRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::InlineVector<int,8> >*)
   {
      vector<bdm::InlineVector<int,8> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::InlineVector<int,8> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::InlineVector<int,8> >", -2, "vector", 216,
                  typeid(vector<bdm::InlineVector<int,8> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLInlineVectorlEintcO8gRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::InlineVector<int,8> >) );
      instance.SetNew(&new_vectorlEbdmcLcLInlineVectorlEintcO8gRsPgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLInlineVectorlEintcO8gRsPgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLInlineVectorlEintcO8gRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLInlineVectorlEintcO8gRsPgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLInlineVectorlEintcO8gRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::InlineVector<int,8> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<bdm::InlineVector<int,8> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLInlineVectorlEintcO8gRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bdm::InlineVector<int,8> >*)0x0)->GetClass();
      vectorlEbdmcLcLInlineVectorlEintcO8gRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLInlineVectorlEintcO8gRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLInlineVectorlEintcO8gRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::InlineVector<int,8> > : new vector<bdm::InlineVector<int,8> >;
   }
   static void *newArray_vectorlEbdmcLcLInlineVectorlEintcO8gRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::InlineVector<int,8> >[nElements] : new vector<bdm::InlineVector<int,8> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLInlineVectorlEintcO8gRsPgR(void *p) {
      delete ((vector<bdm::InlineVector<int,8> >*)p);
   }
   static void deleteArray_vectorlEbdmcLcLInlineVectorlEintcO8gRsPgR(void *p) {
      delete [] ((vector<bdm::InlineVector<int,8> >*)p);
   }
   static void destruct_vectorlEbdmcLcLInlineVectorlEintcO8gRsPgR(void *p) {
      typedef vector<bdm::InlineVector<int,8> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::InlineVector<int,8> >

namespace ROOT {
   static TClass *vectorlEbdmcLcLInPlaceExecutionContextmUgR_Dictionary();
   static void vectorlEbdmcLcLInPlaceExecutionContextmUgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLInPlaceExecutionContextmUgR(void *p = 0);
   static void *newArray_vectorlEbdmcLcLInPlaceExecutionContextmUgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLInPlaceExecutionContextmUgR(void *p);
   static void deleteArray_vectorlEbdmcLcLInPlaceExecutionContextmUgR(void *p);
   static void destruct_vectorlEbdmcLcLInPlaceExecutionContextmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::InPlaceExecutionContext*>*)
   {
      vector<bdm::InPlaceExecutionContext*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::InPlaceExecutionContext*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::InPlaceExecutionContext*>", -2, "vector", 216,
                  typeid(vector<bdm::InPlaceExecutionContext*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLInPlaceExecutionContextmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::InPlaceExecutionContext*>) );
      instance.SetNew(&new_vectorlEbdmcLcLInPlaceExecutionContextmUgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLInPlaceExecutionContextmUgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLInPlaceExecutionContextmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLInPlaceExecutionContextmUgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLInPlaceExecutionContextmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::InPlaceExecutionContext*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<bdm::InPlaceExecutionContext*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLInPlaceExecutionContextmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bdm::InPlaceExecutionContext*>*)0x0)->GetClass();
      vectorlEbdmcLcLInPlaceExecutionContextmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLInPlaceExecutionContextmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLInPlaceExecutionContextmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::InPlaceExecutionContext*> : new vector<bdm::InPlaceExecutionContext*>;
   }
   static void *newArray_vectorlEbdmcLcLInPlaceExecutionContextmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::InPlaceExecutionContext*>[nElements] : new vector<bdm::InPlaceExecutionContext*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLInPlaceExecutionContextmUgR(void *p) {
      delete ((vector<bdm::InPlaceExecutionContext*>*)p);
   }
   static void deleteArray_vectorlEbdmcLcLInPlaceExecutionContextmUgR(void *p) {
      delete [] ((vector<bdm::InPlaceExecutionContext*>*)p);
   }
   static void destruct_vectorlEbdmcLcLInPlaceExecutionContextmUgR(void *p) {
      typedef vector<bdm::InPlaceExecutionContext*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::InPlaceExecutionContext*>

namespace ROOT {
   static TClass *vectorlEbdmcLcLGridcLcLNeighborMutexBuildercLcLMutexWrappergR_Dictionary();
   static void vectorlEbdmcLcLGridcLcLNeighborMutexBuildercLcLMutexWrappergR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLGridcLcLNeighborMutexBuildercLcLMutexWrappergR(void *p = 0);
   static void *newArray_vectorlEbdmcLcLGridcLcLNeighborMutexBuildercLcLMutexWrappergR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLGridcLcLNeighborMutexBuildercLcLMutexWrappergR(void *p);
   static void deleteArray_vectorlEbdmcLcLGridcLcLNeighborMutexBuildercLcLMutexWrappergR(void *p);
   static void destruct_vectorlEbdmcLcLGridcLcLNeighborMutexBuildercLcLMutexWrappergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::Grid::NeighborMutexBuilder::MutexWrapper>*)
   {
      vector<bdm::Grid::NeighborMutexBuilder::MutexWrapper> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::Grid::NeighborMutexBuilder::MutexWrapper>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::Grid::NeighborMutexBuilder::MutexWrapper>", -2, "vector", 216,
                  typeid(vector<bdm::Grid::NeighborMutexBuilder::MutexWrapper>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLGridcLcLNeighborMutexBuildercLcLMutexWrappergR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::Grid::NeighborMutexBuilder::MutexWrapper>) );
      instance.SetNew(&new_vectorlEbdmcLcLGridcLcLNeighborMutexBuildercLcLMutexWrappergR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLGridcLcLNeighborMutexBuildercLcLMutexWrappergR);
      instance.SetDelete(&delete_vectorlEbdmcLcLGridcLcLNeighborMutexBuildercLcLMutexWrappergR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLGridcLcLNeighborMutexBuildercLcLMutexWrappergR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLGridcLcLNeighborMutexBuildercLcLMutexWrappergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::Grid::NeighborMutexBuilder::MutexWrapper> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<bdm::Grid::NeighborMutexBuilder::MutexWrapper>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLGridcLcLNeighborMutexBuildercLcLMutexWrappergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bdm::Grid::NeighborMutexBuilder::MutexWrapper>*)0x0)->GetClass();
      vectorlEbdmcLcLGridcLcLNeighborMutexBuildercLcLMutexWrappergR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLGridcLcLNeighborMutexBuildercLcLMutexWrappergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLGridcLcLNeighborMutexBuildercLcLMutexWrappergR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::Grid::NeighborMutexBuilder::MutexWrapper> : new vector<bdm::Grid::NeighborMutexBuilder::MutexWrapper>;
   }
   static void *newArray_vectorlEbdmcLcLGridcLcLNeighborMutexBuildercLcLMutexWrappergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::Grid::NeighborMutexBuilder::MutexWrapper>[nElements] : new vector<bdm::Grid::NeighborMutexBuilder::MutexWrapper>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLGridcLcLNeighborMutexBuildercLcLMutexWrappergR(void *p) {
      delete ((vector<bdm::Grid::NeighborMutexBuilder::MutexWrapper>*)p);
   }
   static void deleteArray_vectorlEbdmcLcLGridcLcLNeighborMutexBuildercLcLMutexWrappergR(void *p) {
      delete [] ((vector<bdm::Grid::NeighborMutexBuilder::MutexWrapper>*)p);
   }
   static void destruct_vectorlEbdmcLcLGridcLcLNeighborMutexBuildercLcLMutexWrappergR(void *p) {
      typedef vector<bdm::Grid::NeighborMutexBuilder::MutexWrapper> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::Grid::NeighborMutexBuilder::MutexWrapper>

namespace ROOT {
   static TClass *vectorlEbdmcLcLGridcLcLBoxgR_Dictionary();
   static void vectorlEbdmcLcLGridcLcLBoxgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLGridcLcLBoxgR(void *p = 0);
   static void *newArray_vectorlEbdmcLcLGridcLcLBoxgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLGridcLcLBoxgR(void *p);
   static void deleteArray_vectorlEbdmcLcLGridcLcLBoxgR(void *p);
   static void destruct_vectorlEbdmcLcLGridcLcLBoxgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::Grid::Box>*)
   {
      vector<bdm::Grid::Box> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::Grid::Box>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::Grid::Box>", -2, "vector", 216,
                  typeid(vector<bdm::Grid::Box>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLGridcLcLBoxgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::Grid::Box>) );
      instance.SetNew(&new_vectorlEbdmcLcLGridcLcLBoxgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLGridcLcLBoxgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLGridcLcLBoxgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLGridcLcLBoxgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLGridcLcLBoxgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::Grid::Box> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<bdm::Grid::Box>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLGridcLcLBoxgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bdm::Grid::Box>*)0x0)->GetClass();
      vectorlEbdmcLcLGridcLcLBoxgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLGridcLcLBoxgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLGridcLcLBoxgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::Grid::Box> : new vector<bdm::Grid::Box>;
   }
   static void *newArray_vectorlEbdmcLcLGridcLcLBoxgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::Grid::Box>[nElements] : new vector<bdm::Grid::Box>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLGridcLcLBoxgR(void *p) {
      delete ((vector<bdm::Grid::Box>*)p);
   }
   static void deleteArray_vectorlEbdmcLcLGridcLcLBoxgR(void *p) {
      delete [] ((vector<bdm::Grid::Box>*)p);
   }
   static void destruct_vectorlEbdmcLcLGridcLcLBoxgR(void *p) {
      typedef vector<bdm::Grid::Box> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::Grid::Box>

namespace ROOT {
   static TClass *vectorlEbdmcLcLBaseBiologyModulemUgR_Dictionary();
   static void vectorlEbdmcLcLBaseBiologyModulemUgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLBaseBiologyModulemUgR(void *p = 0);
   static void *newArray_vectorlEbdmcLcLBaseBiologyModulemUgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLBaseBiologyModulemUgR(void *p);
   static void deleteArray_vectorlEbdmcLcLBaseBiologyModulemUgR(void *p);
   static void destruct_vectorlEbdmcLcLBaseBiologyModulemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::BaseBiologyModule*>*)
   {
      vector<bdm::BaseBiologyModule*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::BaseBiologyModule*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::BaseBiologyModule*>", -2, "vector", 216,
                  typeid(vector<bdm::BaseBiologyModule*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLBaseBiologyModulemUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::BaseBiologyModule*>) );
      instance.SetNew(&new_vectorlEbdmcLcLBaseBiologyModulemUgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLBaseBiologyModulemUgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLBaseBiologyModulemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLBaseBiologyModulemUgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLBaseBiologyModulemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::BaseBiologyModule*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<bdm::BaseBiologyModule*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLBaseBiologyModulemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bdm::BaseBiologyModule*>*)0x0)->GetClass();
      vectorlEbdmcLcLBaseBiologyModulemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLBaseBiologyModulemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLBaseBiologyModulemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::BaseBiologyModule*> : new vector<bdm::BaseBiologyModule*>;
   }
   static void *newArray_vectorlEbdmcLcLBaseBiologyModulemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::BaseBiologyModule*>[nElements] : new vector<bdm::BaseBiologyModule*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLBaseBiologyModulemUgR(void *p) {
      delete ((vector<bdm::BaseBiologyModule*>*)p);
   }
   static void deleteArray_vectorlEbdmcLcLBaseBiologyModulemUgR(void *p) {
      delete [] ((vector<bdm::BaseBiologyModule*>*)p);
   }
   static void destruct_vectorlEbdmcLcLBaseBiologyModulemUgR(void *p) {
      typedef vector<bdm::BaseBiologyModule*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::BaseBiologyModule*>

namespace {
  void TriggerDictionaryInitialization_proto_test_dict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/usr/include",
"/home/yuri/bdm/third_party/paraview/include/paraview-5.6",
"/home/yuri/bdm/third_party/paraview/include",
"/home/testuser/bdm-build-third-party/paraview-build/install/include",
"/home/testuser/bdm-build-third-party/paraview-build/install/include/python2.7",
"/usr/lib/x86_64-linux-gnu/openmpi/include/openmpi",
"/usr/lib/x86_64-linux-gnu/openmpi/include/openmpi/opal/mca/event/libevent2022/libevent",
"/usr/lib/x86_64-linux-gnu/openmpi/include/openmpi/opal/mca/event/libevent2022/libevent/include",
"/usr/lib/x86_64-linux-gnu/openmpi/include",
"/home/yuri/bdm/third_party/root/include",
"/home/yuri/Documents/ProtocellSimulator/proto_test/build/omp",
"/home/yuri/bdm/share/cmake/../../include",
"/home/yuri/Documents/ProtocellSimulator/proto_test/src",
"/home/yuri/bdm/third_party/root/include",
"/home/yuri/Documents/ProtocellSimulator/proto_test/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "proto_test_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace bdm{class __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/execution_context/in_place_exec_ctxt.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  InPlaceExecutionContext;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace bdm{struct __attribute__((annotate("$clingAutoload$core/operation/operation.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  Operation;}
namespace bdm{class __attribute__((annotate("$clingAutoload$core/util/random.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  Random;}
namespace bdm{struct __attribute__((annotate("$clingAutoload$core/biology_module/biology_module.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  BaseBiologyModule;}
namespace bdm{class __attribute__((annotate("$clingAutoload$core/sim_object/sim_object.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  SimObject;}
namespace bdm{class __attribute__((annotate("$clingAutoload$core/resource_manager.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  SoHandle;}
namespace bdm{template <class T, std::size_t N> class __attribute__((annotate("$clingAutoload$core/container/math_array.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  MathArray;
}
namespace bdm{template <typename T, std::size_t N> class __attribute__((annotate("$clingAutoload$core/container/inline_vector.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  InlineVector;
}
namespace bdm{class __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/util/log.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  Log;}
namespace bdm{class __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/event/event.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  UniqueEventIdFactory;}
namespace bdm{struct __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/event/event.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  Event;}
namespace bdm{class __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/sim_object/so_uid.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  SoUidGenerator;}
namespace bdm{class __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/util/thread_info.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  ThreadInfo;}
namespace bdm{template <typename T> struct __attribute__((annotate("$clingAutoload$core/sim_object/so_pointer.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  is_so_ptr;
}
namespace bdm{namespace detail{struct __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/sim_object/so_pointer.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  ExtractUidPtr;}}
namespace bdm{struct __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/event/cell_division_event.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  CellDivisionEvent;}
namespace bdm{class __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/default_force.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  DefaultForce;}
namespace bdm{class __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/param/module_param.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  ModuleParamUidGenerator;}
namespace bdm{struct __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/util/math.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  Math;}
namespace bdm{class __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/scheduler.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  Scheduler;}
namespace bdm{template <typename T> class __attribute__((annotate("$clingAutoload$core/container/parallel_resize_vector.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  ParallelResizeVector;
}
namespace bdm{template <typename T> class __attribute__((annotate("$clingAutoload$core/container/sim_object_vector.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  SimObjectVector;
}
namespace bdm{struct __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/model_initializer.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  ModelInitializer;}
namespace bdm{struct __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/param/custom_clo_parser.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  CustomCLOParser;}
namespace bdm{class __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$protocell.h")))  MyCell;}
namespace bdm{struct __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$my_growth.h")))  GrowthModule;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "proto_test_dict dictionary payload"

#ifndef BDM_SRC_DIR
  #define BDM_SRC_DIR "/home/yuri/bdm//include"
#endif
#ifndef USE_NUMA
  #define USE_NUMA 1
#endif
#ifndef MPICH_IGNORE_CXX_SEEK
  #define MPICH_IGNORE_CXX_SEEK 1
#endif
#ifndef USE_CATALYST
  #define USE_CATALYST 1
#endif
#ifndef USE_DICT
  #define USE_DICT 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// -----------------------------------------------------------------------------
//
// Copyright (C) The BioDynaMo Project.
// All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
//
// See the LICENSE file distributed with this work for details.
// See the NOTICE file distributed with this work for additional information
// regarding copyright ownership.
//
// -----------------------------------------------------------------------------
#ifndef PROTO_TEST_H_
#define PROTO_TEST_H_

#include "biodynamo.h"
#include "protocell.h"
#include "my_growth.h"

namespace bdm {

inline int Simulate(int argc, const char** argv) {
  auto set_param = [](Param* param){
    param->bound_space_ = true;
    param->min_bound_ = 0;
    param->max_bound_ = 100;  //cube of 100*100*100
  };

  Simulation simulation(argc, argv, set_param);

  auto* rm = simulation.GetResourceManager(); //it stores the simulation objects
  auto* random = simulation.GetRandom(); //random number 
  auto* param = simulation.GetParam(); //simulation parameters

  size_t nb_of_cells = 50; //number of cells in the simulation
  double x_coord, y_coord, z_coord;

  for(size_t i = 0; i <= nb_of_cells; i++){
  // our modelling will be a cell cube of 100*100*100
  // random double between 0 and 100
    x_coord = random->Uniform(param->min_bound_, param->max_bound_);
    y_coord = random->Uniform(param->min_bound_, param->max_bound_);
    z_coord = random->Uniform(param->min_bound_, param->max_bound_);

    //Creates the cell at posizion x,y,z
    MyCell* cell = new MyCell({x_coord,y_coord,z_coord});
    //Set cells parameters
    cell->AddBiologyModule(new GrowthModule());
    cell->SetDiameter(7.5);
    //cell->SetCellColor(1000);
    rm->push_back(cell); //put the create cell in the cell structure
  }

  //Simulate the model for 200 steps
  simulation.GetScheduler()->Simulate(200);
  
  std::cout << "Simulation completed successfully!" << std::endl;
  return 0;
}

}  // namespace bdm

#endif  // PROTO_TEST_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"", payloadCode, "@",
"__gnu_cxx::__normal_iterator<pair<unsigned int,const bdm::Grid::Box*>*,vector<pair<unsigned int,const bdm::Grid::Box*> > >", payloadCode, "@",
"bdm::CellDivisionEvent", payloadCode, "@",
"bdm::CustomCLOParser", payloadCode, "@",
"bdm::DefaultForce", payloadCode, "@",
"bdm::Event", payloadCode, "@",
"bdm::FixedSizeVector<const bdm::Grid::Box*,27>", payloadCode, "@",
"bdm::FixedSizeVector<unsigned long,14>", payloadCode, "@",
"bdm::FixedSizeVector<unsigned long,27>", payloadCode, "@",
"bdm::Grid", payloadCode, "@",
"bdm::Grid::Adjacency", payloadCode, "@",
"bdm::GrowthModule", payloadCode, "@",
"bdm::InPlaceExecutionContext", payloadCode, "@",
"bdm::Log", payloadCode, "@",
"bdm::Math", payloadCode, "@",
"bdm::ModelInitializer", payloadCode, "@",
"bdm::ModuleParamUidGenerator", payloadCode, "@",
"bdm::MyCell", payloadCode, "@",
"bdm::ParallelResizeVector<bdm::Grid::Box>", payloadCode, "@",
"bdm::ParallelResizeVector<double>", payloadCode, "@",
"bdm::ParallelResizeVector<pair<unsigned int,const bdm::Grid::Box*> >", payloadCode, "@",
"bdm::Param", payloadCode, "@",
"bdm::Param::NumericalODESolver", payloadCode, "@",
"bdm::Scheduler", payloadCode, "@",
"bdm::SimObjectVector<bdm::SoHandle>", payloadCode, "@",
"bdm::SoUidGenerator", payloadCode, "@",
"bdm::ThreadInfo", payloadCode, "@",
"bdm::UniqueEventIdFactory", payloadCode, "@",
"bdm::detail::ExtractUidPtr", payloadCode, "@",
"bdm::is_so_ptr<bdm::MathArray<double,3> >", payloadCode, "@",
"bdm::is_so_ptr<bool>", payloadCode, "@",
"bdm::is_so_ptr<double>", payloadCode, "@",
"bdm::is_so_ptr<int>", payloadCode, "@",
"bdm::is_so_ptr<unsigned int>", payloadCode, "@",
"bdm::is_so_ptr<unsigned long>", payloadCode, "@",
"bdm::is_so_ptr<vector<bdm::BaseBiologyModule*> >", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("proto_test_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_proto_test_dict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_proto_test_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_proto_test_dict() {
  TriggerDictionaryInitialization_proto_test_dict_Impl();
}
