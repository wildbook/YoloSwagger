#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolReplaysReplayCreateMetadata_t {
    uint64_t gameEnd;
    std::string gameType;
    std::string gameVersion;
    int32_t queueId;
  };

  inline void to_json(nlohmann::json& j, const LolReplaysReplayCreateMetadata_t& v) {
    j["gameEnd"] = v.gameEnd;
    j["gameType"] = v.gameType;
    j["gameVersion"] = v.gameVersion;
    j["queueId"] = v.queueId;
  }

  inline void from_json(const nlohmann::json& j, LolReplaysReplayCreateMetadata_t& v) {
    v.gameEnd = j.at("gameEnd").get<uint64_t>();
    v.gameType = j.at("gameType").get<std::string>();
    v.gameVersion = j.at("gameVersion").get<std::string>();
    v.queueId = j.at("queueId").get<int32_t>();
  }
}
