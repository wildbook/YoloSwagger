#ifndef SWAGGER_TYPES_LolReplaysReplayCreateMetadata_HPP
#define SWAGGER_TYPES_LolReplaysReplayCreateMetadata_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolReplaysReplayCreateMetadata {
    // 
    std::string gameVersion;
    // 
    uint64_t gameEnd;
    // 
    std::string gameType;
    // 
    int32_t queueId;
  };

  inline void to_json(nlohmann::json& j, const LolReplaysReplayCreateMetadata& v) {
    j["gameVersion"] = v.gameVersion;
    j["gameEnd"] = v.gameEnd;
    j["gameType"] = v.gameType;
    j["queueId"] = v.queueId;
  }

  inline void from_json(const nlohmann::json& j, LolReplaysReplayCreateMetadata& v) {
    v.gameVersion = j.at("gameVersion").get<std::string>;
    v.gameEnd = j.at("gameEnd").get<uint64_t>;
    v.gameType = j.at("gameType").get<std::string>;
    v.queueId = j.at("queueId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolReplaysReplayCreateMetadata_HPP
