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
    uint64_t gameId;
    // 
    LolReplaysMetadataState state;
  };

  inline void to_json(nlohmann::json& j, const LolReplaysReplayMetadata& v) {
    j["downloadProgress"] = v.downloadProgress;
    j["gameId"] = v.gameId;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolReplaysReplayMetadata& v) {
    v.downloadProgress = j.at("downloadProgress").get<uint32_t>;
    v.gameId = j.at("gameId").get<uint64_t>;
    v.state = j.at("state").get<LolReplaysMetadataState>;
  }

}
#endif // SWAGGER_TYPES_LolReplaysReplayMetadata_HPP
