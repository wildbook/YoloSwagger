#ifndef SWAGGER_TYPES_LolSummonerAutoFillQueueDto_HPP
#define SWAGGER_TYPES_LolSummonerAutoFillQueueDto_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolSummonerAutoFillQueueDto {
    // 
    bool autoFillEligible;
    // 
    int32_t queueId;
    // 
    bool autoFillProtectedForStreaking;
    // 
    bool autoFillProtectedForPromos;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerAutoFillQueueDto& v) {
    j["autoFillEligible"] = v.autoFillEligible;
    j["queueId"] = v.queueId;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerAutoFillQueueDto& v) {
    v.autoFillEligible = j.at("autoFillEligible").get<bool>;
    v.queueId = j.at("queueId").get<int32_t>;
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>;
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolSummonerAutoFillQueueDto_HPP
