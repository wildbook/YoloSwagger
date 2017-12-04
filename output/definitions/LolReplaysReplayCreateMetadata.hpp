#ifndef SWAGGER_TYPES_LolReplaysReplayCreateMetadata_HPP
#define SWAGGER_TYPES_LolReplaysReplayCreateMetadata_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolReplaysReplayCreateMetadata {
'    // 
    uint64_t gameEnd;
    // 
    std::string gameType;
    // 
    std::string gameVersion;
    // 
    int32_t queueId;
  };

  void to_json(nlohmann::json& j, const LolReplaysReplayCreateMetadata& v) {
    j["gameEnd"] = v.gameEnd;
    j["gameType"] = v.gameType;
    j["gameVersion"] = v.gameVersion;
    j["queueId"] = v.queueId;
  }

  void from_json(const nlohmann::json& j, LolReplaysReplayCreateMetadata& v) {
    v.gameEnd = j.at("gameEnd").get<uint64_t>;
    v.gameType = j.at("gameType").get<std::string>;
    v.gameVersion = j.at("gameVersion").get<std::string>;
    v.queueId = j.at("queueId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolReplaysReplayCreateMetadata_HPP
