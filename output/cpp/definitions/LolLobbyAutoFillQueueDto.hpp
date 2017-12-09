#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyAutoFillQueueDto_t {
    bool autoFillProtectedForStreaking;
    int32_t queueId;
    bool autoFillEligible;
    bool autoFillProtectedForPromos;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyAutoFillQueueDto_t& v) {
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["queueId"] = v.queueId;
    j["autoFillEligible"] = v.autoFillEligible;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyAutoFillQueueDto_t& v) {
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>();
    v.queueId = j.at("queueId").get<int32_t>();
    v.autoFillEligible = j.at("autoFillEligible").get<bool>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>();
  }
  inline std::string to_string(const LolLobbyAutoFillQueueDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
