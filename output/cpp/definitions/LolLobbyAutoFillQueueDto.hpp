#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyAutoFillQueueDto_t {
    bool autoFillEligible;
    bool autoFillProtectedForPromos;
    bool autoFillProtectedForStreaking;
    int32_t queueId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyAutoFillQueueDto_t& v) {
    j["autoFillEligible"] = v.autoFillEligible;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["queueId"] = v.queueId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyAutoFillQueueDto_t& v) {
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
    v.queueId = j.at("queueId").get<int32_t>();
  }
}
