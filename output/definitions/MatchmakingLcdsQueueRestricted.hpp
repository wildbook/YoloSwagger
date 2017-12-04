#ifndef SWAGGER_TYPES_MatchmakingLcdsQueueRestricted_HPP
#define SWAGGER_TYPES_MatchmakingLcdsQueueRestricted_HPP
#include <json.hpp>
#include "MatchmakingLcdsSummoner.hpp"
namespace test {
  // 
  struct MatchmakingLcdsQueueRestricted {
'    // 
    std::string message;
    // 
    int32_t queueId;
    // 
    std::string reasonFailed;
    // 
    MatchmakingLcdsSummoner summoner;
  };

  void to_json(nlohmann::json& j, const MatchmakingLcdsQueueRestricted& v) {
    j["message"] = v.message;
    j["queueId"] = v.queueId;
    j["reasonFailed"] = v.reasonFailed;
    j["summoner"] = v.summoner;
  }

  void from_json(const nlohmann::json& j, MatchmakingLcdsQueueRestricted& v) {
    v.message = j.at("message").get<std::string>;
    v.queueId = j.at("queueId").get<int32_t>;
    v.reasonFailed = j.at("reasonFailed").get<std::string>;
    v.summoner = j.at("summoner").get<MatchmakingLcdsSummoner>;
  }

}
#endif // SWAGGER_TYPES_MatchmakingLcdsQueueRestricted_HPP
