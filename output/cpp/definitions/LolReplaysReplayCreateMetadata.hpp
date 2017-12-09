#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolReplaysReplayCreateMetadata_t {
    std::string gameVersion;
    std::string gameType;
    int32_t queueId;
    uint64_t gameEnd;
  };

  inline void to_json(nlohmann::json& j, const LolReplaysReplayCreateMetadata_t& v) {
    j["gameVersion"] = v.gameVersion;
    j["gameType"] = v.gameType;
    j["queueId"] = v.queueId;
    j["gameEnd"] = v.gameEnd;
  }

  inline void from_json(const nlohmann::json& j, LolReplaysReplayCreateMetadata_t& v) {
    v.gameVersion = j.at("gameVersion").get<std::string>();
    v.gameType = j.at("gameType").get<std::string>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.gameEnd = j.at("gameEnd").get<uint64_t>();
  }
  inline std::string to_string(const LolReplaysReplayCreateMetadata_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
