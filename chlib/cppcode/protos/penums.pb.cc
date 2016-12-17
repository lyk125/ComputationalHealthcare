// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: penums.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "penums.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace comphealth {

namespace {

const ::google::protobuf::EnumDescriptor* ETYPE_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* SEX_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* DEATH_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* PAYER_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* RACE_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* SOURCE_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* DISPOSITION_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* DNR_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* CTYPE_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* PZIP_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_penums_2eproto() {
  protobuf_AddDesc_penums_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "penums.proto");
  GOOGLE_CHECK(file != NULL);
  ETYPE_descriptor_ = file->enum_type(0);
  SEX_descriptor_ = file->enum_type(1);
  DEATH_descriptor_ = file->enum_type(2);
  PAYER_descriptor_ = file->enum_type(3);
  RACE_descriptor_ = file->enum_type(4);
  SOURCE_descriptor_ = file->enum_type(5);
  DISPOSITION_descriptor_ = file->enum_type(6);
  DNR_descriptor_ = file->enum_type(7);
  CTYPE_descriptor_ = file->enum_type(8);
  PZIP_descriptor_ = file->enum_type(9);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_penums_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_penums_2eproto() {
}

void protobuf_AddDesc_penums_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014penums.proto\022\ncomphealth*\?\n\005ETYPE\022\006\n\002I"
    "P\020\000\022\006\n\002ED\020\001\022\006\n\002AS\020\002\022\007\n\003OUT\020\003\022\005\n\001H\020\004\022\005\n\001O"
    "\020\005\022\007\n\003ALL\020\006*,\n\003SEX\022\010\n\004MALE\020\n\022\n\n\006FEMALE\020\013"
    "\022\017\n\013SEX_UNKNOWN\020\014*/\n\005DEATH\022\t\n\005ALIVE\020\036\022\010\n"
    "\004DEAD\020\037\022\021\n\rDEATH_UNKNOWN\020 *^\n\005PAYER\022\014\n\010M"
    "EDICARE\020)\022\014\n\010MEDICAID\020*\022\013\n\007PRIVATE\020+\022\010\n\004"
    "SELF\020,\022\t\n\005OTHER\020-\022\r\n\tP_UNKNOWN\020.\022\010\n\004FREE"
    "\020/*]\n\004RACE\022\t\n\005WHITE\0203\022\t\n\005BLACK\0204\022\014\n\010HISP"
    "ANIC\0205\022\t\n\005ASIAN\0206\022\n\n\006NATIVE\0207\022\013\n\007R_OTHER"
    "\0208\022\r\n\tR_UNKNOWN\0209*\263\001\n\006SOURCE\022\r\n\tS_ROUTIN"
    "E\020=\022\016\n\nS_HOSPITAL\020>\022\t\n\005S_SNF\020\?\022\n\n\006S_HOME"
    "\020@\022\013\n\007S_OTHER\020A\022\010\n\004S_ED\020B\022\r\n\tS_UNKNOWN\020C"
    "\022\013\n\007S_COURT\020D\022\022\n\rS_TEXAS_PSYCH\020\330\004\022\025\n\020S_T"
    "EXAS_CRITICAL\020\331\004\022\025\n\020S_TEXAS_INTERNAL\020\332\004*"
    "\244\001\n\013DISPOSITION\022\r\n\tD_ROUTINE\020G\022\016\n\nD_HOSP"
    "ITAL\020H\022\t\n\005D_SNF\020I\022\n\n\005D_ICF\020\275\005\022\n\n\006D_HOME\020"
    "J\022\013\n\007D_DEATH\020K\022\013\n\007D_OTHER\020L\022\r\n\tD_UNKNOWN"
    "\020M\022\t\n\005D_AMA\020N\022\022\n\016D_UNKNOWNALIVE\020O\022\013\n\007D_C"
    "OURT\020F*D\n\003DNR\022\n\n\006DNR_NO\020P\022\013\n\007DNR_YES\020Q\022\017"
    "\n\013DNR_UNKNOWN\020R\022\023\n\017DNR_UNAVAILABLE\020S*\031\n\005"
    "CTYPE\022\007\n\003ICD\020Z\022\007\n\003CPT\020[*K\n\004PZIP\022\013\n\007Z_FIR"
    "ST\020e\022\014\n\010Z_SECOND\020f\022\013\n\007Z_THIRD\020g\022\014\n\010Z_FOU"
    "RTH\020h\022\r\n\tZ_UNKNOWN\020i", 900);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "penums.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_penums_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_penums_2eproto {
  StaticDescriptorInitializer_penums_2eproto() {
    protobuf_AddDesc_penums_2eproto();
  }
} static_descriptor_initializer_penums_2eproto_;
const ::google::protobuf::EnumDescriptor* ETYPE_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ETYPE_descriptor_;
}
bool ETYPE_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* SEX_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SEX_descriptor_;
}
bool SEX_IsValid(int value) {
  switch(value) {
    case 10:
    case 11:
    case 12:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* DEATH_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DEATH_descriptor_;
}
bool DEATH_IsValid(int value) {
  switch(value) {
    case 30:
    case 31:
    case 32:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* PAYER_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PAYER_descriptor_;
}
bool PAYER_IsValid(int value) {
  switch(value) {
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* RACE_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RACE_descriptor_;
}
bool RACE_IsValid(int value) {
  switch(value) {
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
    case 57:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* SOURCE_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SOURCE_descriptor_;
}
bool SOURCE_IsValid(int value) {
  switch(value) {
    case 61:
    case 62:
    case 63:
    case 64:
    case 65:
    case 66:
    case 67:
    case 68:
    case 600:
    case 601:
    case 602:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* DISPOSITION_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DISPOSITION_descriptor_;
}
bool DISPOSITION_IsValid(int value) {
  switch(value) {
    case 70:
    case 71:
    case 72:
    case 73:
    case 74:
    case 75:
    case 76:
    case 77:
    case 78:
    case 79:
    case 701:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* DNR_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DNR_descriptor_;
}
bool DNR_IsValid(int value) {
  switch(value) {
    case 80:
    case 81:
    case 82:
    case 83:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* CTYPE_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CTYPE_descriptor_;
}
bool CTYPE_IsValid(int value) {
  switch(value) {
    case 90:
    case 91:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* PZIP_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PZIP_descriptor_;
}
bool PZIP_IsValid(int value) {
  switch(value) {
    case 101:
    case 102:
    case 103:
    case 104:
    case 105:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace comphealth

// @@protoc_insertion_point(global_scope)