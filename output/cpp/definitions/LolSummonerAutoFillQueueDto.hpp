#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSummonerAutoFillQueueDto_t {
    int32_t queueId;
    bool autoFillProtectedForPromos;
    bool autoFillEligible;
    bool autoFillProtectedForStreaking;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerAutoFillQueueDto_t& v) {
    j["queueId"] = v.queueId;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["autoFillEligible"] = v.autoFillEligible;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerAutoFillQueueDto_t& v) {
    v.queueId = j.at("queueId").get<int32_t>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
  }
  inline std::string to_string(const LolSummonerAutoFillQueueDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
