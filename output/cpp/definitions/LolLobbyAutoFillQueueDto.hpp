#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyAutoFillQueueDto_t {
    bool_t autoFillEligible;
    int32_t_t queueId;
    bool_t autoFillProtectedForStreaking;
    bool_t autoFillProtectedForPromos;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyAutoFillQueueDto_t& v) {
    j["autoFillEligible"] = v.autoFillEligible;
    j["queueId"] = v.queueId;
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking;
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyAutoFillQueueDto_t& v) {
    v.autoFillEligible = j.at("autoFillEligible").get<bool_t>();
    v.queueId = j.at("queueId").get<int32_t_t>();
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool_t>();
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool_t>();
  }
  inline std::string to_string(const LolLobbyAutoFillQueueDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
