#ifndef SWAGGER_TYPES_LolReplaysMetadataState_HPP
#define SWAGGER_TYPES_LolReplaysMetadataState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolReplaysMetadataState {
    // 
    downloading = 4,
    // 
    lost = 8,
    // 
    incompatible = 5,
    // 
    checking = 0,
    // 
    watch = 2,
    // 
    missingOrExpired = 6,
    // 
    unsupported = 9,
    // 
    error = 10,
    // 
    download = 3,
    // 
    found = 1,
    // 
    retryDownload = 7,
  };

  inline void to_json(nlohmann::json& j, const LolReplaysMetadataState& v) {
    switch(v) {
      case LolReplaysMetadataState::downloading:
        j = "downloading";
      break;
      case LolReplaysMetadataState::lost:
        j = "lost";
      break;
      case LolReplaysMetadataState::incompatible:
        j = "incompatible";
      break;
      case LolReplaysMetadataState::checking:
        j = "checking";
      break;
      case LolReplaysMetadataState::watch:
        j = "watch";
      break;
      case LolReplaysMetadataState::missingOrExpired:
        j = "missingOrExpired";
      break;
      case LolReplaysMetadataState::unsupported:
        j = "unsupported";
      break;
      case LolReplaysMetadataState::error:
        j = "error";
      break;
      case LolReplaysMetadataState::download:
        j = "download";
      break;
      case LolReplaysMetadataState::found:
        j = "found";
      break;
      case LolReplaysMetadataState::retryDownload:
        j = "retryDownload";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolReplaysMetadataState& v) {
    const auto& s = j.get<std::string>();
    if(s == "downloading"){
      v = LolReplaysMetadataState::downloading;
      return;
    }
    if(s == "lost"){
      v = LolReplaysMetadataState::lost;
      return;
    }
    if(s == "incompatible"){
      v = LolReplaysMetadataState::incompatible;
      return;
    }
    if(s == "checking"){
      v = LolReplaysMetadataState::checking;
      return;
    }
    if(s == "watch"){
      v = LolReplaysMetadataState::watch;
      return;
    }
    if(s == "missingOrExpired"){
      v = LolReplaysMetadataState::missingOrExpired;
      return;
    }
    if(s == "unsupported"){
      v = LolReplaysMetadataState::unsupported;
      return;
    }
    if(s == "error"){
      v = LolReplaysMetadataState::error;
      return;
    }
    if(s == "download"){
      v = LolReplaysMetadataState::download;
      return;
    }
    if(s == "found"){
      v = LolReplaysMetadataState::found;
      return;
    }
    if(s == "retryDownload"){
      v = LolReplaysMetadataState::retryDownload;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolReplaysMetadataState_HPP
