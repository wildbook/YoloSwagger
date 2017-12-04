#ifndef SWAGGER_TYPES_LolReplaysReplayMetadata_HPP
#define SWAGGER_TYPES_LolReplaysReplayMetadata_HPP
#include <json.hpp>
#include "LolReplaysMetadataState.hpp"
namespace leagueapi {
  // 
  struct LolReplaysReplayMetadata {
    // 
    uint32_t downloadProgress;
    // 
    LolReplaysMetadataState state;
    // 
    uint64_t gameId;
  };

  inline void to_json(nlohmann::json& j, const LolReplaysReplayMetadata& v) {
    j["downloadProgress"] = v.downloadProgress;
    j["state"] = v.state;
    j["gameId"] = v.gameId;
  }

  inline void from_json(const nlohmann::json& j, LolReplaysReplayMetadata& v) {
    v.downloadProgress = j.at("downloadProgress").get<uint32_t>;
    v.state = j.at("state").get<LolReplaysMetadataState>;
    v.gameId = j.at("gameId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolReplaysReplayMetadata_HPP
