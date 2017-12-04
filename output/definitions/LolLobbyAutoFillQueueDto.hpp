#ifndef SWAGGER_TYPES_LolLobbyAutoFillQueueDto_HPP
#define SWAGGER_TYPES_LolLobbyAutoFillQueueDto_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyAutoFillQueueDto {
    // 
    bool autoFillEligible;
    // 
    bool autoFillProtectedForPromos;
    // 
    bool autoFillProtectedForStreaking;
    // 
    int32_t queueId;
  };

  void to_json(nlohmann::json& j, const LolLobbyAutoFillQueueDto& v) {
    j["autoFillEligible"] = v.autoFillEligible;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["queueId"] = v.queueId;
  }

  void from_json(const nlohmann::json& j, LolLobbyAutoFillQueueDto& v) {
    v.autoFillEligible = j.at("autoFillEligible").get<bool>;
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>;
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>;
    v.queueId = j.at("queueId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyAutoFillQueueDto_HPP
