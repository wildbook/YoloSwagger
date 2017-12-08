#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class PatcherInjectedPatcherError_t {
    UnspecifiedError_E = 0,
    FailedToResolveHostName_E = 2,
    FailedFailedToWriteFile_E = 3,
    FailedToFindFile_E = 1,
  };

  inline void to_json(nlohmann::json& j, const PatcherInjectedPatcherError_t& v) {
    switch(v) {
      case PatcherInjectedPatcherError_t::UnspecifiedError_E:
        j = "UnspecifiedError";
      break;
      case PatcherInjectedPatcherError_t::FailedToResolveHostName_E:
        j = "FailedToResolveHostName";
      break;
      case PatcherInjectedPatcherError_t::FailedFailedToWriteFile_E:
        j = "FailedFailedToWriteFile";
      break;
      case PatcherInjectedPatcherError_t::FailedToFindFile_E:
        j = "FailedToFindFile";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, PatcherInjectedPatcherError_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "UnspecifiedError"){
      v = PatcherInjectedPatcherError_t::UnspecifiedError_E;
      return;
    }
    if(s == "FailedToResolveHostName"){
      v = PatcherInjectedPatcherError_t::FailedToResolveHostName_E;
      return;
    }
    if(s == "FailedFailedToWriteFile"){
      v = PatcherInjectedPatcherError_t::FailedFailedToWriteFile_E;
      return;
    }
    if(s == "FailedToFindFile"){
      v = PatcherInjectedPatcherError_t::FailedToFindFile_E;
      return;
    }
  }
  inline std::string to_string(const PatcherInjectedPatcherError_t& v) {
    switch(v) {
      case PatcherInjectedPatcherError_t::UnspecifiedError_E:
        return "UnspecifiedError";
      case PatcherInjectedPatcherError_t::FailedToResolveHostName_E:
        return "FailedToResolveHostName";
      case PatcherInjectedPatcherError_t::FailedFailedToWriteFile_E:
        return "FailedFailedToWriteFile";
      case PatcherInjectedPatcherError_t::FailedToFindFile_E:
        return "FailedToFindFile";
    }
  }

}
