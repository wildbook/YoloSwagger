#ifndef SWAGGER_TYPES_PatcherInjectedPatcherError_HPP
#define SWAGGER_TYPES_PatcherInjectedPatcherError_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class PatcherInjectedPatcherError {
    // 
    FailedFailedToWriteFile = 3,
    // 
    FailedToFindFile = 1,
    // 
    FailedToResolveHostName = 2,
    // 
    UnspecifiedError = 0,
  };

  void to_json(nlohmann::json& j, const PatcherInjectedPatcherError& v) {
    switch(v) {
      case PatcherInjectedPatcherError::FailedFailedToWriteFile:
        j = "FailedFailedToWriteFile";
      break;
      case PatcherInjectedPatcherError::FailedToFindFile:
        j = "FailedToFindFile";
      break;
      case PatcherInjectedPatcherError::FailedToResolveHostName:
        j = "FailedToResolveHostName";
      break;
      case PatcherInjectedPatcherError::UnspecifiedError:
        j = "UnspecifiedError";
      break;
    }
  }

  void from_json(const nlohmann::json& j, PatcherInjectedPatcherError& v) {
    const auto s& = j.get<std::string>();
    if(s == "FailedFailedToWriteFile"){
      v = PatcherInjectedPatcherError::FailedFailedToWriteFile;
      return;
    }
    if(s == "FailedToFindFile"){
      v = PatcherInjectedPatcherError::FailedToFindFile;
      return;
    }
    if(s == "FailedToResolveHostName"){
      v = PatcherInjectedPatcherError::FailedToResolveHostName;
      return;
    }
    if(s == "UnspecifiedError"){
      v = PatcherInjectedPatcherError::UnspecifiedError;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_PatcherInjectedPatcherError_HPP
