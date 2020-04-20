// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIyuridIDocumentsdIProtocellSimulatordIelementare_7dIbuilddIsbml_integration_dict
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
#include "/home/yuri/Documents/ProtocellSimulator/elementare_7/src/sbml_integration.h"

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

namespace bdm {
   namespace experimental {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *bdmcLcLexperimental_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("bdm::experimental", 0 /*version*/, "neuroscience/event/neurite_bifurcation_event.h", 24,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &bdmcLcLexperimental_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *bdmcLcLexperimental_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace bdm {
   namespace experimental {
      namespace neuroscience {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *bdmcLcLexperimentalcLcLneuroscience_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("bdm::experimental::neuroscience", 0 /*version*/, "neuroscience/event/neurite_bifurcation_event.h", 25,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &bdmcLcLexperimentalcLcLneuroscience_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *bdmcLcLexperimentalcLcLneuroscience_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

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
         instance("bdm::Log", "core/util/log.h", 31,
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
   static TClass *bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegR_Dictionary();
   static void bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegR_TClassManip(TClass*);
   static void *new_bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegR(void *p = 0);
   static void *newArray_bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegR(Long_t size, void *p);
   static void delete_bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegR(void *p);
   static void deleteArray_bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegR(void *p);
   static void destruct_bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite>*)
   {
      ::bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite>", ::bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite>::Class_Version(), "core/sim_object/so_pointer.h", 40,
                  typeid(::bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite>) );
      instance.SetNew(&new_bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegR);
      instance.SetNewArray(&newArray_bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegR);
      instance.SetDelete(&delete_bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegR);
      instance.SetDestructor(&destruct_bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite>*)
   {
      return GenerateInitInstanceLocal((::bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite>*)0x0)->GetClass();
      bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgR_Dictionary();
   static void bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgR_TClassManip(TClass*);
   static void *new_bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgR(void *p = 0);
   static void *newArray_bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgR(Long_t size, void *p);
   static void delete_bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgR(void *p);
   static void deleteArray_bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgR(void *p);
   static void destruct_bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement>*)
   {
      ::bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement>", ::bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement>::Class_Version(), "core/sim_object/so_pointer.h", 40,
                  typeid(::bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement>) );
      instance.SetNew(&new_bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgR);
      instance.SetNewArray(&newArray_bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgR);
      instance.SetDelete(&delete_bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgR);
      instance.SetDestructor(&destruct_bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement>*)
   {
      return GenerateInitInstanceLocal((::bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement>*)0x0)->GetClass();
      bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgR_TClassManip(TClass* ){
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
   static TClass *bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR_Dictionary();
   static void bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR(void *p = 0);
   static void *newArray_bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR(Long_t size, void *p);
   static void delete_bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR(void *p);
   static void deleteArray_bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR(void *p);
   static void destruct_bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > >*)
   {
      ::bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > >));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > >", "core/sim_object/so_pointer.h", 115,
                  typeid(::bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > >) );
      instance.SetNew(&new_bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR);
      instance.SetNewArray(&newArray_bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR);
      instance.SetDelete(&delete_bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > >*)
   {
      return GenerateInitInstanceLocal((::bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > >*)0x0)->GetClass();
      bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLis_so_ptrlEunordered_maplEunsignedsPlongcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR_Dictionary();
   static void bdmcLcLis_so_ptrlEunordered_maplEunsignedsPlongcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLis_so_ptrlEunordered_maplEunsignedsPlongcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR(void *p = 0);
   static void *newArray_bdmcLcLis_so_ptrlEunordered_maplEunsignedsPlongcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR(Long_t size, void *p);
   static void delete_bdmcLcLis_so_ptrlEunordered_maplEunsignedsPlongcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR(void *p);
   static void deleteArray_bdmcLcLis_so_ptrlEunordered_maplEunsignedsPlongcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR(void *p);
   static void destruct_bdmcLcLis_so_ptrlEunordered_maplEunsignedsPlongcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::is_so_ptr<unordered_map<unsigned long,bdm::MathArray<double,3> > >*)
   {
      ::bdm::is_so_ptr<unordered_map<unsigned long,bdm::MathArray<double,3> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::is_so_ptr<unordered_map<unsigned long,bdm::MathArray<double,3> > >));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::is_so_ptr<unordered_map<unsigned long,bdm::MathArray<double,3> > >", "core/sim_object/so_pointer.h", 115,
                  typeid(::bdm::is_so_ptr<unordered_map<unsigned long,bdm::MathArray<double,3> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLis_so_ptrlEunordered_maplEunsignedsPlongcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::is_so_ptr<unordered_map<unsigned long,bdm::MathArray<double,3> > >) );
      instance.SetNew(&new_bdmcLcLis_so_ptrlEunordered_maplEunsignedsPlongcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR);
      instance.SetNewArray(&newArray_bdmcLcLis_so_ptrlEunordered_maplEunsignedsPlongcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR);
      instance.SetDelete(&delete_bdmcLcLis_so_ptrlEunordered_maplEunsignedsPlongcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLis_so_ptrlEunordered_maplEunsignedsPlongcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLis_so_ptrlEunordered_maplEunsignedsPlongcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::is_so_ptr<unordered_map<unsigned long,bdm::MathArray<double,3> > >*)
   {
      return GenerateInitInstanceLocal((::bdm::is_so_ptr<unordered_map<unsigned long,bdm::MathArray<double,3> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::is_so_ptr<unordered_map<unsigned long,bdm::MathArray<double,3> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLis_so_ptrlEunordered_maplEunsignedsPlongcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::is_so_ptr<unordered_map<unsigned long,bdm::MathArray<double,3> > >*)0x0)->GetClass();
      bdmcLcLis_so_ptrlEunordered_maplEunsignedsPlongcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLis_so_ptrlEunordered_maplEunsignedsPlongcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR_TClassManip(TClass* ){
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
   static TClass *bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR_Dictionary();
   static void bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR(void *p = 0);
   static void *newArray_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR(Long_t size, void *p);
   static void delete_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR(void *p);
   static void deleteArray_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR(void *p);
   static void destruct_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> >*)
   {
      ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> >));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> >", "core/sim_object/so_pointer.h", 120,
                  typeid(::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> >) );
      instance.SetNew(&new_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR);
      instance.SetNewArray(&newArray_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR);
      instance.SetDelete(&delete_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> >*)
   {
      return GenerateInitInstanceLocal((::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> >*)0x0)->GetClass();
      bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR_Dictionary();
   static void bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR_TClassManip(TClass*);
   static void *new_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p = 0);
   static void *newArray_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(Long_t size, void *p);
   static void delete_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p);
   static void deleteArray_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p);
   static void destruct_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >*)
   {
      ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >", "core/sim_object/so_pointer.h", 120,
                  typeid(::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >) );
      instance.SetNew(&new_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR);
      instance.SetNewArray(&newArray_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR);
      instance.SetDelete(&delete_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR);
      instance.SetDeleteArray(&deleteArray_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR);
      instance.SetDestructor(&destruct_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >*)
   {
      return GenerateInitInstanceLocal((::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >*)0x0)->GetClass();
      bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR_TClassManip(TClass* ){
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
         instance("bdm::Param::VisualizeDiffusion", "core/param/param.h", 239,
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
         instance("bdm::Math", "core/util/math.h", 30,
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
         instance("bdm::Scheduler", "core/scheduler.h", 35,
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
         instance("bdm::ParallelResizeVector<double>", "core/container/parallel_resize_vector.h", 25,
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
         instance("bdm::ParallelResizeVector<bdm::Grid::Box>", "core/container/parallel_resize_vector.h", 25,
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
         instance("bdm::Grid::Box", "core/grid.h", 101,
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
         instance("bdm::ParallelResizeVector<pair<unsigned int,const bdm::Grid::Box*> >", "core/container/parallel_resize_vector.h", 25,
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
         instance("pair<unsigned int,const bdm::Grid::Box*>", "string", 96,
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
         instance("bdm::Grid::Box::Iterator", "core/grid.h", 150,
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
         instance("bdm::Grid::NeighborIterator", "core/grid.h", 184,
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
         instance("bdm::Grid::NeighborMutexBuilder", "core/grid.h", 667,
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
         instance("bdm::Grid::NeighborMutexBuilder::NeighborMutex", "core/grid.h", 672,
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
   static TClass *bdmcLcLVersion_Dictionary();
   static void bdmcLcLVersion_TClassManip(TClass*);
   static void *new_bdmcLcLVersion(void *p = 0);
   static void *newArray_bdmcLcLVersion(Long_t size, void *p);
   static void delete_bdmcLcLVersion(void *p);
   static void deleteArray_bdmcLcLVersion(void *p);
   static void destruct_bdmcLcLVersion(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::Version*)
   {
      ::bdm::Version *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::Version));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::Version", "version.h", 43,
                  typeid(::bdm::Version), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLVersion_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::Version) );
      instance.SetNew(&new_bdmcLcLVersion);
      instance.SetNewArray(&newArray_bdmcLcLVersion);
      instance.SetDelete(&delete_bdmcLcLVersion);
      instance.SetDeleteArray(&deleteArray_bdmcLcLVersion);
      instance.SetDestructor(&destruct_bdmcLcLVersion);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::Version*)
   {
      return GenerateInitInstanceLocal((::bdm::Version*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::Version*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLVersion_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::Version*)0x0)->GetClass();
      bdmcLcLVersion_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLVersion_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLCommandLineOptions_Dictionary();
   static void bdmcLcLCommandLineOptions_TClassManip(TClass*);
   static void delete_bdmcLcLCommandLineOptions(void *p);
   static void deleteArray_bdmcLcLCommandLineOptions(void *p);
   static void destruct_bdmcLcLCommandLineOptions(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::CommandLineOptions*)
   {
      ::bdm::CommandLineOptions *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::CommandLineOptions));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::CommandLineOptions", "core/param/command_line_options.h", 32,
                  typeid(::bdm::CommandLineOptions), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLCommandLineOptions_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::CommandLineOptions) );
      instance.SetDelete(&delete_bdmcLcLCommandLineOptions);
      instance.SetDeleteArray(&deleteArray_bdmcLcLCommandLineOptions);
      instance.SetDestructor(&destruct_bdmcLcLCommandLineOptions);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::CommandLineOptions*)
   {
      return GenerateInitInstanceLocal((::bdm::CommandLineOptions*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::CommandLineOptions*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLCommandLineOptions_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::CommandLineOptions*)0x0)->GetClass();
      bdmcLcLCommandLineOptions_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLCommandLineOptions_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBifurcationEvent_Dictionary();
   static void bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBifurcationEvent_TClassManip(TClass*);
   static void delete_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBifurcationEvent(void *p);
   static void deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBifurcationEvent(void *p);
   static void destruct_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBifurcationEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::experimental::neuroscience::NeuriteBifurcationEvent*)
   {
      ::bdm::experimental::neuroscience::NeuriteBifurcationEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::experimental::neuroscience::NeuriteBifurcationEvent));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::experimental::neuroscience::NeuriteBifurcationEvent", "neuroscience/event/neurite_bifurcation_event.h", 33,
                  typeid(::bdm::experimental::neuroscience::NeuriteBifurcationEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBifurcationEvent_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::experimental::neuroscience::NeuriteBifurcationEvent) );
      instance.SetDelete(&delete_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBifurcationEvent);
      instance.SetDeleteArray(&deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBifurcationEvent);
      instance.SetDestructor(&destruct_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBifurcationEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::experimental::neuroscience::NeuriteBifurcationEvent*)
   {
      return GenerateInitInstanceLocal((::bdm::experimental::neuroscience::NeuriteBifurcationEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::experimental::neuroscience::NeuriteBifurcationEvent*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBifurcationEvent_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::experimental::neuroscience::NeuriteBifurcationEvent*)0x0)->GetClass();
      bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBifurcationEvent_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBifurcationEvent_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBranchingEvent_Dictionary();
   static void bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBranchingEvent_TClassManip(TClass*);
   static void delete_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBranchingEvent(void *p);
   static void deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBranchingEvent(void *p);
   static void destruct_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBranchingEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::experimental::neuroscience::NeuriteBranchingEvent*)
   {
      ::bdm::experimental::neuroscience::NeuriteBranchingEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::experimental::neuroscience::NeuriteBranchingEvent));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::experimental::neuroscience::NeuriteBranchingEvent", "neuroscience/event/neurite_branching_event.h", 32,
                  typeid(::bdm::experimental::neuroscience::NeuriteBranchingEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBranchingEvent_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::experimental::neuroscience::NeuriteBranchingEvent) );
      instance.SetDelete(&delete_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBranchingEvent);
      instance.SetDeleteArray(&deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBranchingEvent);
      instance.SetDestructor(&destruct_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBranchingEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::experimental::neuroscience::NeuriteBranchingEvent*)
   {
      return GenerateInitInstanceLocal((::bdm::experimental::neuroscience::NeuriteBranchingEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::experimental::neuroscience::NeuriteBranchingEvent*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBranchingEvent_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::experimental::neuroscience::NeuriteBranchingEvent*)0x0)->GetClass();
      bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBranchingEvent_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBranchingEvent_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLexperimentalcLcLneurosciencecLcLNewNeuriteExtensionEvent_Dictionary();
   static void bdmcLcLexperimentalcLcLneurosciencecLcLNewNeuriteExtensionEvent_TClassManip(TClass*);
   static void delete_bdmcLcLexperimentalcLcLneurosciencecLcLNewNeuriteExtensionEvent(void *p);
   static void deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLNewNeuriteExtensionEvent(void *p);
   static void destruct_bdmcLcLexperimentalcLcLneurosciencecLcLNewNeuriteExtensionEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::experimental::neuroscience::NewNeuriteExtensionEvent*)
   {
      ::bdm::experimental::neuroscience::NewNeuriteExtensionEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::experimental::neuroscience::NewNeuriteExtensionEvent));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::experimental::neuroscience::NewNeuriteExtensionEvent", "neuroscience/event/new_neurite_extension_event.h", 28,
                  typeid(::bdm::experimental::neuroscience::NewNeuriteExtensionEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLexperimentalcLcLneurosciencecLcLNewNeuriteExtensionEvent_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::experimental::neuroscience::NewNeuriteExtensionEvent) );
      instance.SetDelete(&delete_bdmcLcLexperimentalcLcLneurosciencecLcLNewNeuriteExtensionEvent);
      instance.SetDeleteArray(&deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLNewNeuriteExtensionEvent);
      instance.SetDestructor(&destruct_bdmcLcLexperimentalcLcLneurosciencecLcLNewNeuriteExtensionEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::experimental::neuroscience::NewNeuriteExtensionEvent*)
   {
      return GenerateInitInstanceLocal((::bdm::experimental::neuroscience::NewNeuriteExtensionEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::experimental::neuroscience::NewNeuriteExtensionEvent*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLexperimentalcLcLneurosciencecLcLNewNeuriteExtensionEvent_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::experimental::neuroscience::NewNeuriteExtensionEvent*)0x0)->GetClass();
      bdmcLcLexperimentalcLcLneurosciencecLcLNewNeuriteExtensionEvent_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLexperimentalcLcLneurosciencecLcLNewNeuriteExtensionEvent_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLexperimentalcLcLneurosciencecLcLSideNeuriteExtensionEvent_Dictionary();
   static void bdmcLcLexperimentalcLcLneurosciencecLcLSideNeuriteExtensionEvent_TClassManip(TClass*);
   static void delete_bdmcLcLexperimentalcLcLneurosciencecLcLSideNeuriteExtensionEvent(void *p);
   static void deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLSideNeuriteExtensionEvent(void *p);
   static void destruct_bdmcLcLexperimentalcLcLneurosciencecLcLSideNeuriteExtensionEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::experimental::neuroscience::SideNeuriteExtensionEvent*)
   {
      ::bdm::experimental::neuroscience::SideNeuriteExtensionEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::experimental::neuroscience::SideNeuriteExtensionEvent));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::experimental::neuroscience::SideNeuriteExtensionEvent", "neuroscience/event/side_neurite_extension_event.h", 28,
                  typeid(::bdm::experimental::neuroscience::SideNeuriteExtensionEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLexperimentalcLcLneurosciencecLcLSideNeuriteExtensionEvent_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::experimental::neuroscience::SideNeuriteExtensionEvent) );
      instance.SetDelete(&delete_bdmcLcLexperimentalcLcLneurosciencecLcLSideNeuriteExtensionEvent);
      instance.SetDeleteArray(&deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLSideNeuriteExtensionEvent);
      instance.SetDestructor(&destruct_bdmcLcLexperimentalcLcLneurosciencecLcLSideNeuriteExtensionEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::experimental::neuroscience::SideNeuriteExtensionEvent*)
   {
      return GenerateInitInstanceLocal((::bdm::experimental::neuroscience::SideNeuriteExtensionEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::experimental::neuroscience::SideNeuriteExtensionEvent*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLexperimentalcLcLneurosciencecLcLSideNeuriteExtensionEvent_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::experimental::neuroscience::SideNeuriteExtensionEvent*)0x0)->GetClass();
      bdmcLcLexperimentalcLcLneurosciencecLcLSideNeuriteExtensionEvent_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLexperimentalcLcLneurosciencecLcLSideNeuriteExtensionEvent_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLexperimentalcLcLneurosciencecLcLSplitNeuriteElementEvent_Dictionary();
   static void bdmcLcLexperimentalcLcLneurosciencecLcLSplitNeuriteElementEvent_TClassManip(TClass*);
   static void delete_bdmcLcLexperimentalcLcLneurosciencecLcLSplitNeuriteElementEvent(void *p);
   static void deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLSplitNeuriteElementEvent(void *p);
   static void destruct_bdmcLcLexperimentalcLcLneurosciencecLcLSplitNeuriteElementEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::experimental::neuroscience::SplitNeuriteElementEvent*)
   {
      ::bdm::experimental::neuroscience::SplitNeuriteElementEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::experimental::neuroscience::SplitNeuriteElementEvent));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::experimental::neuroscience::SplitNeuriteElementEvent", "neuroscience/event/split_neurite_element_event.h", 29,
                  typeid(::bdm::experimental::neuroscience::SplitNeuriteElementEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLexperimentalcLcLneurosciencecLcLSplitNeuriteElementEvent_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::experimental::neuroscience::SplitNeuriteElementEvent) );
      instance.SetDelete(&delete_bdmcLcLexperimentalcLcLneurosciencecLcLSplitNeuriteElementEvent);
      instance.SetDeleteArray(&deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLSplitNeuriteElementEvent);
      instance.SetDestructor(&destruct_bdmcLcLexperimentalcLcLneurosciencecLcLSplitNeuriteElementEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::experimental::neuroscience::SplitNeuriteElementEvent*)
   {
      return GenerateInitInstanceLocal((::bdm::experimental::neuroscience::SplitNeuriteElementEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::experimental::neuroscience::SplitNeuriteElementEvent*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLexperimentalcLcLneurosciencecLcLSplitNeuriteElementEvent_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::experimental::neuroscience::SplitNeuriteElementEvent*)0x0)->GetClass();
      bdmcLcLexperimentalcLcLneurosciencecLcLSplitNeuriteElementEvent_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLexperimentalcLcLneurosciencecLcLSplitNeuriteElementEvent_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeurite_Dictionary();
   static void bdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeurite_TClassManip(TClass*);
   static void delete_bdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeurite(void *p);
   static void deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeurite(void *p);
   static void destruct_bdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeurite(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::experimental::neuroscience::NeuronOrNeurite*)
   {
      ::bdm::experimental::neuroscience::NeuronOrNeurite *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::experimental::neuroscience::NeuronOrNeurite));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::experimental::neuroscience::NeuronOrNeurite", "neuroscience/neuron_or_neurite.h", 32,
                  typeid(::bdm::experimental::neuroscience::NeuronOrNeurite), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeurite_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::experimental::neuroscience::NeuronOrNeurite) );
      instance.SetDelete(&delete_bdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeurite);
      instance.SetDeleteArray(&deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeurite);
      instance.SetDestructor(&destruct_bdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeurite);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::experimental::neuroscience::NeuronOrNeurite*)
   {
      return GenerateInitInstanceLocal((::bdm::experimental::neuroscience::NeuronOrNeurite*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::experimental::neuroscience::NeuronOrNeurite*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeurite_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::experimental::neuroscience::NeuronOrNeurite*)0x0)->GetClass();
      bdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeurite_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeurite_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLRootAdaptor_Dictionary();
   static void bdmcLcLRootAdaptor_TClassManip(TClass*);
   static void *new_bdmcLcLRootAdaptor(void *p = 0);
   static void *newArray_bdmcLcLRootAdaptor(Long_t size, void *p);
   static void delete_bdmcLcLRootAdaptor(void *p);
   static void deleteArray_bdmcLcLRootAdaptor(void *p);
   static void destruct_bdmcLcLRootAdaptor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::RootAdaptor*)
   {
      ::bdm::RootAdaptor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::RootAdaptor));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::RootAdaptor", "core/visualization/root_adaptor.h", 44,
                  typeid(::bdm::RootAdaptor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLRootAdaptor_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::RootAdaptor) );
      instance.SetNew(&new_bdmcLcLRootAdaptor);
      instance.SetNewArray(&newArray_bdmcLcLRootAdaptor);
      instance.SetDelete(&delete_bdmcLcLRootAdaptor);
      instance.SetDeleteArray(&deleteArray_bdmcLcLRootAdaptor);
      instance.SetDestructor(&destruct_bdmcLcLRootAdaptor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::RootAdaptor*)
   {
      return GenerateInitInstanceLocal((::bdm::RootAdaptor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::RootAdaptor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLRootAdaptor_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::RootAdaptor*)0x0)->GetClass();
      bdmcLcLRootAdaptor_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLRootAdaptor_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLTFileRaii_Dictionary();
   static void bdmcLcLTFileRaii_TClassManip(TClass*);
   static void delete_bdmcLcLTFileRaii(void *p);
   static void deleteArray_bdmcLcLTFileRaii(void *p);
   static void destruct_bdmcLcLTFileRaii(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::TFileRaii*)
   {
      ::bdm::TFileRaii *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::TFileRaii));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::TFileRaii", "core/util/io.h", 49,
                  typeid(::bdm::TFileRaii), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLTFileRaii_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::TFileRaii) );
      instance.SetDelete(&delete_bdmcLcLTFileRaii);
      instance.SetDeleteArray(&deleteArray_bdmcLcLTFileRaii);
      instance.SetDestructor(&destruct_bdmcLcLTFileRaii);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::TFileRaii*)
   {
      return GenerateInitInstanceLocal((::bdm::TFileRaii*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::TFileRaii*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLTFileRaii_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::TFileRaii*)0x0)->GetClass();
      bdmcLcLTFileRaii_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLTFileRaii_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLTimingAggregator_Dictionary();
   static void bdmcLcLTimingAggregator_TClassManip(TClass*);
   static void *new_bdmcLcLTimingAggregator(void *p = 0);
   static void *newArray_bdmcLcLTimingAggregator(Long_t size, void *p);
   static void delete_bdmcLcLTimingAggregator(void *p);
   static void deleteArray_bdmcLcLTimingAggregator(void *p);
   static void destruct_bdmcLcLTimingAggregator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::TimingAggregator*)
   {
      ::bdm::TimingAggregator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::TimingAggregator));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::TimingAggregator", "core/util/timing_aggregator.h", 27,
                  typeid(::bdm::TimingAggregator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLTimingAggregator_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::TimingAggregator) );
      instance.SetNew(&new_bdmcLcLTimingAggregator);
      instance.SetNewArray(&newArray_bdmcLcLTimingAggregator);
      instance.SetDelete(&delete_bdmcLcLTimingAggregator);
      instance.SetDeleteArray(&deleteArray_bdmcLcLTimingAggregator);
      instance.SetDestructor(&destruct_bdmcLcLTimingAggregator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::TimingAggregator*)
   {
      return GenerateInitInstanceLocal((::bdm::TimingAggregator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::TimingAggregator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLTimingAggregator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::TimingAggregator*)0x0)->GetClass();
      bdmcLcLTimingAggregator_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLTimingAggregator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *bdmcLcLTiming_Dictionary();
   static void bdmcLcLTiming_TClassManip(TClass*);
   static void *new_bdmcLcLTiming(void *p = 0);
   static void *newArray_bdmcLcLTiming(Long_t size, void *p);
   static void delete_bdmcLcLTiming(void *p);
   static void deleteArray_bdmcLcLTiming(void *p);
   static void destruct_bdmcLcLTiming(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::Timing*)
   {
      ::bdm::Timing *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::bdm::Timing));
      static ::ROOT::TGenericClassInfo 
         instance("bdm::Timing", "core/util/timing.h", 30,
                  typeid(::bdm::Timing), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &bdmcLcLTiming_Dictionary, isa_proxy, 4,
                  sizeof(::bdm::Timing) );
      instance.SetNew(&new_bdmcLcLTiming);
      instance.SetNewArray(&newArray_bdmcLcLTiming);
      instance.SetDelete(&delete_bdmcLcLTiming);
      instance.SetDeleteArray(&deleteArray_bdmcLcLTiming);
      instance.SetDestructor(&destruct_bdmcLcLTiming);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::Timing*)
   {
      return GenerateInitInstanceLocal((::bdm::Timing*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::Timing*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *bdmcLcLTiming_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::bdm::Timing*)0x0)->GetClass();
      bdmcLcLTiming_TClassManip(theClass);
   return theClass;
   }

   static void bdmcLcLTiming_TClassManip(TClass* ){
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
         instance("bdm::MyCell", ::bdm::MyCell::Class_Version(), "", 60,
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
   static void delete_bdmcLcLSbmlModule(void *p);
   static void deleteArray_bdmcLcLSbmlModule(void *p);
   static void destruct_bdmcLcLSbmlModule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::bdm::SbmlModule*)
   {
      ::bdm::SbmlModule *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::bdm::SbmlModule >(0);
      static ::ROOT::TGenericClassInfo 
         instance("bdm::SbmlModule", ::bdm::SbmlModule::Class_Version(), "", 131,
                  typeid(::bdm::SbmlModule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::bdm::SbmlModule::Dictionary, isa_proxy, 4,
                  sizeof(::bdm::SbmlModule) );
      instance.SetDelete(&delete_bdmcLcLSbmlModule);
      instance.SetDeleteArray(&deleteArray_bdmcLcLSbmlModule);
      instance.SetDestructor(&destruct_bdmcLcLSbmlModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::bdm::SbmlModule*)
   {
      return GenerateInitInstanceLocal((::bdm::SbmlModule*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::bdm::SbmlModule*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace bdm {
//______________________________________________________________________________
template <> atomic_TClass_ptr SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite>::Class_Name()
{
   return "bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite>";
}

//______________________________________________________________________________
template <> const char *SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace bdm
namespace bdm {
//______________________________________________________________________________
template <> atomic_TClass_ptr SoPointer<bdm::experimental::neuroscience::NeuriteElement>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *SoPointer<bdm::experimental::neuroscience::NeuriteElement>::Class_Name()
{
   return "bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement>";
}

//______________________________________________________________________________
template <> const char *SoPointer<bdm::experimental::neuroscience::NeuriteElement>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int SoPointer<bdm::experimental::neuroscience::NeuriteElement>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *SoPointer<bdm::experimental::neuroscience::NeuriteElement>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *SoPointer<bdm::experimental::neuroscience::NeuriteElement>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement>*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace bdm
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
atomic_TClass_ptr SbmlModule::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *SbmlModule::Class_Name()
{
   return "bdm::SbmlModule";
}

//______________________________________________________________________________
const char *SbmlModule::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::SbmlModule*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int SbmlModule::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::bdm::SbmlModule*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SbmlModule::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::SbmlModule*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SbmlModule::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::bdm::SbmlModule*)0x0)->GetClass(); }
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

namespace bdm {
//______________________________________________________________________________
template <> void SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite>::Streamer(TBuffer &R__b)
{
   // Stream an object of class bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite>::Class(),this);
   } else {
      R__b.WriteClassBuffer(bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite>::Class(),this);
   }
}

} // namespace bdm
namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> : new ::bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite>;
   }
   static void *newArray_bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite>[nElements] : new ::bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegR(void *p) {
      delete ((::bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite>*)p);
   }
   static void deleteArray_bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegR(void *p) {
      delete [] ((::bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite>*)p);
   }
   static void destruct_bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegR(void *p) {
      typedef ::bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite>

namespace bdm {
//______________________________________________________________________________
template <> void SoPointer<bdm::experimental::neuroscience::NeuriteElement>::Streamer(TBuffer &R__b)
{
   // Stream an object of class bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement>::Class(),this);
   } else {
      R__b.WriteClassBuffer(bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement>::Class(),this);
   }
}

} // namespace bdm
namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> : new ::bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement>;
   }
   static void *newArray_bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement>[nElements] : new ::bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement>[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgR(void *p) {
      delete ((::bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement>*)p);
   }
   static void deleteArray_bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgR(void *p) {
      delete [] ((::bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement>*)p);
   }
   static void destruct_bdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgR(void *p) {
      typedef ::bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement>

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
   static void *new_bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > > : new ::bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > >;
   }
   static void *newArray_bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > >[nElements] : new ::bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR(void *p) {
      delete ((::bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > >*)p);
   }
   static void deleteArray_bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR(void *p) {
      delete [] ((::bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > >*)p);
   }
   static void destruct_bdmcLcLis_so_ptrlEvectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgRsPgR(void *p) {
      typedef ::bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLis_so_ptrlEunordered_maplEunsignedsPlongcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<unordered_map<unsigned long,bdm::MathArray<double,3> > > : new ::bdm::is_so_ptr<unordered_map<unsigned long,bdm::MathArray<double,3> > >;
   }
   static void *newArray_bdmcLcLis_so_ptrlEunordered_maplEunsignedsPlongcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<unordered_map<unsigned long,bdm::MathArray<double,3> > >[nElements] : new ::bdm::is_so_ptr<unordered_map<unsigned long,bdm::MathArray<double,3> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLis_so_ptrlEunordered_maplEunsignedsPlongcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR(void *p) {
      delete ((::bdm::is_so_ptr<unordered_map<unsigned long,bdm::MathArray<double,3> > >*)p);
   }
   static void deleteArray_bdmcLcLis_so_ptrlEunordered_maplEunsignedsPlongcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR(void *p) {
      delete [] ((::bdm::is_so_ptr<unordered_map<unsigned long,bdm::MathArray<double,3> > >*)p);
   }
   static void destruct_bdmcLcLis_so_ptrlEunordered_maplEunsignedsPlongcObdmcLcLMathArraylEdoublecO3gRsPgRsPgR(void *p) {
      typedef ::bdm::is_so_ptr<unordered_map<unsigned long,bdm::MathArray<double,3> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::is_so_ptr<unordered_map<unsigned long,bdm::MathArray<double,3> > >

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
   static void *new_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> > : new ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> >;
   }
   static void *newArray_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> >[nElements] : new ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR(void *p) {
      delete ((::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> >*)p);
   }
   static void deleteArray_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR(void *p) {
      delete [] ((::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> >*)p);
   }
   static void destruct_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeuritegRsPgR(void *p) {
      typedef ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > : new ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >;
   }
   static void *newArray_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >[nElements] : new ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p) {
      delete ((::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >*)p);
   }
   static void deleteArray_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p) {
      delete [] ((::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >*)p);
   }
   static void destruct_bdmcLcLis_so_ptrlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p) {
      typedef ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >

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
   // Wrappers around operator new
   static void *new_bdmcLcLVersion(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Version : new ::bdm::Version;
   }
   static void *newArray_bdmcLcLVersion(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Version[nElements] : new ::bdm::Version[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLVersion(void *p) {
      delete ((::bdm::Version*)p);
   }
   static void deleteArray_bdmcLcLVersion(void *p) {
      delete [] ((::bdm::Version*)p);
   }
   static void destruct_bdmcLcLVersion(void *p) {
      typedef ::bdm::Version current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::Version

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLCommandLineOptions(void *p) {
      delete ((::bdm::CommandLineOptions*)p);
   }
   static void deleteArray_bdmcLcLCommandLineOptions(void *p) {
      delete [] ((::bdm::CommandLineOptions*)p);
   }
   static void destruct_bdmcLcLCommandLineOptions(void *p) {
      typedef ::bdm::CommandLineOptions current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::CommandLineOptions

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBifurcationEvent(void *p) {
      delete ((::bdm::experimental::neuroscience::NeuriteBifurcationEvent*)p);
   }
   static void deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBifurcationEvent(void *p) {
      delete [] ((::bdm::experimental::neuroscience::NeuriteBifurcationEvent*)p);
   }
   static void destruct_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBifurcationEvent(void *p) {
      typedef ::bdm::experimental::neuroscience::NeuriteBifurcationEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::experimental::neuroscience::NeuriteBifurcationEvent

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBranchingEvent(void *p) {
      delete ((::bdm::experimental::neuroscience::NeuriteBranchingEvent*)p);
   }
   static void deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBranchingEvent(void *p) {
      delete [] ((::bdm::experimental::neuroscience::NeuriteBranchingEvent*)p);
   }
   static void destruct_bdmcLcLexperimentalcLcLneurosciencecLcLNeuriteBranchingEvent(void *p) {
      typedef ::bdm::experimental::neuroscience::NeuriteBranchingEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::experimental::neuroscience::NeuriteBranchingEvent

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLexperimentalcLcLneurosciencecLcLNewNeuriteExtensionEvent(void *p) {
      delete ((::bdm::experimental::neuroscience::NewNeuriteExtensionEvent*)p);
   }
   static void deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLNewNeuriteExtensionEvent(void *p) {
      delete [] ((::bdm::experimental::neuroscience::NewNeuriteExtensionEvent*)p);
   }
   static void destruct_bdmcLcLexperimentalcLcLneurosciencecLcLNewNeuriteExtensionEvent(void *p) {
      typedef ::bdm::experimental::neuroscience::NewNeuriteExtensionEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::experimental::neuroscience::NewNeuriteExtensionEvent

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLexperimentalcLcLneurosciencecLcLSideNeuriteExtensionEvent(void *p) {
      delete ((::bdm::experimental::neuroscience::SideNeuriteExtensionEvent*)p);
   }
   static void deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLSideNeuriteExtensionEvent(void *p) {
      delete [] ((::bdm::experimental::neuroscience::SideNeuriteExtensionEvent*)p);
   }
   static void destruct_bdmcLcLexperimentalcLcLneurosciencecLcLSideNeuriteExtensionEvent(void *p) {
      typedef ::bdm::experimental::neuroscience::SideNeuriteExtensionEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::experimental::neuroscience::SideNeuriteExtensionEvent

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLexperimentalcLcLneurosciencecLcLSplitNeuriteElementEvent(void *p) {
      delete ((::bdm::experimental::neuroscience::SplitNeuriteElementEvent*)p);
   }
   static void deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLSplitNeuriteElementEvent(void *p) {
      delete [] ((::bdm::experimental::neuroscience::SplitNeuriteElementEvent*)p);
   }
   static void destruct_bdmcLcLexperimentalcLcLneurosciencecLcLSplitNeuriteElementEvent(void *p) {
      typedef ::bdm::experimental::neuroscience::SplitNeuriteElementEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::experimental::neuroscience::SplitNeuriteElementEvent

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeurite(void *p) {
      delete ((::bdm::experimental::neuroscience::NeuronOrNeurite*)p);
   }
   static void deleteArray_bdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeurite(void *p) {
      delete [] ((::bdm::experimental::neuroscience::NeuronOrNeurite*)p);
   }
   static void destruct_bdmcLcLexperimentalcLcLneurosciencecLcLNeuronOrNeurite(void *p) {
      typedef ::bdm::experimental::neuroscience::NeuronOrNeurite current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::experimental::neuroscience::NeuronOrNeurite

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLRootAdaptor(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::RootAdaptor : new ::bdm::RootAdaptor;
   }
   static void *newArray_bdmcLcLRootAdaptor(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::RootAdaptor[nElements] : new ::bdm::RootAdaptor[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLRootAdaptor(void *p) {
      delete ((::bdm::RootAdaptor*)p);
   }
   static void deleteArray_bdmcLcLRootAdaptor(void *p) {
      delete [] ((::bdm::RootAdaptor*)p);
   }
   static void destruct_bdmcLcLRootAdaptor(void *p) {
      typedef ::bdm::RootAdaptor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::RootAdaptor

namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLTFileRaii(void *p) {
      delete ((::bdm::TFileRaii*)p);
   }
   static void deleteArray_bdmcLcLTFileRaii(void *p) {
      delete [] ((::bdm::TFileRaii*)p);
   }
   static void destruct_bdmcLcLTFileRaii(void *p) {
      typedef ::bdm::TFileRaii current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::TFileRaii

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLTimingAggregator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::TimingAggregator : new ::bdm::TimingAggregator;
   }
   static void *newArray_bdmcLcLTimingAggregator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::TimingAggregator[nElements] : new ::bdm::TimingAggregator[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLTimingAggregator(void *p) {
      delete ((::bdm::TimingAggregator*)p);
   }
   static void deleteArray_bdmcLcLTimingAggregator(void *p) {
      delete [] ((::bdm::TimingAggregator*)p);
   }
   static void destruct_bdmcLcLTimingAggregator(void *p) {
      typedef ::bdm::TimingAggregator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::TimingAggregator

namespace ROOT {
   // Wrappers around operator new
   static void *new_bdmcLcLTiming(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Timing : new ::bdm::Timing;
   }
   static void *newArray_bdmcLcLTiming(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::bdm::Timing[nElements] : new ::bdm::Timing[nElements];
   }
   // Wrapper around operator delete
   static void delete_bdmcLcLTiming(void *p) {
      delete ((::bdm::Timing*)p);
   }
   static void deleteArray_bdmcLcLTiming(void *p) {
      delete [] ((::bdm::Timing*)p);
   }
   static void destruct_bdmcLcLTiming(void *p) {
      typedef ::bdm::Timing current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::Timing

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
void SbmlModule::Streamer(TBuffer &R__b)
{
   // Stream an object of class bdm::SbmlModule.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(bdm::SbmlModule::Class(),this);
   } else {
      R__b.WriteClassBuffer(bdm::SbmlModule::Class(),this);
   }
}

} // namespace bdm
namespace ROOT {
   // Wrapper around operator delete
   static void delete_bdmcLcLSbmlModule(void *p) {
      delete ((::bdm::SbmlModule*)p);
   }
   static void deleteArray_bdmcLcLSbmlModule(void *p) {
      delete [] ((::bdm::SbmlModule*)p);
   }
   static void destruct_bdmcLcLSbmlModule(void *p) {
      typedef ::bdm::SbmlModule current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::bdm::SbmlModule

namespace ROOT {
   static TClass *vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR_Dictionary();
   static void vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p = 0);
   static void *newArray_vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(Long_t size, void *p);
   static void delete_vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p);
   static void deleteArray_vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p);
   static void destruct_vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >*)
   {
      vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >", -2, "vector", 214,
                  typeid(vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >) );
      instance.SetNew(&new_vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR);
      instance.SetNewArray(&newArray_vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR);
      instance.SetDelete(&delete_vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR);
      instance.SetDestructor(&destruct_vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >*)0x0)->GetClass();
      vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > : new vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >;
   }
   static void *newArray_vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >[nElements] : new vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p) {
      delete ((vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >*)p);
   }
   static void deleteArray_vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p) {
      delete [] ((vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >*)p);
   }
   static void destruct_vectorlEbdmcLcLSoPointerlEbdmcLcLexperimentalcLcLneurosciencecLcLNeuriteElementgRsPgR(void *p) {
      typedef vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >

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
         instance("vector<bdm::SoHandle>", -2, "vector", 214,
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
         instance("vector<bdm::SimObject*>", -2, "vector", 214,
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
         instance("vector<bdm::Random*>", -2, "vector", 214,
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
         instance("vector<bdm::Param::VisualizeDiffusion>", -2, "vector", 214,
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
         instance("vector<bdm::Operation>", -2, "vector", 214,
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
         instance("vector<bdm::MathArray<double,3> >", -2, "vector", 214,
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
         instance("vector<bdm::InlineVector<int,8> >", -2, "vector", 214,
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
         instance("vector<bdm::InPlaceExecutionContext*>", -2, "vector", 214,
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
         instance("vector<bdm::Grid::NeighborMutexBuilder::MutexWrapper>", -2, "vector", 214,
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
         instance("vector<bdm::BaseBiologyModule*>", -2, "vector", 214,
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
  void TriggerDictionaryInitialization_sbml_integration_dict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/usr/include",
"/home/yuri/biodynamo/build/third_party/paraview/include/paraview-5.6",
"/home/yuri/biodynamo/build/third_party/paraview/include",
"/home/testuser/bdm-build-third-party/paraview-build/install/include",
"/home/testuser/bdm-build-third-party/paraview-build/install/include/python2.7",
"/usr/lib/openmpi/include/openmpi/opal/mca/event/libevent2021/libevent",
"/usr/lib/openmpi/include/openmpi/opal/mca/event/libevent2021/libevent/include",
"/usr/lib/openmpi/include",
"/usr/lib/openmpi/include/openmpi",
"/usr/lib/llvm-6.0/include",
"/usr/lib/llvm-6.0/include",
"/home/yuri/biodynamo/build/third_party/libroadrunner/include",
"/home/yuri/biodynamo/build/third_party/libroadrunner/include/rr",
"/home/yuri/biodynamo/build/third_party/libroadrunner/include/sbml",
"/home/yuri/biodynamo/build/third_party/libroadrunner/include/cvode",
"/home/yuri/biodynamo/build/third_party/root/include",
"/home/yuri/Documents/ProtocellSimulator/elementare_7/build/omp",
"/home/yuri/biodynamo/build/share/cmake/../../include",
"/home/yuri/Documents/ProtocellSimulator/elementare_7/src",
"/home/yuri/biodynamo/build/third_party/root/include",
"/home/yuri/Documents/ProtocellSimulator/elementare_7/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "sbml_integration_dict dictionary forward declarations' payload"
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
namespace bdm{namespace experimental{namespace neuroscience{class __attribute__((annotate("$clingAutoload$neuroscience/neurite_element.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  NeuriteElement;}}}
namespace bdm{template <typename TSimObject> class __attribute__((annotate("$clingAutoload$core/sim_object/so_pointer.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  SoPointer;
}
namespace bdm{template <typename T, uint16_t N> class __attribute__((annotate("$clingAutoload$core/container/inline_vector.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  InlineVector;
}
namespace bdm{class __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/util/log.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  Log;}
namespace bdm{class __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/event/event.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  UniqueEventIdFactory;}
namespace bdm{struct __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/event/event.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  Event;}
namespace bdm{class __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/sim_object/so_uid.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  SoUidGenerator;}
namespace bdm{class __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/util/thread_info.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  ThreadInfo;}
namespace bdm{namespace experimental{namespace neuroscience{class __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$neuroscience/neuron_or_neurite.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  NeuronOrNeurite;}}}
namespace bdm{template <typename T> struct __attribute__((annotate("$clingAutoload$core/sim_object/so_pointer.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  is_so_ptr;
}
namespace std{template <typename _Tp> struct __attribute__((annotate("$clingAutoload$bits/functional_hash.h")))  __attribute__((annotate("$clingAutoload$string")))  hash;
}
namespace std{template <typename _Tp = void> struct __attribute__((annotate("$clingAutoload$bits/stl_function.h")))  __attribute__((annotate("$clingAutoload$string")))  equal_to;
}
namespace std{template <class _T1, class _T2> struct __attribute__((annotate("$clingAutoload$bits/stl_pair.h")))  __attribute__((annotate("$clingAutoload$string")))  pair;
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
namespace bdm{class __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$version.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  Version;}
namespace bdm{class __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/param/command_line_options.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  CommandLineOptions;}
namespace bdm{namespace experimental{namespace neuroscience{struct __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$neuroscience/event/neurite_bifurcation_event.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  NeuriteBifurcationEvent;}}}
namespace bdm{namespace experimental{namespace neuroscience{struct __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$neuroscience/event/neurite_branching_event.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  NeuriteBranchingEvent;}}}
namespace bdm{namespace experimental{namespace neuroscience{struct __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$neuroscience/event/new_neurite_extension_event.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  NewNeuriteExtensionEvent;}}}
namespace bdm{namespace experimental{namespace neuroscience{struct __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$neuroscience/event/side_neurite_extension_event.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  SideNeuriteExtensionEvent;}}}
namespace bdm{namespace experimental{namespace neuroscience{struct __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$neuroscience/event/split_neurite_element_event.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  SplitNeuriteElementEvent;}}}
namespace bdm{class __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/visualization/root_adaptor.h")))  __attribute__((annotate("$clingAutoload$biodynamo.h")))  RootAdaptor;}
namespace bdm{class __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/util/io.h")))  TFileRaii;}
namespace bdm{class __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/util/timing_aggregator.h")))  __attribute__((annotate("$clingAutoload$core/util/timing.h")))  TimingAggregator;}
namespace bdm{class __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$core/util/timing.h")))  Timing;}
namespace bdm{class __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) MyCell;}
namespace bdm{struct __attribute__((annotate(R"ATTRDUMP(pattern@@@bdm::*)ATTRDUMP"))) SbmlModule;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "sbml_integration_dict dictionary payload"

#ifndef BDM_SRC_DIR
  #define BDM_SRC_DIR "/home/yuri/biodynamo/build/include"
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
#ifndef SBML_INTEGRATION_H_
#define SBML_INTEGRATION_H_

#include "biodynamo.h"
#include "core/util/io.h"
#include "core/util/timing.h"

#include <TAxis.h>
#include <TCanvas.h>
#include <TFrame.h>
#include <TGraph.h>
#include <TMultiGraph.h>
#include <TPad.h>
#include <TLegend.h>
#include <TLegendEntry.h>
#include "rrException.h"
#include "rrExecutableModel.h"
#include "rrLogger.h"
#include "rrLogger.h"
#include "rrRoadRunner.h"
#include "rrUtils.h"

#include <math.h>
#include <fstream>
#include <stdlib.h> /*rand()*/
namespace bdm {

// Define my custom cell, which extends Cell by adding an extra
// data member compartment_, L_.
class MyCell : public Cell {
  BDM_SIM_OBJECT_HEADER(MyCell, Cell, 1, compartment_, L_,A_0_ ,B_0_, p_ ,C_ ,Compl_, isBornAfterDivision_);

 public:
  MyCell() {}
  explicit MyCell(const Double3& position) : Base(position) {}

  /// Default event constructor
  MyCell(const Event& event, SimObject* other, uint64_t new_oid = 0)
      : Base(event, other, new_oid) {

        //TODO: inherit substances from mother and update RR
        if (auto* mother = dynamic_cast<MyCell*>(other)) {
          if(mother -> GetIsBornAfterDivision()){
            // std::cout << "I'm a new CELL :D " << std::endl;
            SetL(mother -> GetL());
            SetA(mother -> GetA());
            SetB(mother -> GetB());
            SetC(mother -> GetC());
            SetP(mother -> GetP());
          }
        }
      }

  void SetCompartment(double volume) { compartment_ = volume; }
  double GetCompartment() const { return compartment_; }
  
  void SetL(int l) { L_ = l; }
  int GetL(){ return L_; }

  void SetA(int a) { A_0_ = a; }
  int GetA() const { return A_0_; }

  void SetB(int b) { B_0_ = b; }
  int GetB() const { return B_0_; }

  void SetC(int c) { C_ = c; }
  int GetC() const { return C_; }

  void SetP(double p) { p_ = p; }
  double GetP() const { return p_; }

  void SetCompl(int co) { Compl_ = co; }
  int GetCompl() const { return Compl_; }
  
  void SetIsBornAfterDivision(bool flag){ isBornAfterDivision_ = flag;}
  bool GetIsBornAfterDivision(){ return isBornAfterDivision_ ;}
  
  void PrintValues(){
    std::cout <<"L:  "<<GetL() <<"\n" 
              <<"A: "<<GetA() <<"\n"
              <<"B: "<<GetB() <<"\n"
              <<"C: "<<GetC() <<"\n"
              <<"p: "<<GetP() <<"\n" 
              <<"Compl: "<<GetCompl() <<"\n" 
              <<"is born after division: "<<GetIsBornAfterDivision()<<std::endl;


  }
 private:
  double compartment_ = 0;
  int L_ = 0;
  int A_0_ = 0;
  int B_0_ = 0;
  int C_ = 0;
  int Compl_ = 0;
  double p_ = 0;
  bool isBornAfterDivision_ = false;
};

// Define SbmlModule to simulate intracellular chemical reaction network.
struct SbmlModule : public BaseBiologyModule {
  SbmlModule(const std::string& sbml_file, const rr::SimulateOptions& opt)
      : BaseBiologyModule(gNullEventId, gNullEventId) {
    rr_ = new rr::RoadRunner(sbml_file);
    rr_->getSimulateOptions() = opt;
    // setup integrator
    rr_->setIntegrator("gillespie");
    dt_ = opt.duration / opt.steps;
    auto* integrator = rr_->getIntegrator();
    integrator->setValue("variable_step_size", false);
    integrator->setValue("initial_time_step", dt_);
    integrator->setValue("maximum_time_step", dt_);
    result_.resize(opt.steps, 9);
  }

  virtual ~SbmlModule() { delete rr_; }

  SbmlModule(const Event& event, BaseBiologyModule* other, uint64_t new_oid = 0)
      : BaseBiologyModule(event, other, new_oid) {}

  /// Create a new instance of this object using the default constructor.
  BaseBiologyModule* GetInstance(const Event& event, BaseBiologyModule* other,
                                 uint64_t new_oid = 0) const override {
    return new SbmlModule(event, other, new_oid);
  }

  /// Create a copy of this biology module.
  BaseBiologyModule* GetCopy() const override { return new SbmlModule(*this); }

  /// Default event handler (exising biology module won't be modified on
  /// any event)
  void EventHandler(const Event& event, BaseBiologyModule* other1,
                    BaseBiologyModule* other2 = nullptr) override {
    BaseBiologyModule::EventHandler(event, other1, other2);
  }
  //Multiply all species by a value, excepts lipids "L"
  void MultiplyAllSpecies(float value){
    rr_ -> setValue("A_0", static_cast<int>(rr_ -> getValue("A_0")*value));
    rr_ -> setValue("B_0", static_cast<int>(rr_ -> getValue("B_0")*value));
  //  rr_ -> setValue("p", (rr_ -> getValue("p")*value));
    rr_ -> setValue("C", static_cast<int>(rr_ -> getValue("C")*value));
  }

  //Correct the value of all species
  //
  void UpdateSpecies(){
    float A = rr_ -> getValue("A_0");
    float B = rr_ -> getValue("B_0");
    float C = rr_ -> getValue("C");
    float p = rr_ -> getValue("p");
  
    float v = rr_ -> getValue("compartment");
    int co = rr_ -> getValue("Compl");

    //FIXME: Errors are raised in the simulation
    //FIXME: Update formulas with the one of the pdf
    // rr_ -> setValue("A_0",static_cast<int>(-v*1e-19*A*B+v*1e+17));
    // rr_ -> setValue("B_0",static_cast<int>(-v*1e-19*A*B+v*1e+17));
    // rr_ -> setValue("C",static_cast<int>(+v*1e-19*A*B));
    // rr_ -> setValue("L",static_cast<int>(+v*1e-17*p*C));
  }
  //Append volume value to text file
  void SaveVolume(int t, float v){
    #pragma omp critical
    {
      std::ofstream outfile;

      outfile.open("volume.csv", std::ios_base::app); // append instead of overwrite
      outfile << t<<";" << v << std::endl;
    } 
  }
  //update volume
  void UpdateVolume(){
    //float ro = 7.87870;
    float ro =7.87870e+22;
    //float r = 1e-6;
    float delta = 1e-8;
    float delta3 = pow(delta,3);
   
    float L = rr_ -> getValue("L");
    double newVolume = (1.0/6.0)*M_PI*delta3*pow(sqrt((L/(ro*M_PI*delta3)) -1.0/3.0)-1 ,3 );
    //std::cout <<newVolume<<std::endl;
    rr_ -> setValue("compartment",newVolume*1000);
  }
  void Run(SimObject* so) override {
    if (auto* cell = static_cast<MyCell*>(so)) {

      auto i = Simulation::GetActive()->GetScheduler()->GetSimulatedSteps();

      if(i == 1){
        //rand 90-110
        int randomSpeciesChange = rand() % 21 + 90;
        rr_ -> setValue("A_0", cell -> GetA() * randomSpeciesChange / 100);
        rr_ -> setValue("B_0", cell -> GetB() * randomSpeciesChange / 100);
        rr_ -> setValue("C", cell -> GetC() * randomSpeciesChange / 100);
        rr_ -> setValue("L", cell -> GetL() * randomSpeciesChange / 100);
       // rr_ -> setValue("Compl", cell -> GetCompl() * randomSpeciesChange / 100);
      }
      if(cell -> GetIsBornAfterDivision()){
        //rand 90-110
        int randomSpeciesChange = rand() % 21 + 90;
        cell -> SetIsBornAfterDivision(false);
        rr_ -> setValue("A_0", cell -> GetA() * randomSpeciesChange / 100);
        rr_ -> setValue("B_0", cell -> GetB() * randomSpeciesChange / 100);
        rr_ -> setValue("C", cell -> GetC() * randomSpeciesChange / 100);
        rr_ -> setValue("L", cell -> GetL() * randomSpeciesChange / 100);
       // rr_ -> setValue("Compl", cell -> GetCompl() * randomSpeciesChange / 100);
       // rr_ -> setValue("p", cell -> GetP());
      }

      rr_->getIntegrator()->integrate(0 * dt_, dt_);
    
      cell -> SetCompartment(rr_ -> getValue("compartment"));
      
      //std::cout << "Aext: "<< rr_ -> getValue("Aext") << std::endl;
      //SaveVolume(i,rr_ -> getValue("compartment"));
     // std::cout << i << " " << rr_ -> getValue("compartment") << std::endl;
      
     
      cell -> SetL(rr_ -> getValue("L"));
      UpdateVolume();
      const auto& partial_result = rr_->getFloatingSpeciesAmountsNamedArray();
     
      result_(i, 0) = i * dt_;
      for (unsigned j = 0; j < partial_result.numCols(); j++) {
        result_(i, j + 1) = partial_result(0, j);
      }

      UpdateSpecies();
   
      if (cell -> GetL() > 20000 && active_){
          //multiply lipids by 0.5
          rr_ -> setValue("L", rr_ -> getValue("L")/2);
          cell -> SetL(rr_ -> getValue("L"));
          //UpdateSpecies();
         // active_ = false;  <- cells keep replicating
          MultiplyAllSpecies(0.353553391);
          //update Cell Values
          cell -> SetA(rr_ -> getValue("A_0"));
          cell -> SetB(rr_ -> getValue("B_0"));
          cell -> SetC(rr_ -> getValue("C"));
          cell -> SetP(rr_ -> getValue("p"));
          cell -> SetCompl(rr_ -> getValue("Compl"));

          //update volume of the cell and of the integrator
          cell -> SetCompartment( cell -> GetCompartment()/2);
          rr_ -> setValue("compartment", cell -> GetCompartment());

          cell -> SetIsBornAfterDivision(true);

          cell -> Divide();
      }

    }
  }

  const ls::DoubleMatrix& GetResult() const { return result_; }

 private:
  ls::DoubleMatrix result_;
  bool active_ = true;
  rr::RoadRunner* rr_;
  double dt_;
  BDM_CLASS_DEF_OVERRIDE(SbmlModule, 1);
};

inline void AddToPlot(TMultiGraph* mg, const ls::Matrix<double>* result) {
  ls::Matrix<double> foo1(*result);
  ls::Matrix<double> foo(*foo1.getTranspose());
  int rows;
  int cols;
  auto** twod = foo.get2DMatrix(rows, cols);

  TGraph* gr = new TGraph(cols, twod[0], twod[1]);
  
  gr->SetLineColorAlpha(2, 0.1);
  gr->SetLineWidth(1);
  

  TGraph* gr1 = new TGraph(cols, twod[0], twod[2]);
  
  gr1->SetLineColorAlpha(3, 0.1);
  gr1->SetLineWidth(1);

  TGraph* gr2 = new TGraph(cols, twod[0], twod[3]);
  
  gr2->SetLineColorAlpha(4, 0.1);
  gr2->SetLineWidth(1);

  TGraph* gr3 = new TGraph(cols, twod[0], twod[4]);
  
  gr3->SetLineColorAlpha(6, 0.1);
  gr3->SetLineWidth(1);


 TGraph* gr4 = new TGraph(cols, twod[0], twod[5]);
  
  gr4->SetLineColorAlpha(8, 0.1);
  gr4->SetLineWidth(1);

 
 TGraph* gr5 = new TGraph(cols, twod[0], twod[6]);
  
  gr5->SetLineColorAlpha(8, 0.1);
  gr5->SetLineWidth(1);

 TGraph* gr6 = new TGraph(cols, twod[0], twod[7]);
  
  gr6->SetLineColorAlpha(9, 0.1);
  gr6->SetLineWidth(1);

TGraph* gr7 = new TGraph(cols, twod[0], twod[7]);
  
  gr7->SetLineColorAlpha(10, 0.1);
  gr7->SetLineWidth(1);

  mg->Add(gr); //A
  mg->Add(gr1); //B
  mg->Add(gr2); //C
  mg->Add(gr3); //L
 // mg->Add(gr5); //Aext
 // mg->Add(gr6); //Bext
  //mg->Add(gr4);
  //mg -> Add(gr7); //compl => errors in visualization
  mg->Draw("AL C C");

  auto* legend = new TLegend(0.8,0.7,0.90,0.9);


   
  TLegendEntry *le = legend->AddEntry(gr,"A","l");
  le->SetTextColor(2);
  TLegendEntry *le1 = legend->AddEntry(gr1,"B","l");
  le1->SetTextColor(3);
  TLegendEntry *le2 = legend->AddEntry(gr2,"C","l");
  le2->SetTextColor(4);
  TLegendEntry *le3 = legend->AddEntry(gr3,"L","l");
  le3->SetTextColor(6);

  TLegendEntry *le7 = legend->AddEntry(gr7,"Compl","l");
  le3->SetTextColor(1);

  legend -> Draw();
}

inline void PlotSbmlModules(const char* filename) {
  // setup plot
  TCanvas c;
  c.SetGrid();

  TMultiGraph* mg = new TMultiGraph();
  mg->SetTitle("Elementare 7;Timestep;Concentration");

  Simulation::GetActive()->GetResourceManager()->ApplyOnAllElements(
      [&](SimObject* so) {
        auto* cell = static_cast<MyCell*>(so);
        const auto& bms = cell->GetAllBiologyModules();
        if (bms.size() == 1) {
          AddToPlot(mg, &static_cast<SbmlModule*>(bms[0])->GetResult());
        }
      });

  // finalize plot
  // TCanvas::Update() draws the frame, after which one can change it
  c.Update();
  c.GetFrame()->SetBorderSize(12);
  gPad->Modified();
  gPad->Update();
  c.Modified();
  c.cd(0);

  // c.BuildLegend(); // TODO position of legend
  c.SaveAs(filename);
}

inline int Simulate(int argc, const char** argv) {
  auto opts = CommandLineOptions(argc, argv);
  opts.AddOption<uint64_t>("n, num-cells", "10", "The total number of cells");
  uint64_t num_cells = opts.Get<uint64_t>("num-cells");

  // roadrunner options
  rr::SimulateOptions opt;
  opt.start = 0;
  opt.duration = 140;
  opt.steps = 1000;

  auto set_param = [&](Param* param) {
    param->simulation_time_step_ = opt.duration / opt.steps;
  };

  Simulation simulation(&opts, set_param);

  std::string sbml_file = "../src/sbml_model.xml";
  if (!FileExists(sbml_file)) {
    sbml_file = "src/sbml_model.xml";
    if (!FileExists(sbml_file)) {
      Log::Error("Could not find sbml_model.xml file.");
    }
  }

  // Define initial model
  auto construct = [&](const Double3& position) {
    auto* cell = new MyCell();
    cell->SetPosition(position);
    cell->SetDiameter(10);
    cell->AddBiologyModule(new SbmlModule(sbml_file, opt));
    return cell;
  };
  ModelInitializer::CreateCellsRandom(0, 200, num_cells, construct);

  // Run simulation
  auto start = Timing::Timestamp();
  simulation.GetScheduler()->Simulate(opt.steps);
  auto stop = Timing::Timestamp();
  std::cout << "RUNTIME " << (stop - start) << std::endl;

  PlotSbmlModules("sbml-modules.svg");

  std::cout << "Simulation completed successfully!" << std::endl;
  return 0;
}

}  // namespace bdm

#endif  // SBML_INTEGRATION_H_

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"", payloadCode, "@",
"bdm::CellDivisionEvent", payloadCode, "@",
"bdm::CommandLineOptions", payloadCode, "@",
"bdm::DefaultForce", payloadCode, "@",
"bdm::Event", payloadCode, "@",
"bdm::FixedSizeVector<const bdm::Grid::Box*,27>", payloadCode, "@",
"bdm::FixedSizeVector<unsigned long,14>", payloadCode, "@",
"bdm::FixedSizeVector<unsigned long,27>", payloadCode, "@",
"bdm::Grid", payloadCode, "@",
"bdm::Grid::Adjacency", payloadCode, "@",
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
"bdm::RootAdaptor", payloadCode, "@",
"bdm::SbmlModule", payloadCode, "@",
"bdm::Scheduler", payloadCode, "@",
"bdm::SimObjectVector<bdm::SoHandle>", payloadCode, "@",
"bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement>", payloadCode, "@",
"bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite>", payloadCode, "@",
"bdm::SoUidGenerator", payloadCode, "@",
"bdm::TFileRaii", payloadCode, "@",
"bdm::ThreadInfo", payloadCode, "@",
"bdm::Timing", payloadCode, "@",
"bdm::TimingAggregator", payloadCode, "@",
"bdm::UniqueEventIdFactory", payloadCode, "@",
"bdm::Version", payloadCode, "@",
"bdm::detail::ExtractUidPtr", payloadCode, "@",
"bdm::experimental::neuroscience::NeuriteBifurcationEvent", payloadCode, "@",
"bdm::experimental::neuroscience::NeuriteBranchingEvent", payloadCode, "@",
"bdm::experimental::neuroscience::NeuronOrNeurite", payloadCode, "@",
"bdm::experimental::neuroscience::NewNeuriteExtensionEvent", payloadCode, "@",
"bdm::experimental::neuroscience::SideNeuriteExtensionEvent", payloadCode, "@",
"bdm::experimental::neuroscience::SplitNeuriteElementEvent", payloadCode, "@",
"bdm::is_so_ptr<bdm::MathArray<double,3> >", payloadCode, "@",
"bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> >", payloadCode, "@",
"bdm::is_so_ptr<bdm::SoPointer<bdm::experimental::neuroscience::NeuronOrNeurite> >", payloadCode, "@",
"bdm::is_so_ptr<bool>", payloadCode, "@",
"bdm::is_so_ptr<double>", payloadCode, "@",
"bdm::is_so_ptr<int>", payloadCode, "@",
"bdm::is_so_ptr<unordered_map<unsigned long,bdm::MathArray<double,3> > >", payloadCode, "@",
"bdm::is_so_ptr<unsigned int>", payloadCode, "@",
"bdm::is_so_ptr<unsigned long>", payloadCode, "@",
"bdm::is_so_ptr<vector<bdm::BaseBiologyModule*> >", payloadCode, "@",
"bdm::is_so_ptr<vector<bdm::SoPointer<bdm::experimental::neuroscience::NeuriteElement> > >", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("sbml_integration_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_sbml_integration_dict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_sbml_integration_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_sbml_integration_dict() {
  TriggerDictionaryInitialization_sbml_integration_dict_Impl();
}
