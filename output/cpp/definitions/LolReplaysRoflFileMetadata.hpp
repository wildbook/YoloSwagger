#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolReplaysRoflFileMetadata_t {
    uint32_t gameLength;
    std::string gameVersion;
    uint32_t lastGameChunkId;
    uint32_t lastKeyFrameId;
  };

  inline void to_json(nlohmann::json& j, const LolReplaysRoflFileMetadata_t& v) {
    j["gameLength"] = v.gameLength;
    j["gameVersion"] = v.gameVersion;
    j["lastGameChunkId"] = v.lastGameChunkId;
    j["lastKeyFrameId"] = v.lastKeyFrameId;
  }

  inline void from_json(const nlohmann::json& j, LolReplaysRoflFileMetadata_t& v) {
    v.gameLength = j.at("gameLength").get<uint32_t>();
    v.gameVersion = j.at("gameVersion").get<std::string>();
    v.lastGameChunkId = j.at("lastGameChunkId").get<uint32_t>();
    v.lastKeyFrameId = j.at("lastKeyFrameId").get<uint32_t>();
  }
}
