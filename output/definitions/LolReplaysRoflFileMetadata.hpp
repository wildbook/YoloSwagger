#ifndef SWAGGER_TYPES_LolReplaysRoflFileMetadata_HPP
#define SWAGGER_TYPES_LolReplaysRoflFileMetadata_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolReplaysRoflFileMetadata {
    // 
    uint32_t gameLength;
    // 
    std::string gameVersion;
    // 
    uint32_t lastGameChunkId;
    // 
    uint32_t lastKeyFrameId;
  };

  void to_json(nlohmann::json& j, const LolReplaysRoflFileMetadata& v) {
    j["gameLength"] = v.gameLength;
    j["gameVersion"] = v.gameVersion;
    j["lastGameChunkId"] = v.lastGameChunkId;
    j["lastKeyFrameId"] = v.lastKeyFrameId;
  }

  void from_json(const nlohmann::json& j, LolReplaysRoflFileMetadata& v) {
    v.gameLength = j.at("gameLength").get<uint32_t>;
    v.gameVersion = j.at("gameVersion").get<std::string>;
    v.lastGameChunkId = j.at("lastGameChunkId").get<uint32_t>;
    v.lastKeyFrameId = j.at("lastKeyFrameId").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_LolReplaysRoflFileMetadata_HPP
